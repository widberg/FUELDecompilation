#include "D3DTnL_Renderer_Z.h"

#include <d3d9.h>
#include <d3dx9.h>

#include "Name_Z.h"

STATIC_ASSERT_SIZE(D3D_Renderer_Z, 0x3EC24u);
STATIC_ASSERT_OFFSET(D3D_Renderer_Z, field_4, 0x4);
STATIC_ASSERT_OFFSET(D3D_Renderer_Z, field_D10, 0xD10);
STATIC_ASSERT_OFFSET(D3D_Renderer_Z, field_D14, 0xD14);
STATIC_ASSERT_OFFSET(D3D_Renderer_Z, field_E30, 0xE30);
STATIC_ASSERT_OFFSET(D3D_Renderer_Z, field_E80, 0xE80);
STATIC_ASSERT_OFFSET(D3D_Renderer_Z, field_10C8, 0x10C8);
STATIC_ASSERT_OFFSET(D3D_Renderer_Z, field_110C, 0x110C);
STATIC_ASSERT_OFFSET(D3D_Renderer_Z, pD3D, 0x3200);
STATIC_ASSERT_OFFSET(D3D_Renderer_Z, pD3DDevice, 0x3204);
STATIC_ASSERT_OFFSET(D3D_Renderer_Z, hDestWindowOverride, 0x3208);
STATIC_ASSERT_OFFSET(D3D_Renderer_Z, field_37CC, 0x37CC);
STATIC_ASSERT_OFFSET(D3D_Renderer_Z, field_3C4E0, 0x3C4E0);
STATIC_ASSERT_OFFSET(D3D_Renderer_Z, field_3CBDA, 0x3CBDA);
STATIC_ASSERT_OFFSET(D3D_Renderer_Z, field_3CBDC, 0x3CBDC);
STATIC_ASSERT_OFFSET(D3D_Renderer_Z, field_3CBDD, 0x3CBDD);
STATIC_ASSERT_OFFSET(D3D_Renderer_Z, field_3CBE5, 0x3CBE5);
STATIC_ASSERT_OFFSET(D3D_Renderer_Z, field_3CC10, 0x3CC10);
STATIC_ASSERT_OFFSET(D3D_Renderer_Z, field_3CC14, 0x3CC14);
STATIC_ASSERT_OFFSET(D3D_Renderer_Z, field_3CC18, 0x3CC18);
STATIC_ASSERT_OFFSET(D3D_Renderer_Z, field_3EB70, 0x3EB70);

SYMBOLSYMBOL("_XLiveRender", "_XLiveRender@0");
EXTERN_C void __stdcall XLiveRender(void);

#if USE_NON_MATCHING && __widberg__
EXTERN_C char __usercall _0x0086E4B0@<al>(void *a1@<ecx>, const char *a2@<eax>) asm("__0x0086E4B0");
EXTERN_C bool __userpurge _0x0086E460@<al>(char *a1@<esi>, int a2) asm("__0x0086E460");
EXTERN_C unsigned int *__userpurge _0x008533B0@<eax>(unsigned int *a1@<eax>, U32 *a2) asm("__0x008533B0");
EXTERN_C void __usercall _0x00562A70(size_t a1@<eax>, char a2@<dl>, int a3@<ecx>) asm("__0x00562A70");
EXTERN_C HANDLE __stdcall _0x0086E760(LPCVOID lpBuffer, int a4, int a5, int a6) asm("__0x0086E760");

EXTERN_C U8 _0x00A659AD;
EXTERN_C char _0x00A7D590[256];
EXTERN_C char _0x00A7D390[256];

char __stdcall _0x00852EB0(int a3, int a4, char *lpBuffer, unsigned int *a6)
{
    DELINKFUNCTION(0x00852EB0);
    char *v4;                 // esi
    bool v5;                  // bl
    unsigned int v6;          // eax
    int v7;                   // ecx
    unsigned __int8 *v8;      // edx
    int v9;                   // eax
    bool v10;                 // al
    char *v11;                // eax MAPDST
    int i;                    // ecx
    const char *v13;          // edi
    int v14;                  // esi
    const char *v15;          // ebp
    bool v18;                 // zf
    int v19;                  // esi
    HRESULT v20;              // ebx
    int v21;                  // eax
    char v22;                 // cl
    unsigned int v23;         // eax
    char *v24;                // edi
    unsigned int v26;         // eax
    char *v27;                // esi
    char *v28;                // edi
    char *v30;                // edi
    char *v31;                // esi
    int v32;                  // ecx
    signed int v33;           // eax
    int v34;                  // edi
    bool v35;                 // cc
    LPD3DXBUFFER v36;         // eax
    int v37;                  // esi
    char *v38;                // eax
    int v39;                  // edx
    char v40;                 // cl
    const CHAR *v41;          // eax
    unsigned int v42;         // edx
    size_t v43;               // eax
    void *v44;                // esi
    const void *v45;          // eax
    char *v46;                // eax
    char v47;                 // cl
    char *v48;                // eax
    char v49;                 // cl
    const CHAR *v51;          // eax
    LPD3DXBUFFER v52;         // ecx
    const char *v53;          // [esp+20h] [ebp-223Ch]
    size_t v54;               // [esp+24h] [ebp-2238h]
    LPD3DXBUFFER ppErrorMsgs; // [esp+3Ch] [ebp-2220h] BYREF
    LPD3DXBUFFER ppShader;    // [esp+40h] [ebp-221Ch] BYREF
    size_t Size;              // [esp+44h] [ebp-2218h]
    const char *v58;          // [esp+48h] [ebp-2214h]
    int v59;                  // [esp+4Ch] [ebp-2210h] MAPDST
    int v60;                  // [esp+50h] [ebp-220Ch]
    int v61;                  // [esp+54h] [ebp-2208h]
    D3DXMACRO pDefines[32];   // [esp+58h] [ebp-2204h] BYREF
    CHAR pSrcFile[256];       // [esp+158h] [ebp-2104h] BYREF
    char Str[8196];           // [esp+258h] [ebp-2004h] BYREF

    v4 = lpBuffer;
    v5 = _0x0086E4B0(lpBuffer, (const char *)(a4 + 272)) == 0;
    v6 = 0;
    _0x00A659AD = v5;
    v7 = 16;
    v8 = (unsigned __int8 *)(a3 + 14252);
    do
    {
        v6 = Crc32Tab[HIBYTE(v6) ^ (unsigned __int8)g_ChartoLower[*v8]] ^ (v6 << 8);
        --v7;
        ++v8;
    } while (v7);
    v9 = v6 + 62;
    v61 = v9;
    if (!v5)
    {
        v10 = _0x0086E460(lpBuffer, v9);
        _0x00A659AD = !v10;
        if (v10)
        {
        LABEL_44:
            _0x008533B0((unsigned int *)(a4 + 248), (U32 *)v4 + 8);
            v48 = (char *)(a4 + 256);
            do
            {
                v49 = v4[(U32)v48 - 240 - a4];
                *v48++ = v49;
            } while (v49);
            D3DXGetShaderConstantTable(*((const DWORD **)v4 + 3), (LPD3DXCONSTANTTABLE *)(a4 + 4));
            return 1;
        }
    }
    v53 = (const char *)a6[1];
    ppShader = 0;
    ppErrorMsgs = 0;
    v58 = v53;
    Size = 0x10000;
    if (strstr(v53, "vs_"))
        Size = 65568;
    pDefines[0].Name = 0;
    pDefines[0].Definition = 0;
    memset(&pDefines[1], 0, 248u);
    v11 = (char *)Str;
    for (i = 31; i >= 0; --i)
    {
        *v11 = 0;
        v11 += 256;
    }
    v13 = (const char *)(a4 + 8);
    v14 = 0;
    v59 = 0;
    v15 = strstr((const char *)(a4 + 8), "#");
    if (v15)
    {
        v11 = (char *)Str;
        do
        {
            v60 = strlen(v11);
            strncpy((char *)&v11[v60], v13, v15 - v13);
            v11[v60 + v15 - v13] = 0;
            if (strstr(v11, "bNoPartialPrecision"))
                Size &= 0xFFFFFFDF;
            pDefines[v59].Name = v11;
            pDefines[v59].Definition = "true";
            v13 = v15 + 1;
            ++v59;
            v11 += 256;
            v15 = strstr(v15 + 1, "#");
        } while (v15);
        v14 = v59;
    }
    v18 = v14 == -1;
    v19 = v14 + 1;
    pDefines[v14].Definition = "true";
    pDefines[v14].Name = "_PC";
    if (!v18)
    {
        pDefines[v19].Definition = 0;
        pDefines[v19].Name = 0;
    }
    v20 = 0x80004005;
    pSrcFile[0] = 0;
    v21 = 0;
    do
    {
        v22 = _0x00A7D390[v21];
        pSrcFile[v21++] = v22;
    } while (v22);
    v23 = strlen(_0x00A7D590) + 1;
    v24 = pSrcFile;
    for (; *v24; ++v24)
        ;
    memcpy(v24, _0x00A7D590, v23);
    v60 = a4 + 228;
    v26 = strlen((const char *)(a4 + 228)) + 1;
    v27 = (char *)(a4 + 228);
    v28 = pSrcFile;
    for (; *v28; ++v28)
        ;
    memcpy(v28, v27, 4 * (v26 >> 2));
    v31 = &v27[4 * (v26 >> 2)];
    v30 = &v28[4 * (v26 >> 2)];
    v32 = v26 & 3;
    v33 = *a6 >> 14;
    memcpy(v30, v31, v32);
    v34 = 0;
    v35 = v33 <= 0;
    v36 = ppErrorMsgs;
    if (!v35)
    {
        while (v20)
        {
            v37 = (int)v58;
            if (v58[8])
            {
                if (ppShader)
                {
                    ppShader->Release();
                    v36 = ppErrorMsgs;
                }
                ppShader = 0;
                if (v36)
                    v36->Release();
                v38 = (char *)v37;
                v39 = a4 + 256 - (U32)v58;
                ppErrorMsgs = 0;
                do
                {
                    v40 = *v38;
                    v38[v39] = *v38;
                    ++v38;
                } while (v40);
                v20 = D3DXCompileShaderFromFileA(
                    pSrcFile,
                    pDefines,
                    0,
                    (LPCSTR)(a4 + 204),
                    (LPCSTR)(a4 + 256),
                    Size,
                    &ppShader,
                    &ppErrorMsgs,
                    0);
                v36 = ppErrorMsgs;
                if (v20 && ppErrorMsgs)
                {
                    v41 = (const CHAR *)ppErrorMsgs->GetBufferPointer();
                    OutputDebugStringA(v41);
                    v36 = ppErrorMsgs;
                }
            }
            v42 = *a6;
            v58 += 9;
            if (++v34 >= (int)(v42 >> 14))
            {
                if (v20)
                    goto LABEL_47;
                break;
            }
        }
        v43 = ppShader->GetBufferSize();
        _0x00562A70(v43, 0, (int)(lpBuffer + 8));
        v44 = (void *)*((U32 *)lpBuffer + 3);
        v54 = *((U32 *)lpBuffer + 2) >> 14;
        v45 = ppShader->GetBufferPointer();
        memcpy(v44, v45, v54);
        v46 = (char *)(a4 + 256);
        do
        {
            v47 = *v46;
            lpBuffer[(U32)v46 - 240 - a4] = *v46;
            ++v46;
        } while (v47);
        _0x0086E760(lpBuffer, v61, v60, a4 + 272);
        if (ppShader)
            ppShader->Release();
        ppShader = 0;
        if (ppErrorMsgs)
            ppErrorMsgs->Release();
        v4 = lpBuffer;
        goto LABEL_44;
    }
LABEL_47:
    if (v36)
    {
        v51 = (const CHAR *)v36->GetBufferPointer();
        OutputDebugStringA(v51);
        v36 = ppErrorMsgs;
    }
    v52 = ppShader;
    v18 = ppShader == 0;
    *(U8 *)(a4 + 344) = 1;
    if (!v18)
    {
        v52->Release();
        v36 = ppErrorMsgs;
    }
    ppShader = 0;
    if (v36)
        v36->Release();
    return 0;
}

