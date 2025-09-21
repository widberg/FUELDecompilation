#include "IT_Dyn_VehicleMove_G.h"

#include "Types_Z.h"

#if USE_NON_MATCHING && __widberg__
EXTERN_C char __stdcall _0x005280A0(float a1, float a2) asm("__0x005280A0");
EXTERN_C bool __thiscall _0x0052E6D0(float *this_) asm("__0x0052E6D0");
EXTERN_C char __userpurge _0x00527BF0@<al>(int *a1@<ecx>, int a2@<edi>, int a3@<esi>, int *a4) asm("__0x00527BF0");
EXTERN_C int __thiscall _0x00410450(int *this_) asm("__0x00410450");
EXTERN_C int __thiscall _0x00410370(int *this_) asm("__0x00410370");
EXTERN_C bool __thiscall _0x00401800(int *this_) asm("__0x00401800");
EXTERN_C int __thiscall _0x004103A0(int *this_) asm("__0x004103A0");
EXTERN_C double __usercall _0x0040FD10@<fp0>(U8 *this_@<ecx>, float *a2@<eax>) asm("__0x0040FD10");
EXTERN_C double __stdcall _0x0040ED20(float a1) asm("__0x0040ED20");
double __usercall _0x00445500@<fp0>(float *a1@<eax>, int a2@<ecx>);

EXTERN_C int _0x00A7C0B0;
EXTERN_C int _0x00A7C078;

char __userpurge _0x005281C0@<al>(float *a1@<esi>, int edi0@<edi>, float *a2)
{
  DELINKFUNCTION(0x005281C0);
  char result; // al
  int *v4; // edi
  int v5; // eax
  int v6; // eax
  float v7; // edx
  float v8; // eax
  int v9; // eax
  int v10; // eax
  U8 *v11; // eax
  double v12; // st6
  double v13; // st5
  int v14; // eax
  int v15; // eax
  int v16; // ecx
  int v17; // ecx
  double v18; // st7
  float v19; // [esp+4h] [ebp-1Ch]
  float v20[3]; // [esp+14h] [ebp-Ch] BYREF

  if ( _0x005280A0(a1[512], a1[514])
    || a1[314] < 0.0
    || !_0x0052E6D0(a1)
    || a1[521] < -30.0
    || a1[1037] < 0.81900001
    || a1[322] > 0.5
    || a1[322] < -0.70700002
    || a1[1248] > 0.0
    || _0x00527BF0((int *)a2, edi0, (int)a1, (int *)a1) )
  {
    goto LABEL_2;
  }
  v4 = *(int **)(_0x00A7C0B0 + 28);
  v5 = _0x00410450(v4);
  v6 = _0x00410370((int *)(v5 + 12));
  if ( !_0x00401800((int *)(v6 + 40)) )
    goto LABEL_19;
  v7 = a2[1];
  v8 = a2[2];
  v20[0] = a2[0];
  v20[1] = v7;
  v20[2] = v8;
  v9 = _0x00410450(v4);
  v10 = _0x00410370((int *)(v9 + 12));
  v11 = (U8 *)_0x004103A0((int *)(v10 + 40));
  if ( _0x0040FD10(v11, v20) > 0.1 )
    goto LABEL_2;
  v12 = v20[2] - a1[514];
  v13 = *(float *)v20 - a1[512];
  v19 = v13 * v13 + v12 * v12;
  if ( _0x0040ED20(v19) <= 1.0 )
    goto LABEL_19;
  v14 = _0x00410450(*(int **)(_0x00A7C0B0 + 28));
  v15 = _0x00410370((int *)(v14 + 12));
  v16 = *(U32 *)(*(U32 *)((U8 *)&_0x00A7C078 + 16) + 16) + 16 * (*(int *)(v15 + 40) >> 8);
  if ( *(U8 *)v16 == *(U8 *)(v15 + 40) && (v17 = *(U32 *)(v16 + 4)) != 0 )
    v18 = _0x00445500((float *)v20, v17);
  else
    v18 = a1[1261];
  a1[1205] = v18;
  if ( a2[1] - a1[1205] > 50.0 )
LABEL_2:
    result = 0;
  else
LABEL_19:
    result = 1;
  return result;
}
#endif // USE_NON_MATCHING && __widberg__
