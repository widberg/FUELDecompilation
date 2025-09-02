#pragma once

#ifndef _UNPACK_Z_H_
#define _UNPACK_Z_H_

#include <Types_Z.h>

class UnPack_Z {
public:
    // ~UnPack_Z();
    // UnPack_Z();
    // void DecodeRS();

    void *unpacked;
    U32 unpackedsize;
    U32 packedsize;
    U8 own_unpacked;
    U8 d;
};

#if USE_NON_MATCHING
#ifdef __widberg__
void __usercall UnPack_Z_UnPack_Z_dtor(UnPack_Z *this_@<esi>);
UnPack_Z *__usercall UnPack_Z_UnPack_Z_ctor@<eax>(UnPack_Z *this_@<edi>, U8 *out@<eax>, U8 *in@<esi>);
void __usercall UnPack_Z_DecodeRS@<eax>(UnPack_Z *this_, U8 *in@<eax>, U8 *out);
#endif // __widberg__
#endif // USE_NON_MATCHING

#endif // _UNPACK_Z_H_
