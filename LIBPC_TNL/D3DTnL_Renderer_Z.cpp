#include "D3DTnL_Renderer_Z.h"

#include <d3d9.h>
#include <d3dx9.h>

#include "Name_Z.h"

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
    char *v11;          // eax MAPDST
    int i;                    // ecx
    const char *v13;          // edi
    int v14;                  // esi
    const char *v15;                // ebp
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
    char Str[8196];        // [esp+258h] [ebp-2004h] BYREF

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
#endif // USE_NON_MATCHING && __widberg__
