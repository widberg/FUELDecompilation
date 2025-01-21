#include <Windows.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

typedef unsigned long long uint64_t;
typedef unsigned int uint32_t;
typedef unsigned char uint8_t;

#pragma region WIKI_OSDEV_ORG_OFF
// https://wiki.osdev.org/COFF
#define N_UNDEF 0
#define C_EXT 2

#pragma pack(push, 1)
typedef struct FILE_HEADER_
{
    unsigned short f_magic;  /* Magic number */
    unsigned short f_nscns;  /* Number of Sections */
    long f_timdat;           /* Time & date stamp */
    long f_symptr;           /* File pointer to Symbol Table */
    long f_nsyms;            /* Number of Symbols */
    unsigned short f_opthdr; /* sizeof(Optional Header) */
    unsigned short f_flags;  /* Flags */
} FILE_HEADER, *PFILE_HEADER;

typedef struct SYMBOL_
{
    union
    {
        char name[8];
        struct
        {
            unsigned long zeroes;
            unsigned long offset;
        };
    }; /* Symbol Name */
    long n_value;          /* Value of Symbol */
    short n_scnum;         /* Section Number */
    unsigned short n_type; /* Symbol Type */
    char n_sclass;         /* Storage Class */
    char n_numaux;         /* Auxiliary Count */
} SYMBOL, *PSYMBOL;
#pragma pack(pop)
#pragma endregion WIKI_OSDEV_ORG_OFF

#pragma region XXHASH
//-----------------------------------------------------------------------------
// https://github.com/Cyan4973/xxHash
// xxHash Library
// Copyright (c) 2012-2021 Yann Collet
// All rights reserved.
//
// BSD 2-Clause License (https://www.opensource.org/licenses/bsd-license.php)
//
// Redistribution and use in source and binary forms, with or without modification,
// are permitted provided that the following conditions are met:
//
// * Redistributions of source code must retain the above copyright notice, this
//   list of conditions and the following disclaimer.
//
// * Redistributions in binary form must reproduce the above copyright notice, this
//   list of conditions and the following disclaimer in the documentation and/or
//   other materials provided with the distribution.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
// ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
// WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
// DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
// ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
// (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
// LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
// ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
// SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//-----------------------------------------------------------------------------
#define XXH_PRIME_1 11400714785074694791ULL
#define XXH_PRIME_2 14029467366897019727ULL
#define XXH_PRIME_3 1609587929392839161ULL
#define XXH_PRIME_4 9650029242287828579ULL
#define XXH_PRIME_5 2870177450012600261ULL

static uint64_t XXH_read64(const void *memptr)
{
    uint64_t val;
    memcpy(&val, memptr, sizeof(val));
    return val;
}

static uint32_t XXH_read32(const void *memptr)
{
    uint32_t val;
    memcpy(&val, memptr, sizeof(val));
    return val;
}

static uint64_t XXH_rotl64(uint64_t x, int r)
{
    return (x << r) | (x >> (64 - r));
}

