#include "String_Z.h"

#include <cstring>

#if USE_NON_MATCHING
#ifdef __widberg__
Bool __usercall Str_Z::CmpNoCase@<al>(const char* s1@<eax>, const char* s2@<ecx>)
{
    DELINKFUNCTION(0x00696D60);
    return _stricmp(s1, s2);
}
#endif // __widberg__
#endif // USE_NON_MATCHING
