#pragma once

#ifndef _NAME_Z_H_
#define _NAME_Z_H_

#include "Types_Z.h"

struct Name_Z
{
    static U32 __usercall __eax __edx GetID(U32 ContinueCRC, const U8 *_Name);

private:
    U32 m_ID;
};

#endif // _NAME_Z_H_