EXTERN_C int __thiscall _0x00644090(int this_) asm("__0x00644090");
EXTERN_C int __usercall _0x008596F0@<eax>(U16 *a2@<edx>) asm("__0x008596F0");
EXTERN_C char __stdcall _0x008562C0(int a1, int a2, char a3) asm("__0x008562C0");
EXTERN_C int __usercall _0x0041ED80@<eax>(char *a1@<edx>, const char *Format, ...) asm("__0x0041ED80");
EXTERN_C char __usercall _0x00830BC0@<al>(char *a1@<eax>) asm("__0x00830BC0");
EXTERN_C void __userpurge _0x00728730(const CHAR *a1@<eax>, char *lpBuffer, int a3, int a4, int a5) asm("__0x00728730");
EXTERN_C int __usercall _0x00842F20@<eax>(D3D_Renderer_Z *a1@<eax>) asm("__0x00842F20");
EXTERN_C int __userpurge _0x0084D100@<eax>(int a1@<ecx>, D3D_Renderer_Z *a2@<esi>, UINT a3, UINT a4, D3DFORMAT a5) asm("__0x0084D100");
EXTERN_C char __stdcall _0x00854D50(D3D_Renderer_Z *a1, int a2) asm("__0x00854D50");
EXTERN_C HRESULT __usercall _0x00843010@<eax>(D3D_Renderer_Z *a1@<eax>) asm("__0x00843010");

