import psutil
import sys
import os
import frida

usercall_agent_path = os.path.join(
    os.path.dirname(os.path.realpath(sys.argv[0])), "usercall_agent.js"
)


def main():
    source = open(usercall_agent_path, "r").read()
    pid = frida.spawn(sys.argv[1:])
    session = frida.attach(pid)
    script = session.create_script(source=source, name="usercall_agent.js", runtime="qjs")

    def log(level: str, text: str) -> None:
        print(f"[{level}] {text}")

    script.set_log_handler(log)

    def on_message(message, data):
        if message["type"] == "error":
            log("error", message["description"])
            frida.kill(pid)

    script.on("message", on_message)
    script.load()
    frida.resume(pid)
    try:
        process = psutil.Process(pid)
        exit_code = process.wait()
        # print(f"Process exited with code {exit_code}.")
        exit(exit_code)
    except psutil.NoSuchProcess:
        print("Process not found. Likely killed.")
        exit(1)


if __name__ == "__main__":
    main()
