#define _FILE_DEFINED
typedef struct _iobuf
{
    unsigned char _Filler[0x20];
} FILE;

#include <stdio.h>

FILE _iob[] = { *stdin, *stdout, *stderr };
extern "C" FILE * __cdecl __iob_func(void) {
    return _iob;
}