static uint64_t xxh3(const void *data, size_t len, uint64_t seed)
{
    const uint8_t *p = (const uint8_t *)data;
    const uint8_t *const end = p + len;
    uint64_t h64;

    if (len >= 32)
    {
        const uint8_t *const limit = end - 32;
        uint64_t v1 = seed + XXH_PRIME_1 + XXH_PRIME_2;
        uint64_t v2 = seed + XXH_PRIME_2;
        uint64_t v3 = seed + 0;
        uint64_t v4 = seed - XXH_PRIME_1;

        do
        {
            v1 += XXH_read64(p) * XXH_PRIME_2;
            v1 = XXH_rotl64(v1, 31);
            v1 *= XXH_PRIME_1;

            v2 += XXH_read64(p + 8) * XXH_PRIME_2;
            v2 = XXH_rotl64(v2, 31);
            v2 *= XXH_PRIME_1;

            v3 += XXH_read64(p + 16) * XXH_PRIME_2;
            v3 = XXH_rotl64(v3, 31);
            v3 *= XXH_PRIME_1;

            v4 += XXH_read64(p + 24) * XXH_PRIME_2;
            v4 = XXH_rotl64(v4, 31);
            v4 *= XXH_PRIME_1;

            p += 32;
        } while (p <= limit);

        h64 = XXH_rotl64(v1, 1) + XXH_rotl64(v2, 7) + XXH_rotl64(v3, 12) +
              XXH_rotl64(v4, 18);

        v1 *= XXH_PRIME_2;
        v1 = XXH_rotl64(v1, 31);
        v1 *= XXH_PRIME_1;
        h64 ^= v1;
        h64 = h64 * XXH_PRIME_1 + XXH_PRIME_4;

        v2 *= XXH_PRIME_2;
        v2 = XXH_rotl64(v2, 31);
        v2 *= XXH_PRIME_1;
        h64 ^= v2;
        h64 = h64 * XXH_PRIME_1 + XXH_PRIME_4;

        v3 *= XXH_PRIME_2;
        v3 = XXH_rotl64(v3, 31);
        v3 *= XXH_PRIME_1;
        h64 ^= v3;
        h64 = h64 * XXH_PRIME_1 + XXH_PRIME_4;

        v4 *= XXH_PRIME_2;
        v4 = XXH_rotl64(v4, 31);
        v4 *= XXH_PRIME_1;
        h64 ^= v4;
        h64 = h64 * XXH_PRIME_1 + XXH_PRIME_4;
    }
    else
    {
        h64 = seed + XXH_PRIME_5;
    }

    h64 += (uint64_t)len;

    while (p + 8 <= end)
    {
        uint64_t k1 = XXH_read64(p);
        k1 *= XXH_PRIME_2;
        k1 = XXH_rotl64(k1, 31);
        k1 *= XXH_PRIME_1;
        h64 ^= k1;
        h64 = XXH_rotl64(h64, 27) * XXH_PRIME_1 + XXH_PRIME_4;
        p += 8;
    }

    if (p + 4 <= end)
    {
        h64 ^= (uint64_t)(XXH_read32(p)) * XXH_PRIME_1;
        h64 = XXH_rotl64(h64, 23) * XXH_PRIME_2 + XXH_PRIME_3;
        p += 4;
    }

    while (p < end)
    {
        h64 ^= (*p) * XXH_PRIME_5;
        h64 = XXH_rotl64(h64, 11) * XXH_PRIME_1;
        p++;
    }

    h64 ^= h64 >> 33;
    h64 *= XXH_PRIME_2;
    h64 ^= h64 >> 29;
    h64 *= XXH_PRIME_3;
    h64 ^= h64 >> 32;

    return h64;
}
#pragma endregion XXHASH

int string_compare(const char *a, size_t a_length, const char *b, size_t b_length)
{
    if (a_length != b_length)
        return 1;
    return memcmp(a, b, a_length);
}

static int compare_str_with_sym(char *a, PSYMBOL b, char *str_tab)
{
    size_t a_length, b_length;
    char *a_name, *b_name;

    a_length = strlen(a);
    a_name = a;

    if (b->zeroes == 0)
    {
        b_length = strlen(str_tab + b->offset);
        b_name = str_tab + b->offset;
    }
    else
    {
        b_length = strnlen(b->name, sizeof(b->name));
        b_name = b->name;
    }

    return string_compare(a_name, a_length, b_name, b_length);
}

static int compare_syms(PSYMBOL a, PSYMBOL b, char *str_tab)
{
    size_t a_length, b_length;
    char *a_name, *b_name;

    if (a->zeroes == 0)
    {
        a_length = strlen(str_tab + a->offset);
        a_name = str_tab + a->offset;
    }
    else
    {
        a_length = strnlen(a->name, sizeof(a->name));
        a_name = a->name;
    }

    if (b->zeroes == 0)
    {
        b_length = strlen(str_tab + b->offset);
        b_name = str_tab + b->offset;
    }
    else
    {
        b_length = strnlen(b->name, sizeof(b->name));
        b_name = b->name;
    }

    return string_compare(a_name, a_length, b_name, b_length);
}

