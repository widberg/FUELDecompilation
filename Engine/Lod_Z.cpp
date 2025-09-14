#include "Lod_Z.h"

#include "Types_Z.h"

#if USE_NON_MATCHING
#ifdef __widberg__
EXTERN_C double __stdcall _0x0040ED20(float a1) asm("__0x0040ED20");

EXTERN_C float _0x00A66214;
EXTERN_C float _0x00A66218;
EXTERN_C float _0x00A6621C;

char __userpurge _0x00807900@<al>(U32 *a1@<ebx>, float *a2@<esi>, float *a3, int a4, int a5)
{
  DELINKFUNCTION(0x00807900)
  double v6; // st7
  int v7; // edi
  float *v8; // ecx
  double v9; // st6
  int v10; // edx
  double v11; // st5
  double v12; // st4
  double v13; // st3
  double v14; // rt1
  double v15; // st4
  double v16; // st7
  double v17; // st5
  double v18; // st6
  double v19; // st4
  double v20; // st3
  double v21; // st2
  double v22; // st1
  double v23; // st1
  int v24; // eax
  int v25; // edi
  char result; // al
  int v27; // ecx
  int v28; // eax
  bool v29; // zf
  char *v30; // eax
  float *v31; // edi
  long double v32; // st7
  long double v33; // st7
  double v34; // st5
  double v35; // st6
  double v36; // st7
  double v37; // st6
  double v38; // st5
  double v39; // st7
  float v40; // edx
  double v41; // st7
  float *v42; // ecx
  double v43; // st1
  double v44; // st0
  double v45; // st0
  double v46; // st7
  double v47; // st3
  double v48; // rt0
  double v49; // st3
  double v50; // st6
  double v51; // st2
  double v52; // st2
  double v53; // st6
  double v54; // st3
  double v55; // st3
  int v56; // eax
  int v57; // eax
  int v58; // ecx
  int v59; // eax
  char *v60; // eax
  double v61; // st6
  double v62; // st5
  float *v63; // eax
  double v64; // st4
  double v65; // st3
  double v66; // st2
  double v67; // rtt
  double v68; // rt0
  double v69; // st4
  float v70; // ecx
  float v71; // edx
  double v72; // st3
  double v73; // st5
  double v74; // st4
  float v75; // ecx
  double v76; // st6
  float v77; // [esp+0h] [ebp-4Ch]
  float v78[3]; // [esp+Ch] [ebp-40h] BYREF
  float v79[3]; // [esp+1Ch] [ebp-30h]
  float v80; // [esp+28h] [ebp-24h]
  float v81; // [esp+2Ch] [ebp-20h]
  float v82; // [esp+30h] [ebp-1Ch]
  float v83; // [esp+34h] [ebp-18h]
  float v84; // [esp+38h] [ebp-14h]
  float v85; // [esp+40h] [ebp-Ch]
  float v86; // [esp+44h] [ebp-8h]
  float v87; // [esp+48h] [ebp-4h]
  int v88; // [esp+50h] [ebp+4h]
  int v89; // [esp+50h] [ebp+4h]
  int v90; // [esp+50h] [ebp+4h]

  v6 = *a3 - a2[3];
  v7 = 0;
  v8 = a2 + 12;
  v9 = a3[1] - a2[7];
  v10 = 0;
  v11 = a3[2] - a2[11];
  v12 = *a2 * v6 + v11 * a2[2] + v9 * a2[1];
  v78[0] = v12;
  v13 = a2[4] * v6 + a2[6] * v11 + a2[5] * v9;
  v78[1] = v13;
  v14 = v12;
  v15 = v6;
  v16 = v14;
  v17 = v9 * a2[9] + v11 * a2[10] + v15 * a2[8];
  v18 = v13;
  v78[2] = v17;
  v19 = 0.0;
  v20 = 0.0;
  v21 = a3[3] * a3[3];
  do
  {
    if ( -*v8 <= v78[v10] )
    {
      if ( *v8 >= (double)v78[v10] )
      {
        v79[v10] = 0.0;
      }
      else
      {
        v23 = v78[v10] - *v8;
        v79[v10] = v23;
        v20 = v20 + v23 * v23;
      }
    }
    else
    {
      v22 = v78[v10] + *v8;
      v79[v10] = v22;
      v20 = v20 + v22 * v22;
    }
    if ( v21 < v20 )
      return 0;
    ++v7;
    ++v8;
    ++v10;
  }
  while ( v7 < 3 );
  if ( v20 <= 0.0000099999997 )
  {
    v42 = v78;
    v78[0] = _0x00A66214;
    v78[1] = _0x00A66218;
    v78[2] = _0x00A6621C;
    v43 = v16;
    v44 = a2[12];
    if ( v16 <= 0.0 )
      v45 = v44 + v16;
    else
      v45 = v44 - v16;
    if ( v45 >= 1000000.0 )
    {
      v47 = 0.0;
      v46 = 1000000.0;
    }
    else
    {
      v42 = v78;
      if ( 0.0 == v16 )
      {
        v46 = v45;
        v47 = (double)0;
      }
      else
      {
        v46 = v45;
        v88 = -1;
        if ( v43 >= 0.0 )
          v88 = 1;
        v47 = (double)v88;
      }
    }
    v48 = v47;
    v49 = v18;
    v50 = v48;
    v51 = a2[13];
    if ( v49 <= 0.0 )
      v52 = v51 + v49;
    else
      v52 = v51 - v49;
    if ( v52 < v46 )
    {
      v46 = v52;
      v42 = &v78[1];
      if ( 0.0 == v49 )
      {
        v53 = 0.0;
        v89 = 0;
      }
      else
      {
        v89 = -1;
        v53 = 0.0;
        if ( v49 >= 0.0 )
          v89 = 1;
      }
      v19 = v53;
      v50 = (double)v89;
    }
    v54 = a2[14];
    if ( v19 >= v17 )
      v55 = v54 + v17;
    else
      v55 = v54 - v17;
    if ( v55 < v46 )
    {
      v46 = v55;
      v42 = &v78[2];
      if ( v19 == v17 )
      {
        v50 = (double)0;
      }
      else
      {
        v90 = -1;
        if ( v17 >= v19 )
          v90 = 1;
        v50 = (double)v90;
      }
    }
    v56 = a1[4096];
    *v42 = v50;
    if ( v56 < 256 )
    {
      v58 = v56 + 1;
      v59 = v56 << 6;
      v29 = (U32 *)((char *)a1 + v59) == 0;
      v60 = (char *)a1 + v59;
      a1[4096] = v58;
      if ( !v29 )
      {
        *((U32 *)v60 + 7) = 0;
        *((U32 *)v60 + 10) = 0;
      }
      v57 = a1[4096] - 1;
    }
    else
    {
      if ( a1 != (U32 *)-16320 )
      {
        a1[4087] = 0;
        a1[4090] = 0;
      }
      v57 = 255;
    }
    v61 = *a2;
    v62 = a2[1];
    v63 = (float *)&a1[16 * v57];
    v64 = a2[2];
    v65 = a2[3];
    v81 = a2[4];
    v82 = a2[5];
    v83 = a2[6];
    v84 = a2[7];
    v66 = a2[8];
    v85 = a2[9];
    v86 = a2[10];
    v87 = a2[11];
    v79[0] = v66 * v78[2];
    v79[1] = v85 * v78[2];
    v79[2] = v86 * v78[2];
    v80 = v78[2] * v87;
    v85 = v82 * v78[1];
    v86 = v83 * v78[1];
    v81 = v81 * v78[1] + v79[0];
    v79[0] = v81;
    v82 = v85 + v79[1];
    v79[1] = v82;
    v83 = v86 + v79[2];
    v79[2] = v83;
    v84 = v78[1] * v84 + v80;
    v80 = v84;
    v67 = v65 * v78[0];
    v81 = v61 * v78[0] + v81;
    v68 = v64 * v78[0];
    v69 = v62 * v78[0] + v82;
    v63[4] = v81;
    v82 = v69;
    v70 = v82;
    v83 = v68 + v79[2];
    v84 = v67 + v80;
    v71 = v83;
    v63[7] = 1.0;
    v63[6] = v71;
    v63[5] = v70;
    v72 = (a3[3] + v46) * -0.5;
    v73 = v63[5] * v72;
    v74 = v63[6] * v72;
    v79[0] = v63[4] * v72 + *a3;
    v79[1] = v73 + a3[1];
    v75 = v79[1];
    v76 = v74 + a3[2];
    *v63 = v79[0];
    v63[1] = v75;
    v79[2] = v76;
    v63[2] = v79[2];
    v63[3] = -v46;
    *((U32 *)v63 + 8) = a4;
    *((U32 *)v63 + 9) = a5;
    result = 1;
  }
  else
  {
    v24 = a1[4096];
    if ( v24 < 256 )
    {
      v27 = v24 + 1;
      v28 = v24 << 6;
      v29 = (U32 *)((char *)a1 + v28) == 0;
      v30 = (char *)a1 + v28;
      a1[4096] = v27;
      if ( !v29 )
      {
        *((U32 *)v30 + 7) = 0;
        *((U32 *)v30 + 10) = 0;
      }
      v25 = a1[4096] - 1;
    }
    else
    {
      if ( a1 != (U32 *)-16320 )
      {
        a1[4087] = 0;
        a1[4090] = 0;
      }
      v25 = 255;
    }
    v77 = v20;
    v31 = (float *)&a1[16 * v25];
    v32 = _0x0040ED20(v77);
    v31[3] = v32;
    v33 = 1.0 / v32;
    v34 = a2[5] * v79[1] + a2[9] * v79[2] + v79[0] * a2[1];
    v35 = v79[2] * a2[10] + v79[1] * a2[6] + v79[0] * a2[2];
    v79[0] = (*a2 * v79[0] + a2[4] * v79[1] + v79[2] * a2[8]) * v33;
    v31[4] = v79[0];
    *((U32 *)v31 + 8) = a4;
    v79[1] = v34 * v33;
    v31[5] = v79[1];
    *((U32 *)v31 + 9) = a5;
    v79[2] = v33 * v35;
    v36 = v31[3];
    v31[6] = v79[2];
    v37 = v31[4] * v36;
    v38 = v31[5] * v36;
    v39 = v36 * v31[6];
    v79[0] = *a3 - v37;
    v79[1] = a3[1] - v38;
    v40 = v79[1];
    v41 = a3[2] - v39;
    *v31 = v79[0];
    v31[1] = v40;
    v79[2] = v41;
    v31[2] = v79[2];
    result = 1;
  }
  return result;
}
#endif // __widberg__
#endif // USE_NON_MATCHING
