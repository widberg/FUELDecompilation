#pragma once

#ifndef _VIEWPORT_HUD_H_
#define _VIEWPORT_HUD_H_

ADDRESSVFTABLE(0x009AC21C, ViewportHUD);
class __declspec(dllexport) ViewportHUD
{
public:
    ADDRESSSYMBOL(0x004C89E0, "?ViewportHUD_vftable_0@ViewportHUD@@UAEXH@Z");
    virtual void ViewportHUD_vftable_0(int);
    ADDRESSSYMBOL(0x004C8AE0, "?ViewportHUD_vftable_1@ViewportHUD@@UAEXXZ");
    virtual void ViewportHUD_vftable_1();
    ADDRESSSYMBOL(0x004C8BC0, "?ViewportHUD_vftable_2@ViewportHUD@@UAEXH@Z");
    virtual void ViewportHUD_vftable_2(int);
    ADDRESSVF(0x004C8BB0, ViewportHUD, ViewportHUD_vftable_3);
    virtual void ViewportHUD_vftable_3();
    ADDRESSVF(0x004454B0, ViewportHUD, ViewportHUD_vftable_4);
    virtual void ViewportHUD_vftable_4();
    virtual void ViewportHUD_vftable_5(int);
    ADDRESSVF(0x004C8CC0, ViewportHUD, ViewportHUD_vftable_6);
    virtual void ViewportHUD_vftable_6();
    ADDRESSVF(0x004C8CE0, ViewportHUD, ViewportHUD_vftable_7);
    virtual void ViewportHUD_vftable_7();
    ADDRESSVF(0x004C8D80, ViewportHUD, ViewportHUD_vftable_8);
    virtual void ViewportHUD_vftable_8();
    ADDRESSSYMBOL(0x004CAC60, "?ViewportHUD_vftable_9@ViewportHUD@@UAEHXZ");
    virtual int ViewportHUD_vftable_9();
    ADDRESSVF(0x004C8C50, ViewportHUD, ViewportHUD_vftable_10);
    virtual void ViewportHUD_vftable_10();
    ADDRESSVF(0x004CA290, ViewportHUD, ViewportHUD_vftable_11);
    virtual void ViewportHUD_vftable_11();
    ADDRESSVF(0x004CA220, ViewportHUD, ViewportHUD_vftable_12);
    virtual void ViewportHUD_vftable_12();
    ADDRESSVF(0x004C9EC0, ViewportHUD, ViewportHUD_vftable_13);
    virtual void ViewportHUD_vftable_13();
    ADDRESSVF(0x004C9DB0, ViewportHUD, ViewportHUD_vftable_14);
    virtual void ViewportHUD_vftable_14();
    ADDRESSVF(0x004CA640, ViewportHUD, ViewportHUD_vftable_15);
    virtual void ViewportHUD_vftable_15();
    ADDRESSVF(0x004CA520, ViewportHUD, ViewportHUD_vftable_16);
    virtual void ViewportHUD_vftable_16();
    ADDRESSVF(0x004CA4C0, ViewportHUD, ViewportHUD_vftable_17);
    virtual void ViewportHUD_vftable_17();
    ADDRESSVF(0x004CA5B0, ViewportHUD, ViewportHUD_vftable_18);
    virtual void ViewportHUD_vftable_18();
    ADDRESSVF(0x004C8F60, ViewportHUD, ViewportHUD_vftable_19);
    virtual void ViewportHUD_vftable_19();
};

#endif // _VIEWPORT_HUD_H_
