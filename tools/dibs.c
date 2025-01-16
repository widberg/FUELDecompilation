#include <Windows.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
    STARTUPINFO si;
    PROCESS_INFORMATION pi;
    DWORD exitCode;
    LPVOID startAddress;
    SIZE_T size;
    LPVOID allocatedMemory;
    char *commandLine;

    if (argc != 4)
    {
        fprintf(stderr, "Usage: %s <address> <size> <commandLine>\n", argv[0]);
        return 1;
    }

    startAddress = (LPVOID)strtoul(argv[1], NULL, 0);
    size = (SIZE_T)strtoul(argv[2], NULL, 0);
    commandLine = argv[3];

    ZeroMemory(&si, sizeof(si));
    si.cb = sizeof(si);
    si.dwFlags = STARTF_USESTDHANDLES;
    si.hStdInput = GetStdHandle(STD_INPUT_HANDLE);
    si.hStdOutput = GetStdHandle(STD_OUTPUT_HANDLE);
    si.hStdError = GetStdHandle(STD_ERROR_HANDLE);

    if (!CreateProcess(
            NULL,
            commandLine,
            NULL,
            NULL,
            TRUE,
            CREATE_SUSPENDED,
            NULL,
            NULL,
            &si,
            &pi))
    {
        fprintf(stderr, "Failed to create the process: %lu\n", GetLastError());
        return 1;
    }

    allocatedMemory = VirtualAllocEx(
        pi.hProcess,
        startAddress,
        size,
        MEM_RESERVE,
        PAGE_NOACCESS);

    if (allocatedMemory == NULL)
    {
        fprintf(stderr, "Failed to allocate memory in the target process: %lu\n", GetLastError());
        TerminateProcess(pi.hProcess, 1);
        CloseHandle(pi.hProcess);
        CloseHandle(pi.hThread);
        return 1;
    }

    if (ResumeThread(pi.hThread) == -1)
    {
        fprintf(stderr, "Failed to resume the process: %lu\n", GetLastError());
        TerminateProcess(pi.hProcess, 1);
        CloseHandle(pi.hProcess);
        CloseHandle(pi.hThread);
        return 1;
    }

    WaitForSingleObject(pi.hProcess, INFINITE);

    if (!GetExitCodeProcess(pi.hProcess, &exitCode))
    {
        fprintf(stderr, "Failed to get the exit code of the process: %lu\n", GetLastError());
        CloseHandle(pi.hProcess);
        CloseHandle(pi.hThread);
        return 1;
    }

    CloseHandle(pi.hProcess);
    CloseHandle(pi.hThread);

    return exitCode;
}
