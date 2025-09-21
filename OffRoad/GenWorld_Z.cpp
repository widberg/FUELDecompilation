#include "GenWorld_Z.h"

#include <cmath>

#include "Types_Z.h"

EXTERN_C double __usercall _0x00445570@<fp0>(float *a1@<eax>, float *a2@<ecx>) asm("__0x00445570");

#if USE_BUGFIXES
inline bool is_safe_to_cast_float_to_int(float x)
{
// Must use fp precise to prevent std::isfinite from being elided.
#pragma float_control(precise, on)
    return std::isfinite(x) &&
           x >= -2147483648.0f &&
           x <= 2147483520.0f;
}
#endif // USE_BUGFIXES

double __usercall _0x00445500@<fp0>(float *a1@<eax>, int a2@<ecx>)
{
    DELINKFUNCTION(0x00445500);
    float v3[4]; // [esp+0h] [ebp-10h] BYREF

    if (*(U8 *)(a2 + 1208) != 1)
        return 0.0;

#if USE_BUGFIXES
    // This was from before I knew why the F14 hang happened. It probably isn't needed, but it's a good check.
    if (!is_safe_to_cast_float_to_int(a1[0]) || !is_safe_to_cast_float_to_int(a1[2]))
    {
        __debugbreak();
        return 0.0;
    }
#endif // USE_BUGFIXES

    v3[0] = *a1;
    v3[1] = a1[1];
    v3[2] = a1[2];
    v3[3] = 1.0;
    return _0x00445570(v3, (float *)(a2 + 377412));
}
