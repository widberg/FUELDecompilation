#pragma once

#ifndef NAME_Z_H
#define NAME_Z_H

#include "Types_Z.h"

struct Name_Z
{
    static U32 __usercall __eax __edx GetIDFromString(U32 hash, const U8 *data);

private:
    U32 m_ID;
}

#endif