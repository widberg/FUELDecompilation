/****************************  maindef.h   **********************************
* Author:        Agner Fog
* Date created:  2006-08-26
* Last modified: 2022-08-31
* Project:       objconv
* Module:        maindef.h
* Description:
* Header file for type definitions and other main definitions.
*
* Copyright 2006-2022 GNU General Public License v. 3 http://www.gnu.org/licenses
*****************************************************************************/
#ifndef MAINDEF_H
#define MAINDEF_H

// Program version
#define OBJCONV_VERSION         2.54


// Integer type definitions with platform-independent sizes:
#include <limits.h>
#include "inttypes.h"

// Get high part of a 64-bit integer
static inline uint32_t HighDWord (uint64_t x) {
   return (uint32_t)(x >> 32);
}

// Check if compiling for big-endian machine 
// (__BIG_ENDIAN__ may not be defined even on big endian systems, so this check is not 
// sufficient. A further check is done in CheckEndianness() in main.cpp)
#if defined(__BIG_ENDIAN__) && (__BIG_ENDIAN__ != 4321)
   #error This machine has big-endian memory organization. Objconv program will not work
#endif

// Max file name length
#define MAXFILENAMELENGTH        256

// File types 
#define FILETYPE_COFF              1         // Windows COFF/PE file
#define FILETYPE_OMF               2         // Windows OMF file
#define FILETYPE_ELF               3         // Linux or BSD ELF file
#define FILETYPE_MACHO_LE          4         // Mach-O file, little endian
#define FILETYPE_MACHO_BE          5         // Mach-O file, big endian
#define FILETYPE_DOS               6         // DOS file
#define FILETYPE_WIN3X             7         // Windows 3.x file
#define IMPORT_LIBRARY_MEMBER   0x10         // Member of import library, Windows
#define FILETYPE_MAC_UNIVBIN    0x11         // Macintosh universal binary
#define FILETYPE_MS_WPO         0x20         // Object file for whole program optimization, MS
#define FILETYPE_INTEL_WPO      0x21         // Object file for whole program optimization, Intel
#define FILETYPE_WIN_UNKNOWN    0x29         // Unknown subtype, Windows
#define FILETYPE_ASM           0x100         // Disassembly output
#define FILETYPE_LIBRARY      0x1000         // UNIX-style library/archive
#define FILETYPE_OMFLIBRARY   0x2000         // OMF-style  library

// Library subtypes
#define LIBTYPE_OMF             0x01         // OMF library
#define LIBTYPE_SHORTNAMES      0x10         // Short member names only, compatible with all systems
#define LIBTYPE_WINDOWS         0x11         // Long member names in "//" member, terminated by 0
#define LIBTYPE_LINUX           0x12         // Long member names in "//" member, terminated by '/'+LF
#define LIBTYPE_BSD_MAC         0x13         // Long member name after header. Length indicated by #1/<length>

// Define constants for symbol scope
#define S_LOCAL     0                        // Local symbol. Accessed only internally
#define S_PUBLIC    1                        // Public symbol. Visible from other modules
#define S_EXTERNAL  2                        // External symbol. Defined in another module


// Macro to calculate the size of an array
#define TableSize(x) ((int)(sizeof(x)/sizeof(x[0])))


// Structures and functions used for lookup tables:

// Structure of integers and char *, used for tables of text strings
struct SIntTxt {
   uint32_t a;
   const char * b;
};

// Translate integer value to text string by looking up in table of SIntTxt.
// Parameters: p = table, n = length of table, x = value to find in table
static inline char const * LookupText(SIntTxt const * p, int n, uint32_t x) {
   for (int i=0; i<n; i++, p++) {
      if (p->a == x) return p->b;
   }
   // Not found
   static char utext[32];
   sprintf(utext, "unknown(0x%X)", x);
   return utext;
}

// Macro to get length of text list and call LookupText
#define Lookup(list,x)  LookupText(list, sizeof(list)/sizeof(list[0]), x)


// Function to convert powers of 2 to index
int FloorLog2(uint32_t x);

// Convert 32 bit time stamp to string
const char * timestring(uint32_t t);

#endif // #ifndef MAINDEF_H
