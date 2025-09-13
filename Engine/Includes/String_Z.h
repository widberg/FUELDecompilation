#pragma once

#ifndef _STRING_Z_H_
#define _STRING_Z_H_

#include "Types_Z.h"

#if USE_NON_MATCHING
class Str_Z
{
public:
#ifdef __widberg__
    static Bool __usercall CmpNoCase@<al>(const char* s1@<eax>, const char* s2@<ecx>);
#endif // __widberg__
};
#endif // USE_NON_MATCHING
#endif // _STRING_Z_H_
