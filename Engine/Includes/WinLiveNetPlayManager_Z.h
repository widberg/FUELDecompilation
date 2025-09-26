#pragma once

#ifndef _WIN_LIVE_NET_PLAY_MANAGER_Z_H_
#define _WIN_LIVE_NET_PLAY_MANAGER_Z_H_

#include "LiveNetPlayManager_Z.h"

ADDRESSVFTABLE(0x009D809C, WinLiveNetPlayManager_Z);
class __declspec(dllexport) WinLiveNetPlayManager_Z : public LiveNetPlayManager_Z
{
public:
    ADDRESSSYMBOL(0x00849560, "?NetPlayManager_Z_vftable_2@WinLiveNetPlayManager_Z@@UAEHXZ");
    virtual int NetPlayManager_Z_vftable_2() override;
    ADDRESSSYMBOL(0x008495B0, "?NetPlayManager_Z_vftable_3@WinLiveNetPlayManager_Z@@UAEHXZ");
    virtual int NetPlayManager_Z_vftable_3() override;
    ADDRESSVF(0x00849310, WinLiveNetPlayManager_Z, NetPlayManager_Z_vftable_4);
    virtual void NetPlayManager_Z_vftable_4() override;
    ADDRESSVF(0x008492B0, WinLiveNetPlayManager_Z, NetPlayManager_Z_vftable_5);
    virtual void NetPlayManager_Z_vftable_5() override;
    ADDRESSSYMBOL(0x00849450, "?NetPlayManager_Z_vftable_9@WinLiveNetPlayManager_Z@@UAEHXZ");
    virtual int NetPlayManager_Z_vftable_9() override;
    ADDRESSSYMBOL(0x008497E0, "?NetPlayManager_Z_vftable_14@WinLiveNetPlayManager_Z@@UAEXXZ");
    virtual void NetPlayManager_Z_vftable_14() override;
    ADDRESSVF(0x008495D0, WinLiveNetPlayManager_Z, NetPlayManager_Z_vftable_22);
    virtual void NetPlayManager_Z_vftable_22() override;
    ADDRESSVF(0x008497A0, WinLiveNetPlayManager_Z, LiveNetPlayManager_Z_vftable_36);
    virtual void LiveNetPlayManager_Z_vftable_36() override;
    ADDRESSVF(0x00849350, WinLiveNetPlayManager_Z, LiveNetPlayManager_Z_vftable_37);
    virtual void LiveNetPlayManager_Z_vftable_37() override;
    ADDRESSVF(0x00849660, WinLiveNetPlayManager_Z, LiveNetPlayManager_Z_vftable_41);
    virtual void LiveNetPlayManager_Z_vftable_41() override;
    virtual void LiveNetPlayManager_Z_vftable_42() override;
    virtual int LiveNetPlayManager_Z_vftable_43() override;
};

#endif // _WIN_LIVE_NET_PLAY_MANAGER_Z_H_
