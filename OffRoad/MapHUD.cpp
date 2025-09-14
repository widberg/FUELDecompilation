#include "MapHUD.h"

#include "Types_Z.h"
#include "Name_Z.h"

#if USE_NON_MATCHING
#ifdef __widberg__
EXTERN_C int __stdcall _0x00559EC0(int a1) asm("__0x00559EC0");
EXTERN_C bool __cdecl _0x004A53E0();
EXTERN_C char __usercall _0x00421F60@<al>(int *a1@<edi>) asm("__0x00421F60");
EXTERN_C int __cdecl _0x0049E980();
EXTERN_C int __cdecl _0x004A7F40();
EXTERN_C int __usercall _0x00577500@<eax>(int a1@<esi>) asm("__0x00577500");
EXTERN_C int __cdecl _0x00422230();
EXTERN_C int __usercall _0x00528160@<eax>(int a1@<eax>) asm("__0x00528160");
EXTERN_C char __usercall _0x00677CB0@<al>(unsigned int a1@<edi>, unsigned int *a2@<esi>) asm("__0x00677CB0");
EXTERN_C int __usercall _0x00579140@<eax>(int a1@<eax>) asm("__0x00579140");
EXTERN_C const char *__usercall _0x00677D20@<eax>(signed int a1@<eax>) asm("__0x00677D20");
EXTERN_C int __usercall _0x00441760@<eax>(char *a1@<edx>, const char *Format, ...) asm("__0x00441760");
EXTERN_C void __cdecl __spoils<eax,ecx> _0x0052B490();
EXTERN_C void __usercall _0x0052B4B0(int a1@<eax>) asm("__0x0052B4B0");
EXTERN_C int __userpurge _0x0046CDB0@<eax>(int a1@<esi>, int *a2, int a3, char a4) asm("__0x0046CDB0");
EXTERN_C int __userpurge _0x0060F260@<eax>(int *a1@<eax>, int a2@<edi>, U32 *a3) asm("__0x0060F260");
EXTERN_C int __cdecl _0x0062ABD0();
EXTERN_C bool __usercall __spoils<> _0x00633170@<al>(int a1@<eax>) asm("__0x00633170");
EXTERN_C int __cdecl _0x00577D70();
EXTERN_C int __usercall _0x00613B50@<eax>(int *a1@<ecx>, int a2@<edi>) asm("__0x00613B50");
EXTERN_C int __userpurge _0x0060FA30@<eax>(int a1@<edx>, U32 *a2@<ebx>, float a3) asm("__0x0060FA30");

EXTERN_C int _0x00A7C078;
EXTERN_C int _0x00A7C094;
EXTERN_C int _0x00A019F8;
EXTERN_C void *_0x00A67624;
EXTERN_C void *_0x00A6761C;
EXTERN_C U32 _0x00A67434;
EXTERN_C U32 *_0x00A6538C;
EXTERN_C char _0x009A16E0;

