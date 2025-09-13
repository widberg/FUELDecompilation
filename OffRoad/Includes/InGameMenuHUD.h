#pragma once

#ifndef _IN_GAME_MENU_HUD_H_
#define _IN_GAME_MENU_HUD_H_

#include "Types_Z.h"
#include "ViewportHUD.h"

PACK_PUSH
class MenuItem
{
public:
    PAD(0xDA);
    Char *name;
};
PACK_POP

ADDRESSVFTABLE(0x009A71A4, InGameMenuHUD);
class __declspec(dllexport) InGameMenuHUD : public ViewportHUD
{
public:
    ADDRESSSYMBOL(0x0046AA50, "?ViewportHUD_vftable_0@InGameMenuHUD@@UAEXH@Z");
    virtual void ViewportHUD_vftable_0(int) override;
    ADDRESSSYMBOL(0x0046AAA0, "?ViewportHUD_vftable_1@InGameMenuHUD@@UAEXXZ");
    virtual void ViewportHUD_vftable_1() override;
    ADDRESSSYMBOL(0x0046AE80, "?ViewportHUD_vftable_2@InGameMenuHUD@@UAEXH@Z");
    virtual void ViewportHUD_vftable_2(int) override;
    ADDRESSSYMBOL(0x0046B040, "?ViewportHUD_vftable_5@InGameMenuHUD@@UAEXH@Z");
    virtual void ViewportHUD_vftable_5(int) override;
    ADDRESSVF(0x0046ACA0, InGameMenuHUD, ViewportHUD_vftable_7);
    virtual void ViewportHUD_vftable_7() override;
    ADDRESSVF(0x0046ADE0, InGameMenuHUD, ViewportHUD_vftable_8);
    virtual void ViewportHUD_vftable_8() override;
    ADDRESSVF(0x0046AED0, InGameMenuHUD, ViewportHUD_vftable_10);
    virtual void ViewportHUD_vftable_10() override;
    ADDRESSVF(0x0046AE60, InGameMenuHUD, InGameMenuHUD_vftable_20);
    virtual void InGameMenuHUD_vftable_20();
    ADDRESSVF(0x0046AAC0, InGameMenuHUD, InGameMenuHUD_vftable_21);
    virtual void InGameMenuHUD_vftable_21();

    PAD(0xE0);
    U32 a;
    MenuItem *b;
};

#endif // _IN_GAME_MENU_HUD_H_
