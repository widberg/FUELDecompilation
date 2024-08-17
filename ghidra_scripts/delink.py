from ghidra.program.model.address import AddressSet
from ghidra.app.plugin.core.analysis import AutoAnalysisManager
from ghidra.app.util.exporter import CoffRelocatableObjectExporter
from ghidra.app.util import DomainObjectService
from java.io import File
import json


class MyDomainObjectService(DomainObjectService):
    def __init__(self, do):
        self.do = do

    def getDomainObject(self):
        return self.do


def main():
    if isRunningHeadless():
        if len(getScriptArgs()) != 2:
            print("Usage: delink.py <config> <output>")
            return
        config = open(getScriptArgs()[0], "r")
        output = File(getScriptArgs()[1])
    else:
        config = open(askFile("Select config file", "Select").getAbsolutePath(), "r")
        output = askFile("Select output file", "Select")

    config_json = json.load(config)

    memory = currentProgram.getMemory()
    function_manager = currentProgram.getFunctionManager()
    address_factory = currentProgram.getAddressFactory()
    selection = AddressSet()

    for action in config_json:
        if action["type"] == "memory":
            asv = memory
        elif action["type"] == "range_inclusive":
            asv = AddressSet(
                address_factory.getAddress(action["first"]),
                address_factory.getAddress(action["last"]),
            )
        elif action["type"] == "range_exclusive":
            asv = AddressSet(
                address_factory.getAddress(action["first"]),
                address_factory.getAddress(action["last"]).subtract(1),
            )
        elif action["type"] == "function":
            function = function_manager.getFunctionAt(
                address_factory.getAddress(action["address"])
            )
            asv = function.getBody()
        elif action["type"] == "function_extended":
            function = function_manager.getFunctionAt(
                address_factory.getAddress(action["address"])
            )
            body = function.getBody()
            min = body.getMinAddress()
            max = body.getMaxAddress()
            next_functions = function_manager.getFunctions(max.add(1), True)
            if next_functions.hasNext():
                max = next_functions.next().getBody().getMinAddress().subtract(1)
            else:
                max = memory.getBlock(max).getEnd()
            asv = AddressSet(min, max)
        else:
            print('Invalid type "' + action["type"] + '"')
            return

        if action["action"] == "include":
            selection.add(asv)
        elif action["action"] == "exclude":
            selection.delete(asv)
        else:
            print('Invalid action "' + action["action"] + '"')
            return

    aam = AutoAnalysisManager.getAnalysisManager(currentProgram)
    analyzer = aam.getAnalyzer("Relocation table synthesizer")
    aam.scheduleOneTimeAnalysis(analyzer, selection)
    aam.waitForAnalysis(None, getMonitor())

    exporter = CoffRelocatableObjectExporter()
    options = exporter.getOptions(MyDomainObjectService(currentProgram))
    exporter.setOptions(options)
    exporter.export(output, currentProgram, selection, getMonitor())


if __name__ == "__main__":
    main()
