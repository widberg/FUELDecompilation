struct FILE;

extern "C" FILE _iob[];
extern "C" FILE *__cdecl __iob_func(void) {
    return _iob;
}
