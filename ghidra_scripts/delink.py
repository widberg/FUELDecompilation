from ghidra.program.model.address import AddressSet
from ghidra.app.plugin.core.analysis import AutoAnalysisManager
from ghidra.app.util.exporter import CoffRelocatableObjectExporter
from java.io import File
import json


def main():
    configs = []
    output = File(askString("Output file", "Save"))
    try:
        while True:
            config = askFile("Config file", "Open")
            configs.append(config.getAbsolutePath())
    except:
        pass

    memory = currentProgram.getMemory()
    function_manager = currentProgram.getFunctionManager()
    address_factory = currentProgram.getAddressFactory()
    symbol_table = currentProgram.getSymbolTable()
    listing = currentProgram.getListing()
    selection = AddressSet()

    for config in configs:
        with open(config, "r") as f:
            config_json = json.load(f)

            for action in config_json:
                if action["type"] == "memory":
                    asv = memory
                elif action["type"] == "range":
                    asv = AddressSet(
                        address_factory.getAddress(action["first"]),
                        address_factory.getAddress(action["last"]),
                    )
                elif action["type"] == "symbol":
                    asv = AddressSet()
                    symbols = symbol_table.getSymbols(action["name"])
                    for symbol in symbols:
                        function = function_manager.getFunctionAt(symbol.getAddress())
                        if function is not None:
                            body = function.getBody()
                            min = body.getMinAddress()
                            max = body.getMaxAddress()
                            next_functions = function_manager.getFunctions(
                                max.add(1), True
                            )
                            if next_functions.hasNext():
                                max = (
                                    next_functions.next()
                                    .getBody()
                                    .getMinAddress()
                                    .subtract(1)
                                )
                            else:
                                max = memory.getBlock(max).getEnd()
                        else:
                            code_unit = listing.getCodeUnitAt(symbol.getAddress())
                            min = code_unit.getMinAddress()
                            max = code_unit.getMaxAddress()
                        asv.add(AddressSet(min, max))
                else:
                    print('Invalid type "' + action["type"] + '"')
                    return 1

                if action["action"] == "include":
                    selection.add(asv)
                elif action["action"] == "exclude":
                    selection.delete(asv)
                else:
                    print('Invalid action "' + action["action"] + '"')
                    return 1

    aam = AutoAnalysisManager.getAnalysisManager(currentProgram)
    analyzer = aam.getAnalyzer("Relocation table synthesizer")
    aam.scheduleOneTimeAnalysis(analyzer, selection)
    aam.waitForAnalysis(None, getMonitor())

    exporter = CoffRelocatableObjectExporter()
    options = exporter.getOptions(lambda: currentProgram)
    exporter.setOptions(options)
    exporter.export(output, currentProgram, selection, getMonitor())
    return 0


if __name__ == "__main__":
    exit(main())
