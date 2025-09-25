#define WIN32_LEAN_AND_MEAN
#define NOMINMAX
#include <Windows.h>
#include <shellapi.h>
#include <shlwapi.h>

#include <cfloat>
#include <cstdio>
#include <cstdlib>
#include <direct.h>
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
EXTERN_C int __usercall _0x006DC6A0@<eax>(int@<eax>, LPCCH, const char *, ...) asm("__0x006DC6A0"); // TODO: Verify usercall vaargs.
EXTERN_C int __userpurge _0x0069A400@<eax>(const char *@<edi>, int, int) asm("__0x0069A400");       // FIXME: What happened here?
EXTERN_C bool __cdecl _0x00843D90(void);
char __stdcall _0x0081CBD0();
bool __cdecl SecuROMCheck(void);
unsigned int __cdecl RunningCheck(void);

EXTERN_C U8 _0x00A7D7B0;
EXTERN_C char _0x00A7D139[256];
EXTERN_C char _0x00A7D239[259];
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
                _0x006DC6A0(0, _0x00A7D239, v8);
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

EXTERN_C LRESULT __stdcall _0x0081E550(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam) asm("__0x0081E550");

EXTERN_C HINSTANCE _0x00A7D38C;
EXTERN_C HICON _0x00A7D790;
EXTERN_C char _0x009D0630[0x5C];
EXTERN_C HWND _0x00A7D36C;
EXTERN_C char *_0x00A3ECEC;

HWND __cdecl _0x008209A0()
{
    DELINKFUNCTION(0x008209A0);
    HWND result;             // eax
    int v3;                  // eax
    const char *v4;          // eax
    WNDCLASSW WndClass;      // [esp+8h] [ebp-82Ch] BYREF
#if !USE_FMTK
    char *v0;                // eax
    const CHAR *v1;          // eax
    WCHAR WideCharStr[1026]; // [esp+30h] [ebp-804h] BYREF
#endif // !USE_FMTK

    WndClass.style = 0;
    WndClass.lpfnWndProc = _0x0081E550;
    WndClass.cbClsExtra = 0;
    WndClass.cbWndExtra = 0;
    WndClass.hInstance = _0x00A7D38C;
    WndClass.hIcon = _0x00A7D790;
    WndClass.hCursor = LoadCursorA(0, (LPCSTR)0x7F00);
    WndClass.hbrBackground = (HBRUSH)GetStockObject(4);
    WndClass.lpszMenuName = 0;
    WndClass.lpszClassName = L"SDK";
    RegisterClassW(&WndClass);
#if USE_FMTK
    result = CreateWindowExW(0, L"SDK", L"FMTK", 0x10C20000u, 0x80000000, 0x80000000, 0, 0, 0, 0, _0x00A7D38C, 0);
#else
    v0 = strstr(_0x00A7D139, _0x009D0630);
    if (v0)
        v1 = v0 + 1;
    else
        v1 = _0x00A7D139;
    MultiByteToWideChar(0xFDE9u, 0, v1, -1, WideCharStr, 1024);
    result = CreateWindowExW(0, L"SDK", WideCharStr, 0x10C20000u, 0x80000000, 0x80000000, 0, 0, 0, 0, _0x00A7D38C, 0);
#endif // USE_FMTK
    _0x00A7D36C = result;
    if (!result)
    {
        v3 = _0x0081E060();
        if (v3 == 10)
        {
            v3 = 1;
        }
        else if (v3 == 19)
        {
            v3 = 2;
        }
        v4 = (&_0x00A3ECEC)[18 * v3];
        if (!v4)
            v4 = "Add an Error message in ErrorLangugage_Z.cpp";
        _0x006DC6A0(0, _0x00A7D239, v4);
        exit(40);
    }
    return result;
}

EXTERN_C char __cdecl _0x0068AE00();
EXTERN_C char __userpurge _0x00694290@<al>(int a1@<eax>, int a2) asm("__0x00694290");

