#include <Windows.h>
#include <stdio.h>

#define FLAG_UNDEFINE (1 << 0)
#define FLAG_RENAME (1 << 1)

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

    while ((flags = *(BYTE *)lpBaseAddress_configuration) != 0)
    {
        lpBaseAddress_configuration += 1;
        str = (char *)lpBaseAddress_configuration;
        length = strlen(str);
        lpBaseAddress_configuration += length + 1;
        for (i = 0; i < file_header->f_nsyms; ++i)
        {
            sym = &sym_tab[i];
            if (sym->zeroes == 0)
            {
                if (strcmp(str_tab + sym->offset, str) == 0)
                {
                    goto found;
                }
            }
            else
            {
                if (strncmp(sym->name, str, sizeof(sym->name)) == 0)
                {
                    goto found;
                }
            }
        }
        fprintf(stderr, "Symbol not found: %s\n", str);
        goto defer_5;
    found:
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
                    goto defer_5;
                }
                str_tab_end += length + 1;
            }
            else
            {
                err = strncpy_s(sym->name, sizeof(sym->name), str, length);
                if (err != 0)
                {
                    fprintf(stderr, "Failed to copy the string: %d\n", err);
                    goto defer_5;
                }
            }
        }
    }

    *(DWORD *)str_tab = str_tab_end - str_tab;

    return_value = 0;

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
