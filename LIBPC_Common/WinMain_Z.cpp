ADDRESSSYMBOL(0x0081E340, "_WinMain@16");

#if !USE_SECUROM
bool __cdecl SecuROMCheck(void)
{
    DELINKFUNCTION(0x008443C0);
    return true;
}
#endif

#if !USE_RUNNING_CHECK
unsigned int __cdecl RunningCheck(void)
{
    DELINKFUNCTION(0x00843DF0);
    return 0;
}
#endif
