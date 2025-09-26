#include "LiveNetPlayManager_Z.h"

STATIC_ASSERT_OFFSET(LiveNetPlayManager_Z, dwUserIndex, 0x6C);

SYMBOLSYMBOL("_XUserSetContextEx", "_XUserSetContextEx@16");
EXTERN_C U32 __stdcall XUserSetContextEx(U32 user_index, U32 context_id, U32 context_value, void* xoverlapped);

#if USE_FMTK
void fmtk_extension_point_presence_updated(int context_value);
#endif // USE_FMTK

void LiveNetPlayManager_Z::NetPlayManager_Z_vftable_35(int context_value)
{
    DELINKFUNCTION(0x00873EB0);
#if USE_FMTK
    fmtk_extension_point_presence_updated(context_value);
#endif // USE_FMTK
    XUserSetContextEx(this->dwUserIndex, 0x8001, context_value, 0);
}