void __stdcall _0x004A54B0(int a1, float a2)
{
    DELINKFUNCTION(0x004A54B0);
    int v2;           // eax
    int v3;           // ecx
    int v4;           // ecx
    int v5;           // eax
    int v6;           // esi
    int v7;           // eax
    int v8;           // eax
    int v9;           // eax
    int v10;          // ebx
    int v11;          // eax
    const char *v12;  // eax
    int v13;          // eax
    int v14;          // eax
    int v15;          // edi
    U32 *v16;         // esi
    int v17;          // ecx
    int v18;          // eax
    int v19;          // eax
    int v20;          // eax
    int v21;          // eax
    int v22;          // esi
    double v23;       // st5
    double v24;       // st6
    double v25;       // st7
    int v26;          // eax
    double v27;       // st5
    double v28;       // st7
    float v29;        // [esp+0h] [ebp-ACh]
    char v30;         // [esp+17h] [ebp-95h]
    unsigned int v31; // [esp+18h] [ebp-94h] BYREF
    int v32;          // [esp+1Ch] [ebp-90h]
    int v33[3];       // [esp+20h] [ebp-8Ch] BYREF
    char v34[128];    // [esp+2Ch] [ebp-80h] BYREF

    v2 = _0x00559EC0(0);
    if (v2 && (v3 = *(U32 *)(*(U32 *)((U8 *)&_0x00A7C078 + 16) + 16) + 16 * (*(int *)(v2 + 288) >> 8), *(U8 *)v3 == *(U8 *)(v2 + 288)) && (v4 = *(U32 *)(v3 + 4)) != 0)
    {
        v5 = v4 + 27524;
    }
    else
    {
        v5 = 0;
    }
    if ((*(U32 *)(v5 + 188) >> 14) - 1 >= 103)
    {
        v32 = *(U32 *)(*(U32 *)(v5 + 192) + 412);
        if (v32)
        {
            if (_0x004A53E0())
            {
                v30 = 0;
                if (_0x00421F60(v33))
                {
                    v34[0] = 0;
                    if (_0x0049E980())
                    {
                        v7 = _0x004A7F40();
                        v6 = _0x00577500(v7);
                    }
                    else
                    {
                        v6 = 0;
                    }
                    v8 = *(U32 *)(_0x00A7C094 + 12988);
                    if (v8 && v8 == 2 && (v9 = _0x00422230()) != 0 && (unsigned __int8)_0x00528160(v9) || !v6)
                    {
                        v10 = -1;
                        if (_0x00A019F8 == -1 || !_0x00677CB0(0x3E6u, &v31))
                            v12 = &_0x009A16E0;
                        else
                            v12 = (char *)_0x00A67624 + (*((U32 *)_0x00A6761C + v31) >> 14);
                    }
                    else
                    {
                        v10 = *(U32 *)(v6 + 360);
                        v11 = _0x00579140(v6);
                        v12 = _0x00677D20(v11);
                    }
                    _0x00441760(v34, "%s", v12);
                    v13 = *(U32 *)(a1 + 6876);
                    if (v10 != v13)
                    {
                        if (v13 == -1)
                            _0x0052B490();
                        v30 = 1;
                        *(U32 *)(a1 + 6876) = v10;
                    }
                    if (v10 == -1)
                    {
                        v30 = 1;
                        v14 = _0x00422230();
                        _0x0052B4B0(v14);
                    }
                    v31 = Name_Z::GetID(0, (const U8 *)"ITEM_ID_HUB_NAME");
                    _0x0046CDB0(103, (int *)&v31, (int)v34, 0);
                    v31 = Name_Z::GetID(0, (const U8 *)"ITEM_ID_STATUS");
                    v15 = _0x0060F260((int *)&v31, v32, &_0x00A67434);
                    if (v15)
                    {
                        v16 = _0x00A6538C;
                        if (!_0x00A6538C)
                            goto LABEL_44;
                        v17 = _0x0062ABD0();
                        v18 = v16[15];
                        if (v18 != 14)
                        {
                            if (v18 == 13)
                            {
                                if (!v17)
                                    goto LABEL_46;
                                if (*(U32 *)(v17 + 72) == 5)
                                {
                                    v19 = 3;
                                LABEL_47:
                                    v24 = 0.0;
                                    v25 = a2;
                                    *(float *)(a1 + 6888) = 0.0;
                                    *(U32 *)(a1 + 6884) = v19;
                                    v22 = a1;
                                    goto LABEL_48;
                                }
                            }
                            if (v17)
                            {
                                if (_0x00633170(v17))
                                {
                                    v20 = *(U32 *)(v17 + 72);
                                    if (v20 == 5 || v20 == 4)
                                    {
                                        v21 = _0x00577D70();
                                        if (v21 == 1)
                                            v19 = 0;
                                        else
                                            v19 = (v21 != 2) + 4;
                                        goto LABEL_47;
                                    }
                                }
                            LABEL_44:
                                v22 = a1;
                                v23 = *(float *)(a1 + 6888) + a2;
                                *(float *)(a1 + 6888) = v23;
                                v24 = 0.0;
                                v25 = a2;
                                if (v23 > 5.0)
                                {
                                    *(float *)(a1 + 6888) = 0.0;
                                    *(U32 *)(a1 + 6884) = 2;
                                }
                            LABEL_48:
                                *(U32 *)(v15 + 296) = *(U32 *)(v22 + 6884);
                                _0x00613B50((int *)(v15 + 296), v15);
                                v26 = *(U32 *)(v22 + 6884);
                                if (v26 == *(U32 *)(v22 + 6880))
                                {
                                    if (!v30)
                                        goto LABEL_52;
                                }
                                else
                                {
                                    *(U32 *)(v22 + 6880) = v26;
                                }
                                *(float *)(v22 + 6872) = v24;
                            LABEL_52:
                                if (*(float *)(v22 + 6872) <= 4.0)
                                {
                                    v27 = v25 + *(float *)(v22 + 6872);
                                    *(float *)(v22 + 6872) = v27;
                                    if (v27 <= 4.0)
                                    {
                                        if (v27 >= 3.0)
                                            v28 = 4.0 - v27;
                                        else
                                            v28 = 1.0;
                                    }
                                    else
                                    {
                                        v28 = v24;
                                    }
                                    v29 = v28;
                                    v31 = Name_Z::GetID(0, (const U8 *)"GROUP_FADE");
                                    _0x0060FA30(v32, &v31, v29);
                                }
                                return;
                            }
                            if (!v18)
                                goto LABEL_44;
                        }
                    LABEL_46:
                        v19 = 1;
                        goto LABEL_47;
                    }
                }
            }
        }
    }
}
#endif // __widberg__
#endif // USE_NON_MATCHING
