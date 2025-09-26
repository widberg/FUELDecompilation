#pragma once

#ifndef _LIVE_NET_PLAY_MANAGER_Z_H_
#define _LIVE_NET_PLAY_MANAGER_Z_H_

#include "Types_Z.h"

#include "NetPlayManager_Z.h"

ADDRESSVFTABLE(0x009DA6F4, LiveNetPlayManager_Z);
class __declspec(dllexport) LiveNetPlayManager_Z : public NetPlayManager_Z
{
public:
    ADDRESSVF(0x008737E0, LiveNetPlayManager_Z, NetPlayManager_Z_vftable_4);
    virtual void NetPlayManager_Z_vftable_4() override;
    ADDRESSSYMBOL(0x00874410, "?NetPlayManager_Z_vftable_6@LiveNetPlayManager_Z@@UAEDHH@Z");
    virtual char NetPlayManager_Z_vftable_6(int, int) override;
    ADDRESSSYMBOL(0x00874430, "?NetPlayManager_Z_vftable_7@LiveNetPlayManager_Z@@UAEDH@Z");
    virtual char NetPlayManager_Z_vftable_7(int) override;
    ADDRESSSYMBOL(0x00874450, "?NetPlayManager_Z_vftable_8@LiveNetPlayManager_Z@@UAEDH@Z");
    virtual char NetPlayManager_Z_vftable_8(int) override;
    ADDRESSSYMBOL(0x00873DD0, "?NetPlayManager_Z_vftable_10@LiveNetPlayManager_Z@@UAEXHHHHH@Z");
    virtual void NetPlayManager_Z_vftable_10(int, int, int, int, int) override;
    ADDRESSSYMBOL(0x00849260, "?NetPlayManager_Z_vftable_12@LiveNetPlayManager_Z@@UAEDXZ");
    virtual char NetPlayManager_Z_vftable_12() override;
    ADDRESSSYMBOL(0x00849270, "?NetPlayManager_Z_vftable_13@LiveNetPlayManager_Z@@UAEXXZ");
    virtual void NetPlayManager_Z_vftable_13() override;
    ADDRESSSYMBOL(0x00873F50, "?NetPlayManager_Z_vftable_14@LiveNetPlayManager_Z@@UAEXXZ");
    virtual void NetPlayManager_Z_vftable_14() override;
    ADDRESSSYMBOL(0x00873ED0, "?NetPlayManager_Z_vftable_16@LiveNetPlayManager_Z@@UAEXH@Z");
    virtual void NetPlayManager_Z_vftable_16(int) override;
    ADDRESSSYMBOL(0x00873F00, "?NetPlayManager_Z_vftable_17@LiveNetPlayManager_Z@@UAEXH@Z");
    virtual void NetPlayManager_Z_vftable_17(int) override;
    ADDRESSVF(0x00874150, LiveNetPlayManager_Z, NetPlayManager_Z_vftable_22);
    virtual void NetPlayManager_Z_vftable_22() override;
    ADDRESSVF(0x008741F0, LiveNetPlayManager_Z, NetPlayManager_Z_vftable_23);
    virtual void NetPlayManager_Z_vftable_23() override;
    ADDRESSSYMBOL(0x008742D0, "?NetPlayManager_Z_vftable_24@LiveNetPlayManager_Z@@UAEXH@Z");
    virtual void NetPlayManager_Z_vftable_24(int) override;
    ADDRESSSYMBOL(0x008738A0, "?NetPlayManager_Z_vftable_25@LiveNetPlayManager_Z@@UAEHXZ");
    virtual int NetPlayManager_Z_vftable_25() override;
    ADDRESSSYMBOL(0x00874380, "?NetPlayManager_Z_vftable_26@LiveNetPlayManager_Z@@UAEDH@Z");
    virtual char NetPlayManager_Z_vftable_26(int) override;
    ADDRESSSYMBOL(0x008743B0, "?NetPlayManager_Z_vftable_27@LiveNetPlayManager_Z@@UAEDH@Z");
    virtual char NetPlayManager_Z_vftable_27(int) override;
    ADDRESSSYMBOL(0x008738D0, "?NetPlayManager_Z_vftable_28@LiveNetPlayManager_Z@@UAEDH@Z");
    virtual char NetPlayManager_Z_vftable_28(int) override;
    ADDRESSSYMBOL(0x00873930, "?NetPlayManager_Z_vftable_29@LiveNetPlayManager_Z@@UAEDXZ");
    virtual char NetPlayManager_Z_vftable_29() override;
    ADDRESSSYMBOL(0x00873E80, "?NetPlayManager_Z_vftable_30@LiveNetPlayManager_Z@@UAEXHH@Z");
    virtual void NetPlayManager_Z_vftable_30(int, int) override;
    ADDRESSVF(0x00849290, LiveNetPlayManager_Z, NetPlayManager_Z_vftable_31);
    virtual void NetPlayManager_Z_vftable_31() override;
    ADDRESSSYMBOL(0x008743E0, "?NetPlayManager_Z_vftable_34@LiveNetPlayManager_Z@@UAEDXZ");
    virtual char NetPlayManager_Z_vftable_34() override;
    virtual void NetPlayManager_Z_vftable_35(int) override;
    virtual void LiveNetPlayManager_Z_vftable_36() = 0;
    virtual void LiveNetPlayManager_Z_vftable_37() = 0;
    ADDRESSVF(0x00874140, LiveNetPlayManager_Z, LiveNetPlayManager_Z_vftable_38);
    virtual void LiveNetPlayManager_Z_vftable_38();
    ADDRESSVF(0x00849240, LiveNetPlayManager_Z, LiveNetPlayManager_Z_vftable_39);
    virtual void LiveNetPlayManager_Z_vftable_39();
    ADDRESSVF(0x00849250, LiveNetPlayManager_Z, LiveNetPlayManager_Z_vftable_40);
    virtual void LiveNetPlayManager_Z_vftable_40();
    virtual void LiveNetPlayManager_Z_vftable_41() = 0;
    virtual void LiveNetPlayManager_Z_vftable_42() = 0;
    virtual int LiveNetPlayManager_Z_vftable_43() = 0;
    ADDRESSVF(0x00873940, LiveNetPlayManager_Z, LiveNetPlayManager_Z_vftable_44);
    virtual void LiveNetPlayManager_Z_vftable_44();

    PAD(0x68);
    U32 dwUserIndex;
};

#endif // _LIVE_NET_PLAY_MANAGER_Z_H_