static uint64_t hash_sym(PSYMBOL item, uint64_t seed, char *str_tab)
{
    if (item->zeroes == 0)
    {
        return xxh3(str_tab + item->offset, strlen(str_tab + item->offset), seed);
    }

    return xxh3(item->name, strnlen(item->name, sizeof(item->name)), seed);
}

static uint64_t hash_str(char *item, uint64_t seed)
{
    return xxh3(item, strlen(item), seed);
}

#pragma region HASHMAP_C
// https://github.com/tidwall/hashmap.c
// The MIT License (MIT)
//
// Copyright (c) 2020 Joshua J Baker
//
// Permission is hereby granted, free of charge, to any person obtaining a copy of
// this software and associated documentation files (the "Software"), to deal in
// the Software without restriction, including without limitation the rights to
// use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
// the Software, and to permit persons to whom the Software is furnished to do so,
// subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
// FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
// COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
// IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
// CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
typedef struct BUCKET_
{
    uint64_t hash : 48;
    uint64_t dib : 16;
    PSYMBOL item;
} BUCKET, *PBUCKET;

// hashmap is an open addressed hash map using robinhood hashing.
typedef struct HASHMAP_
{
    size_t cap;
    uint64_t seed;
    void *udata;
    size_t bucketsz;
    size_t nbuckets;
    size_t count;
    size_t mask;
    void *buckets;
    void *spare;
    void *edata;
} HASHMAP, *PHASHMAP;

PBUCKET bucket_at(PHASHMAP map, size_t index)
{
    return (PBUCKET)(((char *)map->buckets) + (map->bucketsz * index));
}

static uint64_t clip_hash(uint64_t hash)
{
    return hash & 0xFFFFFFFFFFFF;
}

PHASHMAP hashmap_new(size_t cap, uint64_t seed, void *udata)
{
    size_t bucketsz, size;
    PHASHMAP map;
    size_t ncap = 16;
    if (cap < ncap)
    {
        cap = ncap;
    }
    else
    {
        while (ncap < cap)
        {
            ncap *= 2;
        }
        cap = ncap;
    }
    bucketsz = sizeof(BUCKET);
    while (bucketsz & (sizeof(uintptr_t) - 1))
    {
        bucketsz++;
    }
    size = sizeof(HASHMAP) + bucketsz * 2;
    map = malloc(size);
    if (!map)
    {
        return NULL;
    }
    memset(map, 0, sizeof(HASHMAP));
    map->bucketsz = bucketsz;
    map->seed = seed;
    map->udata = udata;
    map->spare = ((char *)map) + sizeof(HASHMAP);
    map->edata = (char *)map->spare + bucketsz;
    map->cap = cap;
    map->nbuckets = cap;
    map->mask = map->nbuckets - 1;
    map->buckets = malloc(map->bucketsz * map->nbuckets);
    if (!map->buckets)
    {
        free(map);
        return NULL;
    }
    memset(map->buckets, 0, map->bucketsz * map->nbuckets);
    return map;
}

BOOL hashmap_set(PHASHMAP map, PSYMBOL item)
{
    PBUCKET entry, bucket;
    PSYMBOL bitem, eitem;
    size_t i;
    uint64_t hash = clip_hash(hash_sym(item, map->seed, map->udata));
    if (map->count > map->cap)
    {
        return FALSE;
    }

    entry = map->edata;
    entry->hash = hash;
    entry->dib = 1;
    entry->item = item;

    i = (size_t)(entry->hash & map->mask);
    while (1)
    {
        bucket = bucket_at(map, i);
        if (bucket->dib == 0)
        {
            memcpy(bucket, entry, map->bucketsz);
            map->count++;
            return TRUE;
        }
        bitem = bucket->item;
        if (entry->hash == bucket->hash && (compare_syms(eitem, bitem, map->udata) == 0))
        {
            return FALSE;
        }
        if (bucket->dib < entry->dib)
        {
            memcpy(map->spare, bucket, map->bucketsz);
            memcpy(bucket, entry, map->bucketsz);
            memcpy(entry, map->spare, map->bucketsz);
            eitem = bucket->item;
        }
        i = (i + 1) & map->mask;
        entry->dib += 1;
    }
}

