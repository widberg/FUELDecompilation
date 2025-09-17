#include "Main_Z.h"

#include <float.h>

#if USE_NON_MATCHING && __widberg__
EXTERN_C void _0x00689280();
EXTERN_C double __usercall _0x00830710@<fp0>(int a1@<eax>) asm("__0x00830710");
EXTERN_C bool __stdcall _0x0069A590(void *a1, const char *a2, int a3) asm("__0x0069A590");
EXTERN_C void _0x00688BF0();
EXTERN_C Bool _0x00820420();
EXTERN_C void _0x00689BA0();

EXTERN_C U8 _0x00A7D370;
EXTERN_C float _0x00A7D368;
EXTERN_C double _0x00A7D378;
EXTERN_C void *_0x00A7C080;
EXTERN_C U32 _0x00A7D360;
EXTERN_C Bool _0x00A65879;

Bool EngineMain()
{
  DELINKFUNCTION(0x006891E0);
  _control87(0x100u, 0x300u);
  _control87(0x10000u, 0x30000u);
  _0x00689280();
  if ( _0x00A7D370 )
    _0x00830710(1);
  _0x00A7D378 = _0x00830710(5);
  _0x00A7D368 = 0.02;
  _0x00A7D370 = 0;
  _0x0069A590(_0x00A7C080, "BSource User.tsc", 0);
  ++_0x00A7D360;
  do
  {
    while ( _0x00A65879 )
      ;
    _0x00688BF0();
  }
  while ( !_0x00820420() );
  _0x00689BA0();
  return TRUE;
}
#endif // USE_NON_MATCHING && __widberg__
