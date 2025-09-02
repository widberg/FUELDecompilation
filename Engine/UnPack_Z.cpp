#include <UnPack_Z.h>

#include <HW/Memory_Z.h>

#if USE_NON_MATCHING
#ifdef __widberg__
void __usercall UnPack_Z_UnPack_Z_dtor(UnPack_Z *this_@<esi>)
{
    DELINKFUNCTION(0x00696880);
    if (this_->own_unpacked)
        Free_Z(this_->unpacked);
    this_->unpacked = 0;
    this_->unpackedsize = 0;
    this_->own_unpacked = 0;
}

UnPack_Z *__usercall UnPack_Z_UnPack_Z_ctor@<eax>(UnPack_Z *this_@<edi>, U8 *out@<eax>, U8 *in@<esi>)
{
    DELINKFUNCTION(0x006968B0);
    unsigned __int8 *out_1; // [esp-4h] [ebp-4h]

    this_->unpackedsize = *in + ((in[1] + ((in[2] + (in[3] << 8)) << 8)) << 8);
    this_->packedsize = in[4] + ((in[5] + ((in[6] + (in[7] << 8)) << 8)) << 8);
    this_->unpacked = (void *)out;
    this_->own_unpacked = out == 0;
    if (!out)
        this_->unpacked = Alloc_Z(this_->unpackedsize);
    out_1 = (unsigned __int8 *)this_->unpacked;
    this_->d = 0;
    UnPack_Z_DecodeRS(this_, in, out_1);
    return this_;
}

void __usercall UnPack_Z_DecodeRS@<eax>(UnPack_Z *this_, U8 *in@<eax>, U8 *out)
{
    DELINKFUNCTION(0x00696960);
    unsigned __int8 *decompressed_buffer_ptr; // ebp
    unsigned __int8 *compressed_buffer_ptr;   // eax
    int v5;                                   // ecx
    int v6;                                   // edx
    unsigned __int8 *v7;                      // eax
    int v8;                                   // ecx
    int v9;                                   // edx
    U32 flags;                                // edx
    char v11;                                 // bl
    int v12;                                  // edi
    int v13;                                  // edx
    unsigned __int16 v14;                     // cx
    int temp;                                 // edx
    int v16;                                  // esi
    int v17;                                  // edx
    unsigned __int8 *next_ptr;                // edi
    bool less_than_30;                        // cc
    int v20;                                  // [esp+10h] [ebp-Ch]
    int v21;                                  // [esp+14h] [ebp-8h]
    unsigned __int8 *end_ptr;                 // [esp+18h] [ebp-4h]
    U32 outa;                                 // [esp+24h] [ebp+8h]

    decompressed_buffer_ptr = out;
    end_ptr = &out[this_->unpackedsize];
    compressed_buffer_ptr = in + 8;
LABEL_2:
    v5 = *compressed_buffer_ptr;
    v6 = compressed_buffer_ptr[1];
    v7 = compressed_buffer_ptr + 1;
    v8 = v6 + (v5 << 8);
    v9 = *++v7;
    flags = v7[1] + ((v9 + (v8 << 8)) << 8);
    compressed_buffer_ptr = v7 + 2;
    v11 = 14 - (flags & 3);
    v12 = 0x3FFF >> (flags & 3);
    outa = flags;
    v20 = 0;
    v21 = v12;
    while (1)
    {
        if ((flags & 0x80000000) == 0)
        {
            *decompressed_buffer_ptr++ = *compressed_buffer_ptr++;
        }
        else
        {
            v13 = compressed_buffer_ptr[1];
            ((U8 *)&v14)[0] = 0;
            ((U8 *)&v14)[1] = *compressed_buffer_ptr;
            compressed_buffer_ptr += 2;
            temp = v13 | v14;
            v16 = (v12 & temp) + 1;
            v17 = (temp >> v11) + 3;
            if (v17)
            {
                next_ptr = &decompressed_buffer_ptr[-v16];
                do
                {
                    --v17;
                    *decompressed_buffer_ptr++ = *next_ptr++;
                } while (v17);
                v12 = v21;
            }
        }
        if (end_ptr == decompressed_buffer_ptr || (this_->d && decompressed_buffer_ptr > compressed_buffer_ptr))
            break;
        flags = 2 * outa;
        less_than_30 = v20 + 1 < 30;
        outa *= 2;
        ++v20;
        if (!less_than_30)
            goto LABEL_2;
    }
}
#endif // __widberg__
#endif // USE_NON_MATCHING