PSYMBOL hashmap_get_with_str(PHASHMAP map, char *key)
{
    uint64_t hash = clip_hash(hash_str(key, map->seed));
    size_t i = (size_t)(hash & map->mask);
    while (1)
    {
        PBUCKET bucket = bucket_at(map, i);
        if (!bucket->dib)
            return NULL;
        if (bucket->hash == hash)
        {
            PSYMBOL bitem = bucket->item;
            if (compare_str_with_sym(key, bitem, map->udata) == 0)
            {
                return bitem;
            }
        }
        i = (i + 1) & map->mask;
    }
}

void hashmap_free(PHASHMAP map)
{
    if (!map)
        return;
    free(map->buckets);
    free(map);
}
#pragma endregion HASHMAP_C

// msvcrt strncpy or strncpy_s doesn't do what you think it does
errno_t copy_short_sym_name(char *dest, size_t dmax, const char *src, size_t slen)
{
    size_t i;
    if (slen > dmax)
    {
        return ERANGE;
    }

    for (i = 0; i < slen && i < dmax && src[i] != '\0'; ++i)
    {
        dest[i] = src[i];
    }

    if (i < dmax)
    {
        dest[i] = '\0';
    }

    return 0;
}

#define FLAG_UNDEFINE (1 << 0)
#define FLAG_RENAME (1 << 1)

