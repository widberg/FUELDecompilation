#pragma once

#ifndef _IN_GAME_PAUSE_HUD_H_
#define _IN_GAME_PAUSE_HUD_H_

#include "VehiclesDataMgr_G.h"
#include "InGameMenuHUD.h"

ADDRESSVFTABLE(0x009A7554, InGamePauseHUD);
class __declspec(dllexport) InGamePauseHUD : public InGameMenuHUD
{
public:
    ADDRESSSYMBOL(0x0046E460, "?ViewportHUD_vftable_0@InGamePauseHUD@@UAEXH@Z");
    virtual void ViewportHUD_vftable_0(int) override;
    ADDRESSSYMBOL(0x0046E4D0, "?ViewportHUD_vftable_1@InGamePauseHUD@@UAEXXZ");
    virtual void ViewportHUD_vftable_1() override;
    ADDRESSSYMBOL(0x0046EA50, "?ViewportHUD_vftable_2@InGamePauseHUD@@UAEXH@Z");
    virtual void ViewportHUD_vftable_2(int) override;
    ADDRESSSYMBOL(0x0046ECE0, "?ViewportHUD_vftable_5@InGamePauseHUD@@UAEXH@Z");
    virtual void ViewportHUD_vftable_5(int) override;
    ADDRESSVF(0x0046E9B0, InGamePauseHUD, ViewportHUD_vftable_8);
    virtual void ViewportHUD_vftable_8() override;
    ADDRESSVF(0x0046E960, InGamePauseHUD, ViewportHUD_vftable_10);
    virtual void ViewportHUD_vftable_10() override;
    ADDRESSVF(0x0046E6B0, InGamePauseHUD, ViewportHUD_vftable_19);
    virtual void ViewportHUD_vftable_19() override;
    ADDRESSVF(0x00482B00, InGamePauseHUD, InGameMenuHUD_vftable_20);
    virtual void InGameMenuHUD_vftable_20() override;
    ADDRESSVF(0x0046E750, InGamePauseHUD, InGamePauseHUD_vftable_22);
    virtual void InGamePauseHUD_vftable_22();
};

#if USE_NON_MATCHING
#ifdef __widberg__
int __usercall InGamePauseHUD_VehicleAllowed@<eax>(InGamePauseHUD *this_@<esi>, VehicleData *iVehicleData@<edi>);
#endif // __widberg__
#endif // USE_NON_MATCHING

#endif // _IN_GAME_PAUSE_HUD_H_