EXTERN_C U32 _0x00A7C0C8;
EXTERN_C U8 _0x00A7D7A4;
EXTERN_C U8 _0x00A7DEDC;
EXTERN_C U32 _0x00A7D340;
EXTERN_C U8 _0x00A7D7A5;
EXTERN_C U32 _0x00A7C0C0;
EXTERN_C U8 _0x00A7D7FC;
EXTERN_C U8 _0x00A7D7FE;
EXTERN_C U8 _0x00A7D7FF;

#if USE_FMTK
    bool fmtk_extension_point_before_winproc(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam);
#endif // USE_FMTK

LRESULT __stdcall _0x0081E550(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
{
    DELINKFUNCTION(0x0081E550);
    int v4;                     // eax
    int v5;                     // eax
    void(__thiscall * v6)(int); // edx
    LRESULT result;             // eax
    HCURSOR v8;                 // eax
    int v9;                     // ecx
    int v10;                    // esi

    _control87(0x100u, 0x300u);
    _control87(0x10000u, 0x30000u);
#if USE_FMTK
    if (fmtk_extension_point_before_winproc(hWnd, Msg, wParam, lParam))
        return true;
#endif // USE_FMTK
    if (Msg <= 0xF)
    {
        if (Msg == 15)
        {
            if (_0x00A7C0C8)
                (*(void(__thiscall **)(int))(*(U32 *)_0x00A7C0C8 + 44))(_0x00A7C0C8);
        }
        else
        {
            switch (Msg)
            {
            case 1u:
                SendMessageA(0, 2u, 0, 0);
                break;
            case 2u:
                _0x00A7D7A4 = 1;
                _0x0068AE00();
                break;
            case 5u:
                if (wParam)
                {
                    if (wParam == 1)
                    {
                        _0x00A7D7A4 = 0;
                        _0x00A7DEDC = 1;
                    }
                    else if (wParam == 2)
                    {
                        if (_0x00A7DEDC)
                            _0x00A7D7A4 = 1;
                        _0x00A7DEDC = 0;
                    }
                }
                else
                {
                    if (_0x00A7DEDC)
                        _0x00A7D7A4 = 0;
                    _0x00A7DEDC = 0;
                }
                break;
            case 7u:
                _0x00A7D7A4 = 1;
                break;
            case 8u:
                _0x00A7D7A4 = 0;
                break;
            default:
                goto LABEL_59;
            }
        }
        goto LABEL_59;
    }
    if (Msg <= 0x201)
    {
        if (Msg != 513)
        {
            switch (Msg)
            {
            case 0x1Cu:
                if (wParam == 1)
                {
                    _0x00A7D7A4 = 1;
                    if (_0x00A7C0C8)
                        (*(void(__thiscall **)(int, U32))(*(U32 *)_0x00A7C0C8 + 16))(_0x00A7C0C8, 0);
                }
                else
                {
                    if ((_0x00A7D340 & 1) != 0)
                    {
                        v8 = LoadCursorA(_0x00A7D38C, (LPCSTR)0x7F00);
                        SetSystemCursor(v8, 0x7F8Au);
                        ShowCursor(1);
                    }
                    _0x00A7D7A4 = 0;
                    if (!_0x00A7DEDC)
                        _0x00A7D7A5 = 1;
                    if (_0x00A7C0C8)
                    {
                        (*(void(__thiscall **)(int, int))(*(U32 *)_0x00A7C0C8 + 16))(_0x00A7C0C8, 1);
                        if (_0x00694290(_0x00A7C0C8, 0))
                            _0x00A7D7A5 = 0;
                    }
                    v9 = _0x00A7C0C0;
                    if (_0x00A7C0C0)
                    {
                        v10 = 0;
                        while (1)
                        {
                            (*(void(__thiscall **)(int, int, U32, U32))(*(U32 *)v9 + 64))(v9, v10++, 0, 0);
                            if (v10 >= 8)
                                break;
                            v9 = _0x00A7C0C0;
                        }
                    }
                }
                break;
            case 0x20u:
                if ((_0x00A7D340 & 1) == 0 || !_0x00A7D7A4)
                    break;
                SetCursor(0);
                return 1;
            case 0x7Eu:
                if (_0x00A7C0C8)
                    (*(void(__thiscall **)(int))(*(U32 *)_0x00A7C0C8 + 40))(_0x00A7C0C8);
                break;
            case 0x102u:
                return 0;
            case 0x111u:
                v4 = (*(int(__thiscall **)(int))(*(U32 *)_0x00A7C080 + 40))(_0x00A7C080);
                v5 = (*(int(__thiscall **)(int, U32))(*(U32 *)v4 + 48))(v4, (unsigned __int16)wParam);
                if (v5)
                {
                    v6 = *(void(__thiscall **)(int))(v5 + 4);
                    if (v6)
                        v6(v5);
                }
                break;
            case 0x112u:
                if (wParam > 0xF100)
                {
                    if (wParam != 61760 && wParam != 61808)
                        break;
                }
                else if (wParam != 61696 && wParam != 61440 && wParam != 61456 && wParam != 61488)
                {
                    break;
                }
                return 1;
            default:
                break;
            }
        }
    LABEL_59:
        _0x00A7D7FC = 0;
        _0x00A7D7FE = 0;
        _0x00A7D7FF = 0;
        return DefWindowProcW(hWnd, Msg, wParam, lParam);
    }
    switch (Msg)
    {
    case 0x218u:
        result = 1112363332;
        break;
    case 0x281u:
        lParam = 0;
        goto LABEL_59;
    default:
        goto LABEL_59;
    }
    return result;
}

EXTERN_C BOOL __stdcall _0x00820530(HWND hWnd, LPARAM a2) asm("__0x00820530");
EXTERN_C void __usercall _0x0041ED80(char *a1@<edx>, const char *Format, ...) asm("__0x0041ED80");
EXTERN_C char __userpurge _0x0068B170@<al>(LPSTR a1@<eax>, int a2) asm("__0x0068B170");
EXTERN_C int __cdecl _0x006DC870(const char *a1, ...);
EXTERN_C char __thiscall _0x00830DD0(const char *this_) asm("__0x00830DD0");

EXTERN_C char _0x00A7D490[128];
EXTERN_C U32 _0x00A7C078;
EXTERN_C char _0x00A7C118[2052];
EXTERN_C char _0x00A7D390[256];
EXTERN_C char _0x00A7CC39[256];
EXTERN_C char _0x00A7CE39[256];
EXTERN_C U32 _0x00A7D348;
EXTERN_C char _0x00A7D039[256];

void __stdcall _0x008205C0()
{
    DELINKFUNCTION(0x008205C0);
    const char *v0;                                // eax
    LPSTR v1;                                      // eax
    int v2;                                        // eax
    char v3;                                       // cl
    char *v4;                                      // eax
    const char *v5;                                // edi
    char *v6;                                      // eax
    int v7;                                        // esi
    char *v8;                                      // eax
    char v9;                                       // cl
    int i;                                         // eax
    CHAR *v11;                                     // esi
    int v12;                                       // edi
    char *v13;                                     // eax
    char v14;                                      // cl
    CHAR *v15;                                     // esi
    CHAR v16;                                      // al
    HMODULE v17;                                   // ebx
    BOOL(__stdcall * v18)(HWND, LPSTR, int, BOOL); // ebp
    char *v19;                                     // edi
    unsigned int v21;                              // eax
    char *v22;                                     // edi
    int v24;                                       // eax
    char v25;                                      // cl
    char *v26;                                     // edi
    char *v28;                                     // eax
    unsigned int v30;                              // eax
    char *v31;                                     // edi
    int v33;                                       // eax
    char v34;                                      // cl
    char v35[265];                                 // [esp+20h] [ebp-48Ch] BYREF
    char Dir[128];                                 // [esp+128h] [ebp-384h] BYREF
    char Filename[128];                            // [esp+1A8h] [ebp-304h] BYREF
    char Ext[128];                                 // [esp+228h] [ebp-284h] BYREF
    CHAR Buffer[256];                              // [esp+2A8h] [ebp-204h] BYREF
    CHAR RootPathName[260];                        // [esp+3A8h] [ebp-104h] BYREF

    EnumWindows(_0x00820530, 0);
    v0 = GetCommandLineA();
    _splitpath(v0, 0, Dir, Filename, Ext);
    _0x0041ED80((char *)_0x00A7D490, "%s%s", Filename, Ext);
    v1 = GetCommandLineA();
    _0x0068B170(v1, (int)&_0x00A7C078);
    if (strlen(Dir))
    {
        if (!strlen(_0x00A7C118))
            goto LABEL_17;
        v4 = strstr(_0x00A7C118, "\"");
        if (v4 && (v5 = v4 + 1, (v6 = strstr(v4 + 1, "\"")) != 0))
        {
            v7 = v6 - v5;
            strncpy(_0x00A7D390, v5, v6 - v5);
            _0x00A7D390[v7] = 0;
        }
        else
        {
            v8 = _0x00A7D390;
            do
            {
                v9 = *(v8 - 4728);
                *v8++ = v9;
            } while (v9);
        }
        for (i = strlen(_0x00A7D390); i >= 0; --i)
        {
            if (_0x00A7D390[i] == 92)
                break;
        }
        _0x00A7D390[i + 1] = 0;
    }
    else
    {
        Buffer[0] = 0;
        GetCurrentDirectoryA(0x100u, Buffer);
        v2 = 0;
        do
        {
            v3 = Buffer[v2];
            _0x00A7D390[v2++] = v3;
        } while (v3);
        *(U16 *)&_0x00A7D390[strlen(_0x00A7D390)] = 92;
    }
    if (PathFileExistsA(_0x00A7D390))
    {
#if !USE_BUGFIXES
        // This is annoying and shouldn't be printed
        _0x006DC870("AliasPath : %s", _0x00A7D390);
#endif // !USE_BUGFIXES
        _chdir(_0x00A7D390);
    }
LABEL_17:
    RootPathName[0] = 0;
    GetLogicalDriveStringsA(0x100u, RootPathName);
    v11 = RootPathName;
    v12 = 0;
LABEL_18:
    if (!*v11)
        goto LABEL_23;
    do
    {
        if (GetDriveTypeA(v11) == 5)
        {
            v13 = v11;
            do
            {
                v14 = *v13;
                _0x00A7CC39[v12 - (U32)v11 + (U32)v13] = *v13;
                ++v13;
            } while (v14);
            v12 += strlen(v11) + 1;
        }
    LABEL_23:
        v15 = &v11[strlen(v11)];
        v16 = *v15;
        v11 = v15 + 1;
        if (v16)
            goto LABEL_18;
    } while (*v11);
    _0x00A7CC39[v12] = 0;
    v17 = LoadLibraryA("SHELL32.DLL");
    v18 = (BOOL(__stdcall *)(HWND, LPSTR, int, BOOL))GetProcAddress(v17, "SHGetSpecialFolderPath");
    if (v18 || (v18 = (BOOL(__stdcall *)(HWND, LPSTR, int, BOOL))GetProcAddress(v17, "SHGetSpecialFolderPathA")) != 0)
    {
        if (v18(0, &v35[1], 26, 1) >= 0)
        {
            v19 = v35;
            while (*++v19)
                ;
            *(U16 *)v19 = 92;
            v21 = strlen(_0x00A7D139) + 1;
            v22 = v35;
            while (*++v22)
                ;
            memcpy(v22, _0x00A7D139, v21);
            _0x00830DD0(&v35[1]);
            v24 = 0;
            do
            {
                v25 = v35[v24 + 1];
                _0x00A7CE39[v24++] = v25;
            } while (v25);
        }
        if (v18(0, &v35[1], 5, 1) >= 0)
        {
            v26 = v35;
            while (*++v26)
                ;
            *(U16 *)v26 = 92;
            v28 = v35;
            while (*++v28)
                ;
            strcpy(v28, "My Games\\");
            v30 = strlen(_0x00A7D139) + 1;
            v31 = v35;
            while (*++v31)
                ;
            memcpy(v31, _0x00A7D139, v30);
            if ((_0x00A7D348 & 0x80000) == 0)
                _0x00830DD0(&v35[1]);
            v33 = 0;
            do
            {
                v34 = v35[v33 + 1];
                _0x00A7D039[v33++] = v34;
            } while (v34);
        }
        FreeLibrary(v17);
    }
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
