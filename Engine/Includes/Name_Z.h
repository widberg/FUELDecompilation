#pragma once

#ifndef _NAME_Z_H_
#define _NAME_Z_H_

#include "Types_Z.h"

struct Name_Z
{
#ifdef __widberg__
    static U32 __usercall GetID@<eax>(U32 ContinueCRC@<eax>, const U8 *_Name@<edx>);
#else
    static U32 __usercall __eax __edx GetID(U32 ContinueCRC, const U8 *_Name);
#endif

private:
    U32 m_ID;
};

#endif // _NAME_Z_H_
