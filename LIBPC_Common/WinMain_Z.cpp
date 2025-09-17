#define WIN32_LEAN_AND_MEAN
#include <Windows.h>
#include <shellapi.h>

#include <cstdio>
#include <mbstring.h>

#include "Main_Z.h"
#include "Types_Z.h"


#if USE_NON_MATCHING && __widberg__
EXTERN_C void *__cdecl _0x00739B80(void);
EXTERN_C char __cdecl _0x008443C0(void);
EXTERN_C int __thiscall _0x0081CDB0(HINSTANCE, int);
EXTERN_C int __stdcall _0x00843CA0(char) asm("__0x00843CA0");
EXTERN_C int __thiscall _0x008316B0(U8 *, int, int);
EXTERN_C int __cdecl _0x00843DF0(void);
EXTERN_C int __cdecl _0x0081E060(void);
EXTERN_C const char *__usercall _0x0073A450@<eax>(int@<eax>, int@<ecx>);
EXTERN_C int __usercall _0x006DC6A0@<eax>(int@<eax>, LPCCH, char *, ...);                     // TODO: Verify usercall vaargs.
EXTERN_C int __userpurge _0x0069A400@<eax>(const char *@<edi>, int, int) asm("__0x0069A400"); // FIXME: What happened here?
EXTERN_C bool __cdecl _0x00843D90(void);
char __stdcall _0x0081CBD0();
bool __cdecl SecuROMCheck(void);
unsigned int __cdecl RunningCheck(void);

EXTERN_C U8 _0x00A7D7B0;
EXTERN_C U8 _0x00A7D139[256];
EXTERN_C char _0x00A7D239;
EXTERN_C U8 _0x00A7D7AC;

EXTERN_C U32 _0x009FC590;
EXTERN_C U32 _0x009FC598;
EXTERN_C U32 _0x009FC5A0;
EXTERN_C U32 _0x00A7C080;

EXTERN_C WCHAR _0x00A65BC0[264];
EXTERN_C WCHAR _0x00A65DD0[264];

EXTERN_C HANDLE _0x00A659A8;

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd)
{
    DELINKFUNCTION(0x0081E340);
    DWORD v4;                      // eax
    char v6;                       // bl
    char v7;                       // eax
    char *v8;                      // [esp+0h] [ebp-150h]
    bool v9;                       // [esp+Eh] [ebp-142h]
    unsigned __int8 v10;           // [esp+Fh] [ebp-141h]
    struct _MEMORYSTATUSEX Buffer; // [esp+10h] [ebp-140h] BYREF
    CHAR Caption[256];             // [esp+50h] [ebp-100h] BYREF

#if USE_BUGFIXES
    if (!SetPriorityClass(GetCurrentProcess(), HIGH_PRIORITY_CLASS))
    {
        // We tried
    }
#endif // USE_BUGFIXES

    _0x00739B80();
    if ((unsigned __int8)SecuROMCheck())
    {
        v9 = _mbsstr((const unsigned __int8 *)lpCmdLine, (const unsigned __int8 *)"-mce") != 0;
        Buffer.dwLength = 64;
        GlobalMemoryStatusEx(&Buffer);
        if (Buffer.ullTotalPageFile > Buffer.ullTotalPhys)
        {
            _0x0081CDB0(hInstance, nShowCmd);
            SystemParametersInfoA(0x3Au, 8u, &_0x009FC590, 0);
            SystemParametersInfoA(0x34u, 8u, &_0x009FC598, 0);
            SystemParametersInfoA(0x32u, 0x18u, &_0x009FC5A0, 0);
            _0x00843CA0(0);
            v6 = 0;
            _0x008316B0(&_0x00A7D7B0, (int)_0x00A7D139, 1);
            if (RunningCheck())
            {
                v7 = _0x0081E060();
                v8 = (char *)_0x0073A450(v7, 16);
                _0x006DC6A0(0, &_0x00A7D239, v8);
                v6 = 1;
            }
#if USE_BUGFIXES
            v10 = 1; // Default to 1 so we get a bad exit code if EngineMain never runs.
#else
            v10 = 0;
#endif // USE_BUGFIXES
            if (!v6)
            {
                _0x0069A400("SwitchFUllScreen", _0x00A7C080, (int)_0x0081CBD0);
                v10 = EngineMain();
#if USE_BUGFIXES
                v10 = !v10; // EngineMain returns TRUE on success, but exit code 0 means success.
#endif                      // USE_BUGFIXES
            }
            SystemParametersInfoA(0x3Bu, 8u, &_0x009FC590, 0);
            SystemParametersInfoA(0x35u, 8u, &_0x009FC598, 0);
            SystemParametersInfoA(0x33u, 0x18u, &_0x009FC5A0, 0);
            if (_0x00A7C080)
                (**(void(__thiscall ***)(int, int))_0x00A7C080)(_0x00A7C080, 1);
            _0x00A7C080 = 0;
            if (!v6)
                CloseHandle(_0x00A659A8);
            if (v9)
                _0x00843D90();
            if (_0x00A7D7AC)
                ShellExecuteW(0, L"open", _0x00A65BC0, _0x00A65DD0, 0, 5);
            return v10;
        }

        MessageBoxA(0, "You must enable Windows Virtual-Memory to play this game", "Fatal error", 0);
        if (v9)
            _0x00843D90();
#if USE_BUGFIXES
        return 1; // Should give a bad exit code since something went wrong.
#else
        return 0;
#endif // USE_BUGFIXES
    }

    v4 = GetLastError();
    sprintf(Caption, "ERROR [%d]", (int)v4);
    MessageBoxA(0, "Please use the Games for Windows Live launcher", Caption, 0);
    return 1;
}
#else
ADDRESSSYMBOL(0x0081E340, "_WinMain@16");
#endif // USE_NON_MATCHING && __widberg__

#if !USE_SECUROM
bool __cdecl SecuROMCheck(void)
{
    DELINKFUNCTION(0x008443C0);
    return true;
}
#endif

#if !USE_RUNNING_CHECK
unsigned int __cdecl RunningCheck(void)
{
    DELINKFUNCTION(0x00843DF0);
    return 0;
}
#endif