EXTERN_C U8 _0x00A7D7A6;
EXTERN_C U8 _0x00A7D7A7;
EXTERN_C U32 _0x00A7D340;
EXTERN_C float _0x00A06608;
EXTERN_C float _0x00A06604;
EXTERN_C float _0x00A06600;
EXTERN_C U32 _0x00A661F0;
EXTERN_C U32 _0x00A7C078;

void __thiscall _0x00858E60(D3D_Renderer_Z *this_)
{
    DELINKFUNCTION(0x00858E60);
    int v2;                                                                                                // eax
    LONG v5;                                                                                               // ecx
    int v8;                                                                                                // eax
    int v9;                                                                                                // ebx
    char *v10;                                                                                             // edi
    int v11;                                                                                               // edi
    int *v12;                                                                                              // ebx
    double v13;                                                                                            // st7
    int v14;                                                                                               // eax
    int v15;                                                                                               // ecx
    bool v16;                                                                                              // cc
    double v17;                                                                                            // st6
    double v18;                                                                                            // st5
    bool v19;                                                                                              // al
    bool v20;                                                                                              // dl
    int v21;                                                                                               // ebx
    int v22;                                                                                               // eax
    int v23;                                                                                               // ebx
    int v24;                                                                                               // eax
    int v25;                                                                                               // edx
    int v26;                                                                                               // eax
    int *v27;                                                                                              // ecx
    int j;                                                                                                 // edx
    char v29;                                                                                              // bl
    __int16 v30;                                                                                           // ax
    char v31;                                                                                              // al
    int v32;                                                                                               // edx
    unsigned __int16 v33;                                                                                  // bx
    int v34;                                                                                               // edi
    char v35;                                                                                              // al
    bool v36;                                                                                              // zf
    char v37;                                                                                              // dl
    unsigned __int16 v38;                                                                                  // ax
    int v39;                                                                                               // edi
    int *v40;                                                                                              // eax
    int v41;                                                                                               // eax
    int v43;                                                                                               // [esp+34h] [ebp-44CF4h]
    D3DCOLOR v44;                                                                                          // [esp+38h] [ebp-44CF0h]
    float v45;                                                                                             // [esp+3Ch] [ebp-44CECh]
    D3DFORMAT v46;                                                                                         // [esp+44h] [ebp-44CE4h] BYREF
    char k;                                                                                                // [esp+4Bh] [ebp-44CDDh]
    int v48;                                                                                               // [esp+4Ch] [ebp-44CDCh]
    int i;                                                                                                 // [esp+50h] [ebp-44CD8h] SPLIT
    void *v51;                                                                                             // [esp+50h] [ebp-44CD8h] SPLIT BYREF
    int v52;                                                                                               // [esp+54h] [ebp-44CD4h]
    char *v53;                                                                                             // [esp+58h] [ebp-44CD0h] BYREF
    U8 v54[12];                                                                                            // [esp+60h] [ebp-44CC8h] BYREF
    int v55;                                                                                               // [esp+6Ch] [ebp-44CBCh]
    D3DRECT v56;                                                                                           // [esp+7Ch] [ebp-44CACh] BYREF
    U8 v57[19364];                                                                                         // [esp+180h] [ebp-44BA8h] BYREF
    int v58[65536];                                                                                        // [esp+4D28h] [ebp-40000h] BYREF
    char FileName[4096];

    if (_0x00A7D7A6 != 1)
    {
        v2 = this_->pD3DDevice->BeginScene();
        _0x00A7D7A7 = v2 >= 0;
        if (v2 >= 0)
        {
            if ((_0x00A7D340 & 2) != 0)
                this_->pD3DDevice->SetRenderState(D3DRS_FILLMODE, 2);
            else
                this_->pD3DDevice->SetRenderState(D3DRS_FILLMODE, 3);
            v5 = this_->field_D14;
            v56.x2 = this_->field_D10;
            v56.y2 = v5;
            v56.x1 = 0;
            v56.y1 = 0;
            *(U64 *)&v54[4] = (__int64)(255.0 * _0x00A06608);
            v45 = 1.0;
            v44 = v54[4] | (((unsigned __int8)(__int64)(_0x00A06604 * 255.0) | (((unsigned __int8)(__int64)(_0x00A06600 * 255.0) | 0xFFFFFF00) << 8)) << 8);
            if ((this_->field_110C & 1) != 0)
                this_->pD3DDevice->Clear(1u, &v56, 7u, v44, v45, 0);
            else
                this_->pD3DDevice->Clear(1u, &v56, 6u, v44, v45, 0);
            v55 = 0;
            for (i = 0; i < 12; i += 2)
            {
                v8 = i - (unsigned __int8)this_->field_10C8 + 1193;
                v9 = *(&this_->field_4 + 3 * v8);
                v10 = (char *)this_ + 12 * v8;
                v53 = v10;
                v52 = v9;
                if (v9)
                {
                    this_->field_3CC18 = -1;
                    this_->field_3CC14 = -1;
                    _0x00842F20(this_);
                    if (v9 >= 0x8000)
                        v52 = 0x8000;
                    v11 = *((U32 *)v10 + 2);
                    v12 = *(int **)(v11 + 216);
                    _0x00644090((int)v57);
                    v13 = (double)v12[30];
                    v14 = v12[32];
                    v15 = v55;
                    v16 = v55 < 4;
                    *(float *)&v57[264] = v13;
                    v17 = (double)v12[31];
                    *(U32 *)&v57[272] = v14;
                    *(U32 *)&v57[216] = v55;
                    *(float *)&v57[268] = v17;
                    *(float *)&v57[256] = (float)v12[28];
                    v18 = (double)v12[29];
                    *(U32 *)this_->field_3C4E0 = 0x1010101;
                    *(U32 *)&this_->field_3C4E0[4] = 0x1010101;
                    *(U32 *)&this_->field_3C4E0[8] = 0x1010101;
                    *(U32 *)&this_->field_3C4E0[12] = 0x1010101;
                    *(float *)&v57[260] = v18;
                    *(U32 *)&this_->field_3C4E0[16] = 0x1010101;
                    *(U32 *)&this_->field_3C4E0[20] = 0x1010101;
                    *(U16 *)&this_->field_3C4E0[24] = 0x101;
                    this_->field_3C4E0[18] = 1;
                    v19 = v16 && this_->field_3CBDA && (_0x00A7D340 & 2) == 0;
                    this_->field_3C4E0[21] = v19;
                    this_->field_3C4E0[22] = v19;
                    this_->field_3C4E0[23] = v19;
                    v20 = v15 < 4 && this_->field_3CBDC;
                    this_->field_3C4E0[14] = v20;
                    this_->field_3C4E0[20] = this_->field_3CBDD;
                    if (v15 != 4)
                    {
                        if (this_->field_3CBE5 && v19)
                            this_->field_3CC14 = this_->field_3CC10;
                        if ((*(U32 *)&v57[272] & 0x2000000) != 0 && (v21 = v12[35]) != 0)
                        {
                            v22 = *(U32 *)(*(U32 *)((U8 *)&_0x00A7C078 + 16) + 16) + 16 * (*(int *)(v21 + 156) >> 8);
                            if (*(U8 *)v22 == *(U8 *)(v21 + 156))
                                v23 = *(U32 *)(v22 + 4);
                            else
                                v23 = 0;
                            this_->field_3CC18 = *(__int16 *)(v23 + 16);
                            if (*(U16 *)(v23 + 16) == 0xFFFF || (double)*(int *)(v23 + 20) != v13 || (double)*(int *)(v23 + 24) != v17)
                            {
                                this_->Renderer_Z_vftable_61(*(unsigned __int16 *)(v23 + 16));
                                if (this_->field_3CBE5)
                                    v46 = D3DFMT_A16B16G16R16F;
                                else
                                    v46 = this_->field_37CC;
                                v48 = (int)*(float *)&v57[268];
                                *(U32 *)v54 = (int)*(float *)&v57[264];
                                v24 = _0x0084D100(v48, this_, *(UINT *)v54, v48, v46);
                                this_->field_3CC18 = v24;
                                *(U32 *)(this_->field_3EB70 + 12 * v24) = v23;
                                v25 = *(U32 *)v54;
                                v26 = v48;
                                *(U16 *)(v23 + 16) = this_->field_3CC18;
                                *(U32 *)(v23 + 20) = v25;
                                *(U32 *)(v23 + 24) = v26;
                            }
                            *(float *)&v57[260] = 0.0;
                            *(float *)&v57[256] = 0.0;
                            _0x00842F20(this_);
                        }
                        else
                        {
                            _0x00842F20(this_);
                        }
                    }
                    v27 = v58;
                    v48 = v11;
                    for (j = 1; v52; v11 += 272)
                    {
                        v29 = *(U8 *)(v11 + 4);
                        --v52;
                        if (v29 == 2)
                        {
                            v30 = 0;
                        }
                        else
                        {
                            *(U64 *)v54 = (__int64)(65535.0 / (*(float *)v11 + 1.0));
                            v30 = *(U16 *)v54;
                        }
                        *(U16 *)v27 = v30;
                        *((U8 *)v27 + 2) = *(U8 *)(v11 + 7);
                        *((U8 *)v27 + 4) = *(U8 *)(v11 + 6);
                        v31 = *(U8 *)(v11 + 5);
                        *((U16 *)v27 + 3) = j;
                        *((U8 *)v27 + 3) = v29;
                        *((U8 *)v27 + 5) = v31;
                        ++j;
                        v27 += 2;
                    }
                    v32 = *(v27 - 2);
                    *(v27 - 1) |= 0xFFFF0000;
                    *(v27 - 2) = v32;
                    v33 = _0x008596F0((U16 *)v58);
                    *(U8 *)&v46 = 0;
                    for (k = 0; v33 != 0xFFFF; v33 = HIWORD(v58[2 * *(U32 *)v54 + 1]))
                    {
                        *(U32 *)v54 = v33;
                        v34 = v48 + 272 * v33;
                        if (*(int *)(v34 + 264) < 0 && this_->field_3C4E0[*(unsigned __int8 *)(v34 + 4)])
                        {
                            v35 = *(U8 *)(v34 + 5);
                            if ((U8)v46 != v35)
                                k = *(U8 *)(v34 + 6);
                            v36 = k == *(U8 *)(v34 + 6);
                            *(U8 *)&v46 = v35;
                            if (!v36)
                                memset(this_->field_E80, 0, sizeof(this_->field_E80));
                            v37 = *(U8 *)(v34 + 4);
                            v36 = v37 == this_->field_E30;
                            k = *(U8 *)(v34 + 6);
                            if (!v36)
                                _0x008562C0((int)this_, (int)v57, v37);
                            v38 = v33;
                            if (this_->field_3C4E0[*(unsigned __int8 *)(v34 + 4)])
                            {
                                do
                                {
                                    v39 = 272 * v38;
                                    if (!_0x00854D50(this_, v39 + v48))
                                        break;
                                    v40 = (int *)(v39 + *((U32 *)v53 + 2) + 268);
                                    if (*v40 < 0)
                                        break;
                                    v38 = *(U16 *)v40;
                                } while (this_->field_3C4E0[*(unsigned __int8 *)(v39 + v48 + 4)]);
                            }
                        }
                    }
                }
                D3DPERF_EndEvent();
                ++v55;
            }
            this_->field_3CC18 = -1;
            _0x00843010(this_);
            XLiveRender();
            this_->pD3DDevice->EndScene();
            v41 = this_->field_110C;
            if ((v41 & 0x800) != 0)
            {
                this_->field_110C = v41 & 0xFFFFF7FF;
                FileName[0] = 0;
                do
                {
                    v43 = _0x00A661F0++;
                    _0x0041ED80(FileName, "CAPTURE\\CAPTURE_%05d.TGA", v43);
                } while (_0x00830BC0(FileName));
                v51 = 0;
                if (this_->Renderer_Z_vftable_101((int)&v51, (int)(int *)v54, (int)(int *)&v53, (int)(int *)&v46, 0))
                {
                    _0x00728730(FileName, (char *)v51, *(int *)v54, (int)v53, (unsigned __int8)v46);
                    free(v51);
                }
            }
        }
        if (this_->pD3DDevice->Present(0, 0, this_->hDestWindowOverride, 0) == 0x88760868)
            _0x00A7D7A6 = 1;
    }
}
#endif // USE_NON_MATCHING && __widberg__