int main(int argc, char *argv[])
{
    HANDLE hFile_configuration, hMap_configuration, hFile_out, hMap_out;
    LPBYTE lpBaseAddress_configuration, lpBaseAddress_out;
    BYTE flags;
    size_t length;
    errno_t err;
    PFILE_HEADER file_header;
    PSYMBOL sym, sym_tab;
    long i;
    char *str, *str_tab, *str_tab_end, *file_end;
    DWORD file_size, reserved_size;
    int return_value = 1;
    PHASHMAP hashmap;

    if (argc != 4)
    {
        fprintf(stderr, "Usage: %s <configuration> <in> <out>\n", argv[0]);
        return 1;
    }

    if (!CopyFile(argv[2], argv[3], FALSE))
    {
        fprintf(stderr, "Failed to copy the file: %lu\n", GetLastError());
        return 1;
    }

    hFile_configuration = CreateFile(argv[1], GENERIC_READ, FILE_SHARE_READ, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
    if (hFile_configuration == INVALID_HANDLE_VALUE)
    {
        fprintf(stderr, "Failed to open the file: %lu\n", GetLastError());
        return 1;
    }

    hMap_configuration = CreateFileMapping(hFile_configuration, NULL, PAGE_READONLY, 0, 0, NULL);
    if (hMap_configuration == NULL)
    {
        fprintf(stderr, "Failed to create the file mapping: %lu\n", GetLastError());
        goto defer_0;
    }

    lpBaseAddress_configuration = (LPBYTE)MapViewOfFile(hMap_configuration, FILE_MAP_READ, 0, 0, 0);
    if (lpBaseAddress_configuration == NULL)
    {
        fprintf(stderr, "Failed to map the view of the file: %lu\n", GetLastError());
        goto defer_1;
    }

    reserved_size = *(DWORD *)lpBaseAddress_configuration;
    lpBaseAddress_configuration += 4;

    hFile_out = CreateFile(argv[3], GENERIC_READ | GENERIC_WRITE, FILE_SHARE_READ | FILE_SHARE_WRITE, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
    if (hFile_out == INVALID_HANDLE_VALUE)
    {
        fprintf(stderr, "Failed to open the file: %lu\n", GetLastError());
        goto defer_2;
    }

    file_size = GetFileSize(hFile_out, NULL);
    if (file_size == INVALID_FILE_SIZE)
    {
        fprintf(stderr, "Failed to get the file size: %lu\n", GetLastError());
        goto defer_3;
    }

    hMap_out = CreateFileMapping(hFile_out, NULL, PAGE_READWRITE, 0, file_size + reserved_size, NULL);
    if (hMap_out == NULL)
    {
        fprintf(stderr, "Failed to create the file mapping: %lu\n", GetLastError());
        goto defer_3;
    }

    lpBaseAddress_out = (LPBYTE)MapViewOfFile(hMap_out, FILE_MAP_ALL_ACCESS, 0, 0, 0);
    if (lpBaseAddress_out == NULL)
    {
        fprintf(stderr, "Failed to map the view of the file: %lu\n", GetLastError());
        goto defer_4;
    }

    file_end = (char *)lpBaseAddress_out + file_size + reserved_size;
    str_tab_end = (char *)lpBaseAddress_out + file_size;
    file_header = (PFILE_HEADER)lpBaseAddress_out;
    sym_tab = (PSYMBOL)(lpBaseAddress_out + file_header->f_symptr);
    str_tab = (char *)(sym_tab + file_header->f_nsyms);

    hashmap = hashmap_new(file_header->f_nsyms, 0x9f308856, str_tab);
    if (!hashmap)
    {
        fprintf(stderr, "Failed to create the hashmap\n");
        goto defer_5;
    }

    for (i = 0; i < file_header->f_nsyms; ++i)
    {
        sym = &sym_tab[i];
        if (!hashmap_set(hashmap, sym))
        {
            fprintf(stderr, "Failed to set the symbol\n");
            goto defer_6;
        }
    }

    while ((flags = *(BYTE *)lpBaseAddress_configuration) != 0)
    {
        lpBaseAddress_configuration += 1;
        str = (char *)lpBaseAddress_configuration;
        length = strlen(str);
        lpBaseAddress_configuration += length + 1;
        sym = hashmap_get_with_str(hashmap, str);
        if (!sym)
        {
            fprintf(stderr, "Symbol not found: %s\n", str);
            goto defer_6;
        }
        if (flags & FLAG_UNDEFINE)
        {
            sym->n_scnum = N_UNDEF;
            sym->n_value = 0;
            sym->n_sclass = C_EXT;
        }
        if (flags & FLAG_RENAME)
        {
            str = (char *)lpBaseAddress_configuration;
            length = strlen(str);
            lpBaseAddress_configuration += length + 1;

            if (length > sizeof(sym->name))
            {
                sym->zeroes = 0;
                sym->offset = str_tab_end - str_tab;
                err = strcpy_s(str_tab_end, file_end - str_tab_end, str);
                if (err != 0)
                {
                    fprintf(stderr, "Failed to copy the string: %d\n", err);
                    goto defer_6;
                }
                str_tab_end += length + 1;
            }
            else
            {
                err = copy_short_sym_name(sym->name, sizeof(sym->name), str, length);
                if (err != 0)
                {
                    fprintf(stderr, "Failed to copy the string: %d\n", err);
                    goto defer_6;
                }
            }
        }
    }

    *(DWORD *)str_tab = str_tab_end - str_tab;

    return_value = 0;

defer_6:
    hashmap_free(hashmap);
defer_5:
    UnmapViewOfFile(lpBaseAddress_out);
defer_4:
    CloseHandle(hMap_out);
defer_3:
    CloseHandle(hFile_out);
defer_2:
    UnmapViewOfFile(lpBaseAddress_configuration);
defer_1:
    CloseHandle(hMap_configuration);
defer_0:
    CloseHandle(hFile_configuration);

    return return_value;
}
