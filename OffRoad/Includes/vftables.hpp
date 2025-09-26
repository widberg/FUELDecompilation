#pragma once

#ifndef _VFTABLES_H_
#define _VFTABLES_H_

#define WIN32_LEAN_AND_MEAN
#include <Windows.h>
#include <WinSock2.h>

ADDRESSVFTABLE(0x009C2498, NetPlayModule_Z);
class __declspec(dllexport) NetPlayModule_Z
{
public:
    virtual char NetPlayModule_Z_vftable_0();
    virtual void NetPlayModule_Z_vftable_1(int);
    virtual char NetPlayModule_Z_vftable_2();
};

ADDRESSVFTABLE(0x009CCA48, CheckSum_Z);
class __declspec(dllexport) CheckSum_Z
{
public:
    virtual void CheckSum_Z_vftable_0() = 0;
};

ADDRESSVFTABLE(0x009DBEB8, PopupMenu_Z);
class __declspec(dllexport) PopupMenu_Z
{
public:
    ADDRESSVF(0x00880C20, PopupMenu_Z, PopupMenu_Z_vftable_0);
    virtual void PopupMenu_Z_vftable_0();
    ADDRESSVF(0x008821D0, PopupMenu_Z, PopupMenu_Z_vftable_1);
    virtual void PopupMenu_Z_vftable_1();
    ADDRESSVF(0x00882570, PopupMenu_Z, PopupMenu_Z_vftable_2);
    virtual void PopupMenu_Z_vftable_2();
    ADDRESSVF(0x008825A0, PopupMenu_Z, PopupMenu_Z_vftable_3);
    virtual void PopupMenu_Z_vftable_3();
    ADDRESSVF(0x00881F80, PopupMenu_Z, PopupMenu_Z_vftable_4);
    virtual void PopupMenu_Z_vftable_4();
    ADDRESSVF(0x00881E00, PopupMenu_Z, PopupMenu_Z_vftable_5);
    virtual void PopupMenu_Z_vftable_5();
    ADDRESSVF(0x00881ED0, PopupMenu_Z, PopupMenu_Z_vftable_6);
    virtual void PopupMenu_Z_vftable_6();
    ADDRESSVF(0x00881FD0, PopupMenu_Z, PopupMenu_Z_vftable_7);
    virtual void PopupMenu_Z_vftable_7();
    ADDRESSVF(0x00881FF0, PopupMenu_Z, PopupMenu_Z_vftable_8);
    virtual void PopupMenu_Z_vftable_8();
    ADDRESSVF(0x00882180, PopupMenu_Z, PopupMenu_Z_vftable_9);
    virtual void PopupMenu_Z_vftable_9();
    ADDRESSVF(0x00845DF0, PopupMenu_Z, PopupMenu_Z_vftable_10);
    virtual void PopupMenu_Z_vftable_10();
    virtual void PopupMenu_Z_vftable_11(int);
    ADDRESSVF(0x00881D80, PopupMenu_Z, PopupMenu_Z_vftable_12);
    virtual void PopupMenu_Z_vftable_12();
    char data[28];
};

ADDRESSVFTABLE(0x009D0818, AGW_Occlusion);
class __declspec(dllexport) AGW_Occlusion
{
public:
    ADDRESSVF(0x0074C850, AGW_Occlusion, AGW_Occlusion_vftable_0);
    virtual void AGW_Occlusion_vftable_0();
    ADDRESSVF(0x00772B10, AGW_Occlusion, AGW_Occlusion_vftable_1);
    virtual void AGW_Occlusion_vftable_1();
};

ADDRESSVFTABLE(0x009C5C08, Thread_Z);
class __declspec(dllexport) Thread_Z
{
public:
    ADDRESSVF(0x006420E0, Thread_Z, Thread_Z_vftable_0);
    virtual void Thread_Z_vftable_0();
    ADDRESSVF(0x00642130, Thread_Z, Thread_Z_vftable_1);
    virtual void Thread_Z_vftable_1();
    ADDRESSVF(0x00821100, Thread_Z, Thread_Z_vftable_2);
    virtual void Thread_Z_vftable_2();
    ADDRESSVF(0x00821180, Thread_Z, Thread_Z_vftable_3);
    virtual void Thread_Z_vftable_3();
    ADDRESSVF(0x008211C0, Thread_Z, Thread_Z_vftable_4);
    virtual void Thread_Z_vftable_4();
    ADDRESSVF(0x00821260, Thread_Z, Thread_Z_vftable_5);
    virtual void Thread_Z_vftable_5();
    ADDRESSVF(0x00821280, Thread_Z, Thread_Z_vftable_6);
    virtual void Thread_Z_vftable_6();
    ADDRESSVF(0x008212A0, Thread_Z, Thread_Z_vftable_7);
    virtual void Thread_Z_vftable_7();
};

ADDRESSVFTABLE(0x009A48B0, FlashScreenFx_G);
class __declspec(dllexport) FlashScreenFx_G
{
public:
    ADDRESSVF(0x0043EA50, FlashScreenFx_G, FlashScreenFx_G_vftable_0);
    virtual void FlashScreenFx_G_vftable_0();
    ADDRESSVF(0x0043E700, FlashScreenFx_G, FlashScreenFx_G_vftable_1);
    virtual void FlashScreenFx_G_vftable_1();
};

ADDRESSVFTABLE(0x009C9424, BaseStream_Z);
class __declspec(dllexport) BaseStream_Z
{
public:
    ADDRESSVF(0x0068D9E0, BaseStream_Z, BaseStream_Z_vftable_0);
    virtual void BaseStream_Z_vftable_0();
    ADDRESSVF(0x0068D900, BaseStream_Z, BaseStream_Z_vftable_1);
    virtual void BaseStream_Z_vftable_1();
    ADDRESSVF(0x0068D920, BaseStream_Z, BaseStream_Z_vftable_2);
    virtual void BaseStream_Z_vftable_2();
    virtual void BaseStream_Z_vftable_3(int, int, int);
    virtual void BaseStream_Z_vftable_4(int, int, int);
    char data[4];
};

ADDRESSVFTABLE(0x009C8EE0, DataManager_Z_struct__ParticleElement_Z_);
class __declspec(dllexport) DataManager_Z_struct__ParticleElement_Z_
{
public:
    ADDRESSVF(0x0068C1B0, DataManager_Z_struct__ParticleElement_Z_, DataManager_Z_struct__ParticleElement_Z__vftable_0);
    virtual void DataManager_Z_struct__ParticleElement_Z__vftable_0();
    ADDRESSVF(0x0068C0D0, DataManager_Z_struct__ParticleElement_Z_, DataManager_Z_struct__ParticleElement_Z__vftable_1);
    virtual void DataManager_Z_struct__ParticleElement_Z__vftable_1();
};

ADDRESSVFTABLE(0x009D2598, MaterialManager_Z);
class __declspec(dllexport) MaterialManager_Z
{
public:
    ADDRESSVF(0x007ACDF0, MaterialManager_Z, MaterialManager_Z_vftable_0);
    virtual void MaterialManager_Z_vftable_0();
    char data[1];
};

ADDRESSVFTABLE(0x009A19FC, StateTemplate_G);
class __declspec(dllexport) StateTemplate_G
{
public:
    ADDRESSVF(0x00423E60, StateTemplate_G, StateTemplate_G_vftable_0);
    virtual void StateTemplate_G_vftable_0();
    virtual void StateTemplate_G_vftable_1(int);
    virtual void StateTemplate_G_vftable_2(int);
    virtual char StateTemplate_G_vftable_3(int);
};

ADDRESSVFTABLE(0x009D3C50, cA_BaseDecorObject);
class __declspec(dllexport) cA_BaseDecorObject
{
public:
    ADDRESSVF(0x007DE5A0, cA_BaseDecorObject, cA_BaseDecorObject_vftable_0);
    virtual void cA_BaseDecorObject_vftable_0();
    ADDRESSVF(0x007DE5B0, cA_BaseDecorObject, cA_BaseDecorObject_vftable_1);
    virtual void cA_BaseDecorObject_vftable_1();
    virtual void cA_BaseDecorObject_vftable_2(int);
    ADDRESSVF(0x007E0210, cA_BaseDecorObject, cA_BaseDecorObject_vftable_3);
    virtual void cA_BaseDecorObject_vftable_3();
    ADDRESSSYMBOL(0x007E0320, "?cA_BaseDecorObject_vftable_4@cA_BaseDecorObject@@UAEXXZ");
    virtual void cA_BaseDecorObject_vftable_4();
    ADDRESSSYMBOL(0x007E0430, "?cA_BaseDecorObject_vftable_5@cA_BaseDecorObject@@UAEXXZ");
    virtual void cA_BaseDecorObject_vftable_5();
    ADDRESSVF(0x007E0880, cA_BaseDecorObject, cA_BaseDecorObject_vftable_6);
    virtual void cA_BaseDecorObject_vftable_6();
    ADDRESSVF(0x007E0200, cA_BaseDecorObject, cA_BaseDecorObject_vftable_7);
    virtual void cA_BaseDecorObject_vftable_7();
    virtual int cA_BaseDecorObject_vftable_8();
    virtual void cA_BaseDecorObject_vftable_9(int);
    virtual void cA_BaseDecorObject_vftable_10(int);
    ADDRESSVF(0x007DE800, cA_BaseDecorObject, cA_BaseDecorObject_vftable_11);
    virtual void cA_BaseDecorObject_vftable_11();
    ADDRESSVF(0x007E0590, cA_BaseDecorObject, cA_BaseDecorObject_vftable_12);
    virtual void cA_BaseDecorObject_vftable_12();
    ADDRESSVF(0x007E0540, cA_BaseDecorObject, cA_BaseDecorObject_vftable_13);
    virtual void cA_BaseDecorObject_vftable_13();
};

ADDRESSVFTABLE(0x009C75C4, SystemDatas_Z);
class __declspec(dllexport) SystemDatas_Z
{
public:
    ADDRESSVF(0x006785E0, SystemDatas_Z, SystemDatas_Z_vftable_0);
    virtual void SystemDatas_Z_vftable_0();
    char data[152];
};

ADDRESSVFTABLE(0x009D3CE4, cA_TreesObject);
class __declspec(dllexport) cA_TreesObject : public cA_BaseDecorObject
{
public:
    ADDRESSVF(0x007DE870, cA_TreesObject, cA_BaseDecorObject_vftable_0);
    virtual void cA_BaseDecorObject_vftable_0() override;
    ADDRESSVF(0x007DE860, cA_TreesObject, cA_BaseDecorObject_vftable_1);
    virtual void cA_BaseDecorObject_vftable_1() override;
    ADDRESSVF(0x007DE8A0, cA_TreesObject, cA_BaseDecorObject_vftable_6);
    virtual void cA_BaseDecorObject_vftable_6() override;
    ADDRESSSYMBOL(0x007DE880, "?cA_BaseDecorObject_vftable_8@cA_TreesObject@@UAEHXZ");
    virtual int cA_BaseDecorObject_vftable_8() override;
    ADDRESSSYMBOL(0x007847B0, "?cA_BaseDecorObject_vftable_10@cA_TreesObject@@UAEXH@Z");
    virtual void cA_BaseDecorObject_vftable_10(int) override;
};

ADDRESSVFTABLE(0x009D8200, UserObject3D_Z);
class __declspec(dllexport) UserObject3D_Z
{
public:
    ADDRESSVF(0x008498E0, UserObject3D_Z, UserObject3D_Z_vftable_0);
    virtual void UserObject3D_Z_vftable_0();
    virtual void UserObject3D_Z_vftable_1() = 0;
    virtual void UserObject3D_Z_vftable_2() = 0;
    virtual void UserObject3D_Z_vftable_3() = 0;
    virtual void UserObject3D_Z_vftable_4() = 0;
    virtual void UserObject3D_Z_vftable_5() = 0;
    virtual void UserObject3D_Z_vftable_6() = 0;
    virtual void UserObject3D_Z_vftable_7() = 0;
    virtual void UserObject3D_Z_vftable_8() = 0;
    virtual void UserObject3D_Z_vftable_9() = 0;
};

ADDRESSVFTABLE(0x009C16CC, DummyGen);
class __declspec(dllexport) DummyGen
{
public:
    ADDRESSVF(0x005A3830, DummyGen, DummyGen_vftable_0);
    virtual void DummyGen_vftable_0();
    virtual void DummyGen_vftable_1(int);
    ADDRESSVF(0x005A3770, DummyGen, DummyGen_vftable_2);
    virtual void DummyGen_vftable_2();
    ADDRESSVF(0x005A3980, DummyGen, DummyGen_vftable_3);
    virtual void DummyGen_vftable_3();
    ADDRESSVF(0x005A3910, DummyGen, DummyGen_vftable_4);
    virtual void DummyGen_vftable_4();
    ADDRESSVF(0x005A39D0, DummyGen, DummyGen_vftable_5);
    virtual void DummyGen_vftable_5();
    ADDRESSVF(0x005A3AC0, DummyGen, DummyGen_vftable_6);
    virtual void DummyGen_vftable_6();
    virtual char DummyGen_vftable_7();
    virtual char DummyGen_vftable_8();
    virtual char DummyGen_vftable_9();
    virtual char DummyGen_vftable_10();
    virtual int DummyGen_vftable_11() = 0;
    virtual int DummyGen_vftable_12();
    ADDRESSVF(0x005A37D0, DummyGen, DummyGen_vftable_13);
    virtual void DummyGen_vftable_13();
    ADDRESSVF(0x005A37E0, DummyGen, DummyGen_vftable_14);
    virtual void DummyGen_vftable_14();
    ADDRESSVF(0x005A37F0, DummyGen, DummyGen_vftable_15);
    virtual void DummyGen_vftable_15();
};

ADDRESSVFTABLE(0x009A1A10, CommandStateTemplate_G);
class __declspec(dllexport) CommandStateTemplate_G : public StateTemplate_G
{
public:
    ADDRESSVF(0x00424410, CommandStateTemplate_G, StateTemplate_G_vftable_0);
    virtual void StateTemplate_G_vftable_0() override;
    ADDRESSSYMBOL(0x004254F0, "?StateTemplate_G_vftable_1@CommandStateTemplate_G@@UAEXH@Z");
    virtual void StateTemplate_G_vftable_1(int) override;
    ADDRESSSYMBOL(0x00425510, "?StateTemplate_G_vftable_3@CommandStateTemplate_G@@UAEDH@Z");
    virtual char StateTemplate_G_vftable_3(int) override;
};

ADDRESSVFTABLE(0x009A4E18, CGuiEventSubscriber);
class __declspec(dllexport) CGuiEventSubscriber
{
public:
    virtual void CGuiEventSubscriber_vftable_0() = 0;
};

ADDRESSVFTABLE(0x009A1B14, COM_Class_DontMove);
class __declspec(dllexport) COM_Class_DontMove : public CommandStateTemplate_G
{
public:
    ADDRESSVF(0x00424380, COM_Class_DontMove, StateTemplate_G_vftable_0);
    virtual void StateTemplate_G_vftable_0() override;
    ADDRESSSYMBOL(0x00425AB0, "?StateTemplate_G_vftable_3@COM_Class_DontMove@@UAEDH@Z");
    virtual char StateTemplate_G_vftable_3(int) override;
};

ADDRESSVFTABLE(0x009D3C8C, cA_BaseDecorStructure);
class __declspec(dllexport) cA_BaseDecorStructure
{
public:
    ADDRESSVF(0x007DECF0, cA_BaseDecorStructure, cA_BaseDecorStructure_vftable_0);
    virtual void cA_BaseDecorStructure_vftable_0();
    virtual int cA_BaseDecorStructure_vftable_1(int);
    virtual int cA_BaseDecorStructure_vftable_2();
    virtual void cA_BaseDecorStructure_vftable_3(int);
    ADDRESSVF(0x007DEFE0, cA_BaseDecorStructure, cA_BaseDecorStructure_vftable_4);
    virtual void cA_BaseDecorStructure_vftable_4();
};

ADDRESSVFTABLE(0x009C9644, Console_Z);
class __declspec(dllexport) Console_Z
{
public:
    ADDRESSVF(0x0068ED10, Console_Z, Console_Z_vftable_0);
    virtual void Console_Z_vftable_0();
    ADDRESSVF(0x0068ED90, Console_Z, Console_Z_vftable_1);
    virtual void Console_Z_vftable_1();
    virtual char Console_Z_vftable_2();
    ADDRESSVF(0x0068EDD0, Console_Z, Console_Z_vftable_3);
    virtual void Console_Z_vftable_3();
    ADDRESSVF(0x0068F850, Console_Z, Console_Z_vftable_4);
    virtual void Console_Z_vftable_4();
    ADDRESSVF(0x0068F840, Console_Z, Console_Z_vftable_5);
    virtual void Console_Z_vftable_5();
    ADDRESSVF(0x0068F830, Console_Z, Console_Z_vftable_6);
    virtual void Console_Z_vftable_6();
    ADDRESSVF(0x0068EE90, Console_Z, Console_Z_vftable_7);
    virtual void Console_Z_vftable_7();
    ADDRESSVF(0x0068EEA0, Console_Z, Console_Z_vftable_8);
    virtual void Console_Z_vftable_8();
    ADDRESSVF(0x0068EED0, Console_Z, Console_Z_vftable_9);
    virtual void Console_Z_vftable_9();
    ADDRESSVF(0x0068F820, Console_Z, Console_Z_vftable_10);
    virtual void Console_Z_vftable_10();
    virtual void Console_Z_vftable_11(int);
    virtual void Console_Z_vftable_12(int, int);
    ADDRESSVF(0x006DCB80, Console_Z, Console_Z_vftable_13);
    virtual void Console_Z_vftable_13();
    virtual void Console_Z_vftable_14(int);
    ADDRESSVF(0x0068F7E0, Console_Z, Console_Z_vftable_15);
    virtual void Console_Z_vftable_15();
    ADDRESSSYMBOL(0x006DCA60, "?Console_Z_vftable_16@Console_Z@@UAEXHHHHH@Z");
    virtual void Console_Z_vftable_16(int, int, int, int, int);
    ADDRESSVF(0x007C9CB0, Console_Z, Console_Z_vftable_17);
    virtual void Console_Z_vftable_17();
    virtual void Console_Z_vftable_18(int);
    char data[43248];
};

ADDRESSVFTABLE(0x009B1990, PATH_FINDER);
class __declspec(dllexport) PATH_FINDER
{
public:
    virtual void PATH_FINDER_vftable_0() = 0;
    ADDRESSVF(0x004DCB50, PATH_FINDER, PATH_FINDER_vftable_1);
    virtual void PATH_FINDER_vftable_1();
    ADDRESSVF(0x004DCB60, PATH_FINDER, PATH_FINDER_vftable_2);
    virtual void PATH_FINDER_vftable_2();
    ADDRESSVF(0x004DCB70, PATH_FINDER, PATH_FINDER_vftable_3);
    virtual void PATH_FINDER_vftable_3();
    virtual void PATH_FINDER_vftable_4() = 0;
    ADDRESSVF(0x004DCBF0, PATH_FINDER, PATH_FINDER_vftable_5);
    virtual void PATH_FINDER_vftable_5();
    ADDRESSVF(0x0061F230, PATH_FINDER, PATH_FINDER_vftable_6);
    virtual void PATH_FINDER_vftable_6();
    ADDRESSVF(0x004DCC10, PATH_FINDER, PATH_FINDER_vftable_7);
    virtual void PATH_FINDER_vftable_7();
};

ADDRESSVFTABLE(0x009C0C14, CGuiEventMemberSubscriber_class_CListBox_G_);
class __declspec(dllexport) CGuiEventMemberSubscriber_class_CListBox_G_ : public CGuiEventSubscriber
{
public:
    ADDRESSVF(0x0059CAA0, CGuiEventMemberSubscriber_class_CListBox_G_, CGuiEventSubscriber_vftable_0);
    virtual void CGuiEventSubscriber_vftable_0() override;
};

ADDRESSVFTABLE(0x009D3D20, cA_BushesObject);
class __declspec(dllexport) cA_BushesObject : public cA_BaseDecorObject
{
public:
    ADDRESSVF(0x007DE8F0, cA_BushesObject, cA_BaseDecorObject_vftable_0);
    virtual void cA_BaseDecorObject_vftable_0() override;
    ADDRESSVF(0x007DE8E0, cA_BushesObject, cA_BaseDecorObject_vftable_1);
    virtual void cA_BaseDecorObject_vftable_1() override;
    ADDRESSVF(0x007DE920, cA_BushesObject, cA_BaseDecorObject_vftable_6);
    virtual void cA_BaseDecorObject_vftable_6() override;
    ADDRESSSYMBOL(0x007DE900, "?cA_BaseDecorObject_vftable_8@cA_BushesObject@@UAEHXZ");
    virtual int cA_BaseDecorObject_vftable_8() override;
    ADDRESSSYMBOL(0x007880B0, "?cA_BaseDecorObject_vftable_10@cA_BushesObject@@UAEXH@Z");
    virtual void cA_BaseDecorObject_vftable_10(int) override;
};

ADDRESSVFTABLE(0x009BDF4C, CGuiEventMemberSubscriber_class_DialogMenu_G_);
class __declspec(dllexport) CGuiEventMemberSubscriber_class_DialogMenu_G_ : public CGuiEventSubscriber
{
public:
    ADDRESSVF(0x00586D40, CGuiEventMemberSubscriber_class_DialogMenu_G_, CGuiEventSubscriber_vftable_0);
    virtual void CGuiEventSubscriber_vftable_0() override;
};

ADDRESSVFTABLE(0x009C943C, Stream_Z);
class __declspec(dllexport) Stream_Z : public BaseStream_Z
{
public:
    ADDRESSVF(0x0068D960, Stream_Z, BaseStream_Z_vftable_0);
    virtual void BaseStream_Z_vftable_0() override;
    virtual void Stream_Z_vftable_5(int);
    virtual void Stream_Z_vftable_6(int, int, int);
    virtual void Stream_Z_vftable_7();
    virtual void Stream_Z_vftable_8();
    char data[24];
};

ADDRESSVFTABLE(0x009D4C54, WinSndStream_Z);
class __declspec(dllexport) WinSndStream_Z : public BaseStream_Z
{
public:
    ADDRESSVF(0x0081B950, WinSndStream_Z, BaseStream_Z_vftable_0);
    virtual void BaseStream_Z_vftable_0() override;
    ADDRESSSYMBOL(0x00844860, "?BaseStream_Z_vftable_3@WinSndStream_Z@@UAEXHHH@Z");
    virtual void BaseStream_Z_vftable_3(int, int, int) override;
    ADDRESSSYMBOL(0x00844880, "?BaseStream_Z_vftable_4@WinSndStream_Z@@UAEXHHH@Z");
    virtual void BaseStream_Z_vftable_4(int, int, int) override;
};

class __declspec(dllexport) DataEnreg
{
public:
};

ADDRESSVFTABLE(0x009C4F94, IAPathBlock);
class __declspec(dllexport) IAPathBlock
{
public:
    ADDRESSVF(0x00623E80, IAPathBlock, IAPathBlock_vftable_0);
    virtual void IAPathBlock_vftable_0();
    ADDRESSVF(0x00623EC0, IAPathBlock, IAPathBlock_vftable_1);
    virtual void IAPathBlock_vftable_1();
    virtual void IAPathBlock_vftable_2();
    virtual char IAPathBlock_vftable_3(int);
    ADDRESSVF(0x00623F30, IAPathBlock, IAPathBlock_vftable_4);
    virtual void IAPathBlock_vftable_4();
    ADDRESSVF(0x00624000, IAPathBlock, IAPathBlock_vftable_5);
    virtual void IAPathBlock_vftable_5();
    ADDRESSVF(0x006241E0, IAPathBlock, IAPathBlock_vftable_6);
    virtual void IAPathBlock_vftable_6();
};

ADDRESSVFTABLE(0x009C4F44, IAPathFollower_G);
class __declspec(dllexport) IAPathFollower_G
{
public:
    virtual void IAPathFollower_G_vftable_0();
    ADDRESSVF(0x00623340, IAPathFollower_G, IAPathFollower_G_vftable_1);
    virtual void IAPathFollower_G_vftable_1();
    ADDRESSVF(0x006231F0, IAPathFollower_G, IAPathFollower_G_vftable_2);
    virtual void IAPathFollower_G_vftable_2();
    ADDRESSVF(0x00623110, IAPathFollower_G, IAPathFollower_G_vftable_3);
    virtual void IAPathFollower_G_vftable_3();
    ADDRESSVF(0x00623100, IAPathFollower_G, IAPathFollower_G_vftable_4);
    virtual void IAPathFollower_G_vftable_4();
    ADDRESSVF(0x00622EC0, IAPathFollower_G, IAPathFollower_G_vftable_5);
    virtual void IAPathFollower_G_vftable_5();
    ADDRESSVF(0x00622EA0, IAPathFollower_G, IAPathFollower_G_vftable_6);
    virtual void IAPathFollower_G_vftable_6();
    ADDRESSVF(0x00622C90, IAPathFollower_G, IAPathFollower_G_vftable_7);
    virtual void IAPathFollower_G_vftable_7();
    ADDRESSVF(0x00622D00, IAPathFollower_G, IAPathFollower_G_vftable_8);
    virtual void IAPathFollower_G_vftable_8();
    ADDRESSVF(0x00622D70, IAPathFollower_G, IAPathFollower_G_vftable_9);
    virtual void IAPathFollower_G_vftable_9();
    virtual void IAPathFollower_G_vftable_10() = 0;
    ADDRESSVF(0x00622E90, IAPathFollower_G, IAPathFollower_G_vftable_11);
    virtual void IAPathFollower_G_vftable_11();
    ADDRESSVF(0x00622E70, IAPathFollower_G, IAPathFollower_G_vftable_12);
    virtual void IAPathFollower_G_vftable_12();
};

ADDRESSVFTABLE(0x009D361C, Tree_Leaf);
class __declspec(dllexport) Tree_Leaf
{
public:
    ADDRESSVF(0x007C8FC0, Tree_Leaf, Tree_Leaf_vftable_0);
    virtual void Tree_Leaf_vftable_0();
    ADDRESSVF(0x007C8F60, Tree_Leaf, Tree_Leaf_vftable_1);
    virtual void Tree_Leaf_vftable_1();
    ADDRESSVF(0x007C8F80, Tree_Leaf, Tree_Leaf_vftable_2);
    virtual void Tree_Leaf_vftable_2();
    ADDRESSVF(0x007C8FA0, Tree_Leaf, Tree_Leaf_vftable_3);
    virtual void Tree_Leaf_vftable_3();
};

ADDRESSVFTABLE(0x009A1B3C, COM_Class_StayAttack);
class __declspec(dllexport) COM_Class_StayAttack : public CommandStateTemplate_G
{
public:
    ADDRESSVF(0x004243C0, COM_Class_StayAttack, StateTemplate_G_vftable_0);
    virtual void StateTemplate_G_vftable_0() override;
    ADDRESSSYMBOL(0x00425B10, "?StateTemplate_G_vftable_3@COM_Class_StayAttack@@UAEDH@Z");
    virtual char StateTemplate_G_vftable_3(int) override;
};

ADDRESSVFTABLE(0x009C4F0C, IAOnroadFollower_G);
class __declspec(dllexport) IAOnroadFollower_G : public IAPathFollower_G
{
public:
    ADDRESSVF(0x00622C30, IAOnroadFollower_G, IAPathFollower_G_vftable_1);
    virtual void IAPathFollower_G_vftable_1() override;
    virtual void IAPathFollower_G_vftable_2() override;
    ADDRESSVF(0x00622C60, IAOnroadFollower_G, IAPathFollower_G_vftable_3);
    virtual void IAPathFollower_G_vftable_3() override;
    ADDRESSVF(0x00622C80, IAOnroadFollower_G, IAPathFollower_G_vftable_4);
    virtual void IAPathFollower_G_vftable_4() override;
    ADDRESSVF(0x00622240, IAOnroadFollower_G, IAPathFollower_G_vftable_10);
    virtual void IAPathFollower_G_vftable_10() override;
};

ADDRESSVFTABLE(0x009B1A68, PATH_ATV_FINDER);
class __declspec(dllexport) PATH_ATV_FINDER : public PATH_FINDER
{
public:
    ADDRESSVF(0x004DCF40, PATH_ATV_FINDER, PATH_FINDER_vftable_0);
    virtual void PATH_FINDER_vftable_0() override;
    ADDRESSVF(0x0061E6B0, PATH_ATV_FINDER, PATH_FINDER_vftable_1);
    virtual void PATH_FINDER_vftable_1() override;
    ADDRESSVF(0x0061E710, PATH_ATV_FINDER, PATH_FINDER_vftable_2);
    virtual void PATH_FINDER_vftable_2() override;
    ADDRESSVF(0x004DCF90, PATH_ATV_FINDER, PATH_FINDER_vftable_4);
    virtual void PATH_FINDER_vftable_4() override;
    ADDRESSVF(0x004DCFD0, PATH_ATV_FINDER, PATH_FINDER_vftable_5);
    virtual void PATH_FINDER_vftable_5() override;
    ADDRESSVF(0x004DD000, PATH_ATV_FINDER, PATH_FINDER_vftable_7);
    virtual void PATH_FINDER_vftable_7() override;
};

ADDRESSVFTABLE(0x009A9DE4, LiveFriendList_Z);
class __declspec(dllexport) LiveFriendList_Z
{
public:
    ADDRESSVF(0x00484CC0, LiveFriendList_Z, LiveFriendList_Z_vftable_0);
    virtual void LiveFriendList_Z_vftable_0();
};

ADDRESSVFTABLE(0x009C8924, SaveGame_Z);
class __declspec(dllexport) SaveGame_Z
{
public:
    ADDRESSVF(0x00686A80, SaveGame_Z, SaveGame_Z_vftable_0);
    virtual void SaveGame_Z_vftable_0();
    virtual void SaveGame_Z_vftable_1();
    virtual char SaveGame_Z_vftable_2(int, int);
    virtual int SaveGame_Z_vftable_3();
    virtual char SaveGame_Z_vftable_4();
    virtual void SaveGame_Z_vftable_5();
    virtual void SaveGame_Z_vftable_6(int);
    virtual void SaveGame_Z_vftable_7(int);
    virtual void SaveGame_Z_vftable_8(int);
    virtual void SaveGame_Z_vftable_9(int);
    virtual void SaveGame_Z_vftable_10(int);
    virtual void SaveGame_Z_vftable_11(int);
    virtual void SaveGame_Z_vftable_12(int);
    virtual void SaveGame_Z_vftable_13(int);
    virtual int SaveGame_Z_vftable_14(int, int, int);
    virtual int SaveGame_Z_vftable_15(int, int, int);
    virtual int SaveGame_Z_vftable_16(int, int, int);
    virtual int SaveGame_Z_vftable_17(int, int, int);
    virtual int SaveGame_Z_vftable_18(int);
    virtual int SaveGame_Z_vftable_19(int);
    virtual void SaveGame_Z_vftable_20(int, int);
    virtual char SaveGame_Z_vftable_21();
    virtual void SaveGame_Z_vftable_22();
    virtual void SaveGame_Z_vftable_23();
    virtual int SaveGame_Z_vftable_24();
    virtual int SaveGame_Z_vftable_25();
    virtual int SaveGame_Z_vftable_26(int, int);
    ADDRESSVF(0x00686950, SaveGame_Z, SaveGame_Z_vftable_27);
    virtual void SaveGame_Z_vftable_27();
    virtual int SaveGame_Z_vftable_28(int);
    virtual int SaveGame_Z_vftable_29(int, int, int);
    virtual int SaveGame_Z_vftable_30(int);
    ADDRESSVF(0x00686990, SaveGame_Z, SaveGame_Z_vftable_31);
    virtual void SaveGame_Z_vftable_31();
    virtual int SaveGame_Z_vftable_32(int);
    ADDRESSVF(0x006869B0, SaveGame_Z, SaveGame_Z_vftable_33);
    virtual void SaveGame_Z_vftable_33();
    virtual int SaveGame_Z_vftable_34(int, int);
    virtual int SaveGame_Z_vftable_35();
    virtual int SaveGame_Z_vftable_36();
    virtual int SaveGame_Z_vftable_37();
    virtual int SaveGame_Z_vftable_38();
    virtual int SaveGame_Z_vftable_39();
    virtual char SaveGame_Z_vftable_40();
    virtual int SaveGame_Z_vftable_41(int, int);
    virtual void SaveGame_Z_vftable_42();
    virtual void SaveGame_Z_vftable_43(int);
    virtual void SaveGame_Z_vftable_44(int, int);
    char data[1];
};

ADDRESSVFTABLE(0x009CABD0, CompVal_Z);
class __declspec(dllexport) CompVal_Z
{
public:
    ADDRESSVF(0x006C0F30, CompVal_Z, CompVal_Z_vftable_0);
    virtual void CompVal_Z_vftable_0();
    virtual int CompVal_Z_vftable_1() = 0;
    virtual int CompVal_Z_vftable_2() = 0;
    virtual void CompVal_Z_vftable_3() = 0;
    virtual void CompVal_Z_vftable_4() = 0;
};

ADDRESSVFTABLE(0x009C67A4, WorldManager_Z);
class __declspec(dllexport) WorldManager_Z
{
public:
    ADDRESSVF(0x0065B180, WorldManager_Z, WorldManager_Z_vftable_0);
    virtual void WorldManager_Z_vftable_0();
    char data[1];
};

ADDRESSVFTABLE(0x009C6964, GameManager_Z);
class __declspec(dllexport) GameManager_Z
{
public:
    ADDRESSVF(0x00660860, GameManager_Z, GameManager_Z_vftable_0);
    virtual void GameManager_Z_vftable_0();
    char data[1];
};

ADDRESSVFTABLE(0x009C5CA8, SeadHandle_Z);
class __declspec(dllexport) SeadHandle_Z
{
public:
    ADDRESSVF(0x00644330, SeadHandle_Z, SeadHandle_Z_vftable_0);
    virtual void SeadHandle_Z_vftable_0();
    ADDRESSVF(0x00643740, SeadHandle_Z, SeadHandle_Z_vftable_1);
    virtual void SeadHandle_Z_vftable_1();
    ADDRESSVF(0x00643860, SeadHandle_Z, SeadHandle_Z_vftable_2);
    virtual void SeadHandle_Z_vftable_2();
};

ADDRESSVFTABLE(0x009C5094, IAPathBlockHybrid);
class __declspec(dllexport) IAPathBlockHybrid : public IAPathBlock
{
public:
    ADDRESSVF(0x0062A770, IAPathBlockHybrid, IAPathBlock_vftable_0);
    virtual void IAPathBlock_vftable_0() override;
    ADDRESSSYMBOL(0x00625390, "?IAPathBlock_vftable_2@IAPathBlockHybrid@@UAEXXZ");
    virtual void IAPathBlock_vftable_2() override;
    ADDRESSSYMBOL(0x006250F0, "?IAPathBlock_vftable_3@IAPathBlockHybrid@@UAEDH@Z");
    virtual char IAPathBlock_vftable_3(int) override;
    ADDRESSVF(0x006252B0, IAPathBlockHybrid, IAPathBlock_vftable_4);
    virtual void IAPathBlock_vftable_4() override;
    ADDRESSVF(0x006252E0, IAPathBlockHybrid, IAPathBlock_vftable_5);
    virtual void IAPathBlock_vftable_5() override;
    ADDRESSVF(0x00625360, IAPathBlockHybrid, IAPathBlock_vftable_6);
    virtual void IAPathBlock_vftable_6() override;
};

ADDRESSVFTABLE(0x009B1974, PATH_Case);
class __declspec(dllexport) PATH_Case
{
public:
    virtual void PATH_Case_vftable_0(int);
    ADDRESSVF(0x004DD510, PATH_Case, PATH_Case_vftable_1);
    virtual void PATH_Case_vftable_1();
};

ADDRESSVFTABLE(0x009C4288, SpecialEffectsSandTank_G__SandTornado);
class __declspec(dllexport) SpecialEffectsSandTank_G__SandTornado
{
public:
    ADDRESSVF(0x005EBAA0, SpecialEffectsSandTank_G__SandTornado, SpecialEffectsSandTank_G__SandTornado_vftable_0);
    virtual void SpecialEffectsSandTank_G__SandTornado_vftable_0();
};

ADDRESSVFTABLE(0x009ABEDC, SpecialEffectsBaseEmitter_G);
class __declspec(dllexport) SpecialEffectsBaseEmitter_G
{
public:
    ADDRESSVF(0x004BBA30, SpecialEffectsBaseEmitter_G, SpecialEffectsBaseEmitter_G_vftable_0);
    virtual void SpecialEffectsBaseEmitter_G_vftable_0();
    virtual char SpecialEffectsBaseEmitter_G_vftable_1(int);
    ADDRESSVF(0x004BB970, SpecialEffectsBaseEmitter_G, SpecialEffectsBaseEmitter_G_vftable_2);
    virtual void SpecialEffectsBaseEmitter_G_vftable_2();
    ADDRESSVF(0x004BB990, SpecialEffectsBaseEmitter_G, SpecialEffectsBaseEmitter_G_vftable_3);
    virtual void SpecialEffectsBaseEmitter_G_vftable_3();
    ADDRESSVF(0x004BB9A0, SpecialEffectsBaseEmitter_G, SpecialEffectsBaseEmitter_G_vftable_4);
    virtual void SpecialEffectsBaseEmitter_G_vftable_4();
    ADDRESSVF(0x004BB9B0, SpecialEffectsBaseEmitter_G, SpecialEffectsBaseEmitter_G_vftable_5);
    virtual void SpecialEffectsBaseEmitter_G_vftable_5();
    virtual void SpecialEffectsBaseEmitter_G_vftable_6() = 0;
    virtual void SpecialEffectsBaseEmitter_G_vftable_7(int) = 0;
};

ADDRESSVFTABLE(0x009D7C8C, WinPopupMenu_Z);
class __declspec(dllexport) WinPopupMenu_Z : public PopupMenu_Z
{
public:
    ADDRESSVF(0x00845FC0, WinPopupMenu_Z, PopupMenu_Z_vftable_0);
    virtual void PopupMenu_Z_vftable_0() override;
    ADDRESSVF(0x00831C50, WinPopupMenu_Z, PopupMenu_Z_vftable_1);
    virtual void PopupMenu_Z_vftable_1() override;
    ADDRESSVF(0x00831CE0, WinPopupMenu_Z, PopupMenu_Z_vftable_2);
    virtual void PopupMenu_Z_vftable_2() override;
};

ADDRESSVFTABLE(0x009A4EA4, CGuiEventMemberSubscriber_class_Dialog_NetworkAlert_);
class __declspec(dllexport) CGuiEventMemberSubscriber_class_Dialog_NetworkAlert_ : public CGuiEventSubscriber
{
public:
    ADDRESSVF(0x004423C0, CGuiEventMemberSubscriber_class_Dialog_NetworkAlert_, CGuiEventSubscriber_vftable_0);
    virtual void CGuiEventSubscriber_vftable_0() override;
};

ADDRESSVFTABLE(0x009C50B4, IAPathBlockSpline);
class __declspec(dllexport) IAPathBlockSpline : public IAPathBlock
{
public:
    ADDRESSVF(0x0062A660, IAPathBlockSpline, IAPathBlock_vftable_0);
    virtual void IAPathBlock_vftable_0() override;
    ADDRESSSYMBOL(0x006255D0, "?IAPathBlock_vftable_3@IAPathBlockSpline@@UAEDH@Z");
    virtual char IAPathBlock_vftable_3(int) override;
    ADDRESSVF(0x00626730, IAPathBlockSpline, IAPathBlock_vftable_4);
    virtual void IAPathBlock_vftable_4() override;
    ADDRESSVF(0x00626A30, IAPathBlockSpline, IAPathBlock_vftable_5);
    virtual void IAPathBlock_vftable_5() override;
    ADDRESSVF(0x00626EA0, IAPathBlockSpline, IAPathBlock_vftable_6);
    virtual void IAPathBlock_vftable_6() override;
};

ADDRESSVFTABLE(0x009B32F0, VisibleObjectContainer);
class __declspec(dllexport) VisibleObjectContainer
{
public:
    ADDRESSVF(0x004FD3F0, VisibleObjectContainer, VisibleObjectContainer_vftable_0);
    virtual void VisibleObjectContainer_vftable_0();
    virtual void VisibleObjectContainer_vftable_1(int);
    virtual void VisibleObjectContainer_vftable_2();
    virtual void VisibleObjectContainer_vftable_3(int, int);
    virtual void VisibleObjectContainer_vftable_4(int, int);
};

ADDRESSVFTABLE(0x009D43E8, MaterialUser_Z);
class __declspec(dllexport) MaterialUser_Z
{
public:
    ADDRESSVF(0x00805830, MaterialUser_Z, MaterialUser_Z_vftable_0);
    virtual void MaterialUser_Z_vftable_0();
    virtual void MaterialUser_Z_vftable_1() = 0;
    virtual void MaterialUser_Z_vftable_2() = 0;
};

ADDRESSVFTABLE(0x009B13A4, BaseObject_Z);
class __declspec(dllexport) BaseObject_Z
{
public:
    virtual void BaseObject_Z_vftable_0();
    virtual void BaseObject_Z_vftable_1();
    ADDRESSVF(0x004DF820, BaseObject_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2();
    virtual void BaseObject_Z_vftable_3(int);
    virtual void BaseObject_Z_vftable_4();
    virtual void BaseObject_Z_vftable_5();
    virtual void BaseObject_Z_vftable_6();
    ADDRESSVF(0x00638300, BaseObject_Z, BaseObject_Z_vftable_7);
    virtual void BaseObject_Z_vftable_7();
    virtual void BaseObject_Z_vftable_8();
    virtual void BaseObject_Z_vftable_9();
    ADDRESSVF(0x006380E0, BaseObject_Z, BaseObject_Z_vftable_10);
    virtual void BaseObject_Z_vftable_10();
    ADDRESSVF(0x00638250, BaseObject_Z, BaseObject_Z_vftable_11);
    virtual void BaseObject_Z_vftable_11();
    virtual void BaseObject_Z_vftable_12();
    ADDRESSVF(0x00638090, BaseObject_Z, BaseObject_Z_vftable_13);
    virtual void BaseObject_Z_vftable_13();
    char data[8];
};

ADDRESSVFTABLE(0x009C6B04, Manipulator_Z);
class __declspec(dllexport) Manipulator_Z : public BaseObject_Z
{
public:
    ADDRESSSYMBOL(0x00665CA0, "?BaseObject_Z_vftable_0@Manipulator_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x00665C30, Manipulator_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    virtual void Manipulator_Z_vftable_14();
    virtual void Manipulator_Z_vftable_15();
    virtual void Manipulator_Z_vftable_16();
    virtual void Manipulator_Z_vftable_17(int) = 0;
    char data[20];
};

ADDRESSVFTABLE(0x009DBEF0, PopupItem_Z);
class __declspec(dllexport) PopupItem_Z
{
public:
    ADDRESSVF(0x00880710, PopupItem_Z, PopupItem_Z_vftable_0);
    virtual void PopupItem_Z_vftable_0();
};

ADDRESSVFTABLE(0x009C1594, CGuiEventMemberSubscriber_class_CWindow_G_);
class __declspec(dllexport) CGuiEventMemberSubscriber_class_CWindow_G_ : public CGuiEventSubscriber
{
public:
    ADDRESSVF(0x005A2330, CGuiEventMemberSubscriber_class_CWindow_G_, CGuiEventSubscriber_vftable_0);
    virtual void CGuiEventSubscriber_vftable_0() override;
};

ADDRESSVFTABLE(0x009D43D8, WaterHeightMap_Z);
class __declspec(dllexport) WaterHeightMap_Z : public MaterialUser_Z
{
public:
    ADDRESSVF(0x00805470, WaterHeightMap_Z, MaterialUser_Z_vftable_0);
    virtual void MaterialUser_Z_vftable_0() override;
    ADDRESSVF(0x008054B0, WaterHeightMap_Z, MaterialUser_Z_vftable_1);
    virtual void MaterialUser_Z_vftable_1() override;
    ADDRESSVF(0x00805620, WaterHeightMap_Z, MaterialUser_Z_vftable_2);
    virtual void MaterialUser_Z_vftable_2() override;
};

ADDRESSVFTABLE(0x009C49B4, Keyboard_G);
class __declspec(dllexport) Keyboard_G
{
public:
    ADDRESSVF(0x0060EBA0, Keyboard_G, Keyboard_G_vftable_0);
    virtual void Keyboard_G_vftable_0();
};

ADDRESSVFTABLE(0x009C3DF4, ObjConstant_Z);
class __declspec(dllexport) ObjConstant_Z
{
public:
    ADDRESSVF(0x005DD620, ObjConstant_Z, ObjConstant_Z_vftable_0);
    virtual void ObjConstant_Z_vftable_0();
    ADDRESSSYMBOL(0x00826D40, "?ObjConstant_Z_vftable_1@ObjConstant_Z@@UAEXHH@Z");
    virtual void ObjConstant_Z_vftable_1(int, int);
};

ADDRESSVFTABLE(0x009D3E14, cA_GrassObject);
class __declspec(dllexport) cA_GrassObject : public cA_BaseDecorObject
{
public:
    ADDRESSVF(0x007F7980, cA_GrassObject, cA_BaseDecorObject_vftable_6);
    virtual void cA_BaseDecorObject_vftable_6() override;
    ADDRESSVF(0x007DD910, cA_GrassObject, cA_GrassObject_vftable_14);
    virtual void cA_GrassObject_vftable_14();
};

ADDRESSVFTABLE(0x009C0380, CGuiEventMemberSubscriber_class_Dialog_MsgBox_);
class __declspec(dllexport) CGuiEventMemberSubscriber_class_Dialog_MsgBox_ : public CGuiEventSubscriber
{
public:
    ADDRESSVF(0x00595F80, CGuiEventMemberSubscriber_class_Dialog_MsgBox_, CGuiEventSubscriber_vftable_0);
    virtual void CGuiEventSubscriber_vftable_0() override;
};

ADDRESSVFTABLE(0x009A1B00, COM_Class_GoSquare);
class __declspec(dllexport) COM_Class_GoSquare : public CommandStateTemplate_G
{
public:
    ADDRESSVF(0x00424360, COM_Class_GoSquare, StateTemplate_G_vftable_0);
    virtual void StateTemplate_G_vftable_0() override;
    ADDRESSSYMBOL(0x00425A80, "?StateTemplate_G_vftable_3@COM_Class_GoSquare@@UAEDH@Z");
    virtual char StateTemplate_G_vftable_3(int) override;
};

ADDRESSVFTABLE(0x009D6440, MtlConstant_Z);
class __declspec(dllexport) MtlConstant_Z : public ObjConstant_Z
{
public:
    ADDRESSVF(0x0082CD10, MtlConstant_Z, ObjConstant_Z_vftable_0);
    virtual void ObjConstant_Z_vftable_0() override;
};

ADDRESSVFTABLE(0x009C5624, ABC_Agent);
class __declspec(dllexport) ABC_Agent : public BaseObject_Z
{
public:
    ADDRESSVF(0x00635F90, ABC_Agent, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    virtual int ABC_Agent_vftable_14();
    virtual void ABC_Agent_vftable_15() = 0;
    virtual void ABC_Agent_vftable_16(int);
    ADDRESSVF(0x004018D0, ABC_Agent, ABC_Agent_vftable_17);
    virtual void ABC_Agent_vftable_17();
    virtual void ABC_Agent_vftable_18();
    virtual void ABC_Agent_vftable_19();
};

ADDRESSVFTABLE(0x009C6A4C, Mat4x4Buffer_Z);
class __declspec(dllexport) Mat4x4Buffer_Z
{
public:
    ADDRESSVF(0x00662240, Mat4x4Buffer_Z, Mat4x4Buffer_Z_vftable_0);
    virtual void Mat4x4Buffer_Z_vftable_0();
};

ADDRESSVFTABLE(0x009C39C4, SpecialEffectsEmitter_G_class_SpecialEffectsQuad_G_);
class __declspec(dllexport) SpecialEffectsEmitter_G_class_SpecialEffectsQuad_G_ : public SpecialEffectsBaseEmitter_G
{
public:
    ADDRESSVF(0x005D19F0, SpecialEffectsEmitter_G_class_SpecialEffectsQuad_G_, SpecialEffectsBaseEmitter_G_vftable_0);
    virtual void SpecialEffectsBaseEmitter_G_vftable_0() override;
    virtual char SpecialEffectsBaseEmitter_G_vftable_1(int) override;
    ADDRESSVF(0x005D2800, SpecialEffectsEmitter_G_class_SpecialEffectsQuad_G_, SpecialEffectsBaseEmitter_G_vftable_2);
    virtual void SpecialEffectsBaseEmitter_G_vftable_2() override;
    ADDRESSVF(0x005D18F0, SpecialEffectsEmitter_G_class_SpecialEffectsQuad_G_, SpecialEffectsBaseEmitter_G_vftable_3);
    virtual void SpecialEffectsBaseEmitter_G_vftable_3() override;
    ADDRESSVF(0x005D27D0, SpecialEffectsEmitter_G_class_SpecialEffectsQuad_G_, SpecialEffectsBaseEmitter_G_vftable_4);
    virtual void SpecialEffectsBaseEmitter_G_vftable_4() override;
    ADDRESSVF(0x005D18C0, SpecialEffectsEmitter_G_class_SpecialEffectsQuad_G_, SpecialEffectsBaseEmitter_G_vftable_5);
    virtual void SpecialEffectsBaseEmitter_G_vftable_5() override;
    ADDRESSVF(0x005D2500, SpecialEffectsEmitter_G_class_SpecialEffectsQuad_G_, SpecialEffectsBaseEmitter_G_vftable_6);
    virtual void SpecialEffectsBaseEmitter_G_vftable_6() override;
    ADDRESSSYMBOL(0x005D1850, "?SpecialEffectsBaseEmitter_G_vftable_7@SpecialEffectsEmitter_G_class_SpecialEffectsQuad_G_@@UAEXH@Z");
    virtual void SpecialEffectsBaseEmitter_G_vftable_7(int) override;
    ADDRESSVF(0x005D2830, SpecialEffectsEmitter_G_class_SpecialEffectsQuad_G_, SpecialEffectsEmitter_G_class_SpecialEffectsQuad_G__vftable_8);
    virtual void SpecialEffectsEmitter_G_class_SpecialEffectsQuad_G__vftable_8();
    ADDRESSVF(0x005D2AC0, SpecialEffectsEmitter_G_class_SpecialEffectsQuad_G_, SpecialEffectsEmitter_G_class_SpecialEffectsQuad_G__vftable_9);
    virtual void SpecialEffectsEmitter_G_class_SpecialEffectsQuad_G__vftable_9();
    ADDRESSVF(0x005D2BB0, SpecialEffectsEmitter_G_class_SpecialEffectsQuad_G_, SpecialEffectsEmitter_G_class_SpecialEffectsQuad_G__vftable_10);
    virtual void SpecialEffectsEmitter_G_class_SpecialEffectsQuad_G__vftable_10();
    ADDRESSVF(0x005D2C00, SpecialEffectsEmitter_G_class_SpecialEffectsQuad_G_, SpecialEffectsEmitter_G_class_SpecialEffectsQuad_G__vftable_11);
    virtual void SpecialEffectsEmitter_G_class_SpecialEffectsQuad_G__vftable_11();
    ADDRESSVF(0x005D2E50, SpecialEffectsEmitter_G_class_SpecialEffectsQuad_G_, SpecialEffectsEmitter_G_class_SpecialEffectsQuad_G__vftable_12);
    virtual void SpecialEffectsEmitter_G_class_SpecialEffectsQuad_G__vftable_12();
};

ADDRESSVFTABLE(0x009D3630, Tree_Impostor);
class __declspec(dllexport) Tree_Impostor : public Tree_Leaf
{
public:
    ADDRESSVF(0x007C9070, Tree_Impostor, Tree_Leaf_vftable_0);
    virtual void Tree_Leaf_vftable_0() override;
    ADDRESSVF(0x007C9010, Tree_Impostor, Tree_Leaf_vftable_1);
    virtual void Tree_Leaf_vftable_1() override;
    ADDRESSVF(0x007C9030, Tree_Impostor, Tree_Leaf_vftable_2);
    virtual void Tree_Leaf_vftable_2() override;
    ADDRESSVF(0x007C9050, Tree_Impostor, Tree_Leaf_vftable_3);
    virtual void Tree_Leaf_vftable_3() override;
};

ADDRESSVFTABLE(0x009C5034, IAPathBlockCheckpoint);
class __declspec(dllexport) IAPathBlockCheckpoint : public IAPathBlock
{
public:
    ADDRESSVF(0x0062A710, IAPathBlockCheckpoint, IAPathBlock_vftable_0);
    virtual void IAPathBlock_vftable_0() override;
    ADDRESSVF(0x00624210, IAPathBlockCheckpoint, IAPathBlock_vftable_4);
    virtual void IAPathBlock_vftable_4() override;
    ADDRESSVF(0x006242E0, IAPathBlockCheckpoint, IAPathBlock_vftable_5);
    virtual void IAPathBlock_vftable_5() override;
};

ADDRESSVFTABLE(0x009C89F4, XRamManager_Z);
class __declspec(dllexport) XRamManager_Z
{
public:
    ADDRESSVF(0x00686BA0, XRamManager_Z, XRamManager_Z_vftable_0);
    virtual void XRamManager_Z_vftable_0();
    virtual char XRamManager_Z_vftable_1();
    virtual void XRamManager_Z_vftable_2();
    virtual void XRamManager_Z_vftable_3(int);
    virtual void XRamManager_Z_vftable_4();
    virtual void XRamManager_Z_vftable_5();
    virtual int XRamManager_Z_vftable_6();
    ADDRESSVF(0x00686B10, XRamManager_Z, XRamManager_Z_vftable_7);
    virtual void XRamManager_Z_vftable_7();
    virtual int XRamManager_Z_vftable_8(int);
    virtual int XRamManager_Z_vftable_9(int);
    virtual void XRamManager_Z_vftable_10(int);
    virtual void XRamManager_Z_vftable_11(int, int);
    virtual int XRamManager_Z_vftable_12(int, int);
    ADDRESSVF(0x00686B70, XRamManager_Z, XRamManager_Z_vftable_13);
    virtual void XRamManager_Z_vftable_13();
    virtual void XRamManager_Z_vftable_14(int, int, int, int);
    virtual void XRamManager_Z_vftable_15(int, int, int, int);
};

ADDRESSVFTABLE(0x009D0A0C, OccludedSeadHandle_Z);
class __declspec(dllexport) OccludedSeadHandle_Z : public SeadHandle_Z
{
public:
    ADDRESSVF(0x00752510, OccludedSeadHandle_Z, SeadHandle_Z_vftable_0);
    virtual void SeadHandle_Z_vftable_0() override;
};

ADDRESSVFTABLE(0x009D0A1C, ShadowMatricesConstant_Z);
class __declspec(dllexport) ShadowMatricesConstant_Z : public ObjConstant_Z
{
public:
    ADDRESSVF(0x007596B0, ShadowMatricesConstant_Z, ObjConstant_Z_vftable_0);
    virtual void ObjConstant_Z_vftable_0() override;
};

ADDRESSVFTABLE(0x009C940C, Globals);
class __declspec(dllexport) Globals
{
public:
    ADDRESSVF(0x0068D7D0, Globals, Globals_vftable_0);
    virtual void Globals_vftable_0();
    virtual char Globals_vftable_1(int, int);
    virtual void Globals_vftable_2();
    ADDRESSVF(0x0068B0D0, Globals, Globals_vftable_3);
    virtual void Globals_vftable_3();
    virtual int Globals_vftable_4();
    char data[4884];
};

ADDRESSVFTABLE(0x009DB32C, ComNet_Z);
class __declspec(dllexport) ComNet_Z
{
public:
    virtual void ComNet_Z_vftable_0() = 0;
    virtual void ComNet_Z_vftable_1() = 0;
    virtual int ComNet_Z_vftable_2();
    ADDRESSVF(0x00879A70, ComNet_Z, ComNet_Z_vftable_3);
    virtual void ComNet_Z_vftable_3();
    ADDRESSVF(0x00879A60, ComNet_Z, ComNet_Z_vftable_4);
    virtual void ComNet_Z_vftable_4();
    ADDRESSVF(0x00879AE0, ComNet_Z, ComNet_Z_vftable_5);
    virtual void ComNet_Z_vftable_5();
    virtual int ComNet_Z_vftable_6(char FAR * name, int namelen) = 0;
    virtual void ComNet_Z_vftable_7() = 0;
    virtual void ComNet_Z_vftable_8() = 0;
    virtual void ComNet_Z_vftable_9() = 0;
    virtual void ComNet_Z_vftable_10() = 0;
    virtual char ComNet_Z_vftable_11(int) = 0;
    virtual char ComNet_Z_vftable_12(int) = 0;
    virtual char ComNet_Z_vftable_13(int) = 0;
    virtual void ComNet_Z_vftable_14() = 0;
    virtual void ComNet_Z_vftable_15() = 0;
    virtual void ComNet_Z_vftable_16() = 0;
    virtual void ComNet_Z_vftable_17() = 0;
    ADDRESSVF(0x0087FBB0, ComNet_Z, ComNet_Z_vftable_18);
    virtual void ComNet_Z_vftable_18();
};

ADDRESSVFTABLE(0x009C3EDC, SpecialEffectsParticle_G);
class __declspec(dllexport) SpecialEffectsParticle_G
{
public:
    ADDRESSVF(0x005DEDA0, SpecialEffectsParticle_G, SpecialEffectsParticle_G_vftable_0);
    virtual void SpecialEffectsParticle_G_vftable_0();
    ADDRESSVF(0x005DECA0, SpecialEffectsParticle_G, SpecialEffectsParticle_G_vftable_1);
    virtual void SpecialEffectsParticle_G_vftable_1();
};

ADDRESSVFTABLE(0x009CAC78, CompValVec31k_48_Z);
class __declspec(dllexport) CompValVec31k_48_Z : public CompVal_Z
{
public:
    ADDRESSVF(0x006C27F0, CompValVec31k_48_Z, CompVal_Z_vftable_0);
    virtual void CompVal_Z_vftable_0() override;
    virtual int CompVal_Z_vftable_1() override;
    virtual int CompVal_Z_vftable_2() override;
    ADDRESSVF(0x006C1420, CompValVec31k_48_Z, CompVal_Z_vftable_3);
    virtual void CompVal_Z_vftable_3() override;
    ADDRESSVF(0x006C1450, CompValVec31k_48_Z, CompVal_Z_vftable_4);
    virtual void CompVal_Z_vftable_4() override;
};

ADDRESSVFTABLE(0x009D3DDC, cA_ContainerDecorStructure);
class __declspec(dllexport) cA_ContainerDecorStructure : public cA_BaseDecorStructure
{
public:
    ADDRESSVF(0x007E0770, cA_ContainerDecorStructure, cA_BaseDecorStructure_vftable_0);
    virtual void cA_BaseDecorStructure_vftable_0() override;
    ADDRESSSYMBOL(0x007DED20, "?cA_BaseDecorStructure_vftable_1@cA_ContainerDecorStructure@@UAEHH@Z");
    virtual int cA_BaseDecorStructure_vftable_1(int) override;
    ADDRESSSYMBOL(0x007E06C0, "?cA_BaseDecorStructure_vftable_2@cA_ContainerDecorStructure@@UAEHXZ");
    virtual int cA_BaseDecorStructure_vftable_2() override;
    ADDRESSSYMBOL(0x007E06F0, "?cA_BaseDecorStructure_vftable_3@cA_ContainerDecorStructure@@UAEXH@Z");
    virtual void cA_BaseDecorStructure_vftable_3(int) override;
};

ADDRESSVFTABLE(0x009CAC30, CompValVec2100k_48_Z);
class __declspec(dllexport) CompValVec2100k_48_Z : public CompVal_Z
{
public:
    ADDRESSVF(0x006C2770, CompValVec2100k_48_Z, CompVal_Z_vftable_0);
    virtual void CompVal_Z_vftable_0() override;
    virtual int CompVal_Z_vftable_1() override;
    virtual int CompVal_Z_vftable_2() override;
    ADDRESSVF(0x006C1200, CompValVec2100k_48_Z, CompVal_Z_vftable_3);
    virtual void CompVal_Z_vftable_3() override;
    ADDRESSVF(0x006C1220, CompValVec2100k_48_Z, CompVal_Z_vftable_4);
    virtual void CompVal_Z_vftable_4() override;
};

ADDRESSVFTABLE(0x009BFD98, CGuiEventMemberSubscriber_class_Dialog_CHANGELEVELDEMO_);
class __declspec(dllexport) CGuiEventMemberSubscriber_class_Dialog_CHANGELEVELDEMO_ : public CGuiEventSubscriber
{
public:
    ADDRESSVF(0x0058F0F0, CGuiEventMemberSubscriber_class_Dialog_CHANGELEVELDEMO_, CGuiEventSubscriber_vftable_0);
    virtual void CGuiEventSubscriber_vftable_0() override;
};

ADDRESSVFTABLE(0x009B172C, ComWorld_Z);
class __declspec(dllexport) ComWorld_Z
{
public:
    ADDRESSVF(0x004DFFD0, ComWorld_Z, ComWorld_Z_vftable_0);
    virtual void ComWorld_Z_vftable_0();
    ADDRESSVF(0x004DB310, ComWorld_Z, ComWorld_Z_vftable_1);
    virtual void ComWorld_Z_vftable_1();
    virtual void ComWorld_Z_vftable_2() = 0;
    virtual void ComWorld_Z_vftable_3(int);
    ADDRESSVF(0x007285D0, ComWorld_Z, ComWorld_Z_vftable_4);
    virtual void ComWorld_Z_vftable_4();
    ADDRESSVF(0x007285C0, ComWorld_Z, ComWorld_Z_vftable_5);
    virtual void ComWorld_Z_vftable_5();
};

ADDRESSVFTABLE(0x009A493C, SplashScreenFx_G);
class __declspec(dllexport) SplashScreenFx_G : public FlashScreenFx_G
{
public:
    ADDRESSVF(0x0043ECF0, SplashScreenFx_G, FlashScreenFx_G_vftable_0);
    virtual void FlashScreenFx_G_vftable_0() override;
    ADDRESSVF(0x0043EDC0, SplashScreenFx_G, FlashScreenFx_G_vftable_1);
    virtual void FlashScreenFx_G_vftable_1() override;
};

ADDRESSVFTABLE(0x009C88DC, Movie_Z);
class __declspec(dllexport) Movie_Z
{
public:
    ADDRESSVF(0x00687920, Movie_Z, Movie_Z_vftable_0);
    virtual void Movie_Z_vftable_0();
    ADDRESSVF(0x00693F40, Movie_Z, Movie_Z_vftable_1);
    virtual void Movie_Z_vftable_1();
    ADDRESSVF(0x00693FC0, Movie_Z, Movie_Z_vftable_2);
    virtual void Movie_Z_vftable_2();
    ADDRESSVF(0x00694040, Movie_Z, Movie_Z_vftable_3);
    virtual void Movie_Z_vftable_3();
    ADDRESSVF(0x00694480, Movie_Z, Movie_Z_vftable_4);
    virtual void Movie_Z_vftable_4();
    ADDRESSVF(0x006944F0, Movie_Z, Movie_Z_vftable_5);
    virtual void Movie_Z_vftable_5();
    virtual void *Movie_Z_vftable_6();
    virtual char Movie_Z_vftable_7(int, int);
    virtual void Movie_Z_vftable_8();
    virtual void Movie_Z_vftable_9();
    virtual void Movie_Z_vftable_10();
    virtual void Movie_Z_vftable_11();
    ADDRESSVF(0x00694550, Movie_Z, Movie_Z_vftable_12);
    virtual void Movie_Z_vftable_12();
    virtual void Movie_Z_vftable_13(int);
    virtual void Movie_Z_vftable_14(int);
    ADDRESSVF(0x006945A0, Movie_Z, Movie_Z_vftable_15);
    virtual void Movie_Z_vftable_15();
    char data[1];
};

ADDRESSVFTABLE(0x009A1AEC, COM_Class_GoLine);
class __declspec(dllexport) COM_Class_GoLine : public CommandStateTemplate_G
{
public:
    ADDRESSVF(0x00424340, COM_Class_GoLine, StateTemplate_G_vftable_0);
    virtual void StateTemplate_G_vftable_0() override;
    ADDRESSSYMBOL(0x00425A50, "?StateTemplate_G_vftable_3@COM_Class_GoLine@@UAEDH@Z");
    virtual char StateTemplate_G_vftable_3(int) override;
};

ADDRESSVFTABLE(0x009D0A94, TrophyManager_Z);
class __declspec(dllexport) TrophyManager_Z : public NetPlayModule_Z
{
public:
    virtual char NetPlayModule_Z_vftable_0() override = 0;
    ADDRESSSYMBOL(0x00759CD0, "?NetPlayModule_Z_vftable_1@TrophyManager_Z@@UAEXH@Z");
    virtual void NetPlayModule_Z_vftable_1(int) override;
    virtual char NetPlayModule_Z_vftable_2() override = 0;
    ADDRESSVF(0x00759C90, TrophyManager_Z, TrophyManager_Z_vftable_3);
    virtual void TrophyManager_Z_vftable_3();
    virtual int TrophyManager_Z_vftable_4(int);
    virtual void TrophyManager_Z_vftable_5(int);
    virtual char TrophyManager_Z_vftable_6();
    virtual void TrophyManager_Z_vftable_7();
    virtual void TrophyManager_Z_vftable_8() = 0;
    virtual void TrophyManager_Z_vftable_9() = 0;
    virtual void TrophyManager_Z_vftable_10();
};

ADDRESSVFTABLE(0x009D7C3C, WinConsole_Z);
class __declspec(dllexport) WinConsole_Z : public Console_Z
{
public:
    ADDRESSVF(0x00845F80, WinConsole_Z, Console_Z_vftable_0);
    virtual void Console_Z_vftable_0() override;
    ADDRESSSYMBOL(0x00846240, "?Console_Z_vftable_2@WinConsole_Z@@UAEDXZ");
    virtual char Console_Z_vftable_2() override;
    ADDRESSVF(0x00846250, WinConsole_Z, Console_Z_vftable_3);
    virtual void Console_Z_vftable_3() override;
    ADDRESSVF(0x00846280, WinConsole_Z, Console_Z_vftable_6);
    virtual void Console_Z_vftable_6() override;
    ADDRESSVF(0x00846290, WinConsole_Z, Console_Z_vftable_7);
    virtual void Console_Z_vftable_7() override;
    ADDRESSVF(0x00872450, WinConsole_Z, Console_Z_vftable_8);
    virtual void Console_Z_vftable_8() override;
    ADDRESSSYMBOL(0x00872880, "?Console_Z_vftable_11@WinConsole_Z@@UAEXH@Z");
    virtual void Console_Z_vftable_11(int) override;
    ADDRESSSYMBOL(0x008462A0, "?Console_Z_vftable_12@WinConsole_Z@@UAEXHH@Z");
    virtual void Console_Z_vftable_12(int, int) override;
    ADDRESSSYMBOL(0x00846380, "?Console_Z_vftable_14@WinConsole_Z@@UAEXH@Z");
    virtual void Console_Z_vftable_14(int) override;
    ADDRESSVF(0x00846410, WinConsole_Z, Console_Z_vftable_15);
    virtual void Console_Z_vftable_15() override;
    virtual void Console_Z_vftable_16(int, int, int, int, int) override;
    char data[140];
};

ADDRESSVFTABLE(0x009D565C, WinGlobals);
class __declspec(dllexport) WinGlobals : public Globals
{
public:
    ADDRESSVF(0x00820290, WinGlobals, Globals_vftable_0);
    virtual void Globals_vftable_0() override;
    ADDRESSVF(0x00820B50, WinGlobals, Globals_vftable_3);
    virtual void Globals_vftable_3() override;
    char data[1132];
};

ADDRESSVFTABLE(0x009C4324, SpecialEffectsWheelEmitter_G);
class __declspec(dllexport) SpecialEffectsWheelEmitter_G : public SpecialEffectsBaseEmitter_G
{
public:
    ADDRESSVF(0x005EFBC0, SpecialEffectsWheelEmitter_G, SpecialEffectsBaseEmitter_G_vftable_0);
    virtual void SpecialEffectsBaseEmitter_G_vftable_0() override;
    ADDRESSVF(0x005F0A20, SpecialEffectsWheelEmitter_G, SpecialEffectsBaseEmitter_G_vftable_2);
    virtual void SpecialEffectsBaseEmitter_G_vftable_2() override;
    ADDRESSVF(0x005F0A90, SpecialEffectsWheelEmitter_G, SpecialEffectsBaseEmitter_G_vftable_3);
    virtual void SpecialEffectsBaseEmitter_G_vftable_3() override;
    ADDRESSVF(0x005F0AF0, SpecialEffectsWheelEmitter_G, SpecialEffectsBaseEmitter_G_vftable_4);
    virtual void SpecialEffectsBaseEmitter_G_vftable_4() override;
    ADDRESSVF(0x005F0C20, SpecialEffectsWheelEmitter_G, SpecialEffectsBaseEmitter_G_vftable_5);
    virtual void SpecialEffectsBaseEmitter_G_vftable_5() override;
    ADDRESSVF(0x005F0B50, SpecialEffectsWheelEmitter_G, SpecialEffectsBaseEmitter_G_vftable_6);
    virtual void SpecialEffectsBaseEmitter_G_vftable_6() override;
    virtual void SpecialEffectsBaseEmitter_G_vftable_7(int) override;
    ADDRESSVF(0x005F0EF0, SpecialEffectsWheelEmitter_G, SpecialEffectsWheelEmitter_G_vftable_8);
    virtual void SpecialEffectsWheelEmitter_G_vftable_8();
};

ADDRESSVFTABLE(0x009D271C, SequenceAnim_Z);
class __declspec(dllexport) SequenceAnim_Z : public BaseObject_Z
{
public:
    ADDRESSVF(0x007B1480, SequenceAnim_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSVF(0x007B1540, SequenceAnim_Z, SequenceAnim_Z_vftable_14);
    virtual void SequenceAnim_Z_vftable_14();
    ADDRESSVF(0x007B17B0, SequenceAnim_Z, SequenceAnim_Z_vftable_15);
    virtual void SequenceAnim_Z_vftable_15();
    ADDRESSVF(0x007B1740, SequenceAnim_Z, SequenceAnim_Z_vftable_16);
    virtual void SequenceAnim_Z_vftable_16();
    ADDRESSVF(0x007B1650, SequenceAnim_Z, SequenceAnim_Z_vftable_17);
    virtual void SequenceAnim_Z_vftable_17();
    ADDRESSVF(0x007B16B0, SequenceAnim_Z, SequenceAnim_Z_vftable_18);
    virtual void SequenceAnim_Z_vftable_18();
    ADDRESSVF(0x007B1700, SequenceAnim_Z, SequenceAnim_Z_vftable_19);
    virtual void SequenceAnim_Z_vftable_19();
    virtual int SequenceAnim_Z_vftable_20();
    char data[304];
};

ADDRESSVFTABLE(0x009A1A60, COM_Class_WaitFor);
class __declspec(dllexport) COM_Class_WaitFor : public CommandStateTemplate_G
{
public:
    ADDRESSVF(0x00424260, COM_Class_WaitFor, StateTemplate_G_vftable_0);
    virtual void StateTemplate_G_vftable_0() override;
    ADDRESSSYMBOL(0x00425780, "?StateTemplate_G_vftable_3@COM_Class_WaitFor@@UAEDH@Z");
    virtual char StateTemplate_G_vftable_3(int) override;
};

ADDRESSVFTABLE(0x009C3E00, UserConstant_Z);
class __declspec(dllexport) UserConstant_Z : public ObjConstant_Z
{
public:
    ADDRESSVF(0x005DD650, UserConstant_Z, ObjConstant_Z_vftable_0);
    virtual void ObjConstant_Z_vftable_0() override;
};

ADDRESSVFTABLE(0x009CCA58, Compressor_Z);
class __declspec(dllexport) Compressor_Z
{
public:
    virtual void Compressor_Z_vftable_0() = 0;
    virtual void Compressor_Z_vftable_1() = 0;
};

ADDRESSVFTABLE(0x009C49E4, MenuItem_G);
class __declspec(dllexport) MenuItem_G
{
public:
    ADDRESSVF(0x00610420, MenuItem_G, MenuItem_G_vftable_0);
    virtual void MenuItem_G_vftable_0();
    ADDRESSVF(0x00610500, MenuItem_G, MenuItem_G_vftable_1);
    virtual void MenuItem_G_vftable_1();
    virtual void MenuItem_G_vftable_2(int);
    virtual void MenuItem_G_vftable_3(int);
    virtual void MenuItem_G_vftable_4();
    ADDRESSVF(0x006108D0, MenuItem_G, MenuItem_G_vftable_5);
    virtual void MenuItem_G_vftable_5();
    virtual int MenuItem_G_vftable_6();
    ADDRESSVF(0x006102D0, MenuItem_G, MenuItem_G_vftable_7);
    virtual void MenuItem_G_vftable_7();
    ADDRESSVF(0x006102F0, MenuItem_G, MenuItem_G_vftable_8);
    virtual void MenuItem_G_vftable_8();
    ADDRESSVF(0x006102A0, MenuItem_G, MenuItem_G_vftable_9);
    virtual void MenuItem_G_vftable_9();
};

ADDRESSVFTABLE(0x009D8C60, ShaderDecl_Z);
class __declspec(dllexport) ShaderDecl_Z
{
public:
    ADDRESSVF(0x00853E40, ShaderDecl_Z, ShaderDecl_Z_vftable_0);
    virtual void ShaderDecl_Z_vftable_0();
    ADDRESSVF(0x00853E70, ShaderDecl_Z, ShaderDecl_Z_vftable_1);
    virtual void ShaderDecl_Z_vftable_1();
    virtual void ShaderDecl_Z_vftable_2();
};

ADDRESSVFTABLE(0x009D64B8, BlendMatPacket_Z);
class __declspec(dllexport) BlendMatPacket_Z : public ObjConstant_Z
{
public:
    ADDRESSVF(0x0082B030, BlendMatPacket_Z, ObjConstant_Z_vftable_0);
    virtual void ObjConstant_Z_vftable_0() override;
};

ADDRESSVFTABLE(0x009B1774, ObjectGame_Z);
class __declspec(dllexport) ObjectGame_Z : public Manipulator_Z
{
public:
    ADDRESSSYMBOL(0x004C8890, "?BaseObject_Z_vftable_0@ObjectGame_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x004E0740, ObjectGame_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    virtual void BaseObject_Z_vftable_13() override;
    virtual void Manipulator_Z_vftable_14() override;
    ADDRESSSYMBOL(0x0072CBF0, "?Manipulator_Z_vftable_15@ObjectGame_Z@@UAEXXZ");
    virtual void Manipulator_Z_vftable_15() override;
    ADDRESSSYMBOL(0x0072CC40, "?Manipulator_Z_vftable_16@ObjectGame_Z@@UAEXXZ");
    virtual void Manipulator_Z_vftable_16() override;
    ADDRESSVF(0x0072CC90, ObjectGame_Z, ObjectGame_Z_vftable_18);
    virtual void ObjectGame_Z_vftable_18();
    virtual void ObjectGame_Z_vftable_19(int);
    virtual void ObjectGame_Z_vftable_20(int);
    virtual void ObjectGame_Z_vftable_21(int);
    ADDRESSVF(0x004DB5D0, ObjectGame_Z, ObjectGame_Z_vftable_22);
    virtual void ObjectGame_Z_vftable_22();
};

ADDRESSVFTABLE(0x009A1AC4, COM_Class_FollowSpline);
class __declspec(dllexport) COM_Class_FollowSpline : public CommandStateTemplate_G
{
public:
    ADDRESSVF(0x004242E0, COM_Class_FollowSpline, StateTemplate_G_vftable_0);
    virtual void StateTemplate_G_vftable_0() override;
    ADDRESSSYMBOL(0x004259F0, "?StateTemplate_G_vftable_3@COM_Class_FollowSpline@@UAEDH@Z");
    virtual char StateTemplate_G_vftable_3(int) override;
};

ADDRESSVFTABLE(0x009D644C, OmniConstant_Z);
class __declspec(dllexport) OmniConstant_Z : public ObjConstant_Z
{
public:
    ADDRESSVF(0x0082CB30, OmniConstant_Z, ObjConstant_Z_vftable_0);
    virtual void ObjConstant_Z_vftable_0() override;
};

ADDRESSVFTABLE(0x009B1748, ComObj_Z);
class __declspec(dllexport) ComObj_Z
{
public:
    ADDRESSVF(0x004DF8A0, ComObj_Z, ComObj_Z_vftable_0);
    virtual void ComObj_Z_vftable_0();
    virtual void ComObj_Z_vftable_1();
    virtual void ComObj_Z_vftable_2();
    virtual void ComObj_Z_vftable_3(int);
    virtual void ComObj_Z_vftable_4(int);
    ADDRESSVF(0x006C2970, ComObj_Z, ComObj_Z_vftable_5);
    virtual void ComObj_Z_vftable_5();
    virtual char ComObj_Z_vftable_6(int);
    virtual char ComObj_Z_vftable_7(int);
    virtual char ComObj_Z_vftable_8(int);
    ADDRESSVF(0x004DB290, ComObj_Z, ComObj_Z_vftable_9);
    virtual void ComObj_Z_vftable_9();
};

ADDRESSVFTABLE(0x009AED9C, CameraEngine_Z);
class __declspec(dllexport) CameraEngine_Z : public Manipulator_Z
{
public:
    ADDRESSSYMBOL(0x004D3730, "?BaseObject_Z_vftable_0@CameraEngine_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x004D37D0, CameraEngine_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSVF(0x006459B0, CameraEngine_Z, BaseObject_Z_vftable_13);
    virtual void BaseObject_Z_vftable_13() override;
    ADDRESSSYMBOL(0x00645A60, "?Manipulator_Z_vftable_15@CameraEngine_Z@@UAEXXZ");
    virtual void Manipulator_Z_vftable_15() override;
    virtual void CameraEngine_Z_vftable_18(int, int);
    ADDRESSVF(0x00410F80, CameraEngine_Z, CameraEngine_Z_vftable_19);
    virtual void CameraEngine_Z_vftable_19();
    ADDRESSSYMBOL(0x00645E40, "?CameraEngine_Z_vftable_20@CameraEngine_Z@@UAEXH@Z");
    virtual void CameraEngine_Z_vftable_20(int);
    virtual void CameraEngine_Z_vftable_21();
    virtual void CameraEngine_Z_vftable_22(int);
    virtual void CameraEngine_Z_vftable_23();
    virtual void CameraEngine_Z_vftable_24(int, int);
    virtual void CameraEngine_Z_vftable_25(int);
};

ADDRESSVFTABLE(0x009C4E2C, CareerModeManager_G);
class __declspec(dllexport) CareerModeManager_G : public ObjectGame_Z
{
public:
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x00616CA0, CareerModeManager_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    virtual void Manipulator_Z_vftable_14() override;
    virtual void Manipulator_Z_vftable_17(int) override;
    char data[40];
};

ADDRESSVFTABLE(0x009C9B34, ABC_ScriptManager);
class __declspec(dllexport) ABC_ScriptManager
{
public:
    ADDRESSVF(0x00691FB0, ABC_ScriptManager, ABC_ScriptManager_vftable_0);
    virtual void ABC_ScriptManager_vftable_0();
    virtual void ABC_ScriptManager_vftable_1();
    virtual void ABC_ScriptManager_vftable_2();
    ADDRESSVF(0x00691FF0, ABC_ScriptManager, ABC_ScriptManager_vftable_3);
    virtual void ABC_ScriptManager_vftable_3();
    virtual void ABC_ScriptManager_vftable_4(int);
    ADDRESSSYMBOL(0x00692100, "?ABC_ScriptManager_vftable_5@ABC_ScriptManager@@UAEXXZ");
    virtual void ABC_ScriptManager_vftable_5();
    virtual void ABC_ScriptManager_vftable_6(int, int);
    virtual int ABC_ScriptManager_vftable_7(int);
    virtual int ABC_ScriptManager_vftable_8(int);
    virtual int ABC_ScriptManager_vftable_9(int);
    virtual int ABC_ScriptManager_vftable_10(int);
    virtual int ABC_ScriptManager_vftable_11(int);
    virtual int ABC_ScriptManager_vftable_12(int);
    virtual int ABC_ScriptManager_vftable_13(int);
    ADDRESSVF(0x00691420, ABC_ScriptManager, ABC_ScriptManager_vftable_14);
    virtual void ABC_ScriptManager_vftable_14();
    ADDRESSVF(0x0055BB70, ABC_ScriptManager, ABC_ScriptManager_vftable_15);
    virtual void ABC_ScriptManager_vftable_15();
    virtual int ABC_ScriptManager_vftable_16(int, int);
    virtual int ABC_ScriptManager_vftable_17(int);
    virtual int ABC_ScriptManager_vftable_18(int);
    virtual int ABC_ScriptManager_vftable_19(int);
    virtual void ABC_ScriptManager_vftable_20(int);
    virtual char ABC_ScriptManager_vftable_21(int, int, int);
    virtual void ABC_ScriptManager_vftable_22(int);
    virtual void ABC_ScriptManager_vftable_23(int);
    virtual void ABC_ScriptManager_vftable_24();
    virtual void ABC_ScriptManager_vftable_25(int);
    virtual void ABC_ScriptManager_vftable_26(int);
    virtual void ABC_ScriptManager_vftable_27(int);
    virtual void ABC_ScriptManager_vftable_28(int);
    virtual void ABC_ScriptManager_vftable_29(int);
    virtual void ABC_ScriptManager_vftable_30(int);
    virtual void ABC_ScriptManager_vftable_31(int);
    virtual void ABC_ScriptManager_vftable_32(int, int);
    virtual void ABC_ScriptManager_vftable_33(int, int);
    virtual void ABC_ScriptManager_vftable_34(int, int);
    ADDRESSVF(0x00692480, ABC_ScriptManager, ABC_ScriptManager_vftable_35);
    virtual void ABC_ScriptManager_vftable_35();
    virtual void ABC_ScriptManager_vftable_36();
    ADDRESSVF(0x00692680, ABC_ScriptManager, ABC_ScriptManager_vftable_37);
    virtual void ABC_ScriptManager_vftable_37();
};

ADDRESSVFTABLE(0x009D804C, VoiceManager_Z);
class __declspec(dllexport) VoiceManager_Z : public NetPlayModule_Z
{
public:
    ADDRESSSYMBOL(0x006DE380, "?NetPlayModule_Z_vftable_0@VoiceManager_Z@@UAEDXZ");
    virtual char NetPlayModule_Z_vftable_0() override;
    ADDRESSSYMBOL(0x006DE400, "?NetPlayModule_Z_vftable_1@VoiceManager_Z@@UAEXH@Z");
    virtual void NetPlayModule_Z_vftable_1(int) override;
    ADDRESSSYMBOL(0x006DE5A0, "?NetPlayModule_Z_vftable_2@VoiceManager_Z@@UAEDXZ");
    virtual char NetPlayModule_Z_vftable_2() override;
    ADDRESSVF(0x006DEF10, VoiceManager_Z, VoiceManager_Z_vftable_3);
    virtual void VoiceManager_Z_vftable_3();
    virtual char VoiceManager_Z_vftable_4(int);
    ADDRESSVF(0x006DEF40, VoiceManager_Z, VoiceManager_Z_vftable_5);
    virtual void VoiceManager_Z_vftable_5();
    ADDRESSVF(0x006DEF50, VoiceManager_Z, VoiceManager_Z_vftable_6);
    virtual void VoiceManager_Z_vftable_6();
    ADDRESSVF(0x006DEF60, VoiceManager_Z, VoiceManager_Z_vftable_7);
    virtual void VoiceManager_Z_vftable_7();
    virtual void VoiceManager_Z_vftable_8(int, int, int);
    ADDRESSVF(0x006DEF80, VoiceManager_Z, VoiceManager_Z_vftable_9);
    virtual void VoiceManager_Z_vftable_9();
    virtual char VoiceManager_Z_vftable_10(int);
    ADDRESSVF(0x006DE730, VoiceManager_Z, VoiceManager_Z_vftable_11);
    virtual void VoiceManager_Z_vftable_11();
    ADDRESSVF(0x006DE770, VoiceManager_Z, VoiceManager_Z_vftable_12);
    virtual void VoiceManager_Z_vftable_12();
    ADDRESSVF(0x006DE7C0, VoiceManager_Z, VoiceManager_Z_vftable_13);
    virtual void VoiceManager_Z_vftable_13();
    ADDRESSVF(0x006DE700, VoiceManager_Z, VoiceManager_Z_vftable_14);
    virtual void VoiceManager_Z_vftable_14();
    virtual char VoiceManager_Z_vftable_15(int);
    ADDRESSVF(0x006DEF90, VoiceManager_Z, VoiceManager_Z_vftable_16);
    virtual void VoiceManager_Z_vftable_16();
    virtual void VoiceManager_Z_vftable_17(int);
    virtual void VoiceManager_Z_vftable_18();
};

ADDRESSVFTABLE(0x009C46C4, SpecialEffectsUniqueEmitters_G);
class __declspec(dllexport) SpecialEffectsUniqueEmitters_G
{
public:
    ADDRESSVF(0x005FC490, SpecialEffectsUniqueEmitters_G, SpecialEffectsUniqueEmitters_G_vftable_0);
    virtual void SpecialEffectsUniqueEmitters_G_vftable_0();
};

ADDRESSVFTABLE(0x009BE194, Menu3DScenery);
class __declspec(dllexport) Menu3DScenery
{
public:
    ADDRESSVF(0x00587070, Menu3DScenery, Menu3DScenery_vftable_0);
    virtual void Menu3DScenery_vftable_0();
    ADDRESSVF(0x005870A0, Menu3DScenery, Menu3DScenery_vftable_1);
    virtual void Menu3DScenery_vftable_1();
    ADDRESSVF(0x00587120, Menu3DScenery, Menu3DScenery_vftable_2);
    virtual void Menu3DScenery_vftable_2();
    virtual void Menu3DScenery_vftable_3() = 0;
    virtual void Menu3DScenery_vftable_4(int) = 0;
};

ADDRESSVFTABLE(0x009D3D5C, cA_MeshObject);
class __declspec(dllexport) cA_MeshObject : public cA_BaseDecorObject
{
public:
    ADDRESSVF(0x007DE9A0, cA_MeshObject, cA_BaseDecorObject_vftable_3);
    virtual void cA_BaseDecorObject_vftable_3() override;
    virtual void cA_BaseDecorObject_vftable_4() override;
    virtual void cA_BaseDecorObject_vftable_5() override;
    ADDRESSVF(0x007DEA50, cA_MeshObject, cA_BaseDecorObject_vftable_6);
    virtual void cA_BaseDecorObject_vftable_6() override;
    ADDRESSSYMBOL(0x007DE960, "?cA_BaseDecorObject_vftable_8@cA_MeshObject@@UAEHXZ");
    virtual int cA_BaseDecorObject_vftable_8() override;
    ADDRESSSYMBOL(0x0078D390, "?cA_BaseDecorObject_vftable_10@cA_MeshObject@@UAEXH@Z");
    virtual void cA_BaseDecorObject_vftable_10(int) override;
};

ADDRESSVFTABLE(0x009AC558, InGame3DBase);
class __declspec(dllexport) InGame3DBase
{
public:
    ADDRESSVF(0x004D01B0, InGame3DBase, InGame3DBase_vftable_0);
    virtual void InGame3DBase_vftable_0();
    virtual void InGame3DBase_vftable_1(int);
};

ADDRESSVFTABLE(0x009D0970, AGW_TerraCache);
class __declspec(dllexport) AGW_TerraCache
{
public:
    ADDRESSVF(0x0074D1B0, AGW_TerraCache, AGW_TerraCache_vftable_0);
    virtual void AGW_TerraCache_vftable_0();
};

ADDRESSVFTABLE(0x009D30FC, InGameObjectsManipulator_Z);
class __declspec(dllexport) InGameObjectsManipulator_Z : public Manipulator_Z
{
public:
    ADDRESSVF(0x007C3190, InGameObjectsManipulator_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x007C31D0, "?Manipulator_Z_vftable_17@InGameObjectsManipulator_Z@@UAEXH@Z");
    virtual void Manipulator_Z_vftable_17(int) override;
    ADDRESSVF(0x007C3140, InGameObjectsManipulator_Z, InGameObjectsManipulator_Z_vftable_18);
    virtual void InGameObjectsManipulator_Z_vftable_18();
    ADDRESSVF(0x007C3150, InGameObjectsManipulator_Z, InGameObjectsManipulator_Z_vftable_19);
    virtual void InGameObjectsManipulator_Z_vftable_19();
    virtual char InGameObjectsManipulator_Z_vftable_20(int);
    char data[4];
};

ADDRESSVFTABLE(0x009B32B8, MarkerVisibleObject);
class __declspec(dllexport) MarkerVisibleObject : public VisibleObjectContainer
{
public:
    ADDRESSVF(0x004FC6A0, MarkerVisibleObject, VisibleObjectContainer_vftable_0);
    virtual void VisibleObjectContainer_vftable_0() override;
    ADDRESSSYMBOL(0x004F3110, "?VisibleObjectContainer_vftable_3@MarkerVisibleObject@@UAEXHH@Z");
    virtual void VisibleObjectContainer_vftable_3(int, int) override;
    ADDRESSSYMBOL(0x004F2510, "?VisibleObjectContainer_vftable_4@MarkerVisibleObject@@UAEXHH@Z");
    virtual void VisibleObjectContainer_vftable_4(int, int) override;
};

ADDRESSVFTABLE(0x009A1B50, COM_Class_Chase);
class __declspec(dllexport) COM_Class_Chase : public CommandStateTemplate_G
{
public:
    ADDRESSVF(0x004243E0, COM_Class_Chase, StateTemplate_G_vftable_0);
    virtual void StateTemplate_G_vftable_0() override;
    ADDRESSSYMBOL(0x00425B40, "?StateTemplate_G_vftable_3@COM_Class_Chase@@UAEDH@Z");
    virtual char StateTemplate_G_vftable_3(int) override;
};

ADDRESSVFTABLE(0x009CAC00, CompValFloat100k_16_Z);
class __declspec(dllexport) CompValFloat100k_16_Z : public CompVal_Z
{
public:
    ADDRESSVF(0x006C2930, CompValFloat100k_16_Z, CompVal_Z_vftable_0);
    virtual void CompVal_Z_vftable_0() override;
    virtual int CompVal_Z_vftable_1() override;
    virtual int CompVal_Z_vftable_2() override;
    ADDRESSVF(0x006C1090, CompValFloat100k_16_Z, CompVal_Z_vftable_3);
    virtual void CompVal_Z_vftable_3() override;
    ADDRESSVF(0x006C1110, CompValFloat100k_16_Z, CompVal_Z_vftable_4);
    virtual void CompVal_Z_vftable_4() override;
};

ADDRESSVFTABLE(0x009AEA3C, DaylightManipulator_G);
class __declspec(dllexport) DaylightManipulator_G : public ObjectGame_Z
{
public:
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x004D2270, DaylightManipulator_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    virtual void Manipulator_Z_vftable_14() override;
    virtual void Manipulator_Z_vftable_17(int) override;
    char data[40];
};

ADDRESSVFTABLE(0x009D014C, WorldResources_Z);
class __declspec(dllexport) WorldResources_Z
{
public:
    ADDRESSVF(0x007403E0, WorldResources_Z, WorldResources_Z_vftable_0);
    virtual void WorldResources_Z_vftable_0();
    ADDRESSVF(0x007AA750, WorldResources_Z, WorldResources_Z_vftable_1);
    virtual void WorldResources_Z_vftable_1();
    ADDRESSVF(0x007AAD40, WorldResources_Z, WorldResources_Z_vftable_2);
    virtual void WorldResources_Z_vftable_2();
    ADDRESSVF(0x007AAE10, WorldResources_Z, WorldResources_Z_vftable_3);
    virtual void WorldResources_Z_vftable_3();
    ADDRESSVF(0x007AAFC0, WorldResources_Z, WorldResources_Z_vftable_4);
    virtual void WorldResources_Z_vftable_4();
    ADDRESSVF(0x007AB060, WorldResources_Z, WorldResources_Z_vftable_5);
    virtual void WorldResources_Z_vftable_5();
};

ADDRESSVFTABLE(0x009D3CA4, cA_PaysageObject);
class __declspec(dllexport) cA_PaysageObject : public cA_BaseDecorObject
{
public:
    ADDRESSVF(0x007DE820, cA_PaysageObject, cA_BaseDecorObject_vftable_6);
    virtual void cA_BaseDecorObject_vftable_6() override;
    ADDRESSSYMBOL(0x007F78A0, "?cA_BaseDecorObject_vftable_8@cA_PaysageObject@@UAEHXZ");
    virtual int cA_BaseDecorObject_vftable_8() override;
    ADDRESSSYMBOL(0x007F9070, "?cA_BaseDecorObject_vftable_10@cA_PaysageObject@@UAEXH@Z");
    virtual void cA_BaseDecorObject_vftable_10(int) override;
    ADDRESSVF(0x007F7890, cA_PaysageObject, cA_BaseDecorObject_vftable_11);
    virtual void cA_BaseDecorObject_vftable_11() override;
    ADDRESSVF(0x007FCFA0, cA_PaysageObject, cA_PaysageObject_vftable_14);
    virtual void cA_PaysageObject_vftable_14();
};

ADDRESSVFTABLE(0x009D142C, VertexBuffer_Z);
class __declspec(dllexport) VertexBuffer_Z
{
public:
    ADDRESSVF(0x00773960, VertexBuffer_Z, VertexBuffer_Z_vftable_0);
    virtual void VertexBuffer_Z_vftable_0();
    virtual void VertexBuffer_Z_vftable_1() = 0;
    ADDRESSVF(0x007738D0, VertexBuffer_Z, VertexBuffer_Z_vftable_2);
    virtual void VertexBuffer_Z_vftable_2();
    virtual void VertexBuffer_Z_vftable_3() = 0;
    virtual void VertexBuffer_Z_vftable_4() = 0;
    virtual void VertexBuffer_Z_vftable_5(int);
};

ADDRESSVFTABLE(0x009BE1AC, Panel3D);
class __declspec(dllexport) Panel3D : public Menu3DScenery
{
public:
    ADDRESSVF(0x00587610, Panel3D, Menu3DScenery_vftable_0);
    virtual void Menu3DScenery_vftable_0() override;
    ADDRESSVF(0x00587670, Panel3D, Menu3DScenery_vftable_1);
    virtual void Menu3DScenery_vftable_1() override;
    ADDRESSVF(0x005876A0, Panel3D, Menu3DScenery_vftable_2);
    virtual void Menu3DScenery_vftable_2() override;
    ADDRESSVF(0x005876F0, Panel3D, Menu3DScenery_vftable_3);
    virtual void Menu3DScenery_vftable_3() override;
    virtual void Menu3DScenery_vftable_4(int) override;
};

ADDRESSVFTABLE(0x009A1A4C, COM_Class_GotoNode);
class __declspec(dllexport) COM_Class_GotoNode : public CommandStateTemplate_G
{
public:
    ADDRESSVF(0x00424240, COM_Class_GotoNode, StateTemplate_G_vftable_0);
    virtual void StateTemplate_G_vftable_0() override;
    ADDRESSSYMBOL(0x00425630, "?StateTemplate_G_vftable_1@COM_Class_GotoNode@@UAEXH@Z");
    virtual void StateTemplate_G_vftable_1(int) override;
    ADDRESSSYMBOL(0x00425650, "?StateTemplate_G_vftable_3@COM_Class_GotoNode@@UAEDH@Z");
    virtual char StateTemplate_G_vftable_3(int) override;
};

ADDRESSVFTABLE(0x009DB37C, ComUDP_Z);
class __declspec(dllexport) ComUDP_Z : public ComNet_Z
{
public:
    ADDRESSSYMBOL(0x0087ACD0, "?ComNet_Z_vftable_2@ComUDP_Z@@UAEHXZ");
    virtual int ComNet_Z_vftable_2() override;
    ADDRESSVF(0x00879C70, ComUDP_Z, ComNet_Z_vftable_5);
    virtual void ComNet_Z_vftable_5() override;
    ADDRESSVF(0x0087A3B0, ComUDP_Z, ComNet_Z_vftable_7);
    virtual void ComNet_Z_vftable_7() override;
    ADDRESSVF(0x0087A500, ComUDP_Z, ComNet_Z_vftable_8);
    virtual void ComNet_Z_vftable_8() override;
    ADDRESSVF(0x0087A650, ComUDP_Z, ComNet_Z_vftable_9);
    virtual void ComNet_Z_vftable_9() override;
    ADDRESSVF(0x0087A7A0, ComUDP_Z, ComNet_Z_vftable_10);
    virtual void ComNet_Z_vftable_10() override;
    virtual char ComNet_Z_vftable_11(int) override;
    virtual char ComNet_Z_vftable_12(int) override;
    virtual char ComNet_Z_vftable_13(int) override;
    ADDRESSVF(0x0087A810, ComUDP_Z, ComNet_Z_vftable_14);
    virtual void ComNet_Z_vftable_14() override;
    ADDRESSVF(0x0087A880, ComUDP_Z, ComNet_Z_vftable_15);
    virtual void ComNet_Z_vftable_15() override;
    ADDRESSVF(0x0087A8C0, ComUDP_Z, ComNet_Z_vftable_16);
    virtual void ComNet_Z_vftable_16() override;
    ADDRESSVF(0x0087A9E0, ComUDP_Z, ComNet_Z_vftable_17);
    virtual void ComNet_Z_vftable_17() override;
    virtual void ComUDP_Z_vftable_19() = 0;
    virtual void ComUDP_Z_vftable_20() = 0;
    virtual void ComUDP_Z_vftable_21() = 0;
    virtual int ComUDP_Z_vftable_22(SOCKET s, const struct sockaddr FAR * name, int namelen);
    virtual int ComUDP_Z_vftable_23(SOCKET s, const struct sockaddr FAR * name, int namelen);
    virtual SOCKET ComUDP_Z_vftable_24(int af, int type, int protocol);
    virtual int ComUDP_Z_vftable_25(SOCKET s, int backlog);
    virtual int ComUDP_Z_vftable_26(SOCKET s, char FAR * buf, int len, int flags);
    virtual int ComUDP_Z_vftable_27(SOCKET s, const char FAR * buf, int len, int flags);
    virtual int ComUDP_Z_vftable_28(SOCKET s, const char FAR * buf, int len, int flags, const struct sockaddr FAR * to, int tolen);
    virtual int ComUDP_Z_vftable_29(SOCKET s, int level, int optname, const char FAR * optval, int optlen);
    virtual unsigned long ComUDP_Z_vftable_30(unsigned long hostlong);
    virtual unsigned short ComUDP_Z_vftable_31(unsigned short hostshort);
    virtual unsigned long ComUDP_Z_vftable_32(unsigned long netlong);
    virtual unsigned short ComUDP_Z_vftable_33(unsigned short netshort);
    ADDRESSVF(0x0081C740, ComUDP_Z, ComUDP_Z_vftable_34);
    virtual void ComUDP_Z_vftable_34();
    virtual int ComUDP_Z_vftable_35(char *, int) = 0;
    virtual void ComUDP_Z_vftable_36() = 0;
    virtual unsigned long ComUDP_Z_vftable_37(const char FAR * cp) = 0;
    virtual int ComUDP_Z_vftable_38(SOCKET s, long cmd, unsigned long *argp) = 0;
    virtual void ComUDP_Z_vftable_39() = 0;
    virtual void ComUDP_Z_vftable_40() = 0;
    ADDRESSVF(0x0087AB70, ComUDP_Z, ComUDP_Z_vftable_41);
    virtual void ComUDP_Z_vftable_41();
    ADDRESSVF(0x0087AB50, ComUDP_Z, ComUDP_Z_vftable_42);
    virtual void ComUDP_Z_vftable_42();
    ADDRESSVF(0x0087ABA0, ComUDP_Z, ComUDP_Z_vftable_43);
    virtual void ComUDP_Z_vftable_43();
    ADDRESSVF(0x0087AC40, ComUDP_Z, ComUDP_Z_vftable_44);
    virtual void ComUDP_Z_vftable_44();
};

ADDRESSVFTABLE(0x009C3E50, SpecialEffectsMesh_G);
class __declspec(dllexport) SpecialEffectsMesh_G
{
public:
    ADDRESSVF(0x005DE3D0, SpecialEffectsMesh_G, SpecialEffectsMesh_G_vftable_0);
    virtual void SpecialEffectsMesh_G_vftable_0();
    virtual void SpecialEffectsMesh_G_vftable_1();
    ADDRESSVF(0x005DE350, SpecialEffectsMesh_G, SpecialEffectsMesh_G_vftable_2);
    virtual void SpecialEffectsMesh_G_vftable_2();
    virtual void SpecialEffectsMesh_G_vftable_3(int);
    virtual void SpecialEffectsMesh_G_vftable_4(int, int);
    virtual void SpecialEffectsMesh_G_vftable_5(int);
    virtual void SpecialEffectsMesh_G_vftable_6();
};

ADDRESSVFTABLE(0x009C6718, cA_BaseSurface);
class __declspec(dllexport) cA_BaseSurface
{
public:
    ADDRESSVF(0x00659760, cA_BaseSurface, cA_BaseSurface_vftable_0);
    virtual void cA_BaseSurface_vftable_0();
    virtual void cA_BaseSurface_vftable_1() = 0;
    virtual void cA_BaseSurface_vftable_2() = 0;
    virtual void cA_BaseSurface_vftable_3() = 0;
    virtual void cA_BaseSurface_vftable_4(int, int) = 0;
    virtual int cA_BaseSurface_vftable_5(int);
    virtual void cA_BaseSurface_vftable_6(int, int);
    virtual void cA_BaseSurface_vftable_7(int, int);
};

ADDRESSVFTABLE(0x009DBF00, PlayerDataSet_Z);
class __declspec(dllexport) PlayerDataSet_Z
{
public:
    ADDRESSVF(0x00883600, PlayerDataSet_Z, PlayerDataSet_Z_vftable_0);
    virtual void PlayerDataSet_Z_vftable_0();
    virtual char PlayerDataSet_Z_vftable_1(int);
    virtual char PlayerDataSet_Z_vftable_2(int);
};

ADDRESSVFTABLE(0x009BD954, MissionTemplate_G);
class __declspec(dllexport) MissionTemplate_G
{
public:
    ADDRESSVF(0x005804B0, MissionTemplate_G, MissionTemplate_G_vftable_0);
    virtual void MissionTemplate_G_vftable_0();
    virtual void MissionTemplate_G_vftable_1();
    ADDRESSVF(0x00582B50, MissionTemplate_G, MissionTemplate_G_vftable_2);
    virtual void MissionTemplate_G_vftable_2();
    ADDRESSVF(0x00582BB0, MissionTemplate_G, MissionTemplate_G_vftable_3);
    virtual void MissionTemplate_G_vftable_3();
    virtual void MissionTemplate_G_vftable_4(int, int);
    ADDRESSVF(0x00583710, MissionTemplate_G, MissionTemplate_G_vftable_5);
    virtual void MissionTemplate_G_vftable_5();
    ADDRESSVF(0x005836C0, MissionTemplate_G, MissionTemplate_G_vftable_6);
    virtual void MissionTemplate_G_vftable_6();
    ADDRESSVF(0x005837F0, MissionTemplate_G, MissionTemplate_G_vftable_7);
    virtual void MissionTemplate_G_vftable_7();
    virtual void MissionTemplate_G_vftable_8(int, int);
    ADDRESSVF(0x005836F0, MissionTemplate_G, MissionTemplate_G_vftable_9);
    virtual void MissionTemplate_G_vftable_9();
    virtual void MissionTemplate_G_vftable_10(int, int);
    ADDRESSVF(0x00583830, MissionTemplate_G, MissionTemplate_G_vftable_11);
    virtual void MissionTemplate_G_vftable_11();
    ADDRESSVF(0x005839B0, MissionTemplate_G, MissionTemplate_G_vftable_12);
    virtual void MissionTemplate_G_vftable_12();
    ADDRESSVF(0x00583AB0, MissionTemplate_G, MissionTemplate_G_vftable_13);
    virtual void MissionTemplate_G_vftable_13();
    ADDRESSVF(0x005838F0, MissionTemplate_G, MissionTemplate_G_vftable_14);
    virtual void MissionTemplate_G_vftable_14();
    ADDRESSVF(0x00583950, MissionTemplate_G, MissionTemplate_G_vftable_15);
    virtual void MissionTemplate_G_vftable_15();
    ADDRESSVF(0x00583B50, MissionTemplate_G, MissionTemplate_G_vftable_16);
    virtual void MissionTemplate_G_vftable_16();
    ADDRESSVF(0x00583BC0, MissionTemplate_G, MissionTemplate_G_vftable_17);
    virtual void MissionTemplate_G_vftable_17();
    ADDRESSVF(0x00583BF0, MissionTemplate_G, MissionTemplate_G_vftable_18);
    virtual void MissionTemplate_G_vftable_18();
    virtual void MissionTemplate_G_vftable_19(int);
    virtual char MissionTemplate_G_vftable_20();
    virtual char MissionTemplate_G_vftable_21();
    ADDRESSVF(0x005827C0, MissionTemplate_G, MissionTemplate_G_vftable_22);
    virtual void MissionTemplate_G_vftable_22();
    virtual char MissionTemplate_G_vftable_23(int, int);
    virtual char MissionTemplate_G_vftable_24();
    ADDRESSVF(0x00582910, MissionTemplate_G, MissionTemplate_G_vftable_25);
    virtual void MissionTemplate_G_vftable_25();
    ADDRESSVF(0x005829C0, MissionTemplate_G, MissionTemplate_G_vftable_26);
    virtual void MissionTemplate_G_vftable_26();
    virtual void MissionTemplate_G_vftable_27(int);
    ADDRESSVF(0x005803C0, MissionTemplate_G, MissionTemplate_G_vftable_28);
    virtual void MissionTemplate_G_vftable_28();
    virtual void MissionTemplate_G_vftable_29();
    ADDRESSVF(0x00582A20, MissionTemplate_G, MissionTemplate_G_vftable_30);
    virtual void MissionTemplate_G_vftable_30();
    ADDRESSVF(0x00582C30, MissionTemplate_G, MissionTemplate_G_vftable_31);
    virtual void MissionTemplate_G_vftable_31();
    virtual void MissionTemplate_G_vftable_32();
    ADDRESSVF(0x00582C80, MissionTemplate_G, MissionTemplate_G_vftable_33);
    virtual void MissionTemplate_G_vftable_33();
    virtual char MissionTemplate_G_vftable_34();
    ADDRESSVF(0x00582FB0, MissionTemplate_G, MissionTemplate_G_vftable_35);
    virtual void MissionTemplate_G_vftable_35();
    virtual char MissionTemplate_G_vftable_36();
    ADDRESSVF(0x00582AB0, MissionTemplate_G, MissionTemplate_G_vftable_37);
    virtual void MissionTemplate_G_vftable_37();
    ADDRESSVF(0x00582EB0, MissionTemplate_G, MissionTemplate_G_vftable_38);
    virtual void MissionTemplate_G_vftable_38();
    ADDRESSVF(0x00580370, MissionTemplate_G, MissionTemplate_G_vftable_39);
    virtual void MissionTemplate_G_vftable_39();
    virtual int MissionTemplate_G_vftable_40();
    ADDRESSVF(0x00580350, MissionTemplate_G, MissionTemplate_G_vftable_41);
    virtual void MissionTemplate_G_vftable_41();
    virtual int MissionTemplate_G_vftable_42();
    ADDRESSVF(0x00582D50, MissionTemplate_G, MissionTemplate_G_vftable_43);
    virtual void MissionTemplate_G_vftable_43();
    ADDRESSVF(0x005832E0, MissionTemplate_G, MissionTemplate_G_vftable_44);
    virtual void MissionTemplate_G_vftable_44();
    ADDRESSVF(0x00583310, MissionTemplate_G, MissionTemplate_G_vftable_45);
    virtual void MissionTemplate_G_vftable_45();
    ADDRESSVF(0x00583810, MissionTemplate_G, MissionTemplate_G_vftable_46);
    virtual void MissionTemplate_G_vftable_46();
    ADDRESSVF(0x00583370, MissionTemplate_G, MissionTemplate_G_vftable_47);
    virtual void MissionTemplate_G_vftable_47();
    virtual void MissionTemplate_G_vftable_48();
    virtual void MissionTemplate_G_vftable_49();
    ADDRESSVF(0x005833A0, MissionTemplate_G, MissionTemplate_G_vftable_50);
    virtual void MissionTemplate_G_vftable_50();
    virtual void MissionTemplate_G_vftable_51(int);
    virtual void MissionTemplate_G_vftable_52(int, int);
    virtual void MissionTemplate_G_vftable_53(int, int);
    virtual void MissionTemplate_G_vftable_54(int);
    virtual void MissionTemplate_G_vftable_55(int);
    virtual char MissionTemplate_G_vftable_56(int);
    ADDRESSVF(0x005833D0, MissionTemplate_G, MissionTemplate_G_vftable_57);
    virtual void MissionTemplate_G_vftable_57();
    ADDRESSVF(0x00583400, MissionTemplate_G, MissionTemplate_G_vftable_58);
    virtual void MissionTemplate_G_vftable_58();
    virtual void MissionTemplate_G_vftable_59(int);
    virtual void MissionTemplate_G_vftable_60(int);
    virtual void MissionTemplate_G_vftable_61(int);
    virtual void MissionTemplate_G_vftable_62(int, int);
    virtual void MissionTemplate_G_vftable_63(int);
    virtual void MissionTemplate_G_vftable_64(int);
    virtual void MissionTemplate_G_vftable_65(int, int);
    virtual void MissionTemplate_G_vftable_66(int, int);
    virtual void MissionTemplate_G_vftable_67(int, int);
    virtual void MissionTemplate_G_vftable_68(int, int);
    virtual void MissionTemplate_G_vftable_69(int);
    virtual void MissionTemplate_G_vftable_70(int, int);
    virtual char MissionTemplate_G_vftable_71(int);
    virtual void MissionTemplate_G_vftable_72(int);
    virtual void MissionTemplate_G_vftable_73(int);
    ADDRESSVF(0x005801C0, MissionTemplate_G, MissionTemplate_G_vftable_74);
    virtual void MissionTemplate_G_vftable_74();
    virtual void MissionTemplate_G_vftable_75();
    virtual void MissionTemplate_G_vftable_76(int);
    virtual char MissionTemplate_G_vftable_77();
    virtual int MissionTemplate_G_vftable_78();
    virtual char MissionTemplate_G_vftable_79();
    virtual int MissionTemplate_G_vftable_80();
    virtual char MissionTemplate_G_vftable_81();
    virtual char MissionTemplate_G_vftable_82(int, int, int);
    virtual char MissionTemplate_G_vftable_83(int);
    virtual char MissionTemplate_G_vftable_84();
    ADDRESSVF(0x00580110, MissionTemplate_G, MissionTemplate_G_vftable_85);
    virtual void MissionTemplate_G_vftable_85();
    ADDRESSVF(0x00580100, MissionTemplate_G, MissionTemplate_G_vftable_86);
    virtual void MissionTemplate_G_vftable_86();
    virtual char MissionTemplate_G_vftable_87();
    ADDRESSVF(0x005837A0, MissionTemplate_G, MissionTemplate_G_vftable_88);
    virtual void MissionTemplate_G_vftable_88();
    ADDRESSVF(0x005800E0, MissionTemplate_G, MissionTemplate_G_vftable_89);
    virtual void MissionTemplate_G_vftable_89();
    ADDRESSVF(0x005800D0, MissionTemplate_G, MissionTemplate_G_vftable_90);
    virtual void MissionTemplate_G_vftable_90();
};

ADDRESSVFTABLE(0x009C2FC8, GameMissionInfo_G);
class __declspec(dllexport) GameMissionInfo_G : public ComObj_Z
{
public:
    ADDRESSVF(0x005B4140, GameMissionInfo_G, ComObj_Z_vftable_0);
    virtual void ComObj_Z_vftable_0() override;
    virtual void ComObj_Z_vftable_1() override;
    virtual void ComObj_Z_vftable_2() override;
    virtual void ComObj_Z_vftable_3(int) override;
    virtual void ComObj_Z_vftable_4(int) override = 0;
};

ADDRESSVFTABLE(0x009AE89C, MissionManager_G);
class __declspec(dllexport) MissionManager_G : public Manipulator_Z
{
public:
    ADDRESSSYMBOL(0x0057F370, "?BaseObject_Z_vftable_0@MissionManager_G@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x004D4B00, MissionManager_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x0057F3C0, "?Manipulator_Z_vftable_14@MissionManager_G@@UAEXXZ");
    virtual void Manipulator_Z_vftable_14() override;
    ADDRESSSYMBOL(0x0057F3D0, "?Manipulator_Z_vftable_17@MissionManager_G@@UAEXH@Z");
    virtual void Manipulator_Z_vftable_17(int) override;
    char data[76];
};

ADDRESSVFTABLE(0x009B297C, AnimalSound_G);
class __declspec(dllexport) AnimalSound_G
{
public:
    virtual void AnimalSound_G_vftable_0() = 0;
};

ADDRESSVFTABLE(0x009ADEAC, NetObject_Z);
class __declspec(dllexport) NetObject_Z
{
public:
    ADDRESSVF(0x004D1630, NetObject_Z, NetObject_Z_vftable_0);
    virtual void NetObject_Z_vftable_0();
    virtual void NetObject_Z_vftable_1() = 0;
    virtual void NetObject_Z_vftable_2() = 0;
};

ADDRESSVFTABLE(0x009AE67C, MemoryCardManager_C);
class __declspec(dllexport) MemoryCardManager_C : public Manipulator_Z
{
public:
    ADDRESSSYMBOL(0x004EB770, "?BaseObject_Z_vftable_0@MemoryCardManager_C@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x004D1D10, MemoryCardManager_C, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    virtual void Manipulator_Z_vftable_14() override;
    ADDRESSSYMBOL(0x004EB9C0, "?Manipulator_Z_vftable_17@MemoryCardManager_C@@UAEXH@Z");
    virtual void Manipulator_Z_vftable_17(int) override;
    char data[92];
};

ADDRESSVFTABLE(0x009C177C, StatesMachine_G);
class __declspec(dllexport) StatesMachine_G : public BaseObject_Z
{
public:
    ADDRESSVF(0x005A5A00, StatesMachine_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    virtual int StatesMachine_G_vftable_14(int);
    virtual void StatesMachine_G_vftable_15(int);
    virtual int StatesMachine_G_vftable_16(int);
    char data[20];
};

ADDRESSVFTABLE(0x009AD888, ComOwner_Z);
class __declspec(dllexport) ComOwner_Z
{
public:
    ADDRESSVF(0x004D24A0, ComOwner_Z, ComOwner_Z_vftable_0);
    virtual void ComOwner_Z_vftable_0();
    ADDRESSVF(0x004D23B0, ComOwner_Z, ComOwner_Z_vftable_1);
    virtual void ComOwner_Z_vftable_1();
    ADDRESSVF(0x004D23C0, ComOwner_Z, ComOwner_Z_vftable_2);
    virtual void ComOwner_Z_vftable_2();
    ADDRESSVF(0x004D23E0, ComOwner_Z, ComOwner_Z_vftable_3);
    virtual void ComOwner_Z_vftable_3();
    ADDRESSVF(0x004D23F0, ComOwner_Z, ComOwner_Z_vftable_4);
    virtual void ComOwner_Z_vftable_4();
    virtual char ComOwner_Z_vftable_5();
};

ADDRESSVFTABLE(0x009C673C, cA_CenteredSurface);
class __declspec(dllexport) cA_CenteredSurface : public cA_BaseSurface
{
public:
    ADDRESSVF(0x00659790, cA_CenteredSurface, cA_BaseSurface_vftable_0);
    virtual void cA_BaseSurface_vftable_0() override;
};

ADDRESSVFTABLE(0x009CB1AC, StockData);
class __declspec(dllexport) StockData
{
public:
    virtual void StockData_vftable_0() = 0;
    virtual void StockData_vftable_1() = 0;
    ADDRESSVF(0x006DF830, StockData, StockData_vftable_2);
    virtual void StockData_vftable_2();
    ADDRESSVF(0x006DF9F0, StockData, StockData_vftable_3);
    virtual void StockData_vftable_3();
};

ADDRESSVFTABLE(0x009B32A0, DiscoveryPointVisibleObject);
class __declspec(dllexport) DiscoveryPointVisibleObject : public VisibleObjectContainer
{
public:
    ADDRESSVF(0x004FC610, DiscoveryPointVisibleObject, VisibleObjectContainer_vftable_0);
    virtual void VisibleObjectContainer_vftable_0() override;
    ADDRESSSYMBOL(0x004ECEC0, "?VisibleObjectContainer_vftable_1@DiscoveryPointVisibleObject@@UAEXH@Z");
    virtual void VisibleObjectContainer_vftable_1(int) override;
    ADDRESSSYMBOL(0x004ED0A0, "?VisibleObjectContainer_vftable_3@DiscoveryPointVisibleObject@@UAEXHH@Z");
    virtual void VisibleObjectContainer_vftable_3(int, int) override;
    ADDRESSSYMBOL(0x004ED2D0, "?VisibleObjectContainer_vftable_4@DiscoveryPointVisibleObject@@UAEXHH@Z");
    virtual void VisibleObjectContainer_vftable_4(int, int) override;
};

ADDRESSVFTABLE(0x009D6154, NetWork_Z);
class __declspec(dllexport) NetWork_Z : public NetObject_Z
{
public:
    ADDRESSVF(0x00821E00, NetWork_Z, NetObject_Z_vftable_0);
    virtual void NetObject_Z_vftable_0() override;
    virtual void NetWork_Z_vftable_3() = 0;
    virtual void NetWork_Z_vftable_4() = 0;
    virtual void NetWork_Z_vftable_5() = 0;
    virtual void NetWork_Z_vftable_6() = 0;
    virtual void NetWork_Z_vftable_7() = 0;
    virtual void NetWork_Z_vftable_8() = 0;
};

ADDRESSVFTABLE(0x009B1494, ObjectMove_Z);
class __declspec(dllexport) ObjectMove_Z : public Manipulator_Z
{
public:
    ADDRESSSYMBOL(0x0066FBC0, "?BaseObject_Z_vftable_0@ObjectMove_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x004DC360, ObjectMove_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x0066FCB0, "?Manipulator_Z_vftable_14@ObjectMove_Z@@UAEXXZ");
    virtual void Manipulator_Z_vftable_14() override;
    ADDRESSSYMBOL(0x0066FE60, "?Manipulator_Z_vftable_17@ObjectMove_Z@@UAEXH@Z");
    virtual void Manipulator_Z_vftable_17(int) override;
    ADDRESSSYMBOL(0x00670610, "?ObjectMove_Z_vftable_18@ObjectMove_Z@@UAEXHHHHHH@Z");
    virtual void ObjectMove_Z_vftable_18(int, int, int, int, int, int);
    ADDRESSSYMBOL(0x006705F0, "?ObjectMove_Z_vftable_19@ObjectMove_Z@@UAEXHHHHH@Z");
    virtual void ObjectMove_Z_vftable_19(int, int, int, int, int);
    ADDRESSVF(0x0066FD70, ObjectMove_Z, ObjectMove_Z_vftable_20);
    virtual void ObjectMove_Z_vftable_20();
    ADDRESSVF(0x0066FE80, ObjectMove_Z, ObjectMove_Z_vftable_21);
    virtual void ObjectMove_Z_vftable_21();
    ADDRESSVF(0x00717F20, ObjectMove_Z, ObjectMove_Z_vftable_22);
    virtual void ObjectMove_Z_vftable_22();
    ADDRESSVF(0x00718200, ObjectMove_Z, ObjectMove_Z_vftable_23);
    virtual void ObjectMove_Z_vftable_23();
    ADDRESSVF(0x00718220, ObjectMove_Z, ObjectMove_Z_vftable_24);
    virtual void ObjectMove_Z_vftable_24();
    ADDRESSVF(0x007183B0, ObjectMove_Z, ObjectMove_Z_vftable_25);
    virtual void ObjectMove_Z_vftable_25();
    ADDRESSVF(0x00718020, ObjectMove_Z, ObjectMove_Z_vftable_26);
    virtual void ObjectMove_Z_vftable_26();
    ADDRESSVF(0x00719190, ObjectMove_Z, ObjectMove_Z_vftable_27);
    virtual void ObjectMove_Z_vftable_27();
    virtual void ObjectMove_Z_vftable_28(int, int);
    ADDRESSVF(0x004DBD40, ObjectMove_Z, ObjectMove_Z_vftable_29);
    virtual void ObjectMove_Z_vftable_29();
    ADDRESSVF(0x00719310, ObjectMove_Z, ObjectMove_Z_vftable_30);
    virtual void ObjectMove_Z_vftable_30();
    ADDRESSVF(0x00719260, ObjectMove_Z, ObjectMove_Z_vftable_31);
    virtual void ObjectMove_Z_vftable_31();
    virtual char ObjectMove_Z_vftable_32(int, int);
    ADDRESSVF(0x00671280, ObjectMove_Z, ObjectMove_Z_vftable_33);
    virtual void ObjectMove_Z_vftable_33();
    ADDRESSVF(0x006712D0, ObjectMove_Z, ObjectMove_Z_vftable_34);
    virtual void ObjectMove_Z_vftable_34();
    ADDRESSVF(0x00671300, ObjectMove_Z, ObjectMove_Z_vftable_35);
    virtual void ObjectMove_Z_vftable_35();
    ADDRESSVF(0x00718690, ObjectMove_Z, ObjectMove_Z_vftable_36);
    virtual void ObjectMove_Z_vftable_36();
    ADDRESSVF(0x004DBD10, ObjectMove_Z, ObjectMove_Z_vftable_37);
    virtual void ObjectMove_Z_vftable_37();
    ADDRESSVF(0x004DB280, ObjectMove_Z, ObjectMove_Z_vftable_38);
    virtual void ObjectMove_Z_vftable_38();
    virtual void ObjectMove_Z_vftable_39(int);
    virtual void ObjectMove_Z_vftable_40(int);
    virtual void ObjectMove_Z_vftable_41();
    ADDRESSVF(0x004DBCF0, ObjectMove_Z, ObjectMove_Z_vftable_42);
    virtual void ObjectMove_Z_vftable_42();
    ADDRESSVF(0x0066FEE0, ObjectMove_Z, ObjectMove_Z_vftable_43);
    virtual void ObjectMove_Z_vftable_43();
    ADDRESSVF(0x00718890, ObjectMove_Z, ObjectMove_Z_vftable_44);
    virtual void ObjectMove_Z_vftable_44();
    ADDRESSVF(0x004DBCE0, ObjectMove_Z, ObjectMove_Z_vftable_45);
    virtual void ObjectMove_Z_vftable_45();
    ADDRESSVF(0x004DBCA0, ObjectMove_Z, ObjectMove_Z_vftable_46);
    virtual void ObjectMove_Z_vftable_46();
    ADDRESSVF(0x004DBC50, ObjectMove_Z, ObjectMove_Z_vftable_47);
    virtual void ObjectMove_Z_vftable_47();
    ADDRESSVF(0x004DBC10, ObjectMove_Z, ObjectMove_Z_vftable_48);
    virtual void ObjectMove_Z_vftable_48();
    ADDRESSVF(0x004DBBD0, ObjectMove_Z, ObjectMove_Z_vftable_49);
    virtual void ObjectMove_Z_vftable_49();
    ADDRESSVF(0x00670390, ObjectMove_Z, ObjectMove_Z_vftable_50);
    virtual void ObjectMove_Z_vftable_50();
    ADDRESSVF(0x006703D0, ObjectMove_Z, ObjectMove_Z_vftable_51);
    virtual void ObjectMove_Z_vftable_51();
    ADDRESSVF(0x00670410, ObjectMove_Z, ObjectMove_Z_vftable_52);
    virtual void ObjectMove_Z_vftable_52();
    ADDRESSVF(0x00670450, ObjectMove_Z, ObjectMove_Z_vftable_53);
    virtual void ObjectMove_Z_vftable_53();
    ADDRESSVF(0x006704A0, ObjectMove_Z, ObjectMove_Z_vftable_54);
    virtual void ObjectMove_Z_vftable_54();
    ADDRESSVF(0x006704F0, ObjectMove_Z, ObjectMove_Z_vftable_55);
    virtual void ObjectMove_Z_vftable_55();
    ADDRESSVF(0x006705A0, ObjectMove_Z, ObjectMove_Z_vftable_56);
    virtual void ObjectMove_Z_vftable_56();
    ADDRESSVF(0x00670550, ObjectMove_Z, ObjectMove_Z_vftable_57);
    virtual void ObjectMove_Z_vftable_57();
    ADDRESSVF(0x0066FF50, ObjectMove_Z, ObjectMove_Z_vftable_58);
    virtual void ObjectMove_Z_vftable_58();
    ADDRESSVF(0x0066FFE0, ObjectMove_Z, ObjectMove_Z_vftable_59);
    virtual void ObjectMove_Z_vftable_59();
    ADDRESSVF(0x006700C0, ObjectMove_Z, ObjectMove_Z_vftable_60);
    virtual void ObjectMove_Z_vftable_60();
    ADDRESSVF(0x00670290, ObjectMove_Z, ObjectMove_Z_vftable_61);
    virtual void ObjectMove_Z_vftable_61();
    ADDRESSVF(0x004DBBC0, ObjectMove_Z, ObjectMove_Z_vftable_62);
    virtual void ObjectMove_Z_vftable_62();
    ADDRESSVF(0x004DBBB0, ObjectMove_Z, ObjectMove_Z_vftable_63);
    virtual void ObjectMove_Z_vftable_63();
    ADDRESSVF(0x006702F0, ObjectMove_Z, ObjectMove_Z_vftable_64);
    virtual void ObjectMove_Z_vftable_64();
    ADDRESSVF(0x006710B0, ObjectMove_Z, ObjectMove_Z_vftable_65);
    virtual void ObjectMove_Z_vftable_65();
    ADDRESSVF(0x00718550, ObjectMove_Z, ObjectMove_Z_vftable_66);
    virtual void ObjectMove_Z_vftable_66();
    ADDRESSVF(0x00718CF0, ObjectMove_Z, ObjectMove_Z_vftable_67);
    virtual void ObjectMove_Z_vftable_67();
    ADDRESSVF(0x00718C00, ObjectMove_Z, ObjectMove_Z_vftable_68);
    virtual void ObjectMove_Z_vftable_68();
    ADDRESSVF(0x007164D0, ObjectMove_Z, ObjectMove_Z_vftable_69);
    virtual void ObjectMove_Z_vftable_69();
    ADDRESSVF(0x007166C0, ObjectMove_Z, ObjectMove_Z_vftable_70);
    virtual void ObjectMove_Z_vftable_70();
    ADDRESSVF(0x007168B0, ObjectMove_Z, ObjectMove_Z_vftable_71);
    virtual void ObjectMove_Z_vftable_71();
    ADDRESSVF(0x00716AA0, ObjectMove_Z, ObjectMove_Z_vftable_72);
    virtual void ObjectMove_Z_vftable_72();
    ADDRESSVF(0x00716990, ObjectMove_Z, ObjectMove_Z_vftable_73);
    virtual void ObjectMove_Z_vftable_73();
    ADDRESSVF(0x004DBBA0, ObjectMove_Z, ObjectMove_Z_vftable_74);
    virtual void ObjectMove_Z_vftable_74();
    virtual void *ObjectMove_Z_vftable_75();
    ADDRESSVF(0x004DBB80, ObjectMove_Z, ObjectMove_Z_vftable_76);
    virtual void ObjectMove_Z_vftable_76();
    char data[424];
};

ADDRESSVFTABLE(0x009D6464, VolumeConstant_Z);
class __declspec(dllexport) VolumeConstant_Z : public ObjConstant_Z
{
public:
    ADDRESSVF(0x0082AC50, VolumeConstant_Z, ObjConstant_Z_vftable_0);
    virtual void ObjConstant_Z_vftable_0() override;
};

ADDRESSVFTABLE(0x009D0824, cA_FlatSurface);
class __declspec(dllexport) cA_FlatSurface : public cA_CenteredSurface
{
public:
    ADDRESSVF(0x0074CBF0, cA_FlatSurface, cA_BaseSurface_vftable_0);
    virtual void cA_BaseSurface_vftable_0() override;
    ADDRESSVF(0x0074CBB0, cA_FlatSurface, cA_BaseSurface_vftable_1);
    virtual void cA_BaseSurface_vftable_1() override;
    ADDRESSVF(0x0079C0B0, cA_FlatSurface, cA_BaseSurface_vftable_2);
    virtual void cA_BaseSurface_vftable_2() override;
    ADDRESSVF(0x0079C100, cA_FlatSurface, cA_BaseSurface_vftable_3);
    virtual void cA_BaseSurface_vftable_3() override;
    ADDRESSSYMBOL(0x0079C130, "?cA_BaseSurface_vftable_4@cA_FlatSurface@@UAEXHH@Z");
    virtual void cA_BaseSurface_vftable_4(int, int) override;
    ADDRESSSYMBOL(0x0079C1F0, "?cA_BaseSurface_vftable_5@cA_FlatSurface@@UAEHH@Z");
    virtual int cA_BaseSurface_vftable_5(int) override;
    ADDRESSSYMBOL(0x0079C230, "?cA_BaseSurface_vftable_6@cA_FlatSurface@@UAEXHH@Z");
    virtual void cA_BaseSurface_vftable_6(int, int) override;
    ADDRESSSYMBOL(0x0079C210, "?cA_BaseSurface_vftable_7@cA_FlatSurface@@UAEXHH@Z");
    virtual void cA_BaseSurface_vftable_7(int, int) override;
};

ADDRESSVFTABLE(0x009C03BC, CGuiAnimations_G);
class __declspec(dllexport) CGuiAnimations_G
{
public:
    ADDRESSVF(0x00596440, CGuiAnimations_G, CGuiAnimations_G_vftable_0);
    virtual void CGuiAnimations_G_vftable_0();
    virtual void CGuiAnimations_G_vftable_1() = 0;
    virtual void CGuiAnimations_G_vftable_2();
    virtual void CGuiAnimations_G_vftable_3();
    virtual void CGuiAnimations_G_vftable_4();
};

ADDRESSVFTABLE(0x009C471C, SpecialEffectsProjection_G);
class __declspec(dllexport) SpecialEffectsProjection_G
{
public:
    ADDRESSVF(0x00600550, SpecialEffectsProjection_G, SpecialEffectsProjection_G_vftable_0);
    virtual void SpecialEffectsProjection_G_vftable_0();
    ADDRESSSYMBOL(0x00600680, "?SpecialEffectsProjection_G_vftable_1@SpecialEffectsProjection_G@@UAEHXZ");
    virtual int SpecialEffectsProjection_G_vftable_1();
    ADDRESSVF(0x006005C0, SpecialEffectsProjection_G, SpecialEffectsProjection_G_vftable_2);
    virtual void SpecialEffectsProjection_G_vftable_2();
};

ADDRESSVFTABLE(0x009A9DB4, NetWorkSessionInfo_Z);
class __declspec(dllexport) NetWorkSessionInfo_Z
{
public:
    ADDRESSVF(0x00484B90, NetWorkSessionInfo_Z, NetWorkSessionInfo_Z_vftable_0);
    virtual void NetWorkSessionInfo_Z_vftable_0();
    ADDRESSVF(0x00484940, NetWorkSessionInfo_Z, NetWorkSessionInfo_Z_vftable_1);
    virtual void NetWorkSessionInfo_Z_vftable_1();
    virtual int NetWorkSessionInfo_Z_vftable_2(int);
    virtual void NetWorkSessionInfo_Z_vftable_3(int);
    virtual int NetWorkSessionInfo_Z_vftable_4(int, int);
    virtual int NetWorkSessionInfo_Z_vftable_5();
    virtual void NetWorkSessionInfo_Z_vftable_6(int);
    virtual void NetWorkSessionInfo_Z_vftable_7();
    virtual char NetWorkSessionInfo_Z_vftable_8();
    ADDRESSVF(0x00484AC0, NetWorkSessionInfo_Z, NetWorkSessionInfo_Z_vftable_9);
    virtual void NetWorkSessionInfo_Z_vftable_9();
    ADDRESSVF(0x00484AD0, NetWorkSessionInfo_Z, NetWorkSessionInfo_Z_vftable_10);
    virtual void NetWorkSessionInfo_Z_vftable_10();
};

ADDRESSVFTABLE(0x009C3EAC, SpecialEffectsTank_G);
class __declspec(dllexport) SpecialEffectsTank_G
{
public:
    virtual void SpecialEffectsTank_G_vftable_0(int);
    ADDRESSVF(0x005DE9B0, SpecialEffectsTank_G, SpecialEffectsTank_G_vftable_1);
    virtual void SpecialEffectsTank_G_vftable_1();
    ADDRESSVF(0x005DEA30, SpecialEffectsTank_G, SpecialEffectsTank_G_vftable_2);
    virtual void SpecialEffectsTank_G_vftable_2();
    ADDRESSVF(0x005DEA40, SpecialEffectsTank_G, SpecialEffectsTank_G_vftable_3);
    virtual void SpecialEffectsTank_G_vftable_3();
    ADDRESSSYMBOL(0x005DEBF0, "?SpecialEffectsTank_G_vftable_4@SpecialEffectsTank_G@@UAEXXZ");
    virtual void SpecialEffectsTank_G_vftable_4();
    ADDRESSVF(0x005DEBB0, SpecialEffectsTank_G, SpecialEffectsTank_G_vftable_5);
    virtual void SpecialEffectsTank_G_vftable_5();
    virtual int SpecialEffectsTank_G_vftable_6() = 0;
    virtual void SpecialEffectsTank_G_vftable_7(int) = 0;
    ADDRESSVF(0x005DE850, SpecialEffectsTank_G, SpecialEffectsTank_G_vftable_8);
    virtual void SpecialEffectsTank_G_vftable_8();
    ADDRESSVF(0x005DE870, SpecialEffectsTank_G, SpecialEffectsTank_G_vftable_9);
    virtual void SpecialEffectsTank_G_vftable_9();
    virtual void SpecialEffectsTank_G_vftable_10(int) = 0;
};

ADDRESSVFTABLE(0x009D6470, ParticleConstant_Z);
class __declspec(dllexport) ParticleConstant_Z : public ObjConstant_Z
{
public:
    ADDRESSVF(0x0082AE40, ParticleConstant_Z, ObjConstant_Z_vftable_0);
    virtual void ObjConstant_Z_vftable_0() override;
};

ADDRESSVFTABLE(0x009C310C, GameMissionInfoClient_G);
class __declspec(dllexport) GameMissionInfoClient_G : public GameMissionInfo_G
{
public:
    ADDRESSVF(0x005B5350, GameMissionInfoClient_G, ComObj_Z_vftable_0);
    virtual void ComObj_Z_vftable_0() override;
    virtual void ComObj_Z_vftable_4(int) override;
};

ADDRESSVFTABLE(0x009AF3AC, VolumeRTCMove_G);
class __declspec(dllexport) VolumeRTCMove_G : public Manipulator_Z
{
public:
    ADDRESSSYMBOL(0x00573EB0, "?BaseObject_Z_vftable_0@VolumeRTCMove_G@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x004D4BC0, VolumeRTCMove_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x00573EE0, "?Manipulator_Z_vftable_14@VolumeRTCMove_G@@UAEXXZ");
    virtual void Manipulator_Z_vftable_14() override;
    ADDRESSSYMBOL(0x00573EF0, "?Manipulator_Z_vftable_17@VolumeRTCMove_G@@UAEXH@Z");
    virtual void Manipulator_Z_vftable_17(int) override;
    char data[12];
};

ADDRESSVFTABLE(0x009C41B4, SpecialEffectsTornadoMesh_G);
class __declspec(dllexport) SpecialEffectsTornadoMesh_G : public SpecialEffectsMesh_G
{
public:
    ADDRESSVF(0x005E79C0, SpecialEffectsTornadoMesh_G, SpecialEffectsMesh_G_vftable_0);
    virtual void SpecialEffectsMesh_G_vftable_0() override;
    ADDRESSSYMBOL(0x005E9570, "?SpecialEffectsMesh_G_vftable_1@SpecialEffectsTornadoMesh_G@@UAEXXZ");
    virtual void SpecialEffectsMesh_G_vftable_1() override;
    ADDRESSVF(0x005E7CA0, SpecialEffectsTornadoMesh_G, SpecialEffectsMesh_G_vftable_2);
    virtual void SpecialEffectsMesh_G_vftable_2() override;
    ADDRESSSYMBOL(0x005E9510, "?SpecialEffectsMesh_G_vftable_3@SpecialEffectsTornadoMesh_G@@UAEXH@Z");
    virtual void SpecialEffectsMesh_G_vftable_3(int) override;
    ADDRESSSYMBOL(0x005E9600, "?SpecialEffectsMesh_G_vftable_4@SpecialEffectsTornadoMesh_G@@UAEXHH@Z");
    virtual void SpecialEffectsMesh_G_vftable_4(int, int) override;
    ADDRESSSYMBOL(0x005E9BA0, "?SpecialEffectsMesh_G_vftable_6@SpecialEffectsTornadoMesh_G@@UAEXXZ");
    virtual void SpecialEffectsMesh_G_vftable_6() override;
};

ADDRESSVFTABLE(0x009C04D4, CWindowHierarchy_G);
class __declspec(dllexport) CWindowHierarchy_G
{
public:
    ADDRESSVF(0x00596FB0, CWindowHierarchy_G, CWindowHierarchy_G_vftable_0);
    virtual void CWindowHierarchy_G_vftable_0();
    virtual void CWindowHierarchy_G_vftable_1(int);
    virtual void CWindowHierarchy_G_vftable_2(int);
    virtual char CWindowHierarchy_G_vftable_3() = 0;
    ADDRESSVF(0x00597AE0, CWindowHierarchy_G, CWindowHierarchy_G_vftable_4);
    virtual void CWindowHierarchy_G_vftable_4();
    ADDRESSVF(0x00597B00, CWindowHierarchy_G, CWindowHierarchy_G_vftable_5);
    virtual void CWindowHierarchy_G_vftable_5();
    ADDRESSVF(0x00597B10, CWindowHierarchy_G, CWindowHierarchy_G_vftable_6);
    virtual void CWindowHierarchy_G_vftable_6();
    ADDRESSVF(0x00597B20, CWindowHierarchy_G, CWindowHierarchy_G_vftable_7);
    virtual void CWindowHierarchy_G_vftable_7();
    ADDRESSVF(0x00597B30, CWindowHierarchy_G, CWindowHierarchy_G_vftable_8);
    virtual void CWindowHierarchy_G_vftable_8();
    virtual void CWindowHierarchy_G_vftable_9() = 0;
    virtual void CWindowHierarchy_G_vftable_10() = 0;
    virtual void CWindowHierarchy_G_vftable_11() = 0;
    virtual void CWindowHierarchy_G_vftable_12() = 0;
    virtual void CWindowHierarchy_G_vftable_13(int);
    virtual void CWindowHierarchy_G_vftable_14(int);
};

ADDRESSVFTABLE(0x009C89E8, NetManager_Z);
class __declspec(dllexport) NetManager_Z
{
public:
    virtual char NetManager_Z_vftable_0();
};

ADDRESSVFTABLE(0x009D8C70, PShaderDecl_Z);
class __declspec(dllexport) PShaderDecl_Z : public ShaderDecl_Z
{
public:
    ADDRESSVF(0x00853FF0, PShaderDecl_Z, ShaderDecl_Z_vftable_0);
    virtual void ShaderDecl_Z_vftable_0() override;
    ADDRESSVF(0x00854050, PShaderDecl_Z, ShaderDecl_Z_vftable_1);
    virtual void ShaderDecl_Z_vftable_1() override;
    ADDRESSSYMBOL(0x00875DB0, "?ShaderDecl_Z_vftable_2@PShaderDecl_Z@@UAEXXZ");
    virtual void ShaderDecl_Z_vftable_2() override;
};

ADDRESSVFTABLE(0x009C5C2C, WaterConstant_Z);
class __declspec(dllexport) WaterConstant_Z : public ObjConstant_Z
{
public:
    ADDRESSVF(0x00642290, WaterConstant_Z, ObjConstant_Z_vftable_0);
    virtual void ObjConstant_Z_vftable_0() override;
};

ADDRESSVFTABLE(0x009CB6B8, cA_ValidityMap);
class __declspec(dllexport) cA_ValidityMap : public DataEnreg
{
public:
    ADDRESSVF(0x006FF940, cA_ValidityMap, cA_ValidityMap_vftable_0);
    virtual void cA_ValidityMap_vftable_0();
    virtual char cA_ValidityMap_vftable_1(int);
};

ADDRESSVFTABLE(0x009C122C, CGuiEventMemberSubscriber_class_CRotatingList_G_);
class __declspec(dllexport) CGuiEventMemberSubscriber_class_CRotatingList_G_ : public CGuiEventSubscriber
{
public:
    ADDRESSVF(0x0059FA60, CGuiEventMemberSubscriber_class_CRotatingList_G_, CGuiEventSubscriber_vftable_0);
    virtual void CGuiEventSubscriber_vftable_0() override;
};

ADDRESSVFTABLE(0x009B1F6C, IT_COLLECTMove_G);
class __declspec(dllexport) IT_COLLECTMove_G : public ObjectMove_Z
{
public:
    ADDRESSSYMBOL(0x0050D9F0, "?BaseObject_Z_vftable_0@IT_COLLECTMove_G@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x004DC480, IT_COLLECTMove_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSVF(0x0050DB60, IT_COLLECTMove_G, BaseObject_Z_vftable_13);
    virtual void BaseObject_Z_vftable_13() override;
    ADDRESSSYMBOL(0x0050DAE0, "?Manipulator_Z_vftable_14@IT_COLLECTMove_G@@UAEXXZ");
    virtual void Manipulator_Z_vftable_14() override;
    ADDRESSSYMBOL(0x0050DC00, "?ObjectMove_Z_vftable_18@IT_COLLECTMove_G@@UAEXHHHHHH@Z");
    virtual void ObjectMove_Z_vftable_18(int, int, int, int, int, int) override;
    ADDRESSVF(0x0050E910, IT_COLLECTMove_G, ObjectMove_Z_vftable_30);
    virtual void ObjectMove_Z_vftable_30() override;
    char data[108];
};

ADDRESSVFTABLE(0x009D64DC, WaterHeightMapConstant_Z);
class __declspec(dllexport) WaterHeightMapConstant_Z : public ObjConstant_Z
{
public:
    ADDRESSVF(0x0082B620, WaterHeightMapConstant_Z, ObjConstant_Z_vftable_0);
    virtual void ObjConstant_Z_vftable_0() override;
    ADDRESSSYMBOL(0x00826F60, "?ObjConstant_Z_vftable_1@WaterHeightMapConstant_Z@@UAEXHH@Z");
    virtual void ObjConstant_Z_vftable_1(int, int) override;
};

ADDRESSVFTABLE(0x009B1394, InputEngine_Z);
class __declspec(dllexport) InputEngine_Z
{
public:
    ADDRESSVF(0x004DD870, InputEngine_Z, InputEngine_Z_vftable_0);
    virtual void InputEngine_Z_vftable_0();
    virtual void InputEngine_Z_vftable_1(int);
    virtual char InputEngine_Z_vftable_2();
};

ADDRESSVFTABLE(0x009D76C8, ComDBCommand_Z);
class __declspec(dllexport) ComDBCommand_Z
{
public:
    virtual void ComDBCommand_Z_vftable_0() = 0;
};

ADDRESSVFTABLE(0x009CAC60, CompValFloat1k_16_Z);
class __declspec(dllexport) CompValFloat1k_16_Z : public CompVal_Z
{
public:
    ADDRESSVF(0x006C27B0, CompValFloat1k_16_Z, CompVal_Z_vftable_0);
    virtual void CompVal_Z_vftable_0() override;
    virtual int CompVal_Z_vftable_1() override;
    virtual int CompVal_Z_vftable_2() override;
    ADDRESSVF(0x006C1330, CompValFloat1k_16_Z, CompVal_Z_vftable_3);
    virtual void CompVal_Z_vftable_3() override;
    ADDRESSVF(0x006C13B0, CompValFloat1k_16_Z, CompVal_Z_vftable_4);
    virtual void CompVal_Z_vftable_4() override;
};

ADDRESSVFTABLE(0x009C0EE4, CGuiEventMemberSubscriber_class_CNumericUpDown_G_);
class __declspec(dllexport) CGuiEventMemberSubscriber_class_CNumericUpDown_G_ : public CGuiEventSubscriber
{
public:
    ADDRESSVF(0x0059DF50, CGuiEventMemberSubscriber_class_CNumericUpDown_G_, CGuiEventSubscriber_vftable_0);
    virtual void CGuiEventSubscriber_vftable_0() override;
};

ADDRESSVFTABLE(0x009D4430, GraphLevel_Z);
class __declspec(dllexport) GraphLevel_Z
{
public:
    ADDRESSVF(0x007AD690, GraphLevel_Z, GraphLevel_Z_vftable_0);
    virtual void GraphLevel_Z_vftable_0();
};

ADDRESSVFTABLE(0x009D647C, GroundConstant_Z);
class __declspec(dllexport) GroundConstant_Z : public ObjConstant_Z
{
public:
    ADDRESSVF(0x0082AA80, GroundConstant_Z, ObjConstant_Z_vftable_0);
    virtual void ObjConstant_Z_vftable_0() override;
};

ADDRESSVFTABLE(0x009C2F14, GameState_G);
class __declspec(dllexport) GameState_G : public ComObj_Z
{
public:
    ADDRESSVF(0x005B3510, GameState_G, ComObj_Z_vftable_0);
    virtual void ComObj_Z_vftable_0() override;
};

#include "Renderer_Z.h"

ADDRESSVFTABLE(0x009D63E0, RenderTargetConstant_Z);
class __declspec(dllexport) RenderTargetConstant_Z : public ObjConstant_Z
{
public:
    ADDRESSVF(0x0082C1D0, RenderTargetConstant_Z, ObjConstant_Z_vftable_0);
    virtual void ObjConstant_Z_vftable_0() override;
};

ADDRESSVFTABLE(0x009D76F0, ComDBRecordNewEntry_Z);
class __declspec(dllexport) ComDBRecordNewEntry_Z : public ComDBCommand_Z
{
public:
    ADDRESSVF(0x00871E00, ComDBRecordNewEntry_Z, ComDBCommand_Z_vftable_0);
    virtual void ComDBCommand_Z_vftable_0() override;
};

#include "NetPlayManager_Z.h"

ADDRESSVFTABLE(0x009C2C2C, GameMissions_G);
class __declspec(dllexport) GameMissions_G : public GameMissionInfo_G
{
public:
    ADDRESSVF(0x005AF4B0, GameMissions_G, ComObj_Z_vftable_0);
    virtual void ComObj_Z_vftable_0() override;
    virtual void ComObj_Z_vftable_1() override;
    virtual void ComObj_Z_vftable_2() override;
    virtual void ComObj_Z_vftable_3(int) override;
    virtual void ComObj_Z_vftable_4(int) override;
    ADDRESSVF(0x005AF330, GameMissions_G, ComObj_Z_vftable_5);
    virtual void ComObj_Z_vftable_5() override;
    ADDRESSSYMBOL(0x005AF470, "?ComObj_Z_vftable_7@GameMissions_G@@UAEDH@Z");
    virtual char ComObj_Z_vftable_7(int) override;
    virtual char ComObj_Z_vftable_8(int) override;
};

ADDRESSVFTABLE(0x009CB6D0, StockLakes);
class __declspec(dllexport) StockLakes : public StockData
{
public:
    ADDRESSVF(0x006FF9C0, StockLakes, StockData_vftable_0);
    virtual void StockData_vftable_0() override;
    ADDRESSVF(0x006FF9D0, StockLakes, StockData_vftable_1);
    virtual void StockData_vftable_1() override;
    ADDRESSVF(0x006FFA40, StockLakes, StockData_vftable_2);
    virtual void StockData_vftable_2() override;
    ADDRESSVF(0x006FF9F0, StockLakes, StockData_vftable_3);
    virtual void StockData_vftable_3() override;
};

ADDRESSVFTABLE(0x009BB874, ScriptManager_G);
class __declspec(dllexport) ScriptManager_G : public ABC_ScriptManager
{
public:
    ADDRESSVF(0x00555DA0, ScriptManager_G, ABC_ScriptManager_vftable_0);
    virtual void ABC_ScriptManager_vftable_0() override;
    ADDRESSVF(0x00556230, ScriptManager_G, ABC_ScriptManager_vftable_1);
    virtual void ABC_ScriptManager_vftable_1() override;
    ADDRESSVF(0x00556D50, ScriptManager_G, ABC_ScriptManager_vftable_2);
    virtual void ABC_ScriptManager_vftable_2() override;
    ADDRESSVF(0x00556D60, ScriptManager_G, ABC_ScriptManager_vftable_3);
    virtual void ABC_ScriptManager_vftable_3() override;
    virtual void ABC_ScriptManager_vftable_5() override;
    virtual void ABC_ScriptManager_vftable_6(int, int) override;
    virtual int ABC_ScriptManager_vftable_8(int) override;
    virtual int ABC_ScriptManager_vftable_10(int) override;
    virtual int ABC_ScriptManager_vftable_11(int) override;
    ADDRESSVF(0x0055BFD0, ScriptManager_G, ABC_ScriptManager_vftable_14);
    virtual void ABC_ScriptManager_vftable_14() override;
    ADDRESSSYMBOL(0x0055C760, "?ABC_ScriptManager_vftable_20@ScriptManager_G@@UAEXH@Z");
    virtual void ABC_ScriptManager_vftable_20(int) override;
    ADDRESSSYMBOL(0x0055CB30, "?ABC_ScriptManager_vftable_21@ScriptManager_G@@UAEDHHH@Z");
    virtual char ABC_ScriptManager_vftable_21(int, int, int) override;
    ADDRESSSYMBOL(0x0055CBC0, "?ABC_ScriptManager_vftable_22@ScriptManager_G@@UAEXH@Z");
    virtual void ABC_ScriptManager_vftable_22(int) override;
    ADDRESSSYMBOL(0x0055BFE0, "?ABC_ScriptManager_vftable_23@ScriptManager_G@@UAEXH@Z");
    virtual void ABC_ScriptManager_vftable_23(int) override;
    ADDRESSSYMBOL(0x0055CB50, "?ABC_ScriptManager_vftable_25@ScriptManager_G@@UAEXH@Z");
    virtual void ABC_ScriptManager_vftable_25(int) override;
    ADDRESSSYMBOL(0x0055C290, "?ABC_ScriptManager_vftable_26@ScriptManager_G@@UAEXH@Z");
    virtual void ABC_ScriptManager_vftable_26(int) override;
    ADDRESSSYMBOL(0x0055C1B0, "?ABC_ScriptManager_vftable_27@ScriptManager_G@@UAEXH@Z");
    virtual void ABC_ScriptManager_vftable_27(int) override;
    ADDRESSSYMBOL(0x0055CB60, "?ABC_ScriptManager_vftable_29@ScriptManager_G@@UAEXH@Z");
    virtual void ABC_ScriptManager_vftable_29(int) override;
    ADDRESSSYMBOL(0x0055CF40, "?ABC_ScriptManager_vftable_30@ScriptManager_G@@UAEXH@Z");
    virtual void ABC_ScriptManager_vftable_30(int) override;
    ADDRESSSYMBOL(0x0055ED70, "?ABC_ScriptManager_vftable_32@ScriptManager_G@@UAEXHH@Z");
    virtual void ABC_ScriptManager_vftable_32(int, int) override;
    virtual void ABC_ScriptManager_vftable_33(int, int) override;
    ADDRESSSYMBOL(0x0055ED20, "?ABC_ScriptManager_vftable_34@ScriptManager_G@@UAEXHH@Z");
    virtual void ABC_ScriptManager_vftable_34(int, int) override;
    ADDRESSVF(0x005573F0, ScriptManager_G, ABC_ScriptManager_vftable_35);
    virtual void ABC_ScriptManager_vftable_35() override;
    ADDRESSSYMBOL(0x0055A920, "?ABC_ScriptManager_vftable_36@ScriptManager_G@@UAEXXZ");
    virtual void ABC_ScriptManager_vftable_36() override;
    ADDRESSVF(0x00556190, ScriptManager_G, ABC_ScriptManager_vftable_37);
    virtual void ABC_ScriptManager_vftable_37() override;
    virtual void ScriptManager_G_vftable_38(int, int);
    ADDRESSVF(0x00554D30, ScriptManager_G, ScriptManager_G_vftable_39);
    virtual void ScriptManager_G_vftable_39();
    virtual void ScriptManager_G_vftable_40(int);
    char data[1];
};

ADDRESSVFTABLE(0x009C3EE8, SpecialEffectsOrientedBillboard_G);
class __declspec(dllexport) SpecialEffectsOrientedBillboard_G : public SpecialEffectsParticle_G
{
public:
    ADDRESSVF(0x005DEE30, SpecialEffectsOrientedBillboard_G, SpecialEffectsParticle_G_vftable_0);
    virtual void SpecialEffectsParticle_G_vftable_0() override;
};

ADDRESSVFTABLE(0x009C6C5C, Viewport_Z);
class __declspec(dllexport) Viewport_Z
{
public:
    ADDRESSVF(0x006661E0, Viewport_Z, Viewport_Z_vftable_0);
    virtual void Viewport_Z_vftable_0();
};

ADDRESSVFTABLE(0x009C8B5C, ObjectsGameClip_Z);
class __declspec(dllexport) ObjectsGameClip_Z : public ObjectGame_Z
{
public:
    ADDRESSSYMBOL(0x007C81D0, "?BaseObject_Z_vftable_0@ObjectsGameClip_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x00686DE0, ObjectsGameClip_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x007C8200, "?Manipulator_Z_vftable_17@ObjectsGameClip_Z@@UAEXH@Z");
    virtual void Manipulator_Z_vftable_17(int) override;
    char data[52];
};

ADDRESSVFTABLE(0x009D6410, MatConstant_Z);
class __declspec(dllexport) MatConstant_Z : public ObjConstant_Z
{
public:
    ADDRESSVF(0x00829B60, MatConstant_Z, ObjConstant_Z_vftable_0);
    virtual void ObjConstant_Z_vftable_0() override;
};

ADDRESSVFTABLE(0x009B1980, PATH_Cache);
class __declspec(dllexport) PATH_Cache
{
public:
    ADDRESSVF(0x004DD3C0, PATH_Cache, PATH_Cache_vftable_0);
    virtual void PATH_Cache_vftable_0();
    virtual void PATH_Cache_vftable_1() = 0;
    virtual void PATH_Cache_vftable_2();
};

ADDRESSVFTABLE(0x009D6458, LightConstant_Z);
class __declspec(dllexport) LightConstant_Z : public ObjConstant_Z
{
public:
    ADDRESSVF(0x0082CF00, LightConstant_Z, ObjConstant_Z_vftable_0);
    virtual void ObjConstant_Z_vftable_0() override;
};

ADDRESSVFTABLE(0x009C3138, GameLobby_G);
class __declspec(dllexport) GameLobby_G : public ComObj_Z
{
public:
    ADDRESSVF(0x005B4F50, GameLobby_G, ComObj_Z_vftable_0);
    virtual void ComObj_Z_vftable_0() override;
    virtual void ComObj_Z_vftable_3(int) override = 0;
    virtual void ComObj_Z_vftable_4(int) override = 0;
};

ADDRESSVFTABLE(0x009D4C3C, WinSoundBF_Z);
class __declspec(dllexport) WinSoundBF_Z : public BaseStream_Z
{
public:
    ADDRESSVF(0x0081B8B0, WinSoundBF_Z, BaseStream_Z_vftable_0);
    virtual void BaseStream_Z_vftable_0() override;
    ADDRESSSYMBOL(0x008355F0, "?BaseStream_Z_vftable_3@WinSoundBF_Z@@UAEXHHH@Z");
    virtual void BaseStream_Z_vftable_3(int, int, int) override;
    virtual void BaseStream_Z_vftable_4(int, int, int) override;
};

ADDRESSVFTABLE(0x009DA6A4, LiveFriend_Z);
class __declspec(dllexport) LiveFriend_Z
{
public:
    ADDRESSVF(0x00873520, LiveFriend_Z, LiveFriend_Z_vftable_0);
    virtual void LiveFriend_Z_vftable_0();
    virtual void LiveFriend_Z_vftable_1() = 0;
    virtual void LiveFriend_Z_vftable_2() = 0;
    virtual void LiveFriend_Z_vftable_3() = 0;
    virtual void LiveFriend_Z_vftable_4() = 0;
    virtual void LiveFriend_Z_vftable_5() = 0;
    virtual void LiveFriend_Z_vftable_6() = 0;
    virtual void LiveFriend_Z_vftable_7() = 0;
    virtual void LiveFriend_Z_vftable_8() = 0;
};

ADDRESSVFTABLE(0x009C4290, SpecialEffectsWaterEmitter_G);
class __declspec(dllexport) SpecialEffectsWaterEmitter_G : public SpecialEffectsEmitter_G_class_SpecialEffectsQuad_G_
{
public:
    ADDRESSVF(0x005EE570, SpecialEffectsWaterEmitter_G, SpecialEffectsBaseEmitter_G_vftable_0);
    virtual void SpecialEffectsBaseEmitter_G_vftable_0() override;
    ADDRESSVF(0x005EEAA0, SpecialEffectsWaterEmitter_G, SpecialEffectsBaseEmitter_G_vftable_3);
    virtual void SpecialEffectsBaseEmitter_G_vftable_3() override;
    ADDRESSVF(0x005EEAD0, SpecialEffectsWaterEmitter_G, SpecialEffectsBaseEmitter_G_vftable_4);
    virtual void SpecialEffectsBaseEmitter_G_vftable_4() override;
    ADDRESSVF(0x005EE5C0, SpecialEffectsWaterEmitter_G, SpecialEffectsBaseEmitter_G_vftable_6);
    virtual void SpecialEffectsBaseEmitter_G_vftable_6() override;
};

ADDRESSVFTABLE(0x009D64D0, TargetMorphConstant_Z);
class __declspec(dllexport) TargetMorphConstant_Z : public ObjConstant_Z
{
public:
    ADDRESSVF(0x0082B420, TargetMorphConstant_Z, ObjConstant_Z_vftable_0);
    virtual void ObjConstant_Z_vftable_0() override;
    ADDRESSSYMBOL(0x00826F00, "?ObjConstant_Z_vftable_1@TargetMorphConstant_Z@@UAEXHH@Z");
    virtual void ObjConstant_Z_vftable_1(int, int) override;
};

ADDRESSVFTABLE(0x009AEB78, ComWorldClt_Z);
class __declspec(dllexport) ComWorldClt_Z : public ComWorld_Z
{
public:
    ADDRESSVF(0x004D2F40, ComWorldClt_Z, ComWorld_Z_vftable_0);
    virtual void ComWorld_Z_vftable_0() override;
    ADDRESSVF(0x004D27A0, ComWorldClt_Z, ComWorld_Z_vftable_2);
    virtual void ComWorld_Z_vftable_2() override;
    ADDRESSSYMBOL(0x004D27D0, "?ComWorld_Z_vftable_3@ComWorldClt_Z@@UAEXH@Z");
    virtual void ComWorld_Z_vftable_3(int) override;
};

ADDRESSVFTABLE(0x009D2D78, IGAManager_Z);
class __declspec(dllexport) IGAManager_Z
{
public:
    ADDRESSVF(0x007C08C0, IGAManager_Z, IGAManager_Z_vftable_0);
    virtual void IGAManager_Z_vftable_0();
    ADDRESSVF(0x007C0920, IGAManager_Z, IGAManager_Z_vftable_1);
    virtual void IGAManager_Z_vftable_1();
    virtual void IGAManager_Z_vftable_2();
    ADDRESSVF(0x007C0A00, IGAManager_Z, IGAManager_Z_vftable_3);
    virtual void IGAManager_Z_vftable_3();
    virtual void IGAManager_Z_vftable_4(int);
    virtual char IGAManager_Z_vftable_5();
};

ADDRESSVFTABLE(0x009D6258, LiveOverlappedCommand_Z);
class __declspec(dllexport) LiveOverlappedCommand_Z
{
public:
    ADDRESSVF(0x00822370, LiveOverlappedCommand_Z, LiveOverlappedCommand_Z_vftable_0);
    virtual void LiveOverlappedCommand_Z_vftable_0();
    ADDRESSVF(0x00822350, LiveOverlappedCommand_Z, LiveOverlappedCommand_Z_vftable_1);
    virtual void LiveOverlappedCommand_Z_vftable_1();
    virtual void *LiveOverlappedCommand_Z_vftable_2();
};

ADDRESSVFTABLE(0x009C2A3C, OwnerSrvGame_G);
class __declspec(dllexport) OwnerSrvGame_G : public ComOwner_Z
{
public:
    ADDRESSVF(0x005AAEE0, OwnerSrvGame_G, ComOwner_Z_vftable_0);
    virtual void ComOwner_Z_vftable_0() override;
    virtual char ComOwner_Z_vftable_5() override;
};

ADDRESSVFTABLE(0x009C0228, CGuiEventMemberSubscriber_class_Dialog_StartLang_);
class __declspec(dllexport) CGuiEventMemberSubscriber_class_Dialog_StartLang_ : public CGuiEventSubscriber
{
public:
    ADDRESSVF(0x00594610, CGuiEventMemberSubscriber_class_Dialog_StartLang_, CGuiEventSubscriber_vftable_0);
    virtual void CGuiEventSubscriber_vftable_0() override;
};

ADDRESSVFTABLE(0x009C89DC, ParticlesManager_Z);
class __declspec(dllexport) ParticlesManager_Z : public DataManager_Z_struct__ParticleElement_Z_
{
public:
    ADDRESSVF(0x00686CE0, ParticlesManager_Z, DataManager_Z_struct__ParticleElement_Z__vftable_0);
    virtual void DataManager_Z_struct__ParticleElement_Z__vftable_0() override;
    char data[1];
};

ADDRESSVFTABLE(0x009CACC0, CompValQuat_32_Z);
class __declspec(dllexport) CompValQuat_32_Z : public CompVal_Z
{
public:
    ADDRESSVF(0x006C28B0, CompValQuat_32_Z, CompVal_Z_vftable_0);
    virtual void CompVal_Z_vftable_0() override;
    virtual int CompVal_Z_vftable_1() override;
    virtual int CompVal_Z_vftable_2() override;
    ADDRESSVF(0x006C1750, CompValQuat_32_Z, CompVal_Z_vftable_3);
    virtual void CompVal_Z_vftable_3() override;
    ADDRESSVF(0x006C17F0, CompValQuat_32_Z, CompVal_Z_vftable_4);
    virtual void CompVal_Z_vftable_4() override;
};

ADDRESSVFTABLE(0x009AC580, InGame3DVehicle);
class __declspec(dllexport) InGame3DVehicle : public InGame3DBase
{
public:
    ADDRESSVF(0x004D10F0, InGame3DVehicle, InGame3DBase_vftable_0);
    virtual void InGame3DBase_vftable_0() override;
    ADDRESSSYMBOL(0x004D0DF0, "?InGame3DBase_vftable_1@InGame3DVehicle@@UAEXH@Z");
    virtual void InGame3DBase_vftable_1(int) override;
};

ADDRESSVFTABLE(0x009AECD4, StyleStatus_G);
class __declspec(dllexport) StyleStatus_G : public ObjectGame_Z
{
public:
    ADDRESSSYMBOL(0x004C83B0, "?BaseObject_Z_vftable_0@StyleStatus_G@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x004D3500, StyleStatus_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    virtual void Manipulator_Z_vftable_14() override;
    ADDRESSSYMBOL(0x004C83D0, "?Manipulator_Z_vftable_17@StyleStatus_G@@UAEXH@Z");
    virtual void Manipulator_Z_vftable_17(int) override;
    char data[92];
};

ADDRESSVFTABLE(0x009CACA8, CompValVec3300_48_Z);
class __declspec(dllexport) CompValVec3300_48_Z : public CompVal_Z
{
public:
    ADDRESSVF(0x006C2870, CompValVec3300_48_Z, CompVal_Z_vftable_0);
    virtual void CompVal_Z_vftable_0() override;
    virtual int CompVal_Z_vftable_1() override;
    virtual int CompVal_Z_vftable_2() override;
    ADDRESSVF(0x006C1630, CompValVec3300_48_Z, CompVal_Z_vftable_3);
    virtual void CompVal_Z_vftable_3() override;
    ADDRESSVF(0x006C1660, CompValVec3300_48_Z, CompVal_Z_vftable_4);
    virtual void CompVal_Z_vftable_4() override;
};

ADDRESSVFTABLE(0x009D6288, XSessionSearchLiveOverlappedCommand_Z);
class __declspec(dllexport) XSessionSearchLiveOverlappedCommand_Z : public LiveOverlappedCommand_Z
{
public:
    ADDRESSVF(0x00822580, XSessionSearchLiveOverlappedCommand_Z, LiveOverlappedCommand_Z_vftable_0);
    virtual void LiveOverlappedCommand_Z_vftable_0() override;
    ADDRESSVF(0x00822530, XSessionSearchLiveOverlappedCommand_Z, LiveOverlappedCommand_Z_vftable_1);
    virtual void LiveOverlappedCommand_Z_vftable_1() override;
    virtual void *LiveOverlappedCommand_Z_vftable_2() override;
};

#include "ViewportHUD.h"

ADDRESSVFTABLE(0x009D4C0C, ComDB_Z);
class __declspec(dllexport) ComDB_Z
{
public:
    virtual void ComDB_Z_vftable_0() = 0;
    virtual char ComDB_Z_vftable_1() = 0;
    virtual void ComDB_Z_vftable_2() = 0;
    virtual void ComDB_Z_vftable_3() = 0;
    virtual void ComDB_Z_vftable_4() = 0;
    virtual void ComDB_Z_vftable_5() = 0;
    virtual void ComDB_Z_vftable_6() = 0;
    virtual void ComDB_Z_vftable_7() = 0;
    virtual void ComDB_Z_vftable_8() = 0;
    virtual void ComDB_Z_vftable_9() = 0;
    virtual void ComDB_Z_vftable_10() = 0;
};

ADDRESSVFTABLE(0x009B3308, GeneratedOfflineVisibleObject);
class __declspec(dllexport) GeneratedOfflineVisibleObject : public VisibleObjectContainer
{
public:
    ADDRESSVF(0x004FCEE0, GeneratedOfflineVisibleObject, VisibleObjectContainer_vftable_0);
    virtual void VisibleObjectContainer_vftable_0() override;
    ADDRESSSYMBOL(0x004F6FD0, "?VisibleObjectContainer_vftable_3@GeneratedOfflineVisibleObject@@UAEXHH@Z");
    virtual void VisibleObjectContainer_vftable_3(int, int) override;
    ADDRESSSYMBOL(0x004F83D0, "?VisibleObjectContainer_vftable_4@GeneratedOfflineVisibleObject@@UAEXHH@Z");
    virtual void VisibleObjectContainer_vftable_4(int, int) override;
};

ADDRESSVFTABLE(0x009D6494, RotShapeConstant_Z);
class __declspec(dllexport) RotShapeConstant_Z : public ObjConstant_Z
{
public:
    ADDRESSVF(0x0082C590, RotShapeConstant_Z, ObjConstant_Z_vftable_0);
    virtual void ObjConstant_Z_vftable_0() override;
};

ADDRESSVFTABLE(0x009C9578, BaseColSurfaceCache_Z);
class __declspec(dllexport) BaseColSurfaceCache_Z
{
public:
    ADDRESSVF(0x0068CB60, BaseColSurfaceCache_Z, BaseColSurfaceCache_Z_vftable_0);
    virtual void BaseColSurfaceCache_Z_vftable_0();
};

ADDRESSVFTABLE(0x009D62B8, NetWorkSessionInfoLive_Z);
class __declspec(dllexport) NetWorkSessionInfoLive_Z : public NetWorkSessionInfo_Z
{
public:
    ADDRESSVF(0x00822950, NetWorkSessionInfoLive_Z, NetWorkSessionInfo_Z_vftable_0);
    virtual void NetWorkSessionInfo_Z_vftable_0() override;
    ADDRESSVF(0x008227B0, NetWorkSessionInfoLive_Z, NetWorkSessionInfo_Z_vftable_1);
    virtual void NetWorkSessionInfo_Z_vftable_1() override;
    ADDRESSSYMBOL(0x00822830, "?NetWorkSessionInfo_Z_vftable_2@NetWorkSessionInfoLive_Z@@UAEHH@Z");
    virtual int NetWorkSessionInfo_Z_vftable_2(int) override;
    ADDRESSSYMBOL(0x00822850, "?NetWorkSessionInfo_Z_vftable_3@NetWorkSessionInfoLive_Z@@UAEXH@Z");
    virtual void NetWorkSessionInfo_Z_vftable_3(int) override;
    ADDRESSSYMBOL(0x00822870, "?NetWorkSessionInfo_Z_vftable_4@NetWorkSessionInfoLive_Z@@UAEHHH@Z");
    virtual int NetWorkSessionInfo_Z_vftable_4(int, int) override;
    virtual int NetWorkSessionInfo_Z_vftable_5() override;
    ADDRESSSYMBOL(0x008228B0, "?NetWorkSessionInfo_Z_vftable_6@NetWorkSessionInfoLive_Z@@UAEXH@Z");
    virtual void NetWorkSessionInfo_Z_vftable_6(int) override;
    ADDRESSSYMBOL(0x008228D0, "?NetWorkSessionInfo_Z_vftable_7@NetWorkSessionInfoLive_Z@@UAEXXZ");
    virtual void NetWorkSessionInfo_Z_vftable_7() override;
    ADDRESSSYMBOL(0x008228E0, "?NetWorkSessionInfo_Z_vftable_8@NetWorkSessionInfoLive_Z@@UAEDXZ");
    virtual char NetWorkSessionInfo_Z_vftable_8() override;
    ADDRESSVF(0x008251C0, NetWorkSessionInfoLive_Z, NetWorkSessionInfo_Z_vftable_9);
    virtual void NetWorkSessionInfo_Z_vftable_9() override;
};

ADDRESSVFTABLE(0x009C4FB4, IAPathBlockManager);
class __declspec(dllexport) IAPathBlockManager : public ObjectGame_Z
{
public:
    ADDRESSVF(0x00627340, IAPathBlockManager, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    virtual void Manipulator_Z_vftable_17(int) override;
    char data[48];
};

ADDRESSVFTABLE(0x009C2544, ComWorldSrv_Z);
class __declspec(dllexport) ComWorldSrv_Z : public ComWorld_Z
{
public:
    ADDRESSVF(0x005A5E30, ComWorldSrv_Z, ComWorld_Z_vftable_0);
    virtual void ComWorld_Z_vftable_0() override;
    ADDRESSVF(0x005A5E20, ComWorldSrv_Z, ComWorld_Z_vftable_2);
    virtual void ComWorld_Z_vftable_2() override;
};

ADDRESSVFTABLE(0x009C9364, InputPlatForm_Z);
class __declspec(dllexport) InputPlatForm_Z
{
public:
    ADDRESSVF(0x0068CD50, InputPlatForm_Z, InputPlatForm_Z_vftable_0);
    virtual void InputPlatForm_Z_vftable_0();
    ADDRESSVF(0x0068CE00, InputPlatForm_Z, InputPlatForm_Z_vftable_1);
    virtual void InputPlatForm_Z_vftable_1();
    ADDRESSVF(0x0068CEF0, InputPlatForm_Z, InputPlatForm_Z_vftable_2);
    virtual void InputPlatForm_Z_vftable_2();
    virtual void InputPlatForm_Z_vftable_3();
    ADDRESSVF(0x0068D1D0, InputPlatForm_Z, InputPlatForm_Z_vftable_4);
    virtual void InputPlatForm_Z_vftable_4();
    ADDRESSVF(0x0068D310, InputPlatForm_Z, InputPlatForm_Z_vftable_5);
    virtual void InputPlatForm_Z_vftable_5();
    virtual void InputPlatForm_Z_vftable_6(int);
    ADDRESSVF(0x0066ACD0, InputPlatForm_Z, InputPlatForm_Z_vftable_7);
    virtual void InputPlatForm_Z_vftable_7();
    virtual char InputPlatForm_Z_vftable_8(int);
    ADDRESSVF(0x0066AC50, InputPlatForm_Z, InputPlatForm_Z_vftable_9);
    virtual void InputPlatForm_Z_vftable_9();
    virtual void InputPlatForm_Z_vftable_10(int, int, int);
    ADDRESSVF(0x0066A9B0, InputPlatForm_Z, InputPlatForm_Z_vftable_11);
    virtual void InputPlatForm_Z_vftable_11();
    ADDRESSVF(0x0066AA10, InputPlatForm_Z, InputPlatForm_Z_vftable_12);
    virtual void InputPlatForm_Z_vftable_12();
    virtual void InputPlatForm_Z_vftable_13(int);
    virtual void InputPlatForm_Z_vftable_14(int);
    virtual void InputPlatForm_Z_vftable_15(int, int);
    virtual void InputPlatForm_Z_vftable_16(int, int, int);
    ADDRESSVF(0x0066AD70, InputPlatForm_Z, InputPlatForm_Z_vftable_17);
    virtual void InputPlatForm_Z_vftable_17();
    virtual int InputPlatForm_Z_vftable_18(int, int);
    virtual void InputPlatForm_Z_vftable_19();
    ADDRESSVF(0x0068D3E0, InputPlatForm_Z, InputPlatForm_Z_vftable_20);
    virtual void InputPlatForm_Z_vftable_20();
    ADDRESSVF(0x0068D400, InputPlatForm_Z, InputPlatForm_Z_vftable_21);
    virtual void InputPlatForm_Z_vftable_21();
    ADDRESSVF(0x0066ADD0, InputPlatForm_Z, InputPlatForm_Z_vftable_22);
    virtual void InputPlatForm_Z_vftable_22();
    ADDRESSVF(0x0066AE60, InputPlatForm_Z, InputPlatForm_Z_vftable_23);
    virtual void InputPlatForm_Z_vftable_23();
    ADDRESSVF(0x0068D410, InputPlatForm_Z, InputPlatForm_Z_vftable_24);
    virtual void InputPlatForm_Z_vftable_24();
    ADDRESSVF(0x0068D430, InputPlatForm_Z, InputPlatForm_Z_vftable_25);
    virtual void InputPlatForm_Z_vftable_25();
    ADDRESSVF(0x0068D440, InputPlatForm_Z, InputPlatForm_Z_vftable_26);
    virtual void InputPlatForm_Z_vftable_26();
    ADDRESSVF(0x0068D450, InputPlatForm_Z, InputPlatForm_Z_vftable_27);
    virtual void InputPlatForm_Z_vftable_27();
    ADDRESSVF(0x0068D460, InputPlatForm_Z, InputPlatForm_Z_vftable_28);
    virtual void InputPlatForm_Z_vftable_28();
    ADDRESSVF(0x0068D480, InputPlatForm_Z, InputPlatForm_Z_vftable_29);
    virtual void InputPlatForm_Z_vftable_29();
    ADDRESSVF(0x0068D4A0, InputPlatForm_Z, InputPlatForm_Z_vftable_30);
    virtual void InputPlatForm_Z_vftable_30();
    ADDRESSVF(0x0068D4E0, InputPlatForm_Z, InputPlatForm_Z_vftable_31);
    virtual void InputPlatForm_Z_vftable_31();
    ADDRESSVF(0x0066AF10, InputPlatForm_Z, InputPlatForm_Z_vftable_32);
    virtual void InputPlatForm_Z_vftable_32();
    virtual void InputPlatForm_Z_vftable_33();
    virtual int InputPlatForm_Z_vftable_34(int, int, int);
    virtual int InputPlatForm_Z_vftable_35(int, int);
    virtual int InputPlatForm_Z_vftable_36();
    ADDRESSVF(0x0066AED0, InputPlatForm_Z, InputPlatForm_Z_vftable_37);
    virtual void InputPlatForm_Z_vftable_37();
    virtual void InputPlatForm_Z_vftable_38(int, int);
    ADDRESSVF(0x0066AA30, InputPlatForm_Z, InputPlatForm_Z_vftable_39);
    virtual void InputPlatForm_Z_vftable_39();
    ADDRESSVF(0x0068D540, InputPlatForm_Z, InputPlatForm_Z_vftable_40);
    virtual void InputPlatForm_Z_vftable_40();
};

ADDRESSVFTABLE(0x009BBE5C, IsToBePlayed);
class __declspec(dllexport) IsToBePlayed
{
public:
    ADDRESSVF(0x005602A0, IsToBePlayed, IsToBePlayed_vftable_0);
    virtual void IsToBePlayed_vftable_0();
    virtual void IsToBePlayed_vftable_1() = 0;
};

ADDRESSVFTABLE(0x009B1A30, PATH_ATV_ALT_Case);
class __declspec(dllexport) PATH_ATV_ALT_Case : public PATH_Case
{
public:
    ADDRESSSYMBOL(0x0061EAF0, "?PATH_Case_vftable_0@PATH_ATV_ALT_Case@@UAEXH@Z");
    virtual void PATH_Case_vftable_0(int) override;
    ADDRESSVF(0x004DD710, PATH_ATV_ALT_Case, PATH_Case_vftable_1);
    virtual void PATH_Case_vftable_1() override;
};

ADDRESSVFTABLE(0x009A54B4, MissionHUD);
class __declspec(dllexport) MissionHUD : public ViewportHUD
{
public:
    ADDRESSSYMBOL(0x004B16A0, "?ViewportHUD_vftable_0@MissionHUD@@UAEXH@Z");
    virtual void ViewportHUD_vftable_0(int) override;
    virtual void ViewportHUD_vftable_1() override;
    ADDRESSSYMBOL(0x004B18C0, "?ViewportHUD_vftable_2@MissionHUD@@UAEXH@Z");
    virtual void ViewportHUD_vftable_2(int) override;
    ADDRESSVF(0x004B1870, MissionHUD, ViewportHUD_vftable_3);
    virtual void ViewportHUD_vftable_3() override;
    ADDRESSSYMBOL(0x004B3C40, "?ViewportHUD_vftable_5@MissionHUD@@UAEXH@Z");
    virtual void ViewportHUD_vftable_5(int) override;
    ADDRESSVF(0x004B8CB0, MissionHUD, ViewportHUD_vftable_19);
    virtual void ViewportHUD_vftable_19() override;
};

ADDRESSVFTABLE(0x009D559C, WinLiveNetManager_Z);
class __declspec(dllexport) WinLiveNetManager_Z : public NetManager_Z
{
public:
    ADDRESSSYMBOL(0x0081C9D0, "?NetManager_Z_vftable_0@WinLiveNetManager_Z@@UAEDXZ");
    virtual char NetManager_Z_vftable_0() override;
};

ADDRESSVFTABLE(0x009A5704, Dialog_G);
class __declspec(dllexport) Dialog_G : public CWindowHierarchy_G
{
public:
    ADDRESSVF(0x00447550, Dialog_G, CWindowHierarchy_G_vftable_0);
    virtual void CWindowHierarchy_G_vftable_0() override;
    virtual char CWindowHierarchy_G_vftable_3() override;
    ADDRESSVF(0x00447C10, Dialog_G, CWindowHierarchy_G_vftable_4);
    virtual void CWindowHierarchy_G_vftable_4() override;
    ADDRESSVF(0x00447A50, Dialog_G, CWindowHierarchy_G_vftable_5);
    virtual void CWindowHierarchy_G_vftable_5() override;
    ADDRESSVF(0x00447AC0, Dialog_G, CWindowHierarchy_G_vftable_6);
    virtual void CWindowHierarchy_G_vftable_6() override;
    ADDRESSVF(0x00447B30, Dialog_G, CWindowHierarchy_G_vftable_7);
    virtual void CWindowHierarchy_G_vftable_7() override;
    ADDRESSVF(0x00447BA0, Dialog_G, CWindowHierarchy_G_vftable_8);
    virtual void CWindowHierarchy_G_vftable_8() override;
    ADDRESSVF(0x00447FC0, Dialog_G, CWindowHierarchy_G_vftable_9);
    virtual void CWindowHierarchy_G_vftable_9() override;
    ADDRESSVF(0x004480B0, Dialog_G, CWindowHierarchy_G_vftable_10);
    virtual void CWindowHierarchy_G_vftable_10() override;
    ADDRESSVF(0x004481A0, Dialog_G, CWindowHierarchy_G_vftable_11);
    virtual void CWindowHierarchy_G_vftable_11() override;
    ADDRESSVF(0x00448290, Dialog_G, CWindowHierarchy_G_vftable_12);
    virtual void CWindowHierarchy_G_vftable_12() override;
    virtual void Dialog_G_vftable_15();
    virtual void Dialog_G_vftable_16(int);
    ADDRESSSYMBOL(0x00447640, "?Dialog_G_vftable_17@Dialog_G@@UAEXXZ");
    virtual void Dialog_G_vftable_17();
    virtual void Dialog_G_vftable_18();
    ADDRESSVF(0x004476B0, Dialog_G, Dialog_G_vftable_19);
    virtual void Dialog_G_vftable_19();
    virtual void Dialog_G_vftable_20();
    ADDRESSVF(0x004477D0, Dialog_G, Dialog_G_vftable_21);
    virtual void Dialog_G_vftable_21();
    ADDRESSVF(0x00447830, Dialog_G, Dialog_G_vftable_22);
    virtual void Dialog_G_vftable_22();
    ADDRESSVF(0x004476D0, Dialog_G, Dialog_G_vftable_23);
    virtual void Dialog_G_vftable_23();
    ADDRESSVF(0x004475D0, Dialog_G, Dialog_G_vftable_24);
    virtual void Dialog_G_vftable_24();
    ADDRESSVF(0x00447F30, Dialog_G, Dialog_G_vftable_25);
    virtual void Dialog_G_vftable_25();
    ADDRESSVF(0x00447F60, Dialog_G, Dialog_G_vftable_26);
    virtual void Dialog_G_vftable_26();
    virtual void Dialog_G_vftable_27(int);
};

ADDRESSVFTABLE(0x009C5BE8, cA_DecorPreLoadTree__cA_PropertyData);
class __declspec(dllexport) cA_DecorPreLoadTree__cA_PropertyData
{
public:
    ADDRESSVF(0x0063E9D0, cA_DecorPreLoadTree__cA_PropertyData, cA_DecorPreLoadTree__cA_PropertyData_vftable_0);
    virtual void cA_DecorPreLoadTree__cA_PropertyData_vftable_0();
};

ADDRESSVFTABLE(0x009D739C, PatchConstant_Z);
class __declspec(dllexport) PatchConstant_Z : public ObjConstant_Z
{
public:
    ADDRESSVF(0x0083A6F0, PatchConstant_Z, ObjConstant_Z_vftable_0);
    virtual void ObjConstant_Z_vftable_0() override;
};

ADDRESSVFTABLE(0x009C2ED8, GameAction_G);
class __declspec(dllexport) GameAction_G : public ComObj_Z
{
public:
    ADDRESSVF(0x005B3330, GameAction_G, ComObj_Z_vftable_0);
    virtual void ComObj_Z_vftable_0() override;
    virtual void ComObj_Z_vftable_3(int) override = 0;
    virtual void ComObj_Z_vftable_4(int) override = 0;
    virtual char GameAction_G_vftable_10(int, int) = 0;
    virtual char GameAction_G_vftable_11(int, int, int) = 0;
    virtual void GameAction_G_vftable_12(int) = 0;
    virtual void GameAction_G_vftable_13() = 0;
};

ADDRESSVFTABLE(0x009A1AB0, COM_Class_AvoidNode);
class __declspec(dllexport) COM_Class_AvoidNode : public CommandStateTemplate_G
{
public:
    ADDRESSVF(0x004242C0, COM_Class_AvoidNode, StateTemplate_G_vftable_0);
    virtual void StateTemplate_G_vftable_0() override;
    ADDRESSSYMBOL(0x004259C0, "?StateTemplate_G_vftable_3@COM_Class_AvoidNode@@UAEDH@Z");
    virtual char StateTemplate_G_vftable_3(int) override;
};

ADDRESSVFTABLE(0x009CAC48, CompValVec2100k_32_Z);
class __declspec(dllexport) CompValVec2100k_32_Z : public CompVal_Z
{
public:
    ADDRESSVF(0x006C28F0, CompValVec2100k_32_Z, CompVal_Z_vftable_0);
    virtual void CompVal_Z_vftable_0() override;
    virtual int CompVal_Z_vftable_1() override;
    virtual int CompVal_Z_vftable_2() override;
    ADDRESSVF(0x006C1260, CompValVec2100k_32_Z, CompVal_Z_vftable_3);
    virtual void CompVal_Z_vftable_3() override;
    ADDRESSVF(0x006C1280, CompValVec2100k_32_Z, CompVal_Z_vftable_4);
    virtual void CompVal_Z_vftable_4() override;
};

ADDRESSVFTABLE(0x009B222C, IT_Condition);
class __declspec(dllexport) IT_Condition : public Manipulator_Z
{
public:
    ADDRESSSYMBOL(0x00512830, "?BaseObject_Z_vftable_0@IT_Condition@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x004DC530, IT_Condition, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x00512860, "?Manipulator_Z_vftable_14@IT_Condition@@UAEXXZ");
    virtual void Manipulator_Z_vftable_14() override;
    ADDRESSSYMBOL(0x005128E0, "?Manipulator_Z_vftable_17@IT_Condition@@UAEXH@Z");
    virtual void Manipulator_Z_vftable_17(int) override;
    ADDRESSVF(0x005128B0, IT_Condition, IT_Condition_vftable_18);
    virtual void IT_Condition_vftable_18();
    char data[12];
};

ADDRESSVFTABLE(0x009D64E8, ClearConstant_Z);
class __declspec(dllexport) ClearConstant_Z : public ObjConstant_Z
{
public:
    ADDRESSVF(0x0082BA70, ClearConstant_Z, ObjConstant_Z_vftable_0);
    virtual void ObjConstant_Z_vftable_0() override;
    ADDRESSSYMBOL(0x00826FA0, "?ObjConstant_Z_vftable_1@ClearConstant_Z@@UAEXHH@Z");
    virtual void ObjConstant_Z_vftable_1(int, int) override;
};

ADDRESSVFTABLE(0x009D63B0, ShadowMapConstant_Z);
class __declspec(dllexport) ShadowMapConstant_Z : public MatConstant_Z
{
public:
    ADDRESSVF(0x008270D0, ShadowMapConstant_Z, ObjConstant_Z_vftable_0);
    virtual void ObjConstant_Z_vftable_0() override;
};

ADDRESSVFTABLE(0x009D3AE0, MetaStreamFile_Z);
class __declspec(dllexport) MetaStreamFile_Z
{
public:
    ADDRESSVF(0x007D7980, MetaStreamFile_Z, MetaStreamFile_Z_vftable_0);
    virtual void MetaStreamFile_Z_vftable_0();
    ADDRESSVF(0x007D7CC0, MetaStreamFile_Z, MetaStreamFile_Z_vftable_1);
    virtual void MetaStreamFile_Z_vftable_1();
    ADDRESSVF(0x007D7D10, MetaStreamFile_Z, MetaStreamFile_Z_vftable_2);
    virtual void MetaStreamFile_Z_vftable_2();
    virtual void MetaStreamFile_Z_vftable_3(int);
};

ADDRESSVFTABLE(0x009D8154, LiveVoiceManager_Z);
class __declspec(dllexport) LiveVoiceManager_Z : public VoiceManager_Z
{
public:
    ADDRESSSYMBOL(0x00874BA0, "?NetPlayModule_Z_vftable_0@LiveVoiceManager_Z@@UAEDXZ");
    virtual char NetPlayModule_Z_vftable_0() override;
    ADDRESSSYMBOL(0x00874C60, "?NetPlayModule_Z_vftable_2@LiveVoiceManager_Z@@UAEDXZ");
    virtual char NetPlayModule_Z_vftable_2() override;
    ADDRESSSYMBOL(0x00874DB0, "?VoiceManager_Z_vftable_4@LiveVoiceManager_Z@@UAEDH@Z");
    virtual char VoiceManager_Z_vftable_4(int) override;
    ADDRESSVF(0x00874DE0, LiveVoiceManager_Z, VoiceManager_Z_vftable_5);
    virtual void VoiceManager_Z_vftable_5() override;
    ADDRESSVF(0x00874DF0, LiveVoiceManager_Z, VoiceManager_Z_vftable_6);
    virtual void VoiceManager_Z_vftable_6() override;
    ADDRESSVF(0x00874E00, LiveVoiceManager_Z, VoiceManager_Z_vftable_7);
    virtual void VoiceManager_Z_vftable_7() override;
    ADDRESSSYMBOL(0x00874F40, "?VoiceManager_Z_vftable_8@LiveVoiceManager_Z@@UAEXHHH@Z");
    virtual void VoiceManager_Z_vftable_8(int, int, int) override;
    ADDRESSVF(0x00875030, LiveVoiceManager_Z, VoiceManager_Z_vftable_9);
    virtual void VoiceManager_Z_vftable_9() override;
    ADDRESSSYMBOL(0x00874DA0, "?VoiceManager_Z_vftable_10@LiveVoiceManager_Z@@UAEDH@Z");
    virtual char VoiceManager_Z_vftable_10(int) override;
    ADDRESSVF(0x00874D20, LiveVoiceManager_Z, VoiceManager_Z_vftable_11);
    virtual void VoiceManager_Z_vftable_11() override;
    ADDRESSVF(0x00874D60, LiveVoiceManager_Z, VoiceManager_Z_vftable_13);
    virtual void VoiceManager_Z_vftable_13() override;
    ADDRESSSYMBOL(0x00874E40, "?VoiceManager_Z_vftable_15@LiveVoiceManager_Z@@UAEDH@Z");
    virtual char VoiceManager_Z_vftable_15(int) override;
    ADDRESSSYMBOL(0x00874C90, "?VoiceManager_Z_vftable_18@LiveVoiceManager_Z@@UAEXXZ");
    virtual void VoiceManager_Z_vftable_18() override;
    virtual void LiveVoiceManager_Z_vftable_19() = 0;
};

ADDRESSVFTABLE(0x009C4144, SpecialEffectsTornado_G);
class __declspec(dllexport) SpecialEffectsTornado_G
{
public:
    ADDRESSVF(0x005E6830, SpecialEffectsTornado_G, SpecialEffectsTornado_G_vftable_0);
    virtual void SpecialEffectsTornado_G_vftable_0();
};

ADDRESSVFTABLE(0x009C470C, SpecialEffectsMudProjection_G);
class __declspec(dllexport) SpecialEffectsMudProjection_G : public SpecialEffectsProjection_G
{
public:
    ADDRESSVF(0x005FFE90, SpecialEffectsMudProjection_G, SpecialEffectsProjection_G_vftable_0);
    virtual void SpecialEffectsProjection_G_vftable_0() override;
    ADDRESSSYMBOL(0x005FFF30, "?SpecialEffectsProjection_G_vftable_1@SpecialEffectsMudProjection_G@@UAEHXZ");
    virtual int SpecialEffectsProjection_G_vftable_1() override;
    ADDRESSVF(0x00600160, SpecialEffectsMudProjection_G, SpecialEffectsProjection_G_vftable_2);
    virtual void SpecialEffectsProjection_G_vftable_2() override;
};

ADDRESSVFTABLE(0x009D3D9C, cA_ContainerObject);
class __declspec(dllexport) cA_ContainerObject : public cA_BaseDecorObject
{
public:
    ADDRESSVF(0x007DEC20, cA_ContainerObject, cA_BaseDecorObject_vftable_6);
    virtual void cA_BaseDecorObject_vftable_6() override;
    ADDRESSVF(0x00816FC0, cA_ContainerObject, cA_BaseDecorObject_vftable_7);
    virtual void cA_BaseDecorObject_vftable_7() override;
    ADDRESSSYMBOL(0x007DEC00, "?cA_BaseDecorObject_vftable_8@cA_ContainerObject@@UAEHXZ");
    virtual int cA_BaseDecorObject_vftable_8() override;
    ADDRESSSYMBOL(0x00816F90, "?cA_BaseDecorObject_vftable_10@cA_ContainerObject@@UAEXH@Z");
    virtual void cA_BaseDecorObject_vftable_10(int) override;
    ADDRESSVF(0x00816EB0, cA_ContainerObject, cA_ContainerObject_vftable_14);
    virtual void cA_ContainerObject_vftable_14();
};

ADDRESSVFTABLE(0x009C8E4C, CameraStream_Z);
class __declspec(dllexport) CameraStream_Z : public Manipulator_Z
{
public:
    ADDRESSSYMBOL(0x007C46B0, "?BaseObject_Z_vftable_0@CameraStream_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x00687C40, CameraStream_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    virtual void Manipulator_Z_vftable_17(int) override;
    char data[4];
};

ADDRESSVFTABLE(0x009B25EC, PaddleChecker_G);
class __declspec(dllexport) PaddleChecker_G : public Manipulator_Z
{
public:
    ADDRESSSYMBOL(0x004E35F0, "?BaseObject_Z_vftable_0@PaddleChecker_G@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x004E35C0, PaddleChecker_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x004E36E0, "?Manipulator_Z_vftable_17@PaddleChecker_G@@UAEXH@Z");
    virtual void Manipulator_Z_vftable_17(int) override;
    char data[136];
};

ADDRESSVFTABLE(0x009AE944, LevelManipulator_G);
class __declspec(dllexport) LevelManipulator_G : public Manipulator_Z
{
public:
    ADDRESSSYMBOL(0x0057CC20, "?BaseObject_Z_vftable_0@LevelManipulator_G@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x004D4DF0, LevelManipulator_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x0057CCD0, "?Manipulator_Z_vftable_14@LevelManipulator_G@@UAEXXZ");
    virtual void Manipulator_Z_vftable_14() override;
    ADDRESSSYMBOL(0x0057CCE0, "?Manipulator_Z_vftable_17@LevelManipulator_G@@UAEXH@Z");
    virtual void Manipulator_Z_vftable_17(int) override;
    char data[1204];
};

ADDRESSVFTABLE(0x009CACD8, CompField_Z);
class __declspec(dllexport) CompField_Z
{
public:
    ADDRESSVF(0x006C1910, CompField_Z, CompField_Z_vftable_0);
    virtual void CompField_Z_vftable_0();
    virtual int CompField_Z_vftable_1() = 0;
    virtual int CompField_Z_vftable_2() = 0;
    virtual int CompField_Z_vftable_3() = 0;
    virtual void CompField_Z_vftable_4() = 0;
    virtual void CompField_Z_vftable_5() = 0;
    ADDRESSVF(0x006C1870, CompField_Z, CompField_Z_vftable_6);
    virtual void CompField_Z_vftable_6();
};

ADDRESSVFTABLE(0x009C37A8, StockSpecialTraffic);
class __declspec(dllexport) StockSpecialTraffic : public StockData
{
public:
    ADDRESSVF(0x005C2D70, StockSpecialTraffic, StockData_vftable_0);
    virtual void StockData_vftable_0() override;
    ADDRESSVF(0x005C2D80, StockSpecialTraffic, StockData_vftable_1);
    virtual void StockData_vftable_1() override;
    ADDRESSVF(0x005C5D80, StockSpecialTraffic, StockData_vftable_2);
    virtual void StockData_vftable_2() override;
    ADDRESSVF(0x005C2DA0, StockSpecialTraffic, StockData_vftable_3);
    virtual void StockData_vftable_3() override;
};

ADDRESSVFTABLE(0x009CB5F0, cA_Segment);
class __declspec(dllexport) cA_Segment : public cA_BaseSurface
{
public:
    ADDRESSVF(0x006F1170, cA_Segment, cA_BaseSurface_vftable_0);
    virtual void cA_BaseSurface_vftable_0() override;
};

ADDRESSVFTABLE(0x009C88D0, ManipulatorManager_Z);
class __declspec(dllexport) ManipulatorManager_Z
{
public:
    ADDRESSVF(0x00686740, ManipulatorManager_Z, ManipulatorManager_Z_vftable_0);
    virtual void ManipulatorManager_Z_vftable_0();
    char data[264];
};

ADDRESSVFTABLE(0x009A5E5C, CheatCodeHUD);
class __declspec(dllexport) CheatCodeHUD : public ViewportHUD
{
public:
    ADDRESSSYMBOL(0x0044B110, "?ViewportHUD_vftable_0@CheatCodeHUD@@UAEXH@Z");
    virtual void ViewportHUD_vftable_0(int) override;
    ADDRESSSYMBOL(0x0044D660, "?ViewportHUD_vftable_1@CheatCodeHUD@@UAEXXZ");
    virtual void ViewportHUD_vftable_1() override;
    ADDRESSSYMBOL(0x0044D700, "?ViewportHUD_vftable_2@CheatCodeHUD@@UAEXH@Z");
    virtual void ViewportHUD_vftable_2(int) override;
    ADDRESSSYMBOL(0x0044EE20, "?ViewportHUD_vftable_5@CheatCodeHUD@@UAEXH@Z");
    virtual void ViewportHUD_vftable_5(int) override;
    ADDRESSVF(0x0044FEE0, CheatCodeHUD, ViewportHUD_vftable_7);
    virtual void ViewportHUD_vftable_7() override;
    ADDRESSVF(0x0044FEB0, CheatCodeHUD, ViewportHUD_vftable_8);
    virtual void ViewportHUD_vftable_8() override;
    virtual int ViewportHUD_vftable_9() override;
};

ADDRESSVFTABLE(0x009D0880, cA_WorkBumpSegment);
class __declspec(dllexport) cA_WorkBumpSegment : public cA_Segment
{
public:
    ADDRESSVF(0x0074CE90, cA_WorkBumpSegment, cA_BaseSurface_vftable_0);
    virtual void cA_BaseSurface_vftable_0() override;
    ADDRESSVF(0x0074CE00, cA_WorkBumpSegment, cA_BaseSurface_vftable_1);
    virtual void cA_BaseSurface_vftable_1() override;
    ADDRESSVF(0x0079D290, cA_WorkBumpSegment, cA_BaseSurface_vftable_2);
    virtual void cA_BaseSurface_vftable_2() override;
    ADDRESSVF(0x0079D2B0, cA_WorkBumpSegment, cA_BaseSurface_vftable_3);
    virtual void cA_BaseSurface_vftable_3() override;
    virtual void cA_BaseSurface_vftable_4(int, int) override;
};

ADDRESSVFTABLE(0x009D64F4, ThreadViewportConstant_Z);
class __declspec(dllexport) ThreadViewportConstant_Z : public ObjConstant_Z
{
public:
    ADDRESSVF(0x00829F50, ThreadViewportConstant_Z, ObjConstant_Z_vftable_0);
    virtual void ObjConstant_Z_vftable_0() override;
    virtual void ObjConstant_Z_vftable_1(int, int) override;
};

ADDRESSVFTABLE(0x009BD674, Mission_OfflineGoto);
class __declspec(dllexport) Mission_OfflineGoto : public MissionTemplate_G
{
public:
    ADDRESSVF(0x0057F6B0, Mission_OfflineGoto, MissionTemplate_G_vftable_0);
    virtual void MissionTemplate_G_vftable_0() override;
    virtual void MissionTemplate_G_vftable_32() override;
    ADDRESSVF(0x00585A00, Mission_OfflineGoto, MissionTemplate_G_vftable_46);
    virtual void MissionTemplate_G_vftable_46() override;
    ADDRESSSYMBOL(0x00585960, "?MissionTemplate_G_vftable_65@Mission_OfflineGoto@@UAEXHH@Z");
    virtual void MissionTemplate_G_vftable_65(int, int) override;
};

ADDRESSVFTABLE(0x009AE9EC, FadeManager_G);
class __declspec(dllexport) FadeManager_G : public Manipulator_Z
{
public:
    ADDRESSVF(0x004D5000, FadeManager_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x0057F100, "?Manipulator_Z_vftable_17@FadeManager_G@@UAEXH@Z");
    virtual void Manipulator_Z_vftable_17(int) override;
    char data[4];
};

ADDRESSVFTABLE(0x009A4B24, Dialog_Fake);
class __declspec(dllexport) Dialog_Fake : public Dialog_G
{
public:
    ADDRESSVF(0x0043FCE0, Dialog_Fake, CWindowHierarchy_G_vftable_0);
    virtual void CWindowHierarchy_G_vftable_0() override;
};

ADDRESSVFTABLE(0x009D641C, MatPosConstant_Z);
class __declspec(dllexport) MatPosConstant_Z : public MatConstant_Z
{
public:
    ADDRESSVF(0x0082A500, MatPosConstant_Z, ObjConstant_Z_vftable_0);
    virtual void ObjConstant_Z_vftable_0() override;
};

ADDRESSVFTABLE(0x009D822C, UserObject3DPc_Z);
class __declspec(dllexport) UserObject3DPc_Z : public UserObject3D_Z
{
public:
    ADDRESSVF(0x00849940, UserObject3DPc_Z, UserObject3D_Z_vftable_0);
    virtual void UserObject3D_Z_vftable_0() override;
    ADDRESSVF(0x008753B0, UserObject3DPc_Z, UserObject3D_Z_vftable_1);
    virtual void UserObject3D_Z_vftable_1() override;
    ADDRESSVF(0x00875220, UserObject3DPc_Z, UserObject3D_Z_vftable_2);
    virtual void UserObject3D_Z_vftable_2() override;
    ADDRESSVF(0x00875420, UserObject3DPc_Z, UserObject3D_Z_vftable_3);
    virtual void UserObject3D_Z_vftable_3() override;
    ADDRESSVF(0x00875440, UserObject3DPc_Z, UserObject3D_Z_vftable_4);
    virtual void UserObject3D_Z_vftable_4() override;
    ADDRESSVF(0x00875460, UserObject3DPc_Z, UserObject3D_Z_vftable_5);
    virtual void UserObject3D_Z_vftable_5() override;
    ADDRESSVF(0x00875480, UserObject3DPc_Z, UserObject3D_Z_vftable_6);
    virtual void UserObject3D_Z_vftable_6() override;
    ADDRESSVF(0x00875490, UserObject3DPc_Z, UserObject3D_Z_vftable_7);
    virtual void UserObject3D_Z_vftable_7() override;
    ADDRESSVF(0x008754C0, UserObject3DPc_Z, UserObject3D_Z_vftable_8);
    virtual void UserObject3D_Z_vftable_8() override;
    ADDRESSVF(0x00875590, UserObject3DPc_Z, UserObject3D_Z_vftable_9);
    virtual void UserObject3D_Z_vftable_9() override;
};

ADDRESSVFTABLE(0x009C0A88, CGuiEventMemberSubscriber_class_CGauge_G_);
class __declspec(dllexport) CGuiEventMemberSubscriber_class_CGauge_G_ : public CGuiEventSubscriber
{
public:
    ADDRESSVF(0x0059B850, CGuiEventMemberSubscriber_class_CGauge_G_, CGuiEventSubscriber_vftable_0);
    virtual void CGuiEventSubscriber_vftable_0() override;
};

ADDRESSVFTABLE(0x009D249C, AGW_TerraForms);
class __declspec(dllexport) AGW_TerraForms
{
public:
    virtual void AGW_TerraForms_vftable_0(int);
    ADDRESSVF(0x007A98C0, AGW_TerraForms, AGW_TerraForms_vftable_1);
    virtual void AGW_TerraForms_vftable_1();
    virtual void AGW_TerraForms_vftable_2(int, int, int) = 0;
    virtual char AGW_TerraForms_vftable_3();
    virtual void AGW_TerraForms_vftable_4(int, int);
    virtual void AGW_TerraForms_vftable_5();
    virtual void AGW_TerraForms_vftable_6() = 0;
    virtual void AGW_TerraForms_vftable_7() = 0;
    virtual void AGW_TerraForms_vftable_8() = 0;
    virtual void AGW_TerraForms_vftable_9() = 0;
    ADDRESSVF(0x0074CB40, AGW_TerraForms, AGW_TerraForms_vftable_10);
    virtual void AGW_TerraForms_vftable_10();
    ADDRESSVF(0x007A97C0, AGW_TerraForms, AGW_TerraForms_vftable_11);
    virtual void AGW_TerraForms_vftable_11();
    ADDRESSVF(0x007A9830, AGW_TerraForms, AGW_TerraForms_vftable_12);
    virtual void AGW_TerraForms_vftable_12();
};

ADDRESSVFTABLE(0x009C5BD0, cA_DecorPreLoadedMesh);
class __declspec(dllexport) cA_DecorPreLoadedMesh
{
public:
    ADDRESSVF(0x0063E820, cA_DecorPreLoadedMesh, cA_DecorPreLoadedMesh_vftable_0);
    virtual void cA_DecorPreLoadedMesh_vftable_0();
    virtual void cA_DecorPreLoadedMesh_vftable_1(int);
};

ADDRESSVFTABLE(0x009AC16C, StuntHUD);
class __declspec(dllexport) StuntHUD : public ViewportHUD
{
public:
    ADDRESSSYMBOL(0x004C6530, "?ViewportHUD_vftable_0@StuntHUD@@UAEXH@Z");
    virtual void ViewportHUD_vftable_0(int) override;
    ADDRESSSYMBOL(0x004C6580, "?ViewportHUD_vftable_1@StuntHUD@@UAEXXZ");
    virtual void ViewportHUD_vftable_1() override;
    ADDRESSSYMBOL(0x004C65C0, "?ViewportHUD_vftable_2@StuntHUD@@UAEXH@Z");
    virtual void ViewportHUD_vftable_2(int) override;
    virtual void ViewportHUD_vftable_5(int) override;
};

ADDRESSVFTABLE(0x009A1D8C, CreaturesState_G);
class __declspec(dllexport) CreaturesState_G : public StateTemplate_G
{
public:
    ADDRESSVF(0x004264D0, CreaturesState_G, StateTemplate_G_vftable_0);
    virtual void StateTemplate_G_vftable_0() override;
    ADDRESSSYMBOL(0x00425E40, "?StateTemplate_G_vftable_1@CreaturesState_G@@UAEXH@Z");
    virtual void StateTemplate_G_vftable_1(int) override;
    ADDRESSSYMBOL(0x00425E50, "?StateTemplate_G_vftable_3@CreaturesState_G@@UAEDH@Z");
    virtual char StateTemplate_G_vftable_3(int) override;
    ADDRESSVF(0x00425E80, CreaturesState_G, CreaturesState_G_vftable_4);
    virtual void CreaturesState_G_vftable_4();
};

ADDRESSVFTABLE(0x009BBF54, LevelData_G);
class __declspec(dllexport) LevelData_G : public BaseObject_Z
{
public:
    ADDRESSVF(0x005633B0, LevelData_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSVF(0x00563780, LevelData_G, BaseObject_Z_vftable_13);
    virtual void BaseObject_Z_vftable_13() override;
    char data[268];
};

ADDRESSVFTABLE(0x009B1A4C, PATH_ATV_Case);
class __declspec(dllexport) PATH_ATV_Case : public PATH_Case
{
public:
    ADDRESSSYMBOL(0x0061E960, "?PATH_Case_vftable_0@PATH_ATV_Case@@UAEXH@Z");
    virtual void PATH_Case_vftable_0(int) override;
    ADDRESSVF(0x004DD550, PATH_ATV_Case, PATH_Case_vftable_1);
    virtual void PATH_Case_vftable_1() override;
};

ADDRESSVFTABLE(0x009CCEBC, ClassNameResManager_Z);
class __declspec(dllexport) ClassNameResManager_Z
{
public:
    ADDRESSVF(0x00734970, ClassNameResManager_Z, ClassNameResManager_Z_vftable_0);
    virtual void ClassNameResManager_Z_vftable_0();
    virtual void ClassNameResManager_Z_vftable_1();
    ADDRESSVF(0x00734D40, ClassNameResManager_Z, ClassNameResManager_Z_vftable_2);
    virtual void ClassNameResManager_Z_vftable_2();
    ADDRESSVF(0x00734DD0, ClassNameResManager_Z, ClassNameResManager_Z_vftable_3);
    virtual void ClassNameResManager_Z_vftable_3();
};

ADDRESSVFTABLE(0x009A1AD8, COM_Class_FollowSplineConstraint);
class __declspec(dllexport) COM_Class_FollowSplineConstraint : public CommandStateTemplate_G
{
public:
    ADDRESSVF(0x00424300, COM_Class_FollowSplineConstraint, StateTemplate_G_vftable_0);
    virtual void StateTemplate_G_vftable_0() override;
    ADDRESSSYMBOL(0x00425A20, "?StateTemplate_G_vftable_3@COM_Class_FollowSplineConstraint@@UAEDH@Z");
    virtual char StateTemplate_G_vftable_3(int) override;
};

ADDRESSVFTABLE(0x009D3020, FileInterp_Z);
class __declspec(dllexport) FileInterp_Z : public BaseStream_Z
{
public:
    ADDRESSVF(0x007C2CE0, FileInterp_Z, BaseStream_Z_vftable_0);
    virtual void BaseStream_Z_vftable_0() override;
    ADDRESSSYMBOL(0x007C20B0, "?BaseStream_Z_vftable_3@FileInterp_Z@@UAEXHHH@Z");
    virtual void BaseStream_Z_vftable_3(int, int, int) override;
    ADDRESSSYMBOL(0x007C20F0, "?BaseStream_Z_vftable_4@FileInterp_Z@@UAEXHHH@Z");
    virtual void BaseStream_Z_vftable_4(int, int, int) override;
    char data[2708];
};

ADDRESSVFTABLE(0x009C8DFC, StreamFile_Z);
class __declspec(dllexport) StreamFile_Z : public Manipulator_Z
{
public:
    ADDRESSSYMBOL(0x007C32D0, "?BaseObject_Z_vftable_0@StreamFile_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x006889D0, StreamFile_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x007C3350, "?Manipulator_Z_vftable_17@StreamFile_Z@@UAEXH@Z");
    virtual void Manipulator_Z_vftable_17(int) override;
    ADDRESSVF(0x007C3310, StreamFile_Z, StreamFile_Z_vftable_18);
    virtual void StreamFile_Z_vftable_18();
    char data[364];
};

ADDRESSVFTABLE(0x009A1B28, COM_Class_DoNothing);
class __declspec(dllexport) COM_Class_DoNothing : public CommandStateTemplate_G
{
public:
    ADDRESSVF(0x004243A0, COM_Class_DoNothing, StateTemplate_G_vftable_0);
    virtual void StateTemplate_G_vftable_0() override;
    ADDRESSSYMBOL(0x00425AE0, "?StateTemplate_G_vftable_3@COM_Class_DoNothing@@UAEDH@Z");
    virtual char StateTemplate_G_vftable_3(int) override;
};

ADDRESSVFTABLE(0x009C1714, EnemyDummyGen);
class __declspec(dllexport) EnemyDummyGen : public DummyGen
{
public:
    ADDRESSVF(0x005A38C0, EnemyDummyGen, DummyGen_vftable_0);
    virtual void DummyGen_vftable_0() override;
    ADDRESSSYMBOL(0x005A4780, "?DummyGen_vftable_1@EnemyDummyGen@@UAEXH@Z");
    virtual void DummyGen_vftable_1(int) override;
    ADDRESSVF(0x005A3850, EnemyDummyGen, DummyGen_vftable_2);
    virtual void DummyGen_vftable_2() override;
    ADDRESSVF(0x005A3E00, EnemyDummyGen, DummyGen_vftable_3);
    virtual void DummyGen_vftable_3() override;
    ADDRESSVF(0x005A4170, EnemyDummyGen, DummyGen_vftable_5);
    virtual void DummyGen_vftable_5() override;
    ADDRESSVF(0x005A4400, EnemyDummyGen, DummyGen_vftable_6);
    virtual void DummyGen_vftable_6() override;
    ADDRESSSYMBOL(0x005A4670, "?DummyGen_vftable_7@EnemyDummyGen@@UAEDXZ");
    virtual char DummyGen_vftable_7() override;
    ADDRESSSYMBOL(0x005A45F0, "?DummyGen_vftable_8@EnemyDummyGen@@UAEDXZ");
    virtual char DummyGen_vftable_8() override;
    ADDRESSSYMBOL(0x005A3890, "?DummyGen_vftable_9@EnemyDummyGen@@UAEDXZ");
    virtual char DummyGen_vftable_9() override;
    virtual char DummyGen_vftable_10() override;
    virtual int DummyGen_vftable_11() override;
    virtual int DummyGen_vftable_12() override;
    ADDRESSVF(0x005A3880, EnemyDummyGen, DummyGen_vftable_13);
    virtual void DummyGen_vftable_13() override;
    ADDRESSVF(0x005A3DC0, EnemyDummyGen, DummyGen_vftable_15);
    virtual void DummyGen_vftable_15() override;
};

ADDRESSVFTABLE(0x009ADF1C, VibrationManager_C);
class __declspec(dllexport) VibrationManager_C : public Manipulator_Z
{
public:
    ADDRESSSYMBOL(0x004E3FB0, "?BaseObject_Z_vftable_0@VibrationManager_C@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x004D3ED0, VibrationManager_C, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x004E4020, "?Manipulator_Z_vftable_14@VibrationManager_C@@UAEXXZ");
    virtual void Manipulator_Z_vftable_14() override;
    ADDRESSSYMBOL(0x004E4480, "?Manipulator_Z_vftable_16@VibrationManager_C@@UAEXXZ");
    virtual void Manipulator_Z_vftable_16() override;
    ADDRESSSYMBOL(0x004E4110, "?Manipulator_Z_vftable_17@VibrationManager_C@@UAEXH@Z");
    virtual void Manipulator_Z_vftable_17(int) override;
    char data[44];
};

ADDRESSVFTABLE(0x009CADD8, CompString_64_Z);
class __declspec(dllexport) CompString_64_Z : public CompField_Z
{
public:
    ADDRESSVF(0x006C24A0, CompString_64_Z, CompField_Z_vftable_0);
    virtual void CompField_Z_vftable_0() override;
    virtual int CompField_Z_vftable_1() override;
    virtual int CompField_Z_vftable_2() override;
    virtual int CompField_Z_vftable_3() override;
    ADDRESSVF(0x006C1DD0, CompString_64_Z, CompField_Z_vftable_4);
    virtual void CompField_Z_vftable_4() override;
    ADDRESSVF(0x006C1E90, CompString_64_Z, CompField_Z_vftable_5);
    virtual void CompField_Z_vftable_5() override;
    ADDRESSVF(0x006C1E30, CompString_64_Z, CompField_Z_vftable_6);
    virtual void CompField_Z_vftable_6() override;
};

ADDRESSVFTABLE(0x009DBEF8, PopupPage_Z);
class __declspec(dllexport) PopupPage_Z
{
public:
    ADDRESSVF(0x00880790, PopupPage_Z, PopupPage_Z_vftable_0);
    virtual void PopupPage_Z_vftable_0();
};

ADDRESSVFTABLE(0x009D2D04, StreamManager_Z);
class __declspec(dllexport) StreamManager_Z
{
public:
    ADDRESSVF(0x007BD5F0, StreamManager_Z, StreamManager_Z_vftable_0);
    virtual void StreamManager_Z_vftable_0();
    char data[5448];
};

ADDRESSVFTABLE(0x009C25B0, NetworkGameSessionManager_G);
class __declspec(dllexport) NetworkGameSessionManager_G : public NetPlayModule_Z
{
public:
    ADDRESSSYMBOL(0x005A85F0, "?NetPlayModule_Z_vftable_1@NetworkGameSessionManager_G@@UAEXH@Z");
    virtual void NetPlayModule_Z_vftable_1(int) override;
    ADDRESSSYMBOL(0x005A7D60, "?NetPlayModule_Z_vftable_2@NetworkGameSessionManager_G@@UAEDXZ");
    virtual char NetPlayModule_Z_vftable_2() override;
};

ADDRESSVFTABLE(0x009C15B0, CPurchase);
class __declspec(dllexport) CPurchase
{
public:
    ADDRESSVF(0x005A2990, CPurchase, CPurchase_vftable_0);
    virtual void CPurchase_vftable_0();
    virtual char CPurchase_vftable_1() = 0;
    ADDRESSVF(0x005A2BA0, CPurchase, CPurchase_vftable_2);
    virtual void CPurchase_vftable_2();
    ADDRESSVF(0x005A2A80, CPurchase, CPurchase_vftable_3);
    virtual void CPurchase_vftable_3();
    virtual void CPurchase_vftable_4() = 0;
};

ADDRESSVFTABLE(0x009D0A54, ModelI);
class __declspec(dllexport) ModelI
{
public:
    ADDRESSVF(0x00759750, ModelI, ModelI_vftable_0);
    virtual void ModelI_vftable_0();
    virtual void ModelI_vftable_1();
    virtual void ModelI_vftable_2() = 0;
    virtual void ModelI_vftable_3() = 0;
    virtual void ModelI_vftable_4() = 0;
    virtual void ModelI_vftable_5() = 0;
    virtual void ModelI_vftable_6() = 0;
};

ADDRESSVFTABLE(0x009A1A74, COM_Class_GoRound);
class __declspec(dllexport) COM_Class_GoRound : public CommandStateTemplate_G
{
public:
    ADDRESSVF(0x00424320, COM_Class_GoRound, StateTemplate_G_vftable_0);
    virtual void StateTemplate_G_vftable_0() override;
    ADDRESSSYMBOL(0x004257C0, "?StateTemplate_G_vftable_1@COM_Class_GoRound@@UAEXH@Z");
    virtual void StateTemplate_G_vftable_1(int) override;
    ADDRESSSYMBOL(0x004258B0, "?StateTemplate_G_vftable_3@COM_Class_GoRound@@UAEDH@Z");
    virtual char StateTemplate_G_vftable_3(int) override;
};

ADDRESSVFTABLE(0x009CACF8, CompU_8_Z);
class __declspec(dllexport) CompU_8_Z : public CompField_Z
{
public:
    ADDRESSVF(0x006C2310, CompU_8_Z, CompField_Z_vftable_0);
    virtual void CompField_Z_vftable_0() override;
    virtual int CompField_Z_vftable_1() override;
    virtual int CompField_Z_vftable_2() override;
    virtual int CompField_Z_vftable_3() override;
    ADDRESSVF(0x006C1960, CompU_8_Z, CompField_Z_vftable_4);
    virtual void CompField_Z_vftable_4() override;
    ADDRESSVF(0x006C1990, CompU_8_Z, CompField_Z_vftable_5);
    virtual void CompField_Z_vftable_5() override;
};

ADDRESSVFTABLE(0x009CB130, BackendLeaderboard_Z);
class __declspec(dllexport) BackendLeaderboard_Z : public NetPlayModule_Z
{
public:
    ADDRESSSYMBOL(0x006DE250, "?NetPlayModule_Z_vftable_0@BackendLeaderboard_Z@@UAEDXZ");
    virtual char NetPlayModule_Z_vftable_0() override;
    ADDRESSSYMBOL(0x006DE260, "?NetPlayModule_Z_vftable_1@BackendLeaderboard_Z@@UAEXH@Z");
    virtual void NetPlayModule_Z_vftable_1(int) override;
    virtual char NetPlayModule_Z_vftable_2() override;
    ADDRESSVF(0x006DE200, BackendLeaderboard_Z, BackendLeaderboard_Z_vftable_3);
    virtual void BackendLeaderboard_Z_vftable_3();
    virtual char BackendLeaderboard_Z_vftable_4(int, int, int, int, int);
    ADDRESSVF(0x006DE240, BackendLeaderboard_Z, BackendLeaderboard_Z_vftable_5);
    virtual void BackendLeaderboard_Z_vftable_5();
    virtual void BackendLeaderboard_Z_vftable_6() = 0;
    ADDRESSVF(0x006DE2B0, BackendLeaderboard_Z, BackendLeaderboard_Z_vftable_7);
    virtual void BackendLeaderboard_Z_vftable_7();
    virtual void BackendLeaderboard_Z_vftable_8() = 0;
    virtual void BackendLeaderboard_Z_vftable_9() = 0;
    virtual void BackendLeaderboard_Z_vftable_10() = 0;
    virtual void BackendLeaderboard_Z_vftable_11() = 0;
    ADDRESSVF(0x006DE2A0, BackendLeaderboard_Z, BackendLeaderboard_Z_vftable_12);
    virtual void BackendLeaderboard_Z_vftable_12();
    virtual void BackendLeaderboard_Z_vftable_13();
};

ADDRESSVFTABLE(0x009CC8C8, ComPipe_Z);
class __declspec(dllexport) ComPipe_Z
{
public:
    virtual void ComPipe_Z_vftable_0(int);
    virtual void ComPipe_Z_vftable_1(int, int);
    virtual void ComPipe_Z_vftable_2();
    ADDRESSVF(0x0072CD80, ComPipe_Z, ComPipe_Z_vftable_3);
    virtual void ComPipe_Z_vftable_3();
    ADDRESSVF(0x0072CDA0, ComPipe_Z, ComPipe_Z_vftable_4);
    virtual void ComPipe_Z_vftable_4();
    ADDRESSVF(0x0072CDC0, ComPipe_Z, ComPipe_Z_vftable_5);
    virtual void ComPipe_Z_vftable_5();
    ADDRESSVF(0x0072CDE0, ComPipe_Z, ComPipe_Z_vftable_6);
    virtual void ComPipe_Z_vftable_6();
};

ADDRESSVFTABLE(0x009D1448, IndexBuffer_Z);
class __declspec(dllexport) IndexBuffer_Z
{
public:
    ADDRESSVF(0x00773920, IndexBuffer_Z, IndexBuffer_Z_vftable_0);
    virtual void IndexBuffer_Z_vftable_0();
    virtual void IndexBuffer_Z_vftable_1() = 0;
    virtual void IndexBuffer_Z_vftable_2() = 0;
    virtual void IndexBuffer_Z_vftable_3() = 0;
    virtual void IndexBuffer_Z_vftable_4(int);
    ADDRESSVF(0x00773880, IndexBuffer_Z, IndexBuffer_Z_vftable_5);
    virtual void IndexBuffer_Z_vftable_5();
};

ADDRESSVFTABLE(0x009CAE78, CompVec3300_48_Z);
class __declspec(dllexport) CompVec3300_48_Z : public CompField_Z
{
public:
    ADDRESSVF(0x006C25A0, CompVec3300_48_Z, CompField_Z_vftable_0);
    virtual void CompField_Z_vftable_0() override;
    virtual int CompField_Z_vftable_1() override;
    virtual int CompField_Z_vftable_2() override;
    virtual int CompField_Z_vftable_3() override;
    ADDRESSVF(0x006C20F0, CompVec3300_48_Z, CompField_Z_vftable_4);
    virtual void CompField_Z_vftable_4() override;
    ADDRESSVF(0x006C2120, CompVec3300_48_Z, CompField_Z_vftable_5);
    virtual void CompField_Z_vftable_5() override;
};

ADDRESSVFTABLE(0x009A1A24, COM_Class_GotoAbsPos);
class __declspec(dllexport) COM_Class_GotoAbsPos : public CommandStateTemplate_G
{
public:
    ADDRESSVF(0x004241E0, COM_Class_GotoAbsPos, StateTemplate_G_vftable_0);
    virtual void StateTemplate_G_vftable_0() override;
    ADDRESSSYMBOL(0x00425550, "?StateTemplate_G_vftable_3@COM_Class_GotoAbsPos@@UAEDH@Z");
    virtual char StateTemplate_G_vftable_3(int) override;
};

ADDRESSVFTABLE(0x009C582C, Hi_MemoryManager_Z);
class __declspec(dllexport) Hi_MemoryManager_Z
{
public:
    ADDRESSVF(0x006379C0, Hi_MemoryManager_Z, Hi_MemoryManager_Z_vftable_0);
    virtual void Hi_MemoryManager_Z_vftable_0();
    ADDRESSSYMBOL(0x00637920, "?Hi_MemoryManager_Z_vftable_1@Hi_MemoryManager_Z@@UAEXXZ");
    virtual void Hi_MemoryManager_Z_vftable_1();
    ADDRESSSYMBOL(0x00637960, "?Hi_MemoryManager_Z_vftable_2@Hi_MemoryManager_Z@@UAEXXZ");
    virtual void Hi_MemoryManager_Z_vftable_2();
    ADDRESSVF(0x00637A50, Hi_MemoryManager_Z, Hi_MemoryManager_Z_vftable_3);
    virtual void Hi_MemoryManager_Z_vftable_3();
    ADDRESSVF(0x00637A80, Hi_MemoryManager_Z, Hi_MemoryManager_Z_vftable_4);
    virtual void Hi_MemoryManager_Z_vftable_4();
    ADDRESSVF(0x00637B20, Hi_MemoryManager_Z, Hi_MemoryManager_Z_vftable_5);
    virtual void Hi_MemoryManager_Z_vftable_5();
    ADDRESSVF(0x00637B50, Hi_MemoryManager_Z, Hi_MemoryManager_Z_vftable_6);
    virtual void Hi_MemoryManager_Z_vftable_6();
    ADDRESSSYMBOL(0x00637AC0, "?Hi_MemoryManager_Z_vftable_7@Hi_MemoryManager_Z@@UAEXHH@Z");
    virtual void Hi_MemoryManager_Z_vftable_7(int, int);
    ADDRESSSYMBOL(0x00637AE0, "?Hi_MemoryManager_Z_vftable_8@Hi_MemoryManager_Z@@UAEHHH@Z");
    virtual int Hi_MemoryManager_Z_vftable_8(int, int);
    ADDRESSSYMBOL(0x00637B00, "?Hi_MemoryManager_Z_vftable_9@Hi_MemoryManager_Z@@UAEDHHHH@Z");
    virtual char Hi_MemoryManager_Z_vftable_9(int, int, int, int);
    ADDRESSVF(0x00637FA0, Hi_MemoryManager_Z, Hi_MemoryManager_Z_vftable_10);
    virtual void Hi_MemoryManager_Z_vftable_10();
    ADDRESSVF(0x00637F90, Hi_MemoryManager_Z, Hi_MemoryManager_Z_vftable_11);
    virtual void Hi_MemoryManager_Z_vftable_11();
    ADDRESSVF(0x00637B70, Hi_MemoryManager_Z, Hi_MemoryManager_Z_vftable_12);
    virtual void Hi_MemoryManager_Z_vftable_12();
    ADDRESSVF(0x00637BC0, Hi_MemoryManager_Z, Hi_MemoryManager_Z_vftable_13);
    virtual void Hi_MemoryManager_Z_vftable_13();
    ADDRESSVF(0x00637F70, Hi_MemoryManager_Z, Hi_MemoryManager_Z_vftable_14);
    virtual void Hi_MemoryManager_Z_vftable_14();
    ADDRESSVF(0x00637F50, Hi_MemoryManager_Z, Hi_MemoryManager_Z_vftable_15);
    virtual void Hi_MemoryManager_Z_vftable_15();
    ADDRESSVF(0x00637F40, Hi_MemoryManager_Z, Hi_MemoryManager_Z_vftable_16);
    virtual void Hi_MemoryManager_Z_vftable_16();
    ADDRESSSYMBOL(0x00637F30, "?Hi_MemoryManager_Z_vftable_17@Hi_MemoryManager_Z@@UAEHXZ");
    virtual int Hi_MemoryManager_Z_vftable_17();
    ADDRESSVF(0x00637F20, Hi_MemoryManager_Z, Hi_MemoryManager_Z_vftable_18);
    virtual void Hi_MemoryManager_Z_vftable_18();
    ADDRESSSYMBOL(0x00637EF0, "?Hi_MemoryManager_Z_vftable_19@Hi_MemoryManager_Z@@UAEHXZ");
    virtual int Hi_MemoryManager_Z_vftable_19();
    ADDRESSSYMBOL(0x00637E50, "?Hi_MemoryManager_Z_vftable_20@Hi_MemoryManager_Z@@UAEDH@Z");
    virtual char Hi_MemoryManager_Z_vftable_20(int);
    ADDRESSVF(0x00637E40, Hi_MemoryManager_Z, Hi_MemoryManager_Z_vftable_21);
    virtual void Hi_MemoryManager_Z_vftable_21();
    ADDRESSVF(0x00637E30, Hi_MemoryManager_Z, Hi_MemoryManager_Z_vftable_22);
    virtual void Hi_MemoryManager_Z_vftable_22();
    ADDRESSVF(0x00637E10, Hi_MemoryManager_Z, Hi_MemoryManager_Z_vftable_23);
    virtual void Hi_MemoryManager_Z_vftable_23();
    ADDRESSVF(0x00637DD0, Hi_MemoryManager_Z, Hi_MemoryManager_Z_vftable_24);
    virtual void Hi_MemoryManager_Z_vftable_24();
    ADDRESSVF(0x00637DC0, Hi_MemoryManager_Z, Hi_MemoryManager_Z_vftable_25);
    virtual void Hi_MemoryManager_Z_vftable_25();
    ADDRESSSYMBOL(0x00637DA0, "?Hi_MemoryManager_Z_vftable_26@Hi_MemoryManager_Z@@UAEXH@Z");
    virtual void Hi_MemoryManager_Z_vftable_26(int);
    ADDRESSSYMBOL(0x00637D90, "?Hi_MemoryManager_Z_vftable_27@Hi_MemoryManager_Z@@UAEHXZ");
    virtual int Hi_MemoryManager_Z_vftable_27();
    virtual void Hi_MemoryManager_Z_vftable_28();
    virtual void Hi_MemoryManager_Z_vftable_29(int, int);
    virtual void Hi_MemoryManager_Z_vftable_30(int);
    ADDRESSSYMBOL(0x00637A30, "?Hi_MemoryManager_Z_vftable_31@Hi_MemoryManager_Z@@UAEDXZ");
    virtual char Hi_MemoryManager_Z_vftable_31();
    ADDRESSVF(0x00637D40, Hi_MemoryManager_Z, Hi_MemoryManager_Z_vftable_32);
    virtual void Hi_MemoryManager_Z_vftable_32();
};

ADDRESSVFTABLE(0x009C32BC, GameMissionInfoServer_G);
class __declspec(dllexport) GameMissionInfoServer_G : public GameMissionInfo_G
{
public:
    ADDRESSVF(0x005B5A20, GameMissionInfoServer_G, ComObj_Z_vftable_0);
    virtual void ComObj_Z_vftable_0() override;
    virtual void ComObj_Z_vftable_4(int) override;
};

ADDRESSVFTABLE(0x009CCA50, CheckSumCRC32_Z);
class __declspec(dllexport) CheckSumCRC32_Z : public CheckSum_Z
{
public:
    ADDRESSVF(0x007D4000, CheckSumCRC32_Z, CheckSum_Z_vftable_0);
    virtual void CheckSum_Z_vftable_0() override;
};

ADDRESSVFTABLE(0x009B3258, IACarVisibleObject);
class __declspec(dllexport) IACarVisibleObject : public VisibleObjectContainer
{
public:
    ADDRESSVF(0x004FC580, IACarVisibleObject, VisibleObjectContainer_vftable_0);
    virtual void VisibleObjectContainer_vftable_0() override;
    ADDRESSSYMBOL(0x004F07C0, "?VisibleObjectContainer_vftable_3@IACarVisibleObject@@UAEXHH@Z");
    virtual void VisibleObjectContainer_vftable_3(int, int) override;
    ADDRESSSYMBOL(0x004F07D0, "?VisibleObjectContainer_vftable_4@IACarVisibleObject@@UAEXHH@Z");
    virtual void VisibleObjectContainer_vftable_4(int, int) override;
};

ADDRESSVFTABLE(0x009D6434, ClipPlaneConstant_Z);
class __declspec(dllexport) ClipPlaneConstant_Z : public ObjConstant_Z
{
public:
    ADDRESSVF(0x0082BFA0, ClipPlaneConstant_Z, ObjConstant_Z_vftable_0);
    virtual void ObjConstant_Z_vftable_0() override;
    ADDRESSSYMBOL(0x008270F0, "?ObjConstant_Z_vftable_1@ClipPlaneConstant_Z@@UAEXHH@Z");
    virtual void ObjConstant_Z_vftable_1(int, int) override;
};

ADDRESSVFTABLE(0x009C3020, GameChat_G);
class __declspec(dllexport) GameChat_G : public ComObj_Z
{
public:
    ADDRESSVF(0x005B48B0, GameChat_G, ComObj_Z_vftable_0);
    virtual void ComObj_Z_vftable_0() override;
    virtual void ComObj_Z_vftable_3(int) override = 0;
    virtual void ComObj_Z_vftable_4(int) override = 0;
};

ADDRESSVFTABLE(0x009C8A3C, ConsoleInterp_Z);
class __declspec(dllexport) ConsoleInterp_Z : public Manipulator_Z
{
public:
    ADDRESSSYMBOL(0x007C1ED0, "?BaseObject_Z_vftable_0@ConsoleInterp_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x00688800, ConsoleInterp_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x007C2110, "?Manipulator_Z_vftable_17@ConsoleInterp_Z@@UAEXH@Z");
    virtual void Manipulator_Z_vftable_17(int) override;
    char data[408688];
};

ADDRESSVFTABLE(0x009D8C80, VShaderDecl_Z);
class __declspec(dllexport) VShaderDecl_Z : public ShaderDecl_Z
{
public:
    ADDRESSVF(0x00853DB0, VShaderDecl_Z, ShaderDecl_Z_vftable_0);
    virtual void ShaderDecl_Z_vftable_0() override;
    ADDRESSVF(0x00853EC0, VShaderDecl_Z, ShaderDecl_Z_vftable_1);
    virtual void ShaderDecl_Z_vftable_1() override;
    ADDRESSSYMBOL(0x00876C30, "?ShaderDecl_Z_vftable_2@VShaderDecl_Z@@UAEXXZ");
    virtual void ShaderDecl_Z_vftable_2() override;
};

ADDRESSVFTABLE(0x009C54CC, HandleManager_Z);
class __declspec(dllexport) HandleManager_Z
{
public:
    ADDRESSVF(0x006336B0, HandleManager_Z, HandleManager_Z_vftable_0);
    virtual void HandleManager_Z_vftable_0();
    ADDRESSVF(0x007487D0, HandleManager_Z, HandleManager_Z_vftable_1);
    virtual void HandleManager_Z_vftable_1();
    ADDRESSVF(0x00748840, HandleManager_Z, HandleManager_Z_vftable_2);
    virtual void HandleManager_Z_vftable_2();
    ADDRESSVF(0x007490D0, HandleManager_Z, HandleManager_Z_vftable_3);
    virtual void HandleManager_Z_vftable_3();
    ADDRESSVF(0x007491D0, HandleManager_Z, HandleManager_Z_vftable_4);
    virtual void HandleManager_Z_vftable_4();
    ADDRESSVF(0x00748EC0, HandleManager_Z, HandleManager_Z_vftable_5);
    virtual void HandleManager_Z_vftable_5();
    ADDRESSVF(0x00748DC0, HandleManager_Z, HandleManager_Z_vftable_6);
    virtual void HandleManager_Z_vftable_6();
    virtual void HandleManager_Z_vftable_7(int);
    ADDRESSVF(0x00634BF0, HandleManager_Z, HandleManager_Z_vftable_8);
    virtual void HandleManager_Z_vftable_8();
    virtual void HandleManager_Z_vftable_9(int, int);
    ADDRESSVF(0x00748980, HandleManager_Z, HandleManager_Z_vftable_10);
    virtual void HandleManager_Z_vftable_10();
    ADDRESSVF(0x00748FB0, HandleManager_Z, HandleManager_Z_vftable_11);
    virtual void HandleManager_Z_vftable_11();
    ADDRESSVF(0x00748C80, HandleManager_Z, HandleManager_Z_vftable_12);
    virtual void HandleManager_Z_vftable_12();
    ADDRESSVF(0x00748F20, HandleManager_Z, HandleManager_Z_vftable_13);
    virtual void HandleManager_Z_vftable_13();
    ADDRESSVF(0x00748860, HandleManager_Z, HandleManager_Z_vftable_14);
    virtual void HandleManager_Z_vftable_14();
    virtual void HandleManager_Z_vftable_15(int, int);
    virtual void HandleManager_Z_vftable_16(int, int);
    char data[400];
};

ADDRESSVFTABLE(0x009D2D94, SequenceMixAnim_Z);
class __declspec(dllexport) SequenceMixAnim_Z : public SequenceAnim_Z
{
public:
    ADDRESSVF(0x007C13A0, SequenceMixAnim_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSVF(0x007C1620, SequenceMixAnim_Z, SequenceAnim_Z_vftable_14);
    virtual void SequenceAnim_Z_vftable_14() override;
    ADDRESSVF(0x007C1500, SequenceMixAnim_Z, SequenceAnim_Z_vftable_15);
    virtual void SequenceAnim_Z_vftable_15() override;
    ADDRESSVF(0x007C1580, SequenceMixAnim_Z, SequenceAnim_Z_vftable_16);
    virtual void SequenceAnim_Z_vftable_16() override;
    ADDRESSVF(0x007C13E0, SequenceMixAnim_Z, SequenceAnim_Z_vftable_17);
    virtual void SequenceAnim_Z_vftable_17() override;
    ADDRESSVF(0x007C1440, SequenceMixAnim_Z, SequenceAnim_Z_vftable_18);
    virtual void SequenceAnim_Z_vftable_18() override;
    ADDRESSVF(0x007C14B0, SequenceMixAnim_Z, SequenceAnim_Z_vftable_19);
    virtual void SequenceAnim_Z_vftable_19() override;
    virtual int SequenceAnim_Z_vftable_20() override;
    char data[888];
};

ADDRESSVFTABLE(0x009A1A88, COM_Class_Say);
class __declspec(dllexport) COM_Class_Say : public CommandStateTemplate_G
{
public:
    ADDRESSVF(0x00424280, COM_Class_Say, StateTemplate_G_vftable_0);
    virtual void StateTemplate_G_vftable_0() override;
    ADDRESSSYMBOL(0x00425960, "?StateTemplate_G_vftable_3@COM_Class_Say@@UAEDH@Z");
    virtual char StateTemplate_G_vftable_3(int) override;
};

ADDRESSVFTABLE(0x009A1E94, CS_Class_NEARATTACK);
class __declspec(dllexport) CS_Class_NEARATTACK : public CreaturesState_G
{
public:
    ADDRESSVF(0x004263E0, CS_Class_NEARATTACK, StateTemplate_G_vftable_0);
    virtual void StateTemplate_G_vftable_0() override;
    ADDRESSSYMBOL(0x004268E0, "?StateTemplate_G_vftable_1@CS_Class_NEARATTACK@@UAEXH@Z");
    virtual void StateTemplate_G_vftable_1(int) override;
    ADDRESSSYMBOL(0x00426950, "?StateTemplate_G_vftable_3@CS_Class_NEARATTACK@@UAEDH@Z");
    virtual char StateTemplate_G_vftable_3(int) override;
};

ADDRESSVFTABLE(0x009CAC18, CompValVec3100k_72_Z);
class __declspec(dllexport) CompValVec3100k_72_Z : public CompVal_Z
{
public:
    ADDRESSVF(0x006C2730, CompValVec3100k_72_Z, CompVal_Z_vftable_0);
    virtual void CompVal_Z_vftable_0() override;
    virtual int CompVal_Z_vftable_1() override;
    virtual int CompVal_Z_vftable_2() override;
    ADDRESSVF(0x006C1180, CompValVec3100k_72_Z, CompVal_Z_vftable_3);
    virtual void CompVal_Z_vftable_3() override;
    ADDRESSVF(0x006C11B0, CompValVec3100k_72_Z, CompVal_Z_vftable_4);
    virtual void CompVal_Z_vftable_4() override;
};

ADDRESSVFTABLE(0x009AE6D0, FrogAnimal);
class __declspec(dllexport) FrogAnimal : public AnimalSound_G
{
public:
    ADDRESSVF(0x004E7F00, FrogAnimal, AnimalSound_G_vftable_0);
    virtual void AnimalSound_G_vftable_0() override;
};

ADDRESSVFTABLE(0x009C8F9C, DynamicAnim_Z);
class __declspec(dllexport) DynamicAnim_Z : public Manipulator_Z
{
public:
    ADDRESSSYMBOL(0x007C33A0, "?BaseObject_Z_vftable_0@DynamicAnim_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x006884C0, DynamicAnim_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSVF(0x007C33E0, DynamicAnim_Z, BaseObject_Z_vftable_13);
    virtual void BaseObject_Z_vftable_13() override;
    virtual void Manipulator_Z_vftable_14() override;
    virtual void DynamicAnim_Z_vftable_18() = 0;
    virtual void DynamicAnim_Z_vftable_19() = 0;
    virtual void DynamicAnim_Z_vftable_20() = 0;
    virtual void DynamicAnim_Z_vftable_21() = 0;
    virtual void DynamicAnim_Z_vftable_22() = 0;
};

ADDRESSVFTABLE(0x009AE6DC, Game_SoundMgr);
class __declspec(dllexport) Game_SoundMgr : public ObjectGame_Z
{
public:
    ADDRESSSYMBOL(0x004E98E0, "?BaseObject_Z_vftable_0@Game_SoundMgr@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x004D2110, Game_SoundMgr, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSVF(0x004E9EE0, Game_SoundMgr, BaseObject_Z_vftable_13);
    virtual void BaseObject_Z_vftable_13() override;
    ADDRESSSYMBOL(0x004E9930, "?Manipulator_Z_vftable_14@Game_SoundMgr@@UAEXXZ");
    virtual void Manipulator_Z_vftable_14() override;
    ADDRESSSYMBOL(0x004E9B70, "?Manipulator_Z_vftable_17@Game_SoundMgr@@UAEXH@Z");
    virtual void Manipulator_Z_vftable_17(int) override;
    ADDRESSVF(0x004E9980, Game_SoundMgr, ObjectGame_Z_vftable_22);
    virtual void ObjectGame_Z_vftable_22() override;
    char data[1224];
};

ADDRESSVFTABLE(0x009B3F8C, PersoLight_G);
class __declspec(dllexport) PersoLight_G : public Manipulator_Z
{
public:
    ADDRESSSYMBOL(0x00506C30, "?BaseObject_Z_vftable_0@PersoLight_G@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x00506AE0, PersoLight_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    virtual void Manipulator_Z_vftable_14() override;
    ADDRESSSYMBOL(0x00507550, "?Manipulator_Z_vftable_17@PersoLight_G@@UAEXH@Z");
    virtual void Manipulator_Z_vftable_17(int) override;
    char data[252];
};

ADDRESSVFTABLE(0x009A1A9C, COM_Class_Restart);
class __declspec(dllexport) COM_Class_Restart : public CommandStateTemplate_G
{
public:
    ADDRESSVF(0x004242A0, COM_Class_Restart, StateTemplate_G_vftable_0);
    virtual void StateTemplate_G_vftable_0() override;
    ADDRESSSYMBOL(0x00425990, "?StateTemplate_G_vftable_3@COM_Class_Restart@@UAEDH@Z");
    virtual char StateTemplate_G_vftable_3(int) override;
};

ADDRESSVFTABLE(0x009C1318, CGuiEventMemberSubscriber_class_CScrollBar_G_);
class __declspec(dllexport) CGuiEventMemberSubscriber_class_CScrollBar_G_ : public CGuiEventSubscriber
{
public:
    ADDRESSVF(0x005A0170, CGuiEventMemberSubscriber_class_CScrollBar_G_, CGuiEventSubscriber_vftable_0);
    virtual void CGuiEventSubscriber_vftable_0() override;
};

ADDRESSVFTABLE(0x009D64C4, MorphConstant_Z);
class __declspec(dllexport) MorphConstant_Z : public ObjConstant_Z
{
public:
    ADDRESSVF(0x0082B230, MorphConstant_Z, ObjConstant_Z_vftable_0);
    virtual void ObjConstant_Z_vftable_0() override;
    ADDRESSSYMBOL(0x00826E10, "?ObjConstant_Z_vftable_1@MorphConstant_Z@@UAEXHH@Z");
    virtual void ObjConstant_Z_vftable_1(int, int) override;
};

ADDRESSVFTABLE(0x009D0978, AGW_TerraRoad);
class __declspec(dllexport) AGW_TerraRoad : public AGW_TerraForms
{
public:
    ADDRESSSYMBOL(0x0074D3C0, "?AGW_TerraForms_vftable_0@AGW_TerraRoad@@UAEXH@Z");
    virtual void AGW_TerraForms_vftable_0(int) override;
    ADDRESSVF(0x0074D330, AGW_TerraRoad, AGW_TerraForms_vftable_1);
    virtual void AGW_TerraForms_vftable_1() override;
    ADDRESSSYMBOL(0x006FA8A0, "?AGW_TerraForms_vftable_2@AGW_TerraRoad@@UAEXHHH@Z");
    virtual void AGW_TerraForms_vftable_2(int, int, int) override;
    ADDRESSSYMBOL(0x006FB5B0, "?AGW_TerraForms_vftable_4@AGW_TerraRoad@@UAEXHH@Z");
    virtual void AGW_TerraForms_vftable_4(int, int) override;
    ADDRESSSYMBOL(0x006FB590, "?AGW_TerraForms_vftable_5@AGW_TerraRoad@@UAEXXZ");
    virtual void AGW_TerraForms_vftable_5() override;
    ADDRESSVF(0x0074D350, AGW_TerraRoad, AGW_TerraForms_vftable_6);
    virtual void AGW_TerraForms_vftable_6() override;
    ADDRESSVF(0x0074D370, AGW_TerraRoad, AGW_TerraForms_vftable_7);
    virtual void AGW_TerraForms_vftable_7() override;
    ADDRESSVF(0x006FDD40, AGW_TerraRoad, AGW_TerraForms_vftable_8);
    virtual void AGW_TerraForms_vftable_8() override;
    ADDRESSVF(0x0074D3B0, AGW_TerraRoad, AGW_TerraForms_vftable_9);
    virtual void AGW_TerraForms_vftable_9() override;
    ADDRESSVF(0x0074D3E0, AGW_TerraRoad, AGW_TerraForms_vftable_11);
    virtual void AGW_TerraForms_vftable_11() override;
    ADDRESSVF(0x006F24A0, AGW_TerraRoad, AGW_TerraForms_vftable_12);
    virtual void AGW_TerraForms_vftable_12() override;
};

ADDRESSVFTABLE(0x009ABF00, SpecialEffectsEmitter_G_class_SpecialEffectsRibbon_G_);
class __declspec(dllexport) SpecialEffectsEmitter_G_class_SpecialEffectsRibbon_G_ : public SpecialEffectsBaseEmitter_G
{
public:
    ADDRESSVF(0x004BDA30, SpecialEffectsEmitter_G_class_SpecialEffectsRibbon_G_, SpecialEffectsBaseEmitter_G_vftable_0);
    virtual void SpecialEffectsBaseEmitter_G_vftable_0() override;
    virtual char SpecialEffectsBaseEmitter_G_vftable_1(int) override;
    ADDRESSVF(0x004BE530, SpecialEffectsEmitter_G_class_SpecialEffectsRibbon_G_, SpecialEffectsBaseEmitter_G_vftable_2);
    virtual void SpecialEffectsBaseEmitter_G_vftable_2() override;
    ADDRESSVF(0x004BD730, SpecialEffectsEmitter_G_class_SpecialEffectsRibbon_G_, SpecialEffectsBaseEmitter_G_vftable_3);
    virtual void SpecialEffectsBaseEmitter_G_vftable_3() override;
    ADDRESSVF(0x004BE500, SpecialEffectsEmitter_G_class_SpecialEffectsRibbon_G_, SpecialEffectsBaseEmitter_G_vftable_4);
    virtual void SpecialEffectsBaseEmitter_G_vftable_4() override;
    ADDRESSVF(0x004BD700, SpecialEffectsEmitter_G_class_SpecialEffectsRibbon_G_, SpecialEffectsBaseEmitter_G_vftable_5);
    virtual void SpecialEffectsBaseEmitter_G_vftable_5() override;
    ADDRESSVF(0x004BE230, SpecialEffectsEmitter_G_class_SpecialEffectsRibbon_G_, SpecialEffectsBaseEmitter_G_vftable_6);
    virtual void SpecialEffectsBaseEmitter_G_vftable_6() override;
    ADDRESSSYMBOL(0x004BD640, "?SpecialEffectsBaseEmitter_G_vftable_7@SpecialEffectsEmitter_G_class_SpecialEffectsRibbon_G_@@UAEXH@Z");
    virtual void SpecialEffectsBaseEmitter_G_vftable_7(int) override;
    ADDRESSVF(0x004BE560, SpecialEffectsEmitter_G_class_SpecialEffectsRibbon_G_, SpecialEffectsEmitter_G_class_SpecialEffectsRibbon_G__vftable_8);
    virtual void SpecialEffectsEmitter_G_class_SpecialEffectsRibbon_G__vftable_8();
    ADDRESSVF(0x004BE7F0, SpecialEffectsEmitter_G_class_SpecialEffectsRibbon_G_, SpecialEffectsEmitter_G_class_SpecialEffectsRibbon_G__vftable_9);
    virtual void SpecialEffectsEmitter_G_class_SpecialEffectsRibbon_G__vftable_9();
    ADDRESSVF(0x004BE8E0, SpecialEffectsEmitter_G_class_SpecialEffectsRibbon_G_, SpecialEffectsEmitter_G_class_SpecialEffectsRibbon_G__vftable_10);
    virtual void SpecialEffectsEmitter_G_class_SpecialEffectsRibbon_G__vftable_10();
    ADDRESSVF(0x004BBA50, SpecialEffectsEmitter_G_class_SpecialEffectsRibbon_G_, SpecialEffectsEmitter_G_class_SpecialEffectsRibbon_G__vftable_11);
    virtual void SpecialEffectsEmitter_G_class_SpecialEffectsRibbon_G__vftable_11();
    ADDRESSVF(0x004BE930, SpecialEffectsEmitter_G_class_SpecialEffectsRibbon_G_, SpecialEffectsEmitter_G_class_SpecialEffectsRibbon_G__vftable_12);
    virtual void SpecialEffectsEmitter_G_class_SpecialEffectsRibbon_G__vftable_12();
};

ADDRESSVFTABLE(0x009A1A38, COM_Class_GotoRelDir);
class __declspec(dllexport) COM_Class_GotoRelDir : public CommandStateTemplate_G
{
public:
    ADDRESSVF(0x00424220, COM_Class_GotoRelDir, StateTemplate_G_vftable_0);
    virtual void StateTemplate_G_vftable_0() override;
    ADDRESSSYMBOL(0x00425590, "?StateTemplate_G_vftable_3@COM_Class_GotoRelDir@@UAEDH@Z");
    virtual char StateTemplate_G_vftable_3(int) override;
};

ADDRESSVFTABLE(0x009D8988, WinPlayerDataSet_Z);
class __declspec(dllexport) WinPlayerDataSet_Z : public PlayerDataSet_Z
{
public:
    ADDRESSVF(0x00875CD0, WinPlayerDataSet_Z, PlayerDataSet_Z_vftable_0);
    virtual void PlayerDataSet_Z_vftable_0() override;
    ADDRESSSYMBOL(0x00875D20, "?PlayerDataSet_Z_vftable_1@WinPlayerDataSet_Z@@UAEDH@Z");
    virtual char PlayerDataSet_Z_vftable_1(int) override;
    ADDRESSSYMBOL(0x00875D50, "?PlayerDataSet_Z_vftable_2@WinPlayerDataSet_Z@@UAEDH@Z");
    virtual char PlayerDataSet_Z_vftable_2(int) override;
};

ADDRESSVFTABLE(0x009CAE58, CompVec31k_48_Z);
class __declspec(dllexport) CompVec31k_48_Z : public CompField_Z
{
public:
    ADDRESSVF(0x006C2560, CompVec31k_48_Z, CompField_Z_vftable_0);
    virtual void CompField_Z_vftable_0() override;
    virtual int CompField_Z_vftable_1() override;
    virtual int CompField_Z_vftable_2() override;
    virtual int CompField_Z_vftable_3() override;
    ADDRESSVF(0x006C2080, CompVec31k_48_Z, CompField_Z_vftable_4);
    virtual void CompField_Z_vftable_4() override;
    ADDRESSVF(0x006C20B0, CompVec31k_48_Z, CompField_Z_vftable_5);
    virtual void CompField_Z_vftable_5() override;
};

ADDRESSVFTABLE(0x009C3254, GameActionServer_G);
class __declspec(dllexport) GameActionServer_G : public GameAction_G
{
public:
    ADDRESSVF(0x005B59D0, GameActionServer_G, ComObj_Z_vftable_0);
    virtual void ComObj_Z_vftable_0() override;
    virtual void ComObj_Z_vftable_3(int) override;
    virtual void ComObj_Z_vftable_4(int) override;
    virtual char GameAction_G_vftable_10(int, int) override;
    virtual char GameAction_G_vftable_11(int, int, int) override;
    virtual void GameAction_G_vftable_12(int) override;
    virtual void GameAction_G_vftable_13() override;
};

ADDRESSVFTABLE(0x009D63EC, ScatterConstant_Z);
class __declspec(dllexport) ScatterConstant_Z : public ObjConstant_Z
{
public:
    ADDRESSVF(0x0082A8A0, ScatterConstant_Z, ObjConstant_Z_vftable_0);
    virtual void ObjConstant_Z_vftable_0() override;
};

ADDRESSVFTABLE(0x009C4054, SpecialEffectsSuperCell_G);
class __declspec(dllexport) SpecialEffectsSuperCell_G : public SpecialEffectsTank_G
{
public:
    ADDRESSVF(0x005E3EF0, SpecialEffectsSuperCell_G, SpecialEffectsTank_G_vftable_1);
    virtual void SpecialEffectsTank_G_vftable_1() override;
    ADDRESSVF(0x005E3F40, SpecialEffectsSuperCell_G, SpecialEffectsTank_G_vftable_3);
    virtual void SpecialEffectsTank_G_vftable_3() override;
    ADDRESSSYMBOL(0x005E3F70, "?SpecialEffectsTank_G_vftable_4@SpecialEffectsSuperCell_G@@UAEXXZ");
    virtual void SpecialEffectsTank_G_vftable_4() override;
    ADDRESSVF(0x005E4500, SpecialEffectsSuperCell_G, SpecialEffectsTank_G_vftable_5);
    virtual void SpecialEffectsTank_G_vftable_5() override;
    ADDRESSSYMBOL(0x005E3E70, "?SpecialEffectsTank_G_vftable_6@SpecialEffectsSuperCell_G@@UAEHXZ");
    virtual int SpecialEffectsTank_G_vftable_6() override;
    virtual void SpecialEffectsTank_G_vftable_10(int) override;
};

ADDRESSVFTABLE(0x009A1EF4, CS_Class_IMPACTENEMIES);
class __declspec(dllexport) CS_Class_IMPACTENEMIES : public CreaturesState_G
{
public:
    ADDRESSVF(0x00426460, CS_Class_IMPACTENEMIES, StateTemplate_G_vftable_0);
    virtual void StateTemplate_G_vftable_0() override;
    ADDRESSSYMBOL(0x00426CF0, "?StateTemplate_G_vftable_1@CS_Class_IMPACTENEMIES@@UAEXH@Z");
    virtual void StateTemplate_G_vftable_1(int) override;
    ADDRESSSYMBOL(0x00426CC0, "?StateTemplate_G_vftable_3@CS_Class_IMPACTENEMIES@@UAEDH@Z");
    virtual char StateTemplate_G_vftable_3(int) override;
};

ADDRESSVFTABLE(0x009C3FB8, SpecialEffectsSplashTank_G);
class __declspec(dllexport) SpecialEffectsSplashTank_G : public SpecialEffectsTank_G
{
public:
    ADDRESSVF(0x005E0B30, SpecialEffectsSplashTank_G, SpecialEffectsTank_G_vftable_1);
    virtual void SpecialEffectsTank_G_vftable_1() override;
    ADDRESSVF(0x005E0E70, SpecialEffectsSplashTank_G, SpecialEffectsTank_G_vftable_2);
    virtual void SpecialEffectsTank_G_vftable_2() override;
    ADDRESSVF(0x005E0BC0, SpecialEffectsSplashTank_G, SpecialEffectsTank_G_vftable_3);
    virtual void SpecialEffectsTank_G_vftable_3() override;
    ADDRESSSYMBOL(0x005E0E90, "?SpecialEffectsTank_G_vftable_4@SpecialEffectsSplashTank_G@@UAEXXZ");
    virtual void SpecialEffectsTank_G_vftable_4() override;
    ADDRESSVF(0x005E10E0, SpecialEffectsSplashTank_G, SpecialEffectsTank_G_vftable_5);
    virtual void SpecialEffectsTank_G_vftable_5() override;
    ADDRESSSYMBOL(0x005E09C0, "?SpecialEffectsTank_G_vftable_6@SpecialEffectsSplashTank_G@@UAEHXZ");
    virtual int SpecialEffectsTank_G_vftable_6() override;
    ADDRESSSYMBOL(0x005E1860, "?SpecialEffectsTank_G_vftable_7@SpecialEffectsSplashTank_G@@UAEXH@Z");
    virtual void SpecialEffectsTank_G_vftable_7(int) override;
    ADDRESSVF(0x005E0990, SpecialEffectsSplashTank_G, SpecialEffectsTank_G_vftable_8);
    virtual void SpecialEffectsTank_G_vftable_8() override;
    ADDRESSVF(0x005E0960, SpecialEffectsSplashTank_G, SpecialEffectsTank_G_vftable_9);
    virtual void SpecialEffectsTank_G_vftable_9() override;
    ADDRESSSYMBOL(0x005E0F60, "?SpecialEffectsTank_G_vftable_10@SpecialEffectsSplashTank_G@@UAEXH@Z");
    virtual void SpecialEffectsTank_G_vftable_10(int) override;
};

ADDRESSVFTABLE(0x009AE6C8, BirdAnimal);
class __declspec(dllexport) BirdAnimal : public AnimalSound_G
{
public:
    ADDRESSVF(0x004E7C80, BirdAnimal, AnimalSound_G_vftable_0);
    virtual void AnimalSound_G_vftable_0() override;
};

ADDRESSVFTABLE(0x009C434C, SpecialEffectsYEmitter_G);
class __declspec(dllexport) SpecialEffectsYEmitter_G : public SpecialEffectsEmitter_G_class_SpecialEffectsQuad_G_
{
public:
    ADDRESSVF(0x005F4D70, SpecialEffectsYEmitter_G, SpecialEffectsBaseEmitter_G_vftable_0);
    virtual void SpecialEffectsBaseEmitter_G_vftable_0() override;
    ADDRESSVF(0x005F5650, SpecialEffectsYEmitter_G, SpecialEffectsBaseEmitter_G_vftable_3);
    virtual void SpecialEffectsBaseEmitter_G_vftable_3() override;
    ADDRESSVF(0x005F5680, SpecialEffectsYEmitter_G, SpecialEffectsBaseEmitter_G_vftable_4);
    virtual void SpecialEffectsBaseEmitter_G_vftable_4() override;
    ADDRESSVF(0x005F4DA0, SpecialEffectsYEmitter_G, SpecialEffectsBaseEmitter_G_vftable_5);
    virtual void SpecialEffectsBaseEmitter_G_vftable_5() override;
    ADDRESSVF(0x005F4DE0, SpecialEffectsYEmitter_G, SpecialEffectsBaseEmitter_G_vftable_6);
    virtual void SpecialEffectsBaseEmitter_G_vftable_6() override;
};

ADDRESSVFTABLE(0x009CAC90, CompValFloat300_16_Z);
class __declspec(dllexport) CompValFloat300_16_Z : public CompVal_Z
{
public:
    ADDRESSVF(0x006C2830, CompValFloat300_16_Z, CompVal_Z_vftable_0);
    virtual void CompVal_Z_vftable_0() override;
    virtual int CompVal_Z_vftable_1() override;
    virtual int CompVal_Z_vftable_2() override;
    ADDRESSVF(0x006C1540, CompValFloat300_16_Z, CompVal_Z_vftable_3);
    virtual void CompVal_Z_vftable_3() override;
    ADDRESSVF(0x006C15C0, CompValFloat300_16_Z, CompVal_Z_vftable_4);
    virtual void CompVal_Z_vftable_4() override;
};

ADDRESSVFTABLE(0x009D5374, ComWinsockUDP_Z);
class __declspec(dllexport) ComWinsockUDP_Z : public ComUDP_Z
{
public:
    ADDRESSVF(0x00846A50, ComWinsockUDP_Z, ComNet_Z_vftable_0);
    virtual void ComNet_Z_vftable_0() override;
    ADDRESSVF(0x00846AA0, ComWinsockUDP_Z, ComNet_Z_vftable_1);
    virtual void ComNet_Z_vftable_1() override;
    ADDRESSVF(0x00846CA0, ComWinsockUDP_Z, ComNet_Z_vftable_3);
    virtual void ComNet_Z_vftable_3() override;
    ADDRESSVF(0x00846B70, ComWinsockUDP_Z, ComNet_Z_vftable_4);
    virtual void ComNet_Z_vftable_4() override;
    ADDRESSVF(0x0081C840, ComWinsockUDP_Z, ComNet_Z_vftable_5);
    virtual void ComNet_Z_vftable_5() override;
    virtual int ComNet_Z_vftable_6(char FAR * name, int namelen) override;
    ADDRESSVF(0x00846B30, ComWinsockUDP_Z, ComUDP_Z_vftable_19);
    virtual void ComUDP_Z_vftable_19() override;
    ADDRESSVF(0x00846AF0, ComWinsockUDP_Z, ComUDP_Z_vftable_20);
    virtual void ComUDP_Z_vftable_20() override;
    ADDRESSVF(0x0081C800, ComWinsockUDP_Z, ComUDP_Z_vftable_21);
    virtual void ComUDP_Z_vftable_21() override;
    virtual int ComUDP_Z_vftable_35(char *, int) override;
    ADDRESSVF(0x0081C760, ComWinsockUDP_Z, ComUDP_Z_vftable_36);
    virtual void ComUDP_Z_vftable_36() override;
    virtual unsigned long ComUDP_Z_vftable_37(const char FAR * cp) override;
    virtual int ComUDP_Z_vftable_38(SOCKET s, long cmd, unsigned long *argp) override;
    ADDRESSVF(0x0081C7A0, ComWinsockUDP_Z, ComUDP_Z_vftable_39);
    virtual void ComUDP_Z_vftable_39() override;
    ADDRESSVF(0x0081C7D0, ComWinsockUDP_Z, ComUDP_Z_vftable_40);
    virtual void ComUDP_Z_vftable_40() override;
};

ADDRESSVFTABLE(0x009ADF6C, MusicManager_G);
class __declspec(dllexport) MusicManager_G : public Manipulator_Z
{
public:
    ADDRESSSYMBOL(0x004E5A80, "?BaseObject_Z_vftable_0@MusicManager_G@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x004D3FB0, MusicManager_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x004E5C90, "?Manipulator_Z_vftable_14@MusicManager_G@@UAEXXZ");
    virtual void Manipulator_Z_vftable_14() override;
    ADDRESSSYMBOL(0x004E5E90, "?Manipulator_Z_vftable_17@MusicManager_G@@UAEXH@Z");
    virtual void Manipulator_Z_vftable_17(int) override;
    ADDRESSVF(0x004E5D50, MusicManager_G, MusicManager_G_vftable_18);
    virtual void MusicManager_G_vftable_18();
    ADDRESSVF(0x004E5D20, MusicManager_G, MusicManager_G_vftable_19);
    virtual void MusicManager_G_vftable_19();
    ADDRESSVF(0x004E5DB0, MusicManager_G, MusicManager_G_vftable_20);
    virtual void MusicManager_G_vftable_20();
    ADDRESSVF(0x004E5E00, MusicManager_G, MusicManager_G_vftable_21);
    virtual void MusicManager_G_vftable_21();
    ADDRESSVF(0x004E5E30, MusicManager_G, MusicManager_G_vftable_22);
    virtual void MusicManager_G_vftable_22();
    virtual int MusicManager_G_vftable_23();
    char data[916];
};

ADDRESSVFTABLE(0x009C3FE8, SpecialEffectsThunder_G);
class __declspec(dllexport) SpecialEffectsThunder_G : public SpecialEffectsTank_G
{
public:
    ADDRESSSYMBOL(0x005E3BA0, "?SpecialEffectsTank_G_vftable_0@SpecialEffectsThunder_G@@UAEXH@Z");
    virtual void SpecialEffectsTank_G_vftable_0(int) override;
    ADDRESSVF(0x005E2CB0, SpecialEffectsThunder_G, SpecialEffectsTank_G_vftable_1);
    virtual void SpecialEffectsTank_G_vftable_1() override;
    ADDRESSVF(0x005E3AE0, SpecialEffectsThunder_G, SpecialEffectsTank_G_vftable_3);
    virtual void SpecialEffectsTank_G_vftable_3() override;
    ADDRESSSYMBOL(0x005E3B70, "?SpecialEffectsTank_G_vftable_4@SpecialEffectsThunder_G@@UAEXXZ");
    virtual void SpecialEffectsTank_G_vftable_4() override;
    ADDRESSVF(0x005E32A0, SpecialEffectsThunder_G, SpecialEffectsTank_G_vftable_5);
    virtual void SpecialEffectsTank_G_vftable_5() override;
    ADDRESSSYMBOL(0x005E2B80, "?SpecialEffectsTank_G_vftable_6@SpecialEffectsThunder_G@@UAEHXZ");
    virtual int SpecialEffectsTank_G_vftable_6() override;
    virtual void SpecialEffectsTank_G_vftable_7(int) override;
    ADDRESSVF(0x005E2B70, SpecialEffectsThunder_G, SpecialEffectsTank_G_vftable_8);
    virtual void SpecialEffectsTank_G_vftable_8() override;
    ADDRESSSYMBOL(0x005E3B20, "?SpecialEffectsTank_G_vftable_10@SpecialEffectsThunder_G@@UAEXH@Z");
    virtual void SpecialEffectsTank_G_vftable_10(int) override;
};

ADDRESSVFTABLE(0x009CAD18, CompU_16_Z);
class __declspec(dllexport) CompU_16_Z : public CompField_Z
{
public:
    ADDRESSVF(0x006C2360, CompU_16_Z, CompField_Z_vftable_0);
    virtual void CompField_Z_vftable_0() override;
    virtual int CompField_Z_vftable_1() override;
    virtual int CompField_Z_vftable_2() override;
    virtual int CompField_Z_vftable_3() override;
    ADDRESSVF(0x006C19F0, CompU_16_Z, CompField_Z_vftable_4);
    virtual void CompField_Z_vftable_4() override;
    ADDRESSVF(0x006C1A30, CompU_16_Z, CompField_Z_vftable_5);
    virtual void CompField_Z_vftable_5() override;
};

ADDRESSVFTABLE(0x009C304C, GameChatClient_G);
class __declspec(dllexport) GameChatClient_G : public GameChat_G
{
public:
    ADDRESSVF(0x005B5260, GameChatClient_G, ComObj_Z_vftable_0);
    virtual void ComObj_Z_vftable_0() override;
    ADDRESSSYMBOL(0x005ADE80, "?ComObj_Z_vftable_3@GameChatClient_G@@UAEXH@Z");
    virtual void ComObj_Z_vftable_3(int) override;
    ADDRESSSYMBOL(0x005ADF60, "?ComObj_Z_vftable_4@GameChatClient_G@@UAEXH@Z");
    virtual void ComObj_Z_vftable_4(int) override;
};

ADDRESSVFTABLE(0x009C3F38, SpecialEffectsSnowTank_G);
class __declspec(dllexport) SpecialEffectsSnowTank_G : public SpecialEffectsTank_G
{
public:
    ADDRESSVF(0x005DFED0, SpecialEffectsSnowTank_G, SpecialEffectsTank_G_vftable_1);
    virtual void SpecialEffectsTank_G_vftable_1() override;
    ADDRESSVF(0x005DFF80, SpecialEffectsSnowTank_G, SpecialEffectsTank_G_vftable_2);
    virtual void SpecialEffectsTank_G_vftable_2() override;
    ADDRESSVF(0x005DFF60, SpecialEffectsSnowTank_G, SpecialEffectsTank_G_vftable_3);
    virtual void SpecialEffectsTank_G_vftable_3() override;
    virtual void SpecialEffectsTank_G_vftable_4() override;
    ADDRESSVF(0x005E0240, SpecialEffectsSnowTank_G, SpecialEffectsTank_G_vftable_5);
    virtual void SpecialEffectsTank_G_vftable_5() override;
    ADDRESSSYMBOL(0x005DFBC0, "?SpecialEffectsTank_G_vftable_6@SpecialEffectsSnowTank_G@@UAEHXZ");
    virtual int SpecialEffectsTank_G_vftable_6() override;
    ADDRESSSYMBOL(0x005E0540, "?SpecialEffectsTank_G_vftable_7@SpecialEffectsSnowTank_G@@UAEXH@Z");
    virtual void SpecialEffectsTank_G_vftable_7(int) override;
    ADDRESSSYMBOL(0x005DFFC0, "?SpecialEffectsTank_G_vftable_10@SpecialEffectsSnowTank_G@@UAEXH@Z");
    virtual void SpecialEffectsTank_G_vftable_10(int) override;
};

ADDRESSVFTABLE(0x009AEE0C, CameraEngineZone_Z);
class __declspec(dllexport) CameraEngineZone_Z : public CameraEngine_Z
{
public:
    ADDRESSSYMBOL(0x00665000, "?BaseObject_Z_vftable_0@CameraEngineZone_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x004D3820, CameraEngineZone_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x006650C0, "?Manipulator_Z_vftable_14@CameraEngineZone_Z@@UAEXXZ");
    virtual void Manipulator_Z_vftable_14() override;
    ADDRESSSYMBOL(0x00665250, "?Manipulator_Z_vftable_17@CameraEngineZone_Z@@UAEXH@Z");
    virtual void Manipulator_Z_vftable_17(int) override;
    ADDRESSSYMBOL(0x006651A0, "?CameraEngine_Z_vftable_18@CameraEngineZone_Z@@UAEXHH@Z");
    virtual void CameraEngine_Z_vftable_18(int, int) override;
    ADDRESSSYMBOL(0x0072C690, "?CameraEngine_Z_vftable_21@CameraEngineZone_Z@@UAEXXZ");
    virtual void CameraEngine_Z_vftable_21() override;
    ADDRESSSYMBOL(0x0072BB90, "?CameraEngine_Z_vftable_22@CameraEngineZone_Z@@UAEXH@Z");
    virtual void CameraEngine_Z_vftable_22(int) override;
    ADDRESSSYMBOL(0x0072C4A0, "?CameraEngine_Z_vftable_23@CameraEngineZone_Z@@UAEXXZ");
    virtual void CameraEngine_Z_vftable_23() override;
    ADDRESSSYMBOL(0x0072C6F0, "?CameraEngine_Z_vftable_24@CameraEngineZone_Z@@UAEXHH@Z");
    virtual void CameraEngine_Z_vftable_24(int, int) override;
    ADDRESSSYMBOL(0x0072C660, "?CameraEngine_Z_vftable_25@CameraEngineZone_Z@@UAEXH@Z");
    virtual void CameraEngine_Z_vftable_25(int) override;
    char data[192];
};

ADDRESSVFTABLE(0x009DA978, WinTrophyManager_Z);
class __declspec(dllexport) WinTrophyManager_Z : public TrophyManager_Z
{
public:
    ADDRESSSYMBOL(0x00874940, "?NetPlayModule_Z_vftable_0@WinTrophyManager_Z@@UAEDXZ");
    virtual char NetPlayModule_Z_vftable_0() override;
    ADDRESSSYMBOL(0x00874950, "?NetPlayModule_Z_vftable_2@WinTrophyManager_Z@@UAEDXZ");
    virtual char NetPlayModule_Z_vftable_2() override;
    ADDRESSVF(0x00874720, WinTrophyManager_Z, TrophyManager_Z_vftable_3);
    virtual void TrophyManager_Z_vftable_3() override;
    ADDRESSSYMBOL(0x008747D0, "?TrophyManager_Z_vftable_4@WinTrophyManager_Z@@UAEHH@Z");
    virtual int TrophyManager_Z_vftable_4(int) override;
    ADDRESSSYMBOL(0x008747C0, "?TrophyManager_Z_vftable_5@WinTrophyManager_Z@@UAEXH@Z");
    virtual void TrophyManager_Z_vftable_5(int) override;
    ADDRESSSYMBOL(0x00874870, "?TrophyManager_Z_vftable_6@WinTrophyManager_Z@@UAEDXZ");
    virtual char TrophyManager_Z_vftable_6() override;
    ADDRESSVF(0x00874990, WinTrophyManager_Z, TrophyManager_Z_vftable_8);
    virtual void TrophyManager_Z_vftable_8() override;
    ADDRESSVF(0x00874A90, WinTrophyManager_Z, TrophyManager_Z_vftable_9);
    virtual void TrophyManager_Z_vftable_9() override;
    ADDRESSSYMBOL(0x00874A30, "?TrophyManager_Z_vftable_10@WinTrophyManager_Z@@UAEXXZ");
    virtual void TrophyManager_Z_vftable_10() override;
};

ADDRESSVFTABLE(0x009C6BAC, ManipulatorSceneDraw_Z);
class __declspec(dllexport) ManipulatorSceneDraw_Z : public Manipulator_Z
{
public:
    ADDRESSSYMBOL(0x00665EF0, "?BaseObject_Z_vftable_0@ManipulatorSceneDraw_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x00665ED0, ManipulatorSceneDraw_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    virtual void Manipulator_Z_vftable_17(int) override;
    virtual void ManipulatorSceneDraw_Z_vftable_18(int);
    virtual void ManipulatorSceneDraw_Z_vftable_19(int);
};

ADDRESSVFTABLE(0x009D51A4, SaveGamePc_Z);
class __declspec(dllexport) SaveGamePc_Z : public SaveGame_Z
{
public:
    ADDRESSVF(0x0081DD10, SaveGamePc_Z, SaveGame_Z_vftable_0);
    virtual void SaveGame_Z_vftable_0() override;
    ADDRESSSYMBOL(0x00840510, "?SaveGame_Z_vftable_1@SaveGamePc_Z@@UAEXXZ");
    virtual void SaveGame_Z_vftable_1() override;
    ADDRESSSYMBOL(0x0083FE50, "?SaveGame_Z_vftable_4@SaveGamePc_Z@@UAEDXZ");
    virtual char SaveGame_Z_vftable_4() override;
    ADDRESSSYMBOL(0x0083FE70, "?SaveGame_Z_vftable_5@SaveGamePc_Z@@UAEXXZ");
    virtual void SaveGame_Z_vftable_5() override;
    virtual void SaveGame_Z_vftable_6(int) override;
    virtual void SaveGame_Z_vftable_7(int) override;
    virtual void SaveGame_Z_vftable_8(int) override;
    virtual void SaveGame_Z_vftable_9(int) override;
    virtual void SaveGame_Z_vftable_10(int) override;
    ADDRESSSYMBOL(0x00840000, "?SaveGame_Z_vftable_14@SaveGamePc_Z@@UAEHHHH@Z");
    virtual int SaveGame_Z_vftable_14(int, int, int) override;
    ADDRESSSYMBOL(0x0081C3C0, "?SaveGame_Z_vftable_15@SaveGamePc_Z@@UAEHHHH@Z");
    virtual int SaveGame_Z_vftable_15(int, int, int) override;
    ADDRESSSYMBOL(0x00840190, "?SaveGame_Z_vftable_16@SaveGamePc_Z@@UAEHHHH@Z");
    virtual int SaveGame_Z_vftable_16(int, int, int) override;
    ADDRESSSYMBOL(0x0081C3D0, "?SaveGame_Z_vftable_17@SaveGamePc_Z@@UAEHHHH@Z");
    virtual int SaveGame_Z_vftable_17(int, int, int) override;
    virtual int SaveGame_Z_vftable_18(int) override;
    virtual int SaveGame_Z_vftable_19(int) override;
    ADDRESSSYMBOL(0x008403F0, "?SaveGame_Z_vftable_25@SaveGamePc_Z@@UAEHXZ");
    virtual int SaveGame_Z_vftable_25() override;
    ADDRESSSYMBOL(0x00840440, "?SaveGame_Z_vftable_26@SaveGamePc_Z@@UAEHHH@Z");
    virtual int SaveGame_Z_vftable_26(int, int) override;
    ADDRESSVF(0x00840470, SaveGamePc_Z, SaveGame_Z_vftable_27);
    virtual void SaveGame_Z_vftable_27() override;
    virtual int SaveGame_Z_vftable_28(int) override;
    virtual int SaveGame_Z_vftable_29(int, int, int) override;
    virtual int SaveGame_Z_vftable_30(int) override;
    ADDRESSVF(0x00840480, SaveGamePc_Z, SaveGame_Z_vftable_31);
    virtual void SaveGame_Z_vftable_31() override;
    ADDRESSVF(0x008403C0, SaveGamePc_Z, SaveGame_Z_vftable_33);
    virtual void SaveGame_Z_vftable_33() override;
    virtual int SaveGame_Z_vftable_35() override;
    virtual int SaveGame_Z_vftable_36() override;
    virtual int SaveGame_Z_vftable_38() override;
    virtual int SaveGame_Z_vftable_39() override;
    virtual char SaveGame_Z_vftable_40() override;
    virtual void SaveGamePc_Z_vftable_45(int);
};

ADDRESSVFTABLE(0x009C0150, CGuiEventMemberSubscriber_class_Dialog_SigninAlert_);
class __declspec(dllexport) CGuiEventMemberSubscriber_class_Dialog_SigninAlert_ : public CGuiEventSubscriber
{
public:
    ADDRESSVF(0x00593C10, CGuiEventMemberSubscriber_class_Dialog_SigninAlert_, CGuiEventSubscriber_vftable_0);
    virtual void CGuiEventSubscriber_vftable_0() override;
};

ADDRESSVFTABLE(0x009AE61C, GameParticleMgr_G);
class __declspec(dllexport) GameParticleMgr_G : public ObjectGame_Z
{
public:
    ADDRESSSYMBOL(0x004EE130, "?BaseObject_Z_vftable_0@GameParticleMgr_G@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x004D1C00, GameParticleMgr_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSVF(0x004EF140, GameParticleMgr_G, BaseObject_Z_vftable_13);
    virtual void BaseObject_Z_vftable_13() override;
    ADDRESSSYMBOL(0x004EE150, "?Manipulator_Z_vftable_14@GameParticleMgr_G@@UAEXXZ");
    virtual void Manipulator_Z_vftable_14() override;
    ADDRESSSYMBOL(0x004EF150, "?Manipulator_Z_vftable_17@GameParticleMgr_G@@UAEXH@Z");
    virtual void Manipulator_Z_vftable_17(int) override;
    ADDRESSVF(0x004EE190, GameParticleMgr_G, ObjectGame_Z_vftable_22);
    virtual void ObjectGame_Z_vftable_22() override;
    char data[56];
};

ADDRESSVFTABLE(0x009C4218, SpecialEffectsSandMesh_G);
class __declspec(dllexport) SpecialEffectsSandMesh_G : public SpecialEffectsMesh_G
{
public:
    ADDRESSVF(0x005EA240, SpecialEffectsSandMesh_G, SpecialEffectsMesh_G_vftable_0);
    virtual void SpecialEffectsMesh_G_vftable_0() override;
    ADDRESSSYMBOL(0x005EB670, "?SpecialEffectsMesh_G_vftable_1@SpecialEffectsSandMesh_G@@UAEXXZ");
    virtual void SpecialEffectsMesh_G_vftable_1() override;
    ADDRESSVF(0x005EA2E0, SpecialEffectsSandMesh_G, SpecialEffectsMesh_G_vftable_2);
    virtual void SpecialEffectsMesh_G_vftable_2() override;
    ADDRESSSYMBOL(0x005EB590, "?SpecialEffectsMesh_G_vftable_3@SpecialEffectsSandMesh_G@@UAEXH@Z");
    virtual void SpecialEffectsMesh_G_vftable_3(int) override;
    ADDRESSSYMBOL(0x005EA5F0, "?SpecialEffectsMesh_G_vftable_4@SpecialEffectsSandMesh_G@@UAEXHH@Z");
    virtual void SpecialEffectsMesh_G_vftable_4(int, int) override;
    ADDRESSSYMBOL(0x005EB600, "?SpecialEffectsMesh_G_vftable_6@SpecialEffectsSandMesh_G@@UAEXXZ");
    virtual void SpecialEffectsMesh_G_vftable_6() override;
};

ADDRESSVFTABLE(0x009AE7EC, LiquidFlow_G);
class __declspec(dllexport) LiquidFlow_G : public ManipulatorSceneDraw_Z
{
public:
    ADDRESSSYMBOL(0x00510700, "?BaseObject_Z_vftable_0@LiquidFlow_G@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x004D4CA0, LiquidFlow_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x00510730, "?Manipulator_Z_vftable_14@LiquidFlow_G@@UAEXXZ");
    virtual void Manipulator_Z_vftable_14() override;
    ADDRESSSYMBOL(0x005107C0, "?Manipulator_Z_vftable_17@LiquidFlow_G@@UAEXH@Z");
    virtual void Manipulator_Z_vftable_17(int) override;
    ADDRESSSYMBOL(0x00510810, "?ManipulatorSceneDraw_Z_vftable_19@LiquidFlow_G@@UAEXH@Z");
    virtual void ManipulatorSceneDraw_Z_vftable_19(int) override;
    ADDRESSVF(0x00510790, LiquidFlow_G, LiquidFlow_G_vftable_20);
    virtual void LiquidFlow_G_vftable_20();
    char data[48];
};

ADDRESSVFTABLE(0x009C3A34, SpecialEffectsPlayerWheelEmitter_G);
class __declspec(dllexport) SpecialEffectsPlayerWheelEmitter_G : public SpecialEffectsWheelEmitter_G
{
public:
    ADDRESSVF(0x005CF110, SpecialEffectsPlayerWheelEmitter_G, SpecialEffectsBaseEmitter_G_vftable_0);
    virtual void SpecialEffectsBaseEmitter_G_vftable_0() override;
    ADDRESSVF(0x005EEFC0, SpecialEffectsPlayerWheelEmitter_G, SpecialEffectsWheelEmitter_G_vftable_8);
    virtual void SpecialEffectsWheelEmitter_G_vftable_8() override;
};

ADDRESSVFTABLE(0x009B0654, F14Move_G);
class __declspec(dllexport) F14Move_G : public Manipulator_Z
{
public:
    ADDRESSSYMBOL(0x0051A000, "?BaseObject_Z_vftable_0@F14Move_G@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x004D5A70, F14Move_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    virtual void Manipulator_Z_vftable_14() override;
    ADDRESSSYMBOL(0x0051A050, "?Manipulator_Z_vftable_17@F14Move_G@@UAEXH@Z");
    virtual void Manipulator_Z_vftable_17(int) override;
    char data[80];
};

ADDRESSVFTABLE(0x009C9464, WinStream_Z);
class __declspec(dllexport) WinStream_Z : public Stream_Z
{
public:
    ADDRESSVF(0x0068D8C0, WinStream_Z, BaseStream_Z_vftable_0);
    virtual void BaseStream_Z_vftable_0() override;
    ADDRESSSYMBOL(0x00830640, "?BaseStream_Z_vftable_3@WinStream_Z@@UAEXHHH@Z");
    virtual void BaseStream_Z_vftable_3(int, int, int) override;
    ADDRESSSYMBOL(0x008306D0, "?BaseStream_Z_vftable_4@WinStream_Z@@UAEXHHH@Z");
    virtual void BaseStream_Z_vftable_4(int, int, int) override;
    ADDRESSSYMBOL(0x00830620, "?Stream_Z_vftable_5@WinStream_Z@@UAEXH@Z");
    virtual void Stream_Z_vftable_5(int) override;
    ADDRESSSYMBOL(0x00830690, "?Stream_Z_vftable_6@WinStream_Z@@UAEXHHH@Z");
    virtual void Stream_Z_vftable_6(int, int, int) override;
    ADDRESSSYMBOL(0x00830670, "?Stream_Z_vftable_7@WinStream_Z@@UAEXXZ");
    virtual void Stream_Z_vftable_7() override;
};

ADDRESSVFTABLE(0x009D0848, AGW_TerraFlat);
class __declspec(dllexport) AGW_TerraFlat : public AGW_TerraForms
{
public:
    ADDRESSSYMBOL(0x00799910, "?AGW_TerraForms_vftable_2@AGW_TerraFlat@@UAEXHHH@Z");
    virtual void AGW_TerraForms_vftable_2(int, int, int) override;
    ADDRESSSYMBOL(0x007995E0, "?AGW_TerraForms_vftable_3@AGW_TerraFlat@@UAEDXZ");
    virtual char AGW_TerraForms_vftable_3() override;
    ADDRESSSYMBOL(0x00799730, "?AGW_TerraForms_vftable_4@AGW_TerraFlat@@UAEXHH@Z");
    virtual void AGW_TerraForms_vftable_4(int, int) override;
    ADDRESSSYMBOL(0x007996F0, "?AGW_TerraForms_vftable_5@AGW_TerraFlat@@UAEXXZ");
    virtual void AGW_TerraForms_vftable_5() override;
    ADDRESSVF(0x0074CDC0, AGW_TerraFlat, AGW_TerraForms_vftable_6);
    virtual void AGW_TerraForms_vftable_6() override;
    ADDRESSVF(0x0074CDE0, AGW_TerraFlat, AGW_TerraForms_vftable_7);
    virtual void AGW_TerraForms_vftable_7() override;
    ADDRESSVF(0x0079C180, AGW_TerraFlat, AGW_TerraForms_vftable_8);
    virtual void AGW_TerraForms_vftable_8() override;
    ADDRESSVF(0x0074CDF0, AGW_TerraFlat, AGW_TerraForms_vftable_9);
    virtual void AGW_TerraForms_vftable_9() override;
    ADDRESSVF(0x0074E300, AGW_TerraFlat, AGW_TerraForms_vftable_11);
    virtual void AGW_TerraForms_vftable_11() override;
    ADDRESSVF(0x00799870, AGW_TerraFlat, AGW_TerraForms_vftable_12);
    virtual void AGW_TerraForms_vftable_12() override;
};

ADDRESSVFTABLE(0x009B21DC, VolumeDelayedStartMove_G);
class __declspec(dllexport) VolumeDelayedStartMove_G : public Manipulator_Z
{
public:
    ADDRESSSYMBOL(0x00573590, "?BaseObject_Z_vftable_0@VolumeDelayedStartMove_G@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x004DC240, VolumeDelayedStartMove_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    virtual void Manipulator_Z_vftable_14() override;
    ADDRESSSYMBOL(0x005735D0, "?Manipulator_Z_vftable_17@VolumeDelayedStartMove_G@@UAEXH@Z");
    virtual void Manipulator_Z_vftable_17(int) override;
    char data[4];
};

ADDRESSVFTABLE(0x009C472C, SpecialEffectsWaterProjection_G);
class __declspec(dllexport) SpecialEffectsWaterProjection_G : public SpecialEffectsProjection_G
{
public:
    ADDRESSVF(0x006009E0, SpecialEffectsWaterProjection_G, SpecialEffectsProjection_G_vftable_0);
    virtual void SpecialEffectsProjection_G_vftable_0() override;
    ADDRESSSYMBOL(0x00600A40, "?SpecialEffectsProjection_G_vftable_1@SpecialEffectsWaterProjection_G@@UAEHXZ");
    virtual int SpecialEffectsProjection_G_vftable_1() override;
    ADDRESSVF(0x00600F70, SpecialEffectsWaterProjection_G, SpecialEffectsProjection_G_vftable_2);
    virtual void SpecialEffectsProjection_G_vftable_2() override;
    ADDRESSVF(0x00600D10, SpecialEffectsWaterProjection_G, SpecialEffectsWaterProjection_G_vftable_3);
    virtual void SpecialEffectsWaterProjection_G_vftable_3();
};

ADDRESSVFTABLE(0x009C31D0, GameChatServer_G);
class __declspec(dllexport) GameChatServer_G : public GameChat_G
{
public:
    ADDRESSVF(0x005B5980, GameChatServer_G, ComObj_Z_vftable_0);
    virtual void ComObj_Z_vftable_0() override;
    virtual void ComObj_Z_vftable_3(int) override;
    virtual void ComObj_Z_vftable_4(int) override;
};

ADDRESSVFTABLE(0x009B15CC, ObjectThrow_Z);
class __declspec(dllexport) ObjectThrow_Z : public ObjectMove_Z
{
public:
    ADDRESSSYMBOL(0x0067ED80, "?BaseObject_Z_vftable_0@ObjectThrow_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x004DF7B0, ObjectThrow_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x0067EDD0, "?Manipulator_Z_vftable_14@ObjectThrow_Z@@UAEXXZ");
    virtual void Manipulator_Z_vftable_14() override;
    ADDRESSSYMBOL(0x0067F100, "?Manipulator_Z_vftable_17@ObjectThrow_Z@@UAEXH@Z");
    virtual void Manipulator_Z_vftable_17(int) override;
    ADDRESSSYMBOL(0x0067F180, "?ObjectMove_Z_vftable_19@ObjectThrow_Z@@UAEXHHHHH@Z");
    virtual void ObjectMove_Z_vftable_19(int, int, int, int, int) override;
    ADDRESSVF(0x0071A060, ObjectThrow_Z, ObjectMove_Z_vftable_22);
    virtual void ObjectMove_Z_vftable_22() override;
    ADDRESSVF(0x0071A260, ObjectThrow_Z, ObjectMove_Z_vftable_24);
    virtual void ObjectMove_Z_vftable_24() override;
    ADDRESSVF(0x0071A7D0, ObjectThrow_Z, ObjectMove_Z_vftable_25);
    virtual void ObjectMove_Z_vftable_25() override;
    ADDRESSVF(0x0071A170, ObjectThrow_Z, ObjectMove_Z_vftable_26);
    virtual void ObjectMove_Z_vftable_26() override;
    ADDRESSVF(0x006803D0, ObjectThrow_Z, ObjectMove_Z_vftable_33);
    virtual void ObjectMove_Z_vftable_33() override;
    ADDRESSVF(0x0067F7C0, ObjectThrow_Z, ObjectMove_Z_vftable_35);
    virtual void ObjectMove_Z_vftable_35() override;
    ADDRESSVF(0x0067EF10, ObjectThrow_Z, ObjectMove_Z_vftable_43);
    virtual void ObjectMove_Z_vftable_43() override;
    ADDRESSVF(0x00680160, ObjectThrow_Z, ObjectMove_Z_vftable_64);
    virtual void ObjectMove_Z_vftable_64() override;
    ADDRESSVF(0x0067F790, ObjectThrow_Z, ObjectMove_Z_vftable_65);
    virtual void ObjectMove_Z_vftable_65() override;
    ADDRESSVF(0x004DBB70, ObjectThrow_Z, ObjectThrow_Z_vftable_77);
    virtual void ObjectThrow_Z_vftable_77();
    ADDRESSVF(0x004DBB60, ObjectThrow_Z, ObjectThrow_Z_vftable_78);
    virtual void ObjectThrow_Z_vftable_78();
    ADDRESSVF(0x004DBB50, ObjectThrow_Z, ObjectThrow_Z_vftable_79);
    virtual void ObjectThrow_Z_vftable_79();
    ADDRESSVF(0x004DBB40, ObjectThrow_Z, ObjectThrow_Z_vftable_80);
    virtual void ObjectThrow_Z_vftable_80();
    ADDRESSVF(0x0067FB90, ObjectThrow_Z, ObjectThrow_Z_vftable_81);
    virtual void ObjectThrow_Z_vftable_81();
    ADDRESSVF(0x0067F680, ObjectThrow_Z, ObjectThrow_Z_vftable_82);
    virtual void ObjectThrow_Z_vftable_82();
    virtual void ObjectThrow_Z_vftable_83();
    virtual char ObjectThrow_Z_vftable_84(int);
    virtual void ObjectThrow_Z_vftable_85(int, int, int);
    virtual void ObjectThrow_Z_vftable_86(int, int);
    char data[144];
};

ADDRESSVFTABLE(0x009C15C8, CPurchaseCheat);
class __declspec(dllexport) CPurchaseCheat : public CPurchase
{
public:
    ADDRESSVF(0x005A2C50, CPurchaseCheat, CPurchase_vftable_0);
    virtual void CPurchase_vftable_0() override;
    virtual char CPurchase_vftable_1() override;
    ADDRESSVF(0x005A2CA0, CPurchaseCheat, CPurchase_vftable_4);
    virtual void CPurchase_vftable_4() override;
};

ADDRESSVFTABLE(0x009D6878, LayerConstant_Z);
class __declspec(dllexport) LayerConstant_Z : public ObjConstant_Z
{
public:
    ADDRESSVF(0x00833610, LayerConstant_Z, ObjConstant_Z_vftable_0);
    virtual void ObjConstant_Z_vftable_0() override;
};

ADDRESSVFTABLE(0x009D76D0, ComDBReadValue_Z);
class __declspec(dllexport) ComDBReadValue_Z : public ComDBCommand_Z
{
public:
    ADDRESSVF(0x00871550, ComDBReadValue_Z, ComDBCommand_Z_vftable_0);
    virtual void ComDBCommand_Z_vftable_0() override;
};

ADDRESSVFTABLE(0x009BBEA0, LevelAdvancement_G);
class __declspec(dllexport) LevelAdvancement_G : public BaseObject_Z
{
public:
    ADDRESSVF(0x00563120, LevelAdvancement_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    char data[52];
};

ADDRESSVFTABLE(0x009A55BC, Navigator3dHUD);
class __declspec(dllexport) Navigator3dHUD : public ViewportHUD
{
public:
    ADDRESSSYMBOL(0x004BF680, "?ViewportHUD_vftable_0@Navigator3dHUD@@UAEXH@Z");
    virtual void ViewportHUD_vftable_0(int) override;
    virtual void ViewportHUD_vftable_1() override;
    ADDRESSSYMBOL(0x004BFBB0, "?ViewportHUD_vftable_2@Navigator3dHUD@@UAEXH@Z");
    virtual void ViewportHUD_vftable_2(int) override;
    ADDRESSSYMBOL(0x004C0FE0, "?ViewportHUD_vftable_5@Navigator3dHUD@@UAEXH@Z");
    virtual void ViewportHUD_vftable_5(int) override;
};

ADDRESSVFTABLE(0x009C414C, SpecialEffectsTornadoDebris_G);
class __declspec(dllexport) SpecialEffectsTornadoDebris_G : public SpecialEffectsTank_G
{
public:
    ADDRESSVF(0x005E7200, SpecialEffectsTornadoDebris_G, SpecialEffectsTank_G_vftable_1);
    virtual void SpecialEffectsTank_G_vftable_1() override;
    ADDRESSVF(0x005E7240, SpecialEffectsTornadoDebris_G, SpecialEffectsTank_G_vftable_3);
    virtual void SpecialEffectsTank_G_vftable_3() override;
    virtual void SpecialEffectsTank_G_vftable_4() override;
    ADDRESSVF(0x005E7400, SpecialEffectsTornadoDebris_G, SpecialEffectsTank_G_vftable_5);
    virtual void SpecialEffectsTank_G_vftable_5() override;
    virtual int SpecialEffectsTank_G_vftable_6() override;
    ADDRESSSYMBOL(0x005E7590, "?SpecialEffectsTank_G_vftable_7@SpecialEffectsTornadoDebris_G@@UAEXH@Z");
    virtual void SpecialEffectsTank_G_vftable_7(int) override;
    ADDRESSSYMBOL(0x005E7280, "?SpecialEffectsTank_G_vftable_10@SpecialEffectsTornadoDebris_G@@UAEXH@Z");
    virtual void SpecialEffectsTank_G_vftable_10(int) override;
};

ADDRESSVFTABLE(0x009AE5BC, MVehicle_Manager_G);
class __declspec(dllexport) MVehicle_Manager_G : public ObjectGame_Z
{
public:
    ADDRESSVF(0x004D1B40, MVehicle_Manager_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x005D35D0, "?Manipulator_Z_vftable_17@MVehicle_Manager_G@@UAEXH@Z");
    virtual void Manipulator_Z_vftable_17(int) override;
    char data[40];
};

ADDRESSVFTABLE(0x009A550C, ChatHUD);
class __declspec(dllexport) ChatHUD : public ViewportHUD
{
public:
    ADDRESSSYMBOL(0x00449DF0, "?ViewportHUD_vftable_0@ChatHUD@@UAEXH@Z");
    virtual void ViewportHUD_vftable_0(int) override;
    virtual void ViewportHUD_vftable_1() override;
    ADDRESSSYMBOL(0x00449F80, "?ViewportHUD_vftable_2@ChatHUD@@UAEXH@Z");
    virtual void ViewportHUD_vftable_2(int) override;
    ADDRESSSYMBOL(0x0044A4C0, "?ViewportHUD_vftable_5@ChatHUD@@UAEXH@Z");
    virtual void ViewportHUD_vftable_5(int) override;
    ADDRESSVF(0x00449F50, ChatHUD, ViewportHUD_vftable_7);
    virtual void ViewportHUD_vftable_7() override;
    ADDRESSVF(0x00449F70, ChatHUD, ViewportHUD_vftable_8);
    virtual void ViewportHUD_vftable_8() override;
};

ADDRESSVFTABLE(0x009C5074, IAPathBlockFinish);
class __declspec(dllexport) IAPathBlockFinish : public IAPathBlock
{
public:
    ADDRESSVF(0x0062A500, IAPathBlockFinish, IAPathBlock_vftable_0);
    virtual void IAPathBlock_vftable_0() override;
    ADDRESSVF(0x00624310, IAPathBlockFinish, IAPathBlock_vftable_4);
    virtual void IAPathBlock_vftable_4() override;
    ADDRESSVF(0x00624490, IAPathBlockFinish, IAPathBlock_vftable_5);
    virtual void IAPathBlock_vftable_5() override;
    ADDRESSVF(0x0062A530, IAPathBlockFinish, IAPathBlock_vftable_6);
    virtual void IAPathBlock_vftable_6() override;
};

ADDRESSVFTABLE(0x009C8AC4, CameraOccluder_Z);
class __declspec(dllexport) CameraOccluder_Z : public Manipulator_Z
{
public:
    ADDRESSSYMBOL(0x007C3DD0, "?BaseObject_Z_vftable_0@CameraOccluder_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x00687B50, CameraOccluder_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x007C3E20, "?Manipulator_Z_vftable_17@CameraOccluder_Z@@UAEXH@Z");
    virtual void Manipulator_Z_vftable_17(int) override;
    char data[4];
};

ADDRESSVFTABLE(0x009C3F88, SpecialEffectsRainTank_G);
class __declspec(dllexport) SpecialEffectsRainTank_G : public SpecialEffectsTank_G
{
public:
    ADDRESSVF(0x005E1C40, SpecialEffectsRainTank_G, SpecialEffectsTank_G_vftable_1);
    virtual void SpecialEffectsTank_G_vftable_1() override;
    ADDRESSVF(0x005E2460, SpecialEffectsRainTank_G, SpecialEffectsTank_G_vftable_2);
    virtual void SpecialEffectsTank_G_vftable_2() override;
    ADDRESSVF(0x005E1C90, SpecialEffectsRainTank_G, SpecialEffectsTank_G_vftable_3);
    virtual void SpecialEffectsTank_G_vftable_3() override;
    virtual void SpecialEffectsTank_G_vftable_4() override;
    ADDRESSVF(0x005E1CB0, SpecialEffectsRainTank_G, SpecialEffectsTank_G_vftable_5);
    virtual void SpecialEffectsTank_G_vftable_5() override;
    virtual int SpecialEffectsTank_G_vftable_6() override;
    ADDRESSSYMBOL(0x005E2490, "?SpecialEffectsTank_G_vftable_7@SpecialEffectsRainTank_G@@UAEXH@Z");
    virtual void SpecialEffectsTank_G_vftable_7(int) override;
    ADDRESSVF(0x005E0920, SpecialEffectsRainTank_G, SpecialEffectsTank_G_vftable_9);
    virtual void SpecialEffectsTank_G_vftable_9() override;
    ADDRESSSYMBOL(0x005E21A0, "?SpecialEffectsTank_G_vftable_10@SpecialEffectsRainTank_G@@UAEXH@Z");
    virtual void SpecialEffectsTank_G_vftable_10(int) override;
};

ADDRESSVFTABLE(0x009C5054, IAPathBlockOffRoad);
class __declspec(dllexport) IAPathBlockOffRoad : public IAPathBlock
{
public:
    ADDRESSVF(0x0062A790, IAPathBlockOffRoad, IAPathBlock_vftable_0);
    virtual void IAPathBlock_vftable_0() override;
    ADDRESSSYMBOL(0x00624C90, "?IAPathBlock_vftable_2@IAPathBlockOffRoad@@UAEXXZ");
    virtual void IAPathBlock_vftable_2() override;
    ADDRESSSYMBOL(0x00624CF0, "?IAPathBlock_vftable_3@IAPathBlockOffRoad@@UAEDH@Z");
    virtual char IAPathBlock_vftable_3(int) override;
    virtual void IAPathBlock_vftable_4() override;
    ADDRESSVF(0x00624E20, IAPathBlockOffRoad, IAPathBlock_vftable_5);
    virtual void IAPathBlock_vftable_5() override;
};

ADDRESSVFTABLE(0x009C6760, cA_BigLake);
class __declspec(dllexport) cA_BigLake : public cA_CenteredSurface
{
public:
    ADDRESSVF(0x00659CF0, cA_BigLake, cA_BaseSurface_vftable_0);
    virtual void cA_BaseSurface_vftable_0() override;
    ADDRESSVF(0x00659C20, cA_BigLake, cA_BaseSurface_vftable_1);
    virtual void cA_BaseSurface_vftable_1() override;
    ADDRESSVF(0x0065A850, cA_BigLake, cA_BaseSurface_vftable_2);
    virtual void cA_BaseSurface_vftable_2() override;
    ADDRESSVF(0x0065A870, cA_BigLake, cA_BaseSurface_vftable_3);
    virtual void cA_BaseSurface_vftable_3() override;
    virtual void cA_BaseSurface_vftable_4(int, int) override;
};

ADDRESSVFTABLE(0x009AEAF4, ComMgr_Z);
class __declspec(dllexport) ComMgr_Z : public ComOwner_Z
{
public:
    ADDRESSVF(0x004D2690, ComMgr_Z, ComOwner_Z_vftable_0);
    virtual void ComOwner_Z_vftable_0() override;
    virtual char ComMgr_Z_vftable_6(int, int);
    virtual void ComMgr_Z_vftable_7(int);
    virtual void ComMgr_Z_vftable_8(int);
    virtual void ComMgr_Z_vftable_9() = 0;
    ADDRESSVF(0x007196F0, ComMgr_Z, ComMgr_Z_vftable_10);
    virtual void ComMgr_Z_vftable_10();
    ADDRESSVF(0x007197B0, ComMgr_Z, ComMgr_Z_vftable_11);
    virtual void ComMgr_Z_vftable_11();
    ADDRESSVF(0x00719760, ComMgr_Z, ComMgr_Z_vftable_12);
    virtual void ComMgr_Z_vftable_12();
    virtual int ComMgr_Z_vftable_13(int, int, int);
    ADDRESSVF(0x007198D0, ComMgr_Z, ComMgr_Z_vftable_14);
    virtual void ComMgr_Z_vftable_14();
    ADDRESSVF(0x007199A0, ComMgr_Z, ComMgr_Z_vftable_15);
    virtual void ComMgr_Z_vftable_15();
    virtual char ComMgr_Z_vftable_16(int, int);
    virtual char ComMgr_Z_vftable_17(int, int);
    virtual char ComMgr_Z_vftable_18(int, int);
    virtual char ComMgr_Z_vftable_19(int, int);
    virtual char ComMgr_Z_vftable_20(int, int);
    ADDRESSVF(0x007196B0, ComMgr_Z, ComMgr_Z_vftable_21);
    virtual void ComMgr_Z_vftable_21();
    ADDRESSVF(0x004D25D0, ComMgr_Z, ComMgr_Z_vftable_22);
    virtual void ComMgr_Z_vftable_22();
    ADDRESSVF(0x00719630, ComMgr_Z, ComMgr_Z_vftable_23);
    virtual void ComMgr_Z_vftable_23();
    ADDRESSVF(0x004D2600, ComMgr_Z, ComMgr_Z_vftable_24);
    virtual void ComMgr_Z_vftable_24();
    ADDRESSVF(0x004D2610, ComMgr_Z, ComMgr_Z_vftable_25);
    virtual void ComMgr_Z_vftable_25();
    virtual char ComMgr_Z_vftable_26(int, int);
    virtual char ComMgr_Z_vftable_27(int);
    ADDRESSVF(0x004D2640, ComMgr_Z, ComMgr_Z_vftable_28);
    virtual void ComMgr_Z_vftable_28();
    virtual char ComMgr_Z_vftable_29(int);
    ADDRESSVF(0x004D2660, ComMgr_Z, ComMgr_Z_vftable_30);
    virtual void ComMgr_Z_vftable_30();
    ADDRESSVF(0x004D2670, ComMgr_Z, ComMgr_Z_vftable_31);
    virtual void ComMgr_Z_vftable_31();
};

ADDRESSVFTABLE(0x009D4484, StockHubs);
class __declspec(dllexport) StockHubs : public StockData
{
public:
    ADDRESSVF(0x00814570, StockHubs, StockData_vftable_0);
    virtual void StockData_vftable_0() override;
    ADDRESSVF(0x00814580, StockHubs, StockData_vftable_1);
    virtual void StockData_vftable_1() override;
    ADDRESSVF(0x00814600, StockHubs, StockData_vftable_2);
    virtual void StockData_vftable_2() override;
    ADDRESSVF(0x008145A0, StockHubs, StockData_vftable_3);
    virtual void StockData_vftable_3() override;
};

ADDRESSVFTABLE(0x009A3224, CreaturesBoneManip);
class __declspec(dllexport) CreaturesBoneManip : public Manipulator_Z
{
public:
    ADDRESSSYMBOL(0x00430880, "?BaseObject_Z_vftable_0@CreaturesBoneManip@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x00430860, CreaturesBoneManip, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    virtual void Manipulator_Z_vftable_14() override;
    ADDRESSSYMBOL(0x004308E0, "?Manipulator_Z_vftable_17@CreaturesBoneManip@@UAEXH@Z");
    virtual void Manipulator_Z_vftable_17(int) override;
    char data[12];
};

ADDRESSVFTABLE(0x009C4ED4, IAOffroadFollower_G);
class __declspec(dllexport) IAOffroadFollower_G : public IAPathFollower_G
{
public:
    ADDRESSSYMBOL(0x00621DD0, "?IAPathFollower_G_vftable_0@IAOffroadFollower_G@@UAEXXZ");
    virtual void IAPathFollower_G_vftable_0() override;
    ADDRESSVF(0x00621E60, IAOffroadFollower_G, IAPathFollower_G_vftable_10);
    virtual void IAPathFollower_G_vftable_10() override;
};

ADDRESSVFTABLE(0x009CAD98, CompString_Z);
class __declspec(dllexport) CompString_Z : public CompField_Z
{
public:
    ADDRESSVF(0x006C2460, CompString_Z, CompField_Z_vftable_0);
    virtual void CompField_Z_vftable_0() override;
    ADDRESSVF(0x006C1C40, CompString_Z, CompField_Z_vftable_4);
    virtual void CompField_Z_vftable_4() override;
    ADDRESSVF(0x006C1D00, CompString_Z, CompField_Z_vftable_5);
    virtual void CompField_Z_vftable_5() override;
    ADDRESSVF(0x006C1CA0, CompString_Z, CompField_Z_vftable_6);
    virtual void CompField_Z_vftable_6() override;
};

ADDRESSVFTABLE(0x009D0F04, PlayParticles_Z);
class __declspec(dllexport) PlayParticles_Z : public Manipulator_Z
{
public:
    ADDRESSSYMBOL(0x0076FDB0, "?BaseObject_Z_vftable_0@PlayParticles_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x0076FD90, PlayParticles_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSVF(0x0076FE90, PlayParticles_Z, BaseObject_Z_vftable_13);
    virtual void BaseObject_Z_vftable_13() override;
    ADDRESSSYMBOL(0x0076FDF0, "?Manipulator_Z_vftable_14@PlayParticles_Z@@UAEXXZ");
    virtual void Manipulator_Z_vftable_14() override;
    ADDRESSVF(0x0076FE40, PlayParticles_Z, PlayParticles_Z_vftable_18);
    virtual void PlayParticles_Z_vftable_18();
    ADDRESSVF(0x007174B0, PlayParticles_Z, PlayParticles_Z_vftable_19);
    virtual void PlayParticles_Z_vftable_19();
    ADDRESSVF(0x0076FD30, PlayParticles_Z, PlayParticles_Z_vftable_20);
    virtual void PlayParticles_Z_vftable_20();
    ADDRESSVF(0x0076FD40, PlayParticles_Z, PlayParticles_Z_vftable_21);
    virtual void PlayParticles_Z_vftable_21();
    virtual void PlayParticles_Z_vftable_22(int, int);
    ADDRESSVF(0x007174D0, PlayParticles_Z, PlayParticles_Z_vftable_23);
    virtual void PlayParticles_Z_vftable_23();
    ADDRESSVF(0x0076FE50, PlayParticles_Z, PlayParticles_Z_vftable_24);
    virtual void PlayParticles_Z_vftable_24();
};

ADDRESSVFTABLE(0x009C6B54, ManipulatorDraw_Z);
class __declspec(dllexport) ManipulatorDraw_Z : public Manipulator_Z
{
public:
    ADDRESSSYMBOL(0x00665DC0, "?BaseObject_Z_vftable_0@ManipulatorDraw_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x00665DA0, ManipulatorDraw_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    virtual void Manipulator_Z_vftable_17(int) override;
    ADDRESSVF(0x00665DF0, ManipulatorDraw_Z, ManipulatorDraw_Z_vftable_18);
    virtual void ManipulatorDraw_Z_vftable_18();
    virtual void ManipulatorDraw_Z_vftable_19(int);
};

ADDRESSVFTABLE(0x009C5014, IAPathBlockRoad);
class __declspec(dllexport) IAPathBlockRoad : public IAPathBlock
{
public:
    ADDRESSVF(0x006246D0, IAPathBlockRoad, IAPathBlock_vftable_0);
    virtual void IAPathBlock_vftable_0() override;
    ADDRESSSYMBOL(0x00624740, "?IAPathBlock_vftable_2@IAPathBlockRoad@@UAEXXZ");
    virtual void IAPathBlock_vftable_2() override;
    ADDRESSSYMBOL(0x00624760, "?IAPathBlock_vftable_3@IAPathBlockRoad@@UAEDH@Z");
    virtual char IAPathBlock_vftable_3(int) override;
    ADDRESSVF(0x00624870, IAPathBlockRoad, IAPathBlock_vftable_4);
    virtual void IAPathBlock_vftable_4() override;
    ADDRESSVF(0x00624A20, IAPathBlockRoad, IAPathBlock_vftable_5);
    virtual void IAPathBlock_vftable_5() override;
    ADDRESSVF(0x00624BE0, IAPathBlockRoad, IAPathBlock_vftable_6);
    virtual void IAPathBlock_vftable_6() override;
};

ADDRESSVFTABLE(0x009C4258, SpecialEffectsSandTank_G);
class __declspec(dllexport) SpecialEffectsSandTank_G : public SpecialEffectsTank_G
{
public:
    ADDRESSVF(0x005EC100, SpecialEffectsSandTank_G, SpecialEffectsTank_G_vftable_1);
    virtual void SpecialEffectsTank_G_vftable_1() override;
    ADDRESSVF(0x005EC1A0, SpecialEffectsSandTank_G, SpecialEffectsTank_G_vftable_3);
    virtual void SpecialEffectsTank_G_vftable_3() override;
    virtual void SpecialEffectsTank_G_vftable_4() override;
    ADDRESSVF(0x005ECB20, SpecialEffectsSandTank_G, SpecialEffectsTank_G_vftable_5);
    virtual void SpecialEffectsTank_G_vftable_5() override;
    virtual int SpecialEffectsTank_G_vftable_6() override;
    ADDRESSSYMBOL(0x005EC730, "?SpecialEffectsTank_G_vftable_7@SpecialEffectsSandTank_G@@UAEXH@Z");
    virtual void SpecialEffectsTank_G_vftable_7(int) override;
    ADDRESSVF(0x005EB7B0, SpecialEffectsSandTank_G, SpecialEffectsTank_G_vftable_8);
    virtual void SpecialEffectsTank_G_vftable_8() override;
    ADDRESSSYMBOL(0x005EC540, "?SpecialEffectsTank_G_vftable_10@SpecialEffectsSandTank_G@@UAEXH@Z");
    virtual void SpecialEffectsTank_G_vftable_10(int) override;
};

ADDRESSVFTABLE(0x009ADDFC, IT_BreakMove);
class __declspec(dllexport) IT_BreakMove : public Manipulator_Z
{
public:
    ADDRESSSYMBOL(0x0050C260, "?BaseObject_Z_vftable_0@IT_BreakMove@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x004D4A20, IT_BreakMove, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    virtual void Manipulator_Z_vftable_14() override;
    ADDRESSSYMBOL(0x0050C2C0, "?Manipulator_Z_vftable_17@IT_BreakMove@@UAEXH@Z");
    virtual void Manipulator_Z_vftable_17(int) override;
    char data[16];
};

ADDRESSVFTABLE(0x009D3978, StockRoadPoint);
class __declspec(dllexport) StockRoadPoint : public StockData
{
public:
    ADDRESSVF(0x007CDAA0, StockRoadPoint, StockData_vftable_0);
    virtual void StockData_vftable_0() override;
    ADDRESSVF(0x007CDAB0, StockRoadPoint, StockData_vftable_1);
    virtual void StockData_vftable_1() override;
    ADDRESSVF(0x007CDB30, StockRoadPoint, StockData_vftable_2);
    virtual void StockData_vftable_2() override;
    ADDRESSVF(0x007CDAC0, StockRoadPoint, StockData_vftable_3);
    virtual void StockData_vftable_3() override;
};

ADDRESSVFTABLE(0x009A545C, MeterHUD);
class __declspec(dllexport) MeterHUD : public ViewportHUD
{
public:
    ADDRESSSYMBOL(0x004B06C0, "?ViewportHUD_vftable_0@MeterHUD@@UAEXH@Z");
    virtual void ViewportHUD_vftable_0(int) override;
    virtual void ViewportHUD_vftable_1() override;
    ADDRESSSYMBOL(0x004B08E0, "?ViewportHUD_vftable_2@MeterHUD@@UAEXH@Z");
    virtual void ViewportHUD_vftable_2(int) override;
    ADDRESSVF(0x004B0730, MeterHUD, ViewportHUD_vftable_3);
    virtual void ViewportHUD_vftable_3() override;
    ADDRESSSYMBOL(0x004B0940, "?ViewportHUD_vftable_5@MeterHUD@@UAEXH@Z");
    virtual void ViewportHUD_vftable_5(int) override;
    virtual void ViewportHUD_vftable_7() override;
};

#include "InGameMenuHUD.h"

ADDRESSVFTABLE(0x009C40A4, SpecialEffectsWindTank_G);
class __declspec(dllexport) SpecialEffectsWindTank_G : public SpecialEffectsTank_G
{
public:
    ADDRESSVF(0x005E45B0, SpecialEffectsWindTank_G, SpecialEffectsTank_G_vftable_1);
    virtual void SpecialEffectsTank_G_vftable_1() override;
    ADDRESSVF(0x005E4620, SpecialEffectsWindTank_G, SpecialEffectsTank_G_vftable_3);
    virtual void SpecialEffectsTank_G_vftable_3() override;
    virtual void SpecialEffectsTank_G_vftable_4() override;
    ADDRESSVF(0x005E47E0, SpecialEffectsWindTank_G, SpecialEffectsTank_G_vftable_5);
    virtual void SpecialEffectsTank_G_vftable_5() override;
    ADDRESSSYMBOL(0x005E4550, "?SpecialEffectsTank_G_vftable_6@SpecialEffectsWindTank_G@@UAEHXZ");
    virtual int SpecialEffectsTank_G_vftable_6() override;
    ADDRESSSYMBOL(0x005E4A30, "?SpecialEffectsTank_G_vftable_7@SpecialEffectsWindTank_G@@UAEXH@Z");
    virtual void SpecialEffectsTank_G_vftable_7(int) override;
    ADDRESSSYMBOL(0x005E4650, "?SpecialEffectsTank_G_vftable_10@SpecialEffectsWindTank_G@@UAEXH@Z");
    virtual void SpecialEffectsTank_G_vftable_10(int) override;
};

ADDRESSVFTABLE(0x009C39FC, SpecialEffectsFlameEmitter_G);
class __declspec(dllexport) SpecialEffectsFlameEmitter_G : public SpecialEffectsEmitter_G_class_SpecialEffectsQuad_G_
{
public:
    ADDRESSVF(0x005CE470, SpecialEffectsFlameEmitter_G, SpecialEffectsBaseEmitter_G_vftable_0);
    virtual void SpecialEffectsBaseEmitter_G_vftable_0() override;
    ADDRESSVF(0x005CE430, SpecialEffectsFlameEmitter_G, SpecialEffectsBaseEmitter_G_vftable_4);
    virtual void SpecialEffectsBaseEmitter_G_vftable_4() override;
    ADDRESSVF(0x005EDB20, SpecialEffectsFlameEmitter_G, SpecialEffectsBaseEmitter_G_vftable_6);
    virtual void SpecialEffectsBaseEmitter_G_vftable_6() override;
};

ADDRESSVFTABLE(0x009CABE8, CompValFloat100k_24_Z);
class __declspec(dllexport) CompValFloat100k_24_Z : public CompVal_Z
{
public:
    ADDRESSVF(0x006C26E0, CompValFloat100k_24_Z, CompVal_Z_vftable_0);
    virtual void CompVal_Z_vftable_0() override;
    virtual int CompVal_Z_vftable_1() override;
    virtual int CompVal_Z_vftable_2() override;
    ADDRESSVF(0x006C0F70, CompValFloat100k_24_Z, CompVal_Z_vftable_3);
    virtual void CompVal_Z_vftable_3() override;
    ADDRESSVF(0x006C1000, CompValFloat100k_24_Z, CompVal_Z_vftable_4);
    virtual void CompVal_Z_vftable_4() override;
};

ADDRESSVFTABLE(0x009C30E0, GameStateClient_G);
class __declspec(dllexport) GameStateClient_G : public GameState_G
{
public:
    ADDRESSVF(0x005B5300, GameStateClient_G, ComObj_Z_vftable_0);
    virtual void ComObj_Z_vftable_0() override;
    virtual void ComObj_Z_vftable_4(int) override;
};

ADDRESSVFTABLE(0x009A1F0C, CS_Class_ATTACKCHARGEIMPACT);
class __declspec(dllexport) CS_Class_ATTACKCHARGEIMPACT : public CreaturesState_G
{
public:
    ADDRESSVF(0x004264A0, CS_Class_ATTACKCHARGEIMPACT, StateTemplate_G_vftable_0);
    virtual void StateTemplate_G_vftable_0() override;
    ADDRESSSYMBOL(0x00427060, "?StateTemplate_G_vftable_1@CS_Class_ATTACKCHARGEIMPACT@@UAEXH@Z");
    virtual void StateTemplate_G_vftable_1(int) override;
    ADDRESSSYMBOL(0x004270D0, "?StateTemplate_G_vftable_3@CS_Class_ATTACKCHARGEIMPACT@@UAEDH@Z");
    virtual char StateTemplate_G_vftable_3(int) override;
};

ADDRESSVFTABLE(0x009A1EAC, CS_Class_ATTACKCHARGE);
class __declspec(dllexport) CS_Class_ATTACKCHARGE : public CreaturesState_G
{
public:
    ADDRESSVF(0x00426420, CS_Class_ATTACKCHARGE, StateTemplate_G_vftable_0);
    virtual void StateTemplate_G_vftable_0() override;
    ADDRESSSYMBOL(0x00426D00, "?StateTemplate_G_vftable_1@CS_Class_ATTACKCHARGE@@UAEXH@Z");
    virtual void StateTemplate_G_vftable_1(int) override;
    ADDRESSSYMBOL(0x00427000, "?StateTemplate_G_vftable_2@CS_Class_ATTACKCHARGE@@UAEXH@Z");
    virtual void StateTemplate_G_vftable_2(int) override;
    ADDRESSSYMBOL(0x00426DB0, "?StateTemplate_G_vftable_3@CS_Class_ATTACKCHARGE@@UAEDH@Z");
    virtual char StateTemplate_G_vftable_3(int) override;
};

ADDRESSVFTABLE(0x009C46CC, SpecialEffectsCloudTank_G);
class __declspec(dllexport) SpecialEffectsCloudTank_G : public SpecialEffectsTank_G
{
public:
    ADDRESSVF(0x005FDB00, SpecialEffectsCloudTank_G, SpecialEffectsTank_G_vftable_1);
    virtual void SpecialEffectsTank_G_vftable_1() override;
    ADDRESSVF(0x005FDB80, SpecialEffectsCloudTank_G, SpecialEffectsTank_G_vftable_3);
    virtual void SpecialEffectsTank_G_vftable_3() override;
    ADDRESSSYMBOL(0x005FDD10, "?SpecialEffectsTank_G_vftable_4@SpecialEffectsCloudTank_G@@UAEXXZ");
    virtual void SpecialEffectsTank_G_vftable_4() override;
    ADDRESSVF(0x005FE040, SpecialEffectsCloudTank_G, SpecialEffectsTank_G_vftable_5);
    virtual void SpecialEffectsTank_G_vftable_5() override;
    virtual int SpecialEffectsTank_G_vftable_6() override;
    ADDRESSSYMBOL(0x005FE580, "?SpecialEffectsTank_G_vftable_7@SpecialEffectsCloudTank_G@@UAEXH@Z");
    virtual void SpecialEffectsTank_G_vftable_7(int) override;
    ADDRESSVF(0x005FD890, SpecialEffectsCloudTank_G, SpecialEffectsTank_G_vftable_9);
    virtual void SpecialEffectsTank_G_vftable_9() override;
    ADDRESSSYMBOL(0x005FE370, "?SpecialEffectsTank_G_vftable_10@SpecialEffectsCloudTank_G@@UAEXH@Z");
    virtual void SpecialEffectsTank_G_vftable_10(int) override;
};

ADDRESSVFTABLE(0x009ADDBC, DialogGroup_G);
class __declspec(dllexport) DialogGroup_G : public BaseObject_Z
{
public:
    ADDRESSVF(0x004D4F20, DialogGroup_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    char data[40];
};

ADDRESSVFTABLE(0x009C68F4, ResourceObject_Z);
class __declspec(dllexport) ResourceObject_Z : public BaseObject_Z
{
public:
    ADDRESSVF(0x006606F0, ResourceObject_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    virtual void BaseObject_Z_vftable_3(int) override;
    virtual void BaseObject_Z_vftable_4() override;
    ADDRESSVF(0x0065CAF0, ResourceObject_Z, BaseObject_Z_vftable_7);
    virtual void BaseObject_Z_vftable_7() override;
    virtual void BaseObject_Z_vftable_8() override;
    virtual void BaseObject_Z_vftable_9() override;
    ADDRESSVF(0x007AB1D0, ResourceObject_Z, BaseObject_Z_vftable_13);
    virtual void BaseObject_Z_vftable_13() override;
    virtual void ResourceObject_Z_vftable_14(int);
    virtual void ResourceObject_Z_vftable_15(int);
};

ADDRESSVFTABLE(0x009C5BDC, cA_DecorPreLoadTree);
class __declspec(dllexport) cA_DecorPreLoadTree : public cA_DecorPreLoadedMesh
{
public:
    ADDRESSVF(0x00641970, cA_DecorPreLoadTree, cA_DecorPreLoadedMesh_vftable_0);
    virtual void cA_DecorPreLoadedMesh_vftable_0() override;
    ADDRESSSYMBOL(0x0063E9B0, "?cA_DecorPreLoadedMesh_vftable_1@cA_DecorPreLoadTree@@UAEXH@Z");
    virtual void cA_DecorPreLoadedMesh_vftable_1(int) override;
};

ADDRESSVFTABLE(0x009C9584, SubWorld_Z);
class __declspec(dllexport) SubWorld_Z : public ResourceObject_Z
{
public:
    ADDRESSVF(0x0068CA00, SubWorld_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
};

ADDRESSVFTABLE(0x009AD8A4, ComObject_Z);
class __declspec(dllexport) ComObject_Z : public NetObject_Z
{
public:
    ADDRESSVF(0x004D2770, ComObject_Z, NetObject_Z_vftable_0);
    virtual void NetObject_Z_vftable_0() override;
    virtual void ComObject_Z_vftable_3(int) = 0;
    virtual void ComObject_Z_vftable_4() = 0;
    virtual void *ComObject_Z_vftable_5();
    virtual void ComObject_Z_vftable_6() = 0;
    virtual void ComObject_Z_vftable_7() = 0;
    virtual void ComObject_Z_vftable_8() = 0;
    virtual void ComObject_Z_vftable_9() = 0;
    virtual int ComObject_Z_vftable_10();
    ADDRESSVF(0x004D2740, ComObject_Z, ComObject_Z_vftable_11);
    virtual void ComObject_Z_vftable_11();
    virtual int ComObject_Z_vftable_12();
    ADDRESSVF(0x004D2760, ComObject_Z, ComObject_Z_vftable_13);
    virtual void ComObject_Z_vftable_13();
    virtual void ComObject_Z_vftable_14() = 0;
    virtual void ComObject_Z_vftable_15() = 0;
    virtual void ComObject_Z_vftable_16() = 0;
};

ADDRESSVFTABLE(0x009D64A0, FogConstant_Z);
class __declspec(dllexport) FogConstant_Z : public ObjConstant_Z
{
public:
    ADDRESSVF(0x0082D0F0, FogConstant_Z, ObjConstant_Z_vftable_0);
    virtual void ObjConstant_Z_vftable_0() override;
};

ADDRESSVFTABLE(0x009CBEB4, SuperSpray_Z);
class __declspec(dllexport) SuperSpray_Z : public PlayParticles_Z
{
public:
    ADDRESSVF(0x00717720, SuperSpray_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x007178D0, "?Manipulator_Z_vftable_14@SuperSpray_Z@@UAEXXZ");
    virtual void Manipulator_Z_vftable_14() override;
    ADDRESSSYMBOL(0x00717BE0, "?Manipulator_Z_vftable_17@SuperSpray_Z@@UAEXH@Z");
    virtual void Manipulator_Z_vftable_17(int) override;
    ADDRESSVF(0x007179B0, SuperSpray_Z, PlayParticles_Z_vftable_18);
    virtual void PlayParticles_Z_vftable_18() override;
    ADDRESSVF(0x007177B0, SuperSpray_Z, PlayParticles_Z_vftable_19);
    virtual void PlayParticles_Z_vftable_19() override;
    ADDRESSVF(0x00717B60, SuperSpray_Z, PlayParticles_Z_vftable_20);
    virtual void PlayParticles_Z_vftable_20() override;
    ADDRESSVF(0x00717B80, SuperSpray_Z, PlayParticles_Z_vftable_21);
    virtual void PlayParticles_Z_vftable_21() override;
    ADDRESSSYMBOL(0x00717BA0, "?PlayParticles_Z_vftable_22@SuperSpray_Z@@UAEXHH@Z");
    virtual void PlayParticles_Z_vftable_22(int, int) override;
    ADDRESSVF(0x00717980, SuperSpray_Z, PlayParticles_Z_vftable_23);
    virtual void PlayParticles_Z_vftable_23() override;
    ADDRESSVF(0x00717A50, SuperSpray_Z, PlayParticles_Z_vftable_24);
    virtual void PlayParticles_Z_vftable_24() override;
    char data[52];
};

ADDRESSVFTABLE(0x009D6488, FlareConstant_Z);
class __declspec(dllexport) FlareConstant_Z : public ObjConstant_Z
{
public:
    ADDRESSVF(0x0082C3B0, FlareConstant_Z, ObjConstant_Z_vftable_0);
    virtual void ObjConstant_Z_vftable_0() override;
};

ADDRESSVFTABLE(0x009C8A88, Game_Z);
class __declspec(dllexport) Game_Z : public BaseObject_Z
{
public:
    ADDRESSSYMBOL(0x0067BF90, "?BaseObject_Z_vftable_0@Game_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x006864D0, Game_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSVF(0x0067C1D0, Game_Z, BaseObject_Z_vftable_13);
    virtual void BaseObject_Z_vftable_13() override;
    char data[388];
};

ADDRESSVFTABLE(0x009BC178, CharsData_G);
class __declspec(dllexport) CharsData_G : public BaseObject_Z
{
public:
    ADDRESSVF(0x00565790, CharsData_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSVF(0x005657D0, CharsData_G, BaseObject_Z_vftable_13);
    virtual void BaseObject_Z_vftable_13() override;
    char data[12];
};

ADDRESSVFTABLE(0x009CADF8, CompVec3100k_72_Z);
class __declspec(dllexport) CompVec3100k_72_Z : public CompField_Z
{
public:
    ADDRESSVF(0x006C24E0, CompVec3100k_72_Z, CompField_Z_vftable_0);
    virtual void CompField_Z_vftable_0() override;
    virtual int CompField_Z_vftable_1() override;
    virtual int CompField_Z_vftable_2() override;
    virtual int CompField_Z_vftable_3() override;
    ADDRESSVF(0x006C1F20, CompVec3100k_72_Z, CompField_Z_vftable_4);
    virtual void CompField_Z_vftable_4() override;
    ADDRESSVF(0x006C1F50, CompVec3100k_72_Z, CompField_Z_vftable_5);
    virtual void CompField_Z_vftable_5() override;
};

ADDRESSVFTABLE(0x009AD8EC, CameraUser_Z);
class __declspec(dllexport) CameraUser_Z : public Manipulator_Z
{
public:
    ADDRESSSYMBOL(0x00715D20, "?BaseObject_Z_vftable_0@CameraUser_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x004D38C0, CameraUser_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    virtual void Manipulator_Z_vftable_17(int) override;
    virtual void CameraUser_Z_vftable_18(int);
    char data[140];
};

ADDRESSVFTABLE(0x009D4D44, WinXRamManager_Z);
class __declspec(dllexport) WinXRamManager_Z : public XRamManager_Z
{
public:
    ADDRESSVF(0x0081DD30, WinXRamManager_Z, XRamManager_Z_vftable_0);
    virtual void XRamManager_Z_vftable_0() override;
    virtual char XRamManager_Z_vftable_1() override;
    ADDRESSSYMBOL(0x0081BA60, "?XRamManager_Z_vftable_2@WinXRamManager_Z@@UAEXXZ");
    virtual void XRamManager_Z_vftable_2() override;
    ADDRESSSYMBOL(0x00835800, "?XRamManager_Z_vftable_3@WinXRamManager_Z@@UAEXH@Z");
    virtual void XRamManager_Z_vftable_3(int) override;
    virtual void XRamManager_Z_vftable_5() override;
    ADDRESSSYMBOL(0x0081BAA0, "?XRamManager_Z_vftable_6@WinXRamManager_Z@@UAEHXZ");
    virtual int XRamManager_Z_vftable_6() override;
    ADDRESSVF(0x0081BAB0, WinXRamManager_Z, XRamManager_Z_vftable_7);
    virtual void XRamManager_Z_vftable_7() override;
    ADDRESSSYMBOL(0x0081BB00, "?XRamManager_Z_vftable_8@WinXRamManager_Z@@UAEHH@Z");
    virtual int XRamManager_Z_vftable_8(int) override;
    ADDRESSSYMBOL(0x0081BAD0, "?XRamManager_Z_vftable_9@WinXRamManager_Z@@UAEHH@Z");
    virtual int XRamManager_Z_vftable_9(int) override;
    ADDRESSSYMBOL(0x0081BB30, "?XRamManager_Z_vftable_10@WinXRamManager_Z@@UAEXH@Z");
    virtual void XRamManager_Z_vftable_10(int) override;
    ADDRESSSYMBOL(0x0081BB40, "?XRamManager_Z_vftable_11@WinXRamManager_Z@@UAEXHH@Z");
    virtual void XRamManager_Z_vftable_11(int, int) override;
    ADDRESSSYMBOL(0x008358D0, "?XRamManager_Z_vftable_12@WinXRamManager_Z@@UAEHHH@Z");
    virtual int XRamManager_Z_vftable_12(int, int) override;
    ADDRESSSYMBOL(0x00835940, "?XRamManager_Z_vftable_14@WinXRamManager_Z@@UAEXHHHH@Z");
    virtual void XRamManager_Z_vftable_14(int, int, int, int) override;
    ADDRESSSYMBOL(0x00835960, "?XRamManager_Z_vftable_15@WinXRamManager_Z@@UAEXHHHH@Z");
    virtual void XRamManager_Z_vftable_15(int, int, int, int) override;
};

ADDRESSVFTABLE(0x009AC574, InGame3DPerso);
class __declspec(dllexport) InGame3DPerso : public InGame3DBase
{
public:
    ADDRESSVF(0x004D0A00, InGame3DPerso, InGame3DBase_vftable_0);
    virtual void InGame3DBase_vftable_0() override;
    ADDRESSSYMBOL(0x004D04D0, "?InGame3DBase_vftable_1@InGame3DPerso@@UAEXH@Z");
    virtual void InGame3DBase_vftable_1(int) override;
};

ADDRESSVFTABLE(0x009C8EEC, PhysicWorld_Z);
class __declspec(dllexport) PhysicWorld_Z : public ObjectGame_Z
{
public:
    ADDRESSVF(0x00687360, PhysicWorld_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x00682770, "?Manipulator_Z_vftable_14@PhysicWorld_Z@@UAEXXZ");
    virtual void Manipulator_Z_vftable_14() override;
    ADDRESSSYMBOL(0x00680F90, "?Manipulator_Z_vftable_17@PhysicWorld_Z@@UAEXH@Z");
    virtual void Manipulator_Z_vftable_17(int) override;
    virtual void PhysicWorld_Z_vftable_23();
    virtual char PhysicWorld_Z_vftable_24();
    char data[352];
};

ADDRESSVFTABLE(0x009CB6C4, DataLake);
class __declspec(dllexport) DataLake : public cA_ValidityMap
{
public:
    ADDRESSVF(0x007005C0, DataLake, cA_ValidityMap_vftable_0);
    virtual void cA_ValidityMap_vftable_0() override;
    ADDRESSSYMBOL(0x006FFBC0, "?cA_ValidityMap_vftable_1@DataLake@@UAEDH@Z");
    virtual char cA_ValidityMap_vftable_1(int) override;
};

ADDRESSVFTABLE(0x009C4B50, MenuItemFillRect_G);
class __declspec(dllexport) MenuItemFillRect_G : public MenuItem_G
{
public:
    ADDRESSVF(0x006118A0, MenuItemFillRect_G, MenuItem_G_vftable_0);
    virtual void MenuItem_G_vftable_0() override;
    ADDRESSSYMBOL(0x00611A10, "?MenuItem_G_vftable_2@MenuItemFillRect_G@@UAEXH@Z");
    virtual void MenuItem_G_vftable_2(int) override;
    ADDRESSSYMBOL(0x00611AB0, "?MenuItem_G_vftable_3@MenuItemFillRect_G@@UAEXH@Z");
    virtual void MenuItem_G_vftable_3(int) override;
    virtual int MenuItem_G_vftable_6() override;
    ADDRESSVF(0x00611800, MenuItemFillRect_G, MenuItem_G_vftable_7);
    virtual void MenuItem_G_vftable_7() override;
    ADDRESSVF(0x00611820, MenuItemFillRect_G, MenuItem_G_vftable_8);
    virtual void MenuItem_G_vftable_8() override;
    ADDRESSVF(0x006117C0, MenuItemFillRect_G, MenuItem_G_vftable_9);
    virtual void MenuItem_G_vftable_9() override;
};

ADDRESSVFTABLE(0x009D63F8, DeferredOmniConstant_Z);
class __declspec(dllexport) DeferredOmniConstant_Z : public ObjConstant_Z
{
public:
    ADDRESSVF(0x0082C780, DeferredOmniConstant_Z, ObjConstant_Z_vftable_0);
    virtual void ObjConstant_Z_vftable_0() override;
    virtual void ObjConstant_Z_vftable_1(int, int) override;
};

ADDRESSVFTABLE(0x009C4104, SpecialEffectsCloudTop_G);
class __declspec(dllexport) SpecialEffectsCloudTop_G : public SpecialEffectsMesh_G
{
public:
    ADDRESSVF(0x005E5640, SpecialEffectsCloudTop_G, SpecialEffectsMesh_G_vftable_0);
    virtual void SpecialEffectsMesh_G_vftable_0() override;
    ADDRESSSYMBOL(0x005E5DC0, "?SpecialEffectsMesh_G_vftable_1@SpecialEffectsCloudTop_G@@UAEXXZ");
    virtual void SpecialEffectsMesh_G_vftable_1() override;
    ADDRESSSYMBOL(0x005E5DA0, "?SpecialEffectsMesh_G_vftable_3@SpecialEffectsCloudTop_G@@UAEXH@Z");
    virtual void SpecialEffectsMesh_G_vftable_3(int) override;
    ADDRESSSYMBOL(0x005E5E40, "?SpecialEffectsMesh_G_vftable_4@SpecialEffectsCloudTop_G@@UAEXHH@Z");
    virtual void SpecialEffectsMesh_G_vftable_4(int, int) override;
    ADDRESSSYMBOL(0x005E61D0, "?SpecialEffectsMesh_G_vftable_6@SpecialEffectsCloudTop_G@@UAEXXZ");
    virtual void SpecialEffectsMesh_G_vftable_6() override;
};

ADDRESSVFTABLE(0x009AE994, PermanentDraw);
class __declspec(dllexport) PermanentDraw : public ManipulatorDraw_Z
{
public:
    ADDRESSSYMBOL(0x005080F0, "?BaseObject_Z_vftable_0@PermanentDraw@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x004D4870, PermanentDraw, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    virtual void Manipulator_Z_vftable_17(int) override;
    ADDRESSVF(0x00508190, PermanentDraw, ManipulatorDraw_Z_vftable_18);
    virtual void ManipulatorDraw_Z_vftable_18() override;
    char data[48];
};

ADDRESSVFTABLE(0x009D64AC, VizQueryConstant_Z);
class __declspec(dllexport) VizQueryConstant_Z : public ObjConstant_Z
{
public:
    ADDRESSVF(0x0082B810, VizQueryConstant_Z, ObjConstant_Z_vftable_0);
    virtual void ObjConstant_Z_vftable_0() override;
};

ADDRESSVFTABLE(0x009C37BC, TrafficManipulator_G);
class __declspec(dllexport) TrafficManipulator_G : public ObjectGame_Z
{
public:
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x005C2F20, TrafficManipulator_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    virtual void Manipulator_Z_vftable_14() override;
    ADDRESSSYMBOL(0x005C3010, "?Manipulator_Z_vftable_17@TrafficManipulator_G@@UAEXH@Z");
    virtual void Manipulator_Z_vftable_17(int) override;
    char data[34364];
};

ADDRESSVFTABLE(0x009C9534, Fonts_Z);
class __declspec(dllexport) Fonts_Z : public ResourceObject_Z
{
public:
    ADDRESSVF(0x0068C730, Fonts_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x006979F0, "?BaseObject_Z_vftable_3@Fonts_Z@@UAEXH@Z");
    virtual void BaseObject_Z_vftable_3(int) override;
    ADDRESSSYMBOL(0x00697AD0, "?BaseObject_Z_vftable_4@Fonts_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_4() override;
    virtual void BaseObject_Z_vftable_5() override;
    ADDRESSVF(0x00697380, Fonts_Z, BaseObject_Z_vftable_13);
    virtual void BaseObject_Z_vftable_13() override;
    char data[28];
};

#include "LiveNetPlayManager_Z.h"

ADDRESSVFTABLE(0x009B3240, OnlineVisibleObject);
class __declspec(dllexport) OnlineVisibleObject : public VisibleObjectContainer
{
public:
    ADDRESSVF(0x004FC900, OnlineVisibleObject, VisibleObjectContainer_vftable_0);
    virtual void VisibleObjectContainer_vftable_0() override;
    ADDRESSSYMBOL(0x004F9B00, "?VisibleObjectContainer_vftable_4@OnlineVisibleObject@@UAEXHH@Z");
    virtual void VisibleObjectContainer_vftable_4(int, int) override;
};

ADDRESSVFTABLE(0x009D73A8, HFieldConstant_Z);
class __declspec(dllexport) HFieldConstant_Z : public ObjConstant_Z
{
public:
    ADDRESSVF(0x0083A820, HFieldConstant_Z, ObjConstant_Z_vftable_0);
    virtual void ObjConstant_Z_vftable_0() override;
};

ADDRESSVFTABLE(0x009CB06C, StockRoads);
class __declspec(dllexport) StockRoads : public StockData
{
public:
    ADDRESSVF(0x006CFE80, StockRoads, StockData_vftable_0);
    virtual void StockData_vftable_0() override;
    ADDRESSVF(0x006CFE90, StockRoads, StockData_vftable_1);
    virtual void StockData_vftable_1() override;
    ADDRESSVF(0x006D0080, StockRoads, StockData_vftable_2);
    virtual void StockData_vftable_2() override;
    ADDRESSVF(0x006CFEA0, StockRoads, StockData_vftable_3);
    virtual void StockData_vftable_3() override;
};

ADDRESSVFTABLE(0x009AE8EC, ActionHelper_G);
class __declspec(dllexport) ActionHelper_G : public ManipulatorSceneDraw_Z
{
public:
    ADDRESSSYMBOL(0x005058B0, "?BaseObject_Z_vftable_0@ActionHelper_G@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x004D45D0, ActionHelper_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x00505910, "?Manipulator_Z_vftable_14@ActionHelper_G@@UAEXXZ");
    virtual void Manipulator_Z_vftable_14() override;
    ADDRESSSYMBOL(0x005059B0, "?Manipulator_Z_vftable_17@ActionHelper_G@@UAEXH@Z");
    virtual void Manipulator_Z_vftable_17(int) override;
    ADDRESSSYMBOL(0x005059F0, "?ManipulatorSceneDraw_Z_vftable_19@ActionHelper_G@@UAEXH@Z");
    virtual void ManipulatorSceneDraw_Z_vftable_19(int) override;
    ADDRESSVF(0x005058E0, ActionHelper_G, ActionHelper_G_vftable_20);
    virtual void ActionHelper_G_vftable_20();
    char data[40];
};

ADDRESSVFTABLE(0x009C42EC, SpecialEffectsEmitter_G_class_SpecialEffectsRibbonTrail_G_);
class __declspec(dllexport) SpecialEffectsEmitter_G_class_SpecialEffectsRibbonTrail_G_ : public SpecialEffectsBaseEmitter_G
{
public:
    ADDRESSVF(0x005F36D0, SpecialEffectsEmitter_G_class_SpecialEffectsRibbonTrail_G_, SpecialEffectsBaseEmitter_G_vftable_0);
    virtual void SpecialEffectsBaseEmitter_G_vftable_0() override;
    virtual char SpecialEffectsBaseEmitter_G_vftable_1(int) override;
    ADDRESSVF(0x005EEB20, SpecialEffectsEmitter_G_class_SpecialEffectsRibbonTrail_G_, SpecialEffectsBaseEmitter_G_vftable_2);
    virtual void SpecialEffectsBaseEmitter_G_vftable_2() override;
    ADDRESSVF(0x005F3330, SpecialEffectsEmitter_G_class_SpecialEffectsRibbonTrail_G_, SpecialEffectsBaseEmitter_G_vftable_3);
    virtual void SpecialEffectsBaseEmitter_G_vftable_3() override;
    ADDRESSVF(0x005F41C0, SpecialEffectsEmitter_G_class_SpecialEffectsRibbonTrail_G_, SpecialEffectsBaseEmitter_G_vftable_4);
    virtual void SpecialEffectsBaseEmitter_G_vftable_4() override;
    ADDRESSVF(0x005F3300, SpecialEffectsEmitter_G_class_SpecialEffectsRibbonTrail_G_, SpecialEffectsBaseEmitter_G_vftable_5);
    virtual void SpecialEffectsBaseEmitter_G_vftable_5() override;
    ADDRESSVF(0x005F3EF0, SpecialEffectsEmitter_G_class_SpecialEffectsRibbonTrail_G_, SpecialEffectsBaseEmitter_G_vftable_6);
    virtual void SpecialEffectsBaseEmitter_G_vftable_6() override;
    ADDRESSSYMBOL(0x005F3260, "?SpecialEffectsBaseEmitter_G_vftable_7@SpecialEffectsEmitter_G_class_SpecialEffectsRibbonTrail_G_@@UAEXH@Z");
    virtual void SpecialEffectsBaseEmitter_G_vftable_7(int) override;
    ADDRESSVF(0x005F41F0, SpecialEffectsEmitter_G_class_SpecialEffectsRibbonTrail_G_, SpecialEffectsEmitter_G_class_SpecialEffectsRibbonTrail_G__vftable_8);
    virtual void SpecialEffectsEmitter_G_class_SpecialEffectsRibbonTrail_G__vftable_8();
    ADDRESSVF(0x005F4480, SpecialEffectsEmitter_G_class_SpecialEffectsRibbonTrail_G_, SpecialEffectsEmitter_G_class_SpecialEffectsRibbonTrail_G__vftable_9);
    virtual void SpecialEffectsEmitter_G_class_SpecialEffectsRibbonTrail_G__vftable_9();
    ADDRESSVF(0x005EEBA0, SpecialEffectsEmitter_G_class_SpecialEffectsRibbonTrail_G_, SpecialEffectsEmitter_G_class_SpecialEffectsRibbonTrail_G__vftable_10);
    virtual void SpecialEffectsEmitter_G_class_SpecialEffectsRibbonTrail_G__vftable_10();
    ADDRESSVF(0x005F4570, SpecialEffectsEmitter_G_class_SpecialEffectsRibbonTrail_G_, SpecialEffectsEmitter_G_class_SpecialEffectsRibbonTrail_G__vftable_11);
    virtual void SpecialEffectsEmitter_G_class_SpecialEffectsRibbonTrail_G__vftable_11();
    ADDRESSVF(0x005EEC30, SpecialEffectsEmitter_G_class_SpecialEffectsRibbonTrail_G_, SpecialEffectsEmitter_G_class_SpecialEffectsRibbonTrail_G__vftable_12);
    virtual void SpecialEffectsEmitter_G_class_SpecialEffectsRibbonTrail_G__vftable_12();
};

ADDRESSVFTABLE(0x009D03DC, AnimationManager_Z);
class __declspec(dllexport) AnimationManager_Z : public ClassNameResManager_Z
{
public:
    ADDRESSVF(0x00747EF0, AnimationManager_Z, ClassNameResManager_Z_vftable_0);
    virtual void ClassNameResManager_Z_vftable_0() override;
    ADDRESSVF(0x00747FC0, AnimationManager_Z, ClassNameResManager_Z_vftable_2);
    virtual void ClassNameResManager_Z_vftable_2() override;
    ADDRESSVF(0x00747FE0, AnimationManager_Z, ClassNameResManager_Z_vftable_3);
    virtual void ClassNameResManager_Z_vftable_3() override;
    char data[1];
};

ADDRESSVFTABLE(0x009B3270, PlayerVisibleObject);
class __declspec(dllexport) PlayerVisibleObject : public VisibleObjectContainer
{
public:
    ADDRESSVF(0x004FC940, PlayerVisibleObject, VisibleObjectContainer_vftable_0);
    virtual void VisibleObjectContainer_vftable_0() override;
    ADDRESSSYMBOL(0x004F9D40, "?VisibleObjectContainer_vftable_4@PlayerVisibleObject@@UAEXHH@Z");
    virtual void VisibleObjectContainer_vftable_4(int, int) override;
};

ADDRESSVFTABLE(0x009C1514, CWindow_G);
class __declspec(dllexport) CWindow_G : public CWindowHierarchy_G
{
public:
    ADDRESSVF(0x005A11B0, CWindow_G, CWindowHierarchy_G_vftable_0);
    virtual void CWindowHierarchy_G_vftable_0() override;
    virtual void CWindowHierarchy_G_vftable_1(int) override;
    virtual char CWindowHierarchy_G_vftable_3() override;
    ADDRESSVF(0x005A1DA0, CWindow_G, CWindowHierarchy_G_vftable_9);
    virtual void CWindowHierarchy_G_vftable_9() override;
    ADDRESSVF(0x005A1DD0, CWindow_G, CWindowHierarchy_G_vftable_10);
    virtual void CWindowHierarchy_G_vftable_10() override;
    ADDRESSVF(0x005A1E00, CWindow_G, CWindowHierarchy_G_vftable_11);
    virtual void CWindowHierarchy_G_vftable_11() override;
    ADDRESSVF(0x005A1E30, CWindow_G, CWindowHierarchy_G_vftable_12);
    virtual void CWindowHierarchy_G_vftable_12() override;
    ADDRESSSYMBOL(0x005A1E70, "?CWindowHierarchy_G_vftable_14@CWindow_G@@UAEXH@Z");
    virtual void CWindowHierarchy_G_vftable_14(int) override;
    ADDRESSVF(0x005A1260, CWindow_G, CWindow_G_vftable_15);
    virtual void CWindow_G_vftable_15();
    ADDRESSVF(0x005A12E0, CWindow_G, CWindow_G_vftable_16);
    virtual void CWindow_G_vftable_16();
    ADDRESSVF(0x005A14C0, CWindow_G, CWindow_G_vftable_17);
    virtual void CWindow_G_vftable_17();
    virtual void CWindow_G_vftable_18() = 0;
    ADDRESSVF(0x005A1460, CWindow_G, CWindow_G_vftable_19);
    virtual void CWindow_G_vftable_19();
    ADDRESSVF(0x005A1490, CWindow_G, CWindow_G_vftable_20);
    virtual void CWindow_G_vftable_20();
    virtual char CWindow_G_vftable_21() = 0;
    ADDRESSSYMBOL(0x005A2100, "?CWindow_G_vftable_22@CWindow_G@@UAEDXZ");
    virtual char CWindow_G_vftable_22();
    virtual void CWindow_G_vftable_23();
    virtual void CWindow_G_vftable_24();
    ADDRESSVF(0x005A1330, CWindow_G, CWindow_G_vftable_25);
    virtual void CWindow_G_vftable_25();
    ADDRESSVF(0x005A1790, CWindow_G, CWindow_G_vftable_26);
    virtual void CWindow_G_vftable_26();
    ADDRESSVF(0x005A1800, CWindow_G, CWindow_G_vftable_27);
    virtual void CWindow_G_vftable_27();
    ADDRESSVF(0x005A21C0, CWindow_G, CWindow_G_vftable_28);
    virtual void CWindow_G_vftable_28();
    ADDRESSVF(0x005A2230, CWindow_G, CWindow_G_vftable_29);
    virtual void CWindow_G_vftable_29();
    ADDRESSVF(0x005A2290, CWindow_G, CWindow_G_vftable_30);
    virtual void CWindow_G_vftable_30();
};

ADDRESSVFTABLE(0x009B06A4, IT_BirdMove_G);
class __declspec(dllexport) IT_BirdMove_G : public Manipulator_Z
{
public:
    ADDRESSSYMBOL(0x0051AAA0, "?BaseObject_Z_vftable_0@IT_BirdMove_G@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x004D5B20, IT_BirdMove_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    virtual void Manipulator_Z_vftable_14() override;
    ADDRESSSYMBOL(0x0051AB30, "?Manipulator_Z_vftable_17@IT_BirdMove_G@@UAEXH@Z");
    virtual void Manipulator_Z_vftable_17(int) override;
    char data[40];
};

ADDRESSVFTABLE(0x009C1610, CPurchaseMovieStill);
class __declspec(dllexport) CPurchaseMovieStill : public CPurchase
{
public:
    ADDRESSVF(0x005A2E20, CPurchaseMovieStill, CPurchase_vftable_0);
    virtual void CPurchase_vftable_0() override;
    virtual char CPurchase_vftable_1() override;
    ADDRESSVF(0x005A2E60, CPurchaseMovieStill, CPurchase_vftable_4);
    virtual void CPurchase_vftable_4() override;
};

ADDRESSVFTABLE(0x009AC08C, SpecialEffectsEmitter_G_class_SpecialEffectsParticle_G_);
class __declspec(dllexport) SpecialEffectsEmitter_G_class_SpecialEffectsParticle_G_ : public SpecialEffectsBaseEmitter_G
{
public:
    ADDRESSVF(0x004C4C40, SpecialEffectsEmitter_G_class_SpecialEffectsParticle_G_, SpecialEffectsBaseEmitter_G_vftable_0);
    virtual void SpecialEffectsBaseEmitter_G_vftable_0() override;
    virtual char SpecialEffectsBaseEmitter_G_vftable_1(int) override;
    ADDRESSVF(0x004C56B0, SpecialEffectsEmitter_G_class_SpecialEffectsParticle_G_, SpecialEffectsBaseEmitter_G_vftable_2);
    virtual void SpecialEffectsBaseEmitter_G_vftable_2() override;
    ADDRESSVF(0x004C4A90, SpecialEffectsEmitter_G_class_SpecialEffectsParticle_G_, SpecialEffectsBaseEmitter_G_vftable_3);
    virtual void SpecialEffectsBaseEmitter_G_vftable_3() override;
    ADDRESSVF(0x004C5680, SpecialEffectsEmitter_G_class_SpecialEffectsParticle_G_, SpecialEffectsBaseEmitter_G_vftable_4);
    virtual void SpecialEffectsBaseEmitter_G_vftable_4() override;
    ADDRESSVF(0x004C4A60, SpecialEffectsEmitter_G_class_SpecialEffectsParticle_G_, SpecialEffectsBaseEmitter_G_vftable_5);
    virtual void SpecialEffectsBaseEmitter_G_vftable_5() override;
    ADDRESSVF(0x004C53B0, SpecialEffectsEmitter_G_class_SpecialEffectsParticle_G_, SpecialEffectsBaseEmitter_G_vftable_6);
    virtual void SpecialEffectsBaseEmitter_G_vftable_6() override;
    ADDRESSSYMBOL(0x004C49F0, "?SpecialEffectsBaseEmitter_G_vftable_7@SpecialEffectsEmitter_G_class_SpecialEffectsParticle_G_@@UAEXH@Z");
    virtual void SpecialEffectsBaseEmitter_G_vftable_7(int) override;
    ADDRESSVF(0x004C56E0, SpecialEffectsEmitter_G_class_SpecialEffectsParticle_G_, SpecialEffectsEmitter_G_class_SpecialEffectsParticle_G__vftable_8);
    virtual void SpecialEffectsEmitter_G_class_SpecialEffectsParticle_G__vftable_8();
    ADDRESSVF(0x004C5960, SpecialEffectsEmitter_G_class_SpecialEffectsParticle_G_, SpecialEffectsEmitter_G_class_SpecialEffectsParticle_G__vftable_9);
    virtual void SpecialEffectsEmitter_G_class_SpecialEffectsParticle_G__vftable_9();
    ADDRESSVF(0x004C5A50, SpecialEffectsEmitter_G_class_SpecialEffectsParticle_G_, SpecialEffectsEmitter_G_class_SpecialEffectsParticle_G__vftable_10);
    virtual void SpecialEffectsEmitter_G_class_SpecialEffectsParticle_G__vftable_10();
    ADDRESSVF(0x004C5A90, SpecialEffectsEmitter_G_class_SpecialEffectsParticle_G_, SpecialEffectsEmitter_G_class_SpecialEffectsParticle_G__vftable_11);
    virtual void SpecialEffectsEmitter_G_class_SpecialEffectsParticle_G__vftable_11();
    ADDRESSVF(0x004C5CE0, SpecialEffectsEmitter_G_class_SpecialEffectsParticle_G_, SpecialEffectsEmitter_G_class_SpecialEffectsParticle_G__vftable_12);
    virtual void SpecialEffectsEmitter_G_class_SpecialEffectsParticle_G__vftable_12();
};

ADDRESSVFTABLE(0x009C3EF4, SpecialEffectsQuad_G);
class __declspec(dllexport) SpecialEffectsQuad_G : public SpecialEffectsParticle_G
{
public:
    ADDRESSVF(0x005DEE70, SpecialEffectsQuad_G, SpecialEffectsParticle_G_vftable_0);
    virtual void SpecialEffectsParticle_G_vftable_0() override;
    ADDRESSVF(0x005DEEA0, SpecialEffectsQuad_G, SpecialEffectsParticle_G_vftable_1);
    virtual void SpecialEffectsParticle_G_vftable_1() override;
};

ADDRESSVFTABLE(0x009B3288, OnlineCarVisibleObject);
class __declspec(dllexport) OnlineCarVisibleObject : public VisibleObjectContainer
{
public:
    ADDRESSVF(0x004FC920, OnlineCarVisibleObject, VisibleObjectContainer_vftable_0);
    virtual void VisibleObjectContainer_vftable_0() override;
    ADDRESSSYMBOL(0x004F98A0, "?VisibleObjectContainer_vftable_4@OnlineCarVisibleObject@@UAEXHH@Z");
    virtual void VisibleObjectContainer_vftable_4(int, int) override;
};

ADDRESSVFTABLE(0x009C2E80, BaseGameObject_G);
class __declspec(dllexport) BaseGameObject_G : public ComObj_Z
{
public:
    ADDRESSVF(0x005B2E70, BaseGameObject_G, ComObj_Z_vftable_0);
    virtual void ComObj_Z_vftable_0() override;
};

ADDRESSVFTABLE(0x009CAD58, CompU_64_Z);
class __declspec(dllexport) CompU_64_Z : public CompField_Z
{
public:
    ADDRESSVF(0x006C23E0, CompU_64_Z, CompField_Z_vftable_0);
    virtual void CompField_Z_vftable_0() override;
    virtual int CompField_Z_vftable_1() override;
    virtual int CompField_Z_vftable_2() override;
    virtual int CompField_Z_vftable_3() override;
    ADDRESSVF(0x006C1B60, CompU_64_Z, CompField_Z_vftable_4);
    virtual void CompField_Z_vftable_4() override;
    ADDRESSVF(0x006C1B80, CompU_64_Z, CompField_Z_vftable_5);
    virtual void CompField_Z_vftable_5() override;
};

ADDRESSVFTABLE(0x009ADFD4, LoadingDraw_C);
class __declspec(dllexport) LoadingDraw_C : public ManipulatorDraw_Z
{
public:
    ADDRESSSYMBOL(0x00502060, "?BaseObject_Z_vftable_0@LoadingDraw_C@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x004D4710, LoadingDraw_C, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSVF(0x005023C0, LoadingDraw_C, BaseObject_Z_vftable_13);
    virtual void BaseObject_Z_vftable_13() override;
    ADDRESSSYMBOL(0x00502580, "?Manipulator_Z_vftable_17@LoadingDraw_C@@UAEXH@Z");
    virtual void Manipulator_Z_vftable_17(int) override;
    ADDRESSVF(0x00502710, LoadingDraw_C, ManipulatorDraw_Z_vftable_18);
    virtual void ManipulatorDraw_Z_vftable_18() override;
    char data[1000];
};

ADDRESSVFTABLE(0x009C2B90, GamePlayerInfo_G);
class __declspec(dllexport) GamePlayerInfo_G : public ComObj_Z
{
public:
    ADDRESSVF(0x005AEC70, GamePlayerInfo_G, ComObj_Z_vftable_0);
    virtual void ComObj_Z_vftable_0() override;
};

ADDRESSVFTABLE(0x009C567C, Agent_Z);
class __declspec(dllexport) Agent_Z : public ABC_Agent
{
public:
    ADDRESSSYMBOL(0x00636CE0, "?BaseObject_Z_vftable_0@Agent_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x00636CA0, Agent_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSVF(0x00637490, Agent_Z, BaseObject_Z_vftable_13);
    virtual void BaseObject_Z_vftable_13() override;
    ADDRESSSYMBOL(0x004018C0, "?ABC_Agent_vftable_14@Agent_Z@@UAEHXZ");
    virtual int ABC_Agent_vftable_14() override;
    ADDRESSVF(0x00637650, Agent_Z, ABC_Agent_vftable_15);
    virtual void ABC_Agent_vftable_15() override;
    ADDRESSSYMBOL(0x004018E0, "?ABC_Agent_vftable_16@Agent_Z@@UAEXH@Z");
    virtual void ABC_Agent_vftable_16(int) override;
    ADDRESSVF(0x004018B0, Agent_Z, ABC_Agent_vftable_17);
    virtual void ABC_Agent_vftable_17() override;
    ADDRESSSYMBOL(0x00636CF0, "?Agent_Z_vftable_20@Agent_Z@@UAEXXZ");
    virtual void Agent_Z_vftable_20();
    ADDRESSVF(0x006374D0, Agent_Z, Agent_Z_vftable_21);
    virtual void Agent_Z_vftable_21();
    ADDRESSVF(0x00636D20, Agent_Z, Agent_Z_vftable_22);
    virtual void Agent_Z_vftable_22();
    virtual void Agent_Z_vftable_23();
    ADDRESSVF(0x006372F0, Agent_Z, Agent_Z_vftable_24);
    virtual void Agent_Z_vftable_24();
    ADDRESSVF(0x00637300, Agent_Z, Agent_Z_vftable_25);
    virtual void Agent_Z_vftable_25();
    ADDRESSVF(0x00637460, Agent_Z, Agent_Z_vftable_26);
    virtual void Agent_Z_vftable_26();
    ADDRESSVF(0x00401740, Agent_Z, Agent_Z_vftable_27);
    virtual void Agent_Z_vftable_27();
    virtual char Agent_Z_vftable_28(int);
    virtual char Agent_Z_vftable_29(int);
    virtual char Agent_Z_vftable_30(int);
    virtual char Agent_Z_vftable_31(int);
    virtual void Agent_Z_vftable_32(int);
    virtual void Agent_Z_vftable_33(int);
    virtual char Agent_Z_vftable_34(int);
    virtual void Agent_Z_vftable_35(int);
    virtual void Agent_Z_vftable_36(int);
    virtual void Agent_Z_vftable_37(int);
    virtual int Agent_Z_vftable_38(int, int);
    char data[96];
};

ADDRESSVFTABLE(0x009C065C, CBox_G);
class __declspec(dllexport) CBox_G : public CWindow_G
{
public:
    ADDRESSVF(0x00599250, CBox_G, CWindowHierarchy_G_vftable_0);
    virtual void CWindowHierarchy_G_vftable_0() override;
    ADDRESSVF(0x00599490, CBox_G, CWindow_G_vftable_17);
    virtual void CWindow_G_vftable_17() override;
    ADDRESSVF(0x00599290, CBox_G, CWindow_G_vftable_18);
    virtual void CWindow_G_vftable_18() override;
    virtual char CWindow_G_vftable_21() override;
    ADDRESSSYMBOL(0x005994D0, "?CWindow_G_vftable_22@CBox_G@@UAEDXZ");
    virtual char CWindow_G_vftable_22() override;
    virtual void CWindow_G_vftable_28() override;
    virtual void CWindow_G_vftable_29() override;
};

ADDRESSVFTABLE(0x009D252C, Warp_Z);
class __declspec(dllexport) Warp_Z : public ResourceObject_Z
{
public:
    ADDRESSVF(0x007ABFC0, Warp_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x00805100, "?BaseObject_Z_vftable_3@Warp_Z@@UAEXH@Z");
    virtual void BaseObject_Z_vftable_3(int) override;
    ADDRESSSYMBOL(0x00805190, "?BaseObject_Z_vftable_4@Warp_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_4() override;
    ADDRESSSYMBOL(0x008052C0, "?BaseObject_Z_vftable_5@Warp_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_5() override;
    ADDRESSSYMBOL(0x008053C0, "?BaseObject_Z_vftable_6@Warp_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_6() override;
    ADDRESSVF(0x007AC050, Warp_Z, BaseObject_Z_vftable_13);
    virtual void BaseObject_Z_vftable_13() override;
    virtual void Warp_Z_vftable_16(int);
    virtual int Warp_Z_vftable_17(int);
    char data[496];
};

ADDRESSVFTABLE(0x009D4D88, ComDBodbc_Z);
class __declspec(dllexport) ComDBodbc_Z : public ComDB_Z
{
public:
    ADDRESSVF(0x0083F170, ComDBodbc_Z, ComDB_Z_vftable_0);
    virtual void ComDB_Z_vftable_0() override;
    virtual char ComDB_Z_vftable_1() override;
    ADDRESSVF(0x0083F360, ComDBodbc_Z, ComDB_Z_vftable_2);
    virtual void ComDB_Z_vftable_2() override;
    ADDRESSVF(0x0083F900, ComDBodbc_Z, ComDB_Z_vftable_3);
    virtual void ComDB_Z_vftable_3() override;
    ADDRESSVF(0x0083F6E0, ComDBodbc_Z, ComDB_Z_vftable_4);
    virtual void ComDB_Z_vftable_4() override;
    ADDRESSVF(0x0083F770, ComDBodbc_Z, ComDB_Z_vftable_5);
    virtual void ComDB_Z_vftable_5() override;
    ADDRESSVF(0x0083F640, ComDBodbc_Z, ComDB_Z_vftable_6);
    virtual void ComDB_Z_vftable_6() override;
    ADDRESSVF(0x0083F820, ComDBodbc_Z, ComDB_Z_vftable_7);
    virtual void ComDB_Z_vftable_7() override;
    ADDRESSVF(0x0083FA70, ComDBodbc_Z, ComDB_Z_vftable_8);
    virtual void ComDB_Z_vftable_8() override;
    ADDRESSVF(0x0083FAB0, ComDBodbc_Z, ComDB_Z_vftable_9);
    virtual void ComDB_Z_vftable_9() override;
    ADDRESSVF(0x0083FB10, ComDBodbc_Z, ComDB_Z_vftable_10);
    virtual void ComDB_Z_vftable_10() override;
};

ADDRESSVFTABLE(0x009D55A4, WinMovie_Z);
class __declspec(dllexport) WinMovie_Z : public Movie_Z
{
public:
    ADDRESSVF(0x0081DCD0, WinMovie_Z, Movie_Z_vftable_0);
    virtual void Movie_Z_vftable_0() override;
    ADDRESSVF(0x00849160, WinMovie_Z, Movie_Z_vftable_1);
    virtual void Movie_Z_vftable_1() override;
    ADDRESSVF(0x008491D0, WinMovie_Z, Movie_Z_vftable_2);
    virtual void Movie_Z_vftable_2() override;
    virtual char Movie_Z_vftable_7(int, int) override;
    ADDRESSSYMBOL(0x00849220, "?Movie_Z_vftable_8@WinMovie_Z@@UAEXXZ");
    virtual void Movie_Z_vftable_8() override;
    virtual void Movie_Z_vftable_9() override;
    virtual void Movie_Z_vftable_10() override;
    virtual void Movie_Z_vftable_11() override;
};

ADDRESSVFTABLE(0x009AE08C, ItemMgr_G);
class __declspec(dllexport) ItemMgr_G : public ObjectGame_Z
{
public:
    ADDRESSVF(0x004D17C0, ItemMgr_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x004F16D0, "?Manipulator_Z_vftable_14@ItemMgr_G@@UAEXXZ");
    virtual void Manipulator_Z_vftable_14() override;
    ADDRESSSYMBOL(0x004F16C0, "?Manipulator_Z_vftable_17@ItemMgr_G@@UAEXH@Z");
    virtual void Manipulator_Z_vftable_17(int) override;
    char data[48];
};

ADDRESSVFTABLE(0x009A19B4, CommandStatesMachine_G);
class __declspec(dllexport) CommandStatesMachine_G : public StatesMachine_G
{
public:
    ADDRESSVF(0x00423E00, CommandStatesMachine_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x00423EC0, "?StatesMachine_G_vftable_14@CommandStatesMachine_G@@UAEHH@Z");
    virtual int StatesMachine_G_vftable_14(int) override;
    ADDRESSSYMBOL(0x00424530, "?StatesMachine_G_vftable_15@CommandStatesMachine_G@@UAEXH@Z");
    virtual void StatesMachine_G_vftable_15(int) override;
    ADDRESSSYMBOL(0x00423EB0, "?StatesMachine_G_vftable_16@CommandStatesMachine_G@@UAEHH@Z");
    virtual int StatesMachine_G_vftable_16(int) override;
    char data[4];
};

ADDRESSVFTABLE(0x009D6404, DefaultConstant_Z);
class __declspec(dllexport) DefaultConstant_Z : public ObjConstant_Z
{
public:
    ADDRESSVF(0x0082D2D0, DefaultConstant_Z, ObjConstant_Z_vftable_0);
    virtual void ObjConstant_Z_vftable_0() override;
};

ADDRESSVFTABLE(0x009AE02C, ProGroundMgr_G);
class __declspec(dllexport) ProGroundMgr_G : public ObjectGame_Z
{
public:
    ADDRESSSYMBOL(0x004F9DA0, "?BaseObject_Z_vftable_0@ProGroundMgr_G@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x004D16E0, ProGroundMgr_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    virtual void Manipulator_Z_vftable_14() override;
    ADDRESSSYMBOL(0x004FA680, "?Manipulator_Z_vftable_17@ProGroundMgr_G@@UAEXH@Z");
    virtual void Manipulator_Z_vftable_17(int) override;
    ADDRESSVF(0x004FA5A0, ProGroundMgr_G, ObjectGame_Z_vftable_22);
    virtual void ObjectGame_Z_vftable_22() override;
    char data[9284];
};

ADDRESSVFTABLE(0x009D6428, ViewportConstant_Z);
class __declspec(dllexport) ViewportConstant_Z : public ObjConstant_Z
{
public:
    ADDRESSVF(0x0082A310, ViewportConstant_Z, ObjConstant_Z_vftable_0);
    virtual void ObjConstant_Z_vftable_0() override;
    ADDRESSSYMBOL(0x00826D80, "?ObjConstant_Z_vftable_1@ViewportConstant_Z@@UAEXHH@Z");
    virtual void ObjConstant_Z_vftable_1(int, int) override;
};

ADDRESSVFTABLE(0x009D1410, FakeIndexBuffer_Z);
class __declspec(dllexport) FakeIndexBuffer_Z : public IndexBuffer_Z
{
public:
    ADDRESSVF(0x00773160, FakeIndexBuffer_Z, IndexBuffer_Z_vftable_0);
    virtual void IndexBuffer_Z_vftable_0() override;
    ADDRESSVF(0x00773120, FakeIndexBuffer_Z, IndexBuffer_Z_vftable_1);
    virtual void IndexBuffer_Z_vftable_1() override;
    virtual void IndexBuffer_Z_vftable_2() override;
    ADDRESSVF(0x00773140, FakeIndexBuffer_Z, IndexBuffer_Z_vftable_3);
    virtual void IndexBuffer_Z_vftable_3() override;
    virtual void IndexBuffer_Z_vftable_4(int) override;
};

ADDRESSVFTABLE(0x009CAE38, CompVec2100k_32_Z);
class __declspec(dllexport) CompVec2100k_32_Z : public CompField_Z
{
public:
    ADDRESSVF(0x006C26A0, CompVec2100k_32_Z, CompField_Z_vftable_0);
    virtual void CompField_Z_vftable_0() override;
    virtual int CompField_Z_vftable_1() override;
    virtual int CompField_Z_vftable_2() override;
    virtual int CompField_Z_vftable_3() override;
    ADDRESSVF(0x006C2020, CompVec2100k_32_Z, CompField_Z_vftable_4);
    virtual void CompField_Z_vftable_4() override;
    ADDRESSVF(0x006C2040, CompVec2100k_32_Z, CompField_Z_vftable_5);
    virtual void CompField_Z_vftable_5() override;
};

ADDRESSVFTABLE(0x009C094C, CFrame_G);
class __declspec(dllexport) CFrame_G : public CWindow_G
{
public:
    ADDRESSVF(0x0059AC50, CFrame_G, CWindowHierarchy_G_vftable_0);
    virtual void CWindowHierarchy_G_vftable_0() override;
    ADDRESSSYMBOL(0x0059ACA0, "?CWindowHierarchy_G_vftable_1@CFrame_G@@UAEXH@Z");
    virtual void CWindowHierarchy_G_vftable_1(int) override;
    virtual void CWindow_G_vftable_18() override;
    virtual char CWindow_G_vftable_21() override;
    ADDRESSSYMBOL(0x0059AFA0, "?CWindow_G_vftable_22@CFrame_G@@UAEDXZ");
    virtual char CWindow_G_vftable_22() override;
};

ADDRESSVFTABLE(0x009A1F24, CS_Class_ATTACKCHARGESLIDE);
class __declspec(dllexport) CS_Class_ATTACKCHARGESLIDE : public CreaturesState_G
{
public:
    ADDRESSVF(0x00426480, CS_Class_ATTACKCHARGESLIDE, StateTemplate_G_vftable_0);
    virtual void StateTemplate_G_vftable_0() override;
    ADDRESSSYMBOL(0x00427180, "?StateTemplate_G_vftable_1@CS_Class_ATTACKCHARGESLIDE@@UAEXH@Z");
    virtual void StateTemplate_G_vftable_1(int) override;
    ADDRESSSYMBOL(0x00427240, "?StateTemplate_G_vftable_3@CS_Class_ATTACKCHARGESLIDE@@UAEDH@Z");
    virtual char StateTemplate_G_vftable_3(int) override;
};

ADDRESSVFTABLE(0x009B4BEC, IT_DECORMESH_G);
class __declspec(dllexport) IT_DECORMESH_G : public Agent_Z
{
public:
    ADDRESSSYMBOL(0x00516C80, "?BaseObject_Z_vftable_0@IT_DECORMESH_G@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x00516BC0, IT_DECORMESH_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x00516B50, "?ABC_Agent_vftable_14@IT_DECORMESH_G@@UAEHXZ");
    virtual int ABC_Agent_vftable_14() override;
    ADDRESSVF(0x00516B60, IT_DECORMESH_G, ABC_Agent_vftable_15);
    virtual void ABC_Agent_vftable_15() override;
    ADDRESSSYMBOL(0x00516B70, "?ABC_Agent_vftable_16@IT_DECORMESH_G@@UAEXH@Z");
    virtual void ABC_Agent_vftable_16(int) override;
    ADDRESSVF(0x00516BA0, IT_DECORMESH_G, ABC_Agent_vftable_17);
    virtual void ABC_Agent_vftable_17() override;
    ADDRESSVF(0x00516CB0, IT_DECORMESH_G, Agent_Z_vftable_24);
    virtual void Agent_Z_vftable_24() override;
    ADDRESSVF(0x00516DB0, IT_DECORMESH_G, Agent_Z_vftable_25);
    virtual void Agent_Z_vftable_25() override;
    char data[4];
};

ADDRESSVFTABLE(0x009C3F00, SpecialEffectsRibbonTrail_G);
class __declspec(dllexport) SpecialEffectsRibbonTrail_G : public SpecialEffectsParticle_G
{
public:
    ADDRESSVF(0x005DF180, SpecialEffectsRibbonTrail_G, SpecialEffectsParticle_G_vftable_0);
    virtual void SpecialEffectsParticle_G_vftable_0() override;
    ADDRESSVF(0x005DF2C0, SpecialEffectsRibbonTrail_G, SpecialEffectsParticle_G_vftable_1);
    virtual void SpecialEffectsParticle_G_vftable_1() override;
};

ADDRESSVFTABLE(0x009C30A4, GameActionClient_G);
class __declspec(dllexport) GameActionClient_G : public GameAction_G
{
public:
    ADDRESSVF(0x005B52B0, GameActionClient_G, ComObj_Z_vftable_0);
    virtual void ComObj_Z_vftable_0() override;
    virtual void ComObj_Z_vftable_3(int) override;
    virtual void ComObj_Z_vftable_4(int) override;
    virtual char GameAction_G_vftable_10(int, int) override;
    virtual char GameAction_G_vftable_11(int, int, int) override;
    virtual void GameAction_G_vftable_12(int) override;
    virtual void GameAction_G_vftable_13() override;
};

ADDRESSVFTABLE(0x009D76E0, ComDBSetRate_Z);
class __declspec(dllexport) ComDBSetRate_Z : public ComDBCommand_Z
{
public:
    ADDRESSVF(0x00871860, ComDBSetRate_Z, ComDBCommand_Z_vftable_0);
    virtual void ComDBCommand_Z_vftable_0() override;
};

ADDRESSVFTABLE(0x009B1B0C, MissionStatus_G);
class __declspec(dllexport) MissionStatus_G : public ObjectGame_Z
{
public:
    ADDRESSSYMBOL(0x0062AD90, "?BaseObject_Z_vftable_0@MissionStatus_G@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x004DBED0, MissionStatus_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x0062AFB0, "?Manipulator_Z_vftable_14@MissionStatus_G@@UAEXXZ");
    virtual void Manipulator_Z_vftable_14() override;
    virtual void Manipulator_Z_vftable_15() override;
    ADDRESSSYMBOL(0x0062F680, "?Manipulator_Z_vftable_17@MissionStatus_G@@UAEXH@Z");
    virtual void Manipulator_Z_vftable_17(int) override;
    char data[1008];
};

ADDRESSVFTABLE(0x009AB75C, MapHUD);
class __declspec(dllexport) MapHUD : public ViewportHUD
{
public:
    ADDRESSSYMBOL(0x0049EEA0, "?ViewportHUD_vftable_0@MapHUD@@UAEXH@Z");
    virtual void ViewportHUD_vftable_0(int) override;
    ADDRESSSYMBOL(0x0049F330, "?ViewportHUD_vftable_1@MapHUD@@UAEXXZ");
    virtual void ViewportHUD_vftable_1() override;
    ADDRESSSYMBOL(0x0049F4D0, "?ViewportHUD_vftable_2@MapHUD@@UAEXH@Z");
    virtual void ViewportHUD_vftable_2(int) override;
    ADDRESSVF(0x0049F4B0, MapHUD, ViewportHUD_vftable_3);
    virtual void ViewportHUD_vftable_3() override;
    ADDRESSSYMBOL(0x004A1020, "?ViewportHUD_vftable_5@MapHUD@@UAEXH@Z");
    virtual void ViewportHUD_vftable_5(int) override;
    ADDRESSVF(0x004A7F20, MapHUD, ViewportHUD_vftable_7);
    virtual void ViewportHUD_vftable_7() override;
    ADDRESSVF(0x004A7F10, MapHUD, ViewportHUD_vftable_8);
    virtual void ViewportHUD_vftable_8() override;
    ADDRESSVF(0x0049EC90, MapHUD, MapHUD_vftable_20);
    virtual void MapHUD_vftable_20();
    virtual char MapHUD_vftable_21();
};

ADDRESSVFTABLE(0x009AED8C, ScriptInputManager_Z);
class __declspec(dllexport) ScriptInputManager_Z : public InputEngine_Z
{
public:
    ADDRESSVF(0x004D8030, ScriptInputManager_Z, InputEngine_Z_vftable_0);
    virtual void InputEngine_Z_vftable_0() override;
    virtual void InputEngine_Z_vftable_1(int) override;
    char data[1];
};

ADDRESSVFTABLE(0x009C3164, GameLobbyClient_G);
class __declspec(dllexport) GameLobbyClient_G : public GameLobby_G
{
public:
    ADDRESSVF(0x005B53A0, GameLobbyClient_G, ComObj_Z_vftable_0);
    virtual void ComObj_Z_vftable_0() override;
    virtual void ComObj_Z_vftable_3(int) override;
    virtual void ComObj_Z_vftable_4(int) override;
};

ADDRESSVFTABLE(0x009BDECC, DialogMenu_G);
class __declspec(dllexport) DialogMenu_G : public Dialog_G
{
public:
    ADDRESSVF(0x00585F00, DialogMenu_G, CWindowHierarchy_G_vftable_0);
    virtual void CWindowHierarchy_G_vftable_0() override;
    ADDRESSSYMBOL(0x00586BD0, "?Dialog_G_vftable_15@DialogMenu_G@@UAEXXZ");
    virtual void Dialog_G_vftable_15() override;
    ADDRESSSYMBOL(0x00586AF0, "?Dialog_G_vftable_16@DialogMenu_G@@UAEXH@Z");
    virtual void Dialog_G_vftable_16(int) override;
    virtual void Dialog_G_vftable_17() override;
    ADDRESSVF(0x00586CB0, DialogMenu_G, Dialog_G_vftable_19);
    virtual void Dialog_G_vftable_19() override;
    virtual void Dialog_G_vftable_22() override;
    virtual char DialogMenu_G_vftable_28();
    ADDRESSSYMBOL(0x00586BF0, "?DialogMenu_G_vftable_29@DialogMenu_G@@UAEXXZ");
    virtual void DialogMenu_G_vftable_29();
    virtual int DialogMenu_G_vftable_30();
};

ADDRESSVFTABLE(0x009CAD78, CompTIME_40_Z);
class __declspec(dllexport) CompTIME_40_Z : public CompField_Z
{
public:
    ADDRESSVF(0x006C2660, CompTIME_40_Z, CompField_Z_vftable_0);
    virtual void CompField_Z_vftable_0() override;
    virtual int CompField_Z_vftable_1() override;
    virtual int CompField_Z_vftable_2() override;
    virtual int CompField_Z_vftable_3() override;
    ADDRESSVF(0x006C1BE0, CompTIME_40_Z, CompField_Z_vftable_4);
    virtual void CompField_Z_vftable_4() override;
    ADDRESSVF(0x006C1C10, CompTIME_40_Z, CompField_Z_vftable_5);
    virtual void CompField_Z_vftable_5() override;
};

ADDRESSVFTABLE(0x009CC1DC, RtcPlayer_Z);
class __declspec(dllexport) RtcPlayer_Z : public ManipulatorDraw_Z
{
public:
    ADDRESSSYMBOL(0x00728BE0, "?BaseObject_Z_vftable_0@RtcPlayer_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x00728BC0, RtcPlayer_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSVF(0x00728C20, RtcPlayer_Z, BaseObject_Z_vftable_13);
    virtual void BaseObject_Z_vftable_13() override;
    ADDRESSSYMBOL(0x0072AC60, "?Manipulator_Z_vftable_14@RtcPlayer_Z@@UAEXXZ");
    virtual void Manipulator_Z_vftable_14() override;
    ADDRESSSYMBOL(0x00729B30, "?Manipulator_Z_vftable_17@RtcPlayer_Z@@UAEXH@Z");
    virtual void Manipulator_Z_vftable_17(int) override;
    ADDRESSSYMBOL(0x0072B330, "?ManipulatorDraw_Z_vftable_19@RtcPlayer_Z@@UAEXH@Z");
    virtual void ManipulatorDraw_Z_vftable_19(int) override;
    ADDRESSVF(0x00728DA0, RtcPlayer_Z, RtcPlayer_Z_vftable_20);
    virtual void RtcPlayer_Z_vftable_20();
    ADDRESSVF(0x0072A880, RtcPlayer_Z, RtcPlayer_Z_vftable_21);
    virtual void RtcPlayer_Z_vftable_21();
    ADDRESSSYMBOL(0x0072A630, "?RtcPlayer_Z_vftable_22@RtcPlayer_Z@@UAEXH@Z");
    virtual void RtcPlayer_Z_vftable_22(int);
    char data[132];
};

ADDRESSVFTABLE(0x009C3F0C, SpecialEffectsRibbon_G);
class __declspec(dllexport) SpecialEffectsRibbon_G : public SpecialEffectsRibbonTrail_G
{
public:
    ADDRESSVF(0x005DEF40, SpecialEffectsRibbon_G, SpecialEffectsParticle_G_vftable_0);
    virtual void SpecialEffectsParticle_G_vftable_0() override;
    ADDRESSVF(0x005DEFC0, SpecialEffectsRibbon_G, SpecialEffectsParticle_G_vftable_1);
    virtual void SpecialEffectsParticle_G_vftable_1() override;
};

ADDRESSVFTABLE(0x009D0A74, ModelOrder0C);
class __declspec(dllexport) ModelOrder0C : public ModelI
{
public:
    ADDRESSVF(0x007599F0, ModelOrder0C, ModelI_vftable_0);
    virtual void ModelI_vftable_0() override;
    ADDRESSSYMBOL(0x007FECD0, "?ModelI_vftable_1@ModelOrder0C@@UAEXXZ");
    virtual void ModelI_vftable_1() override;
    ADDRESSVF(0x007FED30, ModelOrder0C, ModelI_vftable_2);
    virtual void ModelI_vftable_2() override;
    ADDRESSVF(0x007FED50, ModelOrder0C, ModelI_vftable_3);
    virtual void ModelI_vftable_3() override;
    ADDRESSVF(0x00759770, ModelOrder0C, ModelI_vftable_4);
    virtual void ModelI_vftable_4() override;
    ADDRESSVF(0x007FED80, ModelOrder0C, ModelI_vftable_5);
    virtual void ModelI_vftable_5() override;
    ADDRESSVF(0x00759780, ModelOrder0C, ModelI_vftable_6);
    virtual void ModelI_vftable_6() override;
};

ADDRESSVFTABLE(0x009C88C8, ColSurfaceCache_Z);
class __declspec(dllexport) ColSurfaceCache_Z : public BaseColSurfaceCache_Z
{
public:
    ADDRESSVF(0x00689B20, ColSurfaceCache_Z, BaseColSurfaceCache_Z_vftable_0);
    virtual void BaseColSurfaceCache_Z_vftable_0() override;
    char data[1];
};

ADDRESSVFTABLE(0x009D617C, NetWorkServerClient_Z);
class __declspec(dllexport) NetWorkServerClient_Z : public NetWork_Z
{
public:
    ADDRESSVF(0x00821ED0, NetWorkServerClient_Z, NetObject_Z_vftable_0);
    virtual void NetObject_Z_vftable_0() override;
    ADDRESSVF(0x005A62B0, NetWorkServerClient_Z, NetObject_Z_vftable_1);
    virtual void NetObject_Z_vftable_1() override;
    ADDRESSVF(0x005A62F0, NetWorkServerClient_Z, NetObject_Z_vftable_2);
    virtual void NetObject_Z_vftable_2() override;
    ADDRESSVF(0x005A6430, NetWorkServerClient_Z, NetWork_Z_vftable_3);
    virtual void NetWork_Z_vftable_3() override;
    ADDRESSVF(0x005A6580, NetWorkServerClient_Z, NetWork_Z_vftable_4);
    virtual void NetWork_Z_vftable_4() override;
    ADDRESSVF(0x005A64B0, NetWorkServerClient_Z, NetWork_Z_vftable_5);
    virtual void NetWork_Z_vftable_5() override;
    ADDRESSVF(0x005A65C0, NetWorkServerClient_Z, NetWork_Z_vftable_6);
    virtual void NetWork_Z_vftable_6() override;
    ADDRESSVF(0x005A6600, NetWorkServerClient_Z, NetWork_Z_vftable_7);
    virtual void NetWork_Z_vftable_7() override;
    ADDRESSVF(0x005A6610, NetWorkServerClient_Z, NetWork_Z_vftable_8);
    virtual void NetWork_Z_vftable_8() override;
    ADDRESSVF(0x005A6270, NetWorkServerClient_Z, NetWorkServerClient_Z_vftable_9);
    virtual void NetWorkServerClient_Z_vftable_9();
    ADDRESSVF(0x005A6290, NetWorkServerClient_Z, NetWorkServerClient_Z_vftable_10);
    virtual void NetWorkServerClient_Z_vftable_10();
    virtual char NetWorkServerClient_Z_vftable_11();
};

ADDRESSVFTABLE(0x009D3E68, ModelOrder1C);
class __declspec(dllexport) ModelOrder1C : public ModelI
{
public:
    ADDRESSVF(0x007FE210, ModelOrder1C, ModelI_vftable_0);
    virtual void ModelI_vftable_0() override;
    ADDRESSSYMBOL(0x007FE140, "?ModelI_vftable_1@ModelOrder1C@@UAEXXZ");
    virtual void ModelI_vftable_1() override;
    ADDRESSVF(0x007FE270, ModelOrder1C, ModelI_vftable_2);
    virtual void ModelI_vftable_2() override;
    ADDRESSVF(0x007FE2D0, ModelOrder1C, ModelI_vftable_3);
    virtual void ModelI_vftable_3() override;
    ADDRESSVF(0x007FE120, ModelOrder1C, ModelI_vftable_4);
    virtual void ModelI_vftable_4() override;
    ADDRESSVF(0x007FE300, ModelOrder1C, ModelI_vftable_5);
    virtual void ModelI_vftable_5() override;
    ADDRESSVF(0x007FE130, ModelOrder1C, ModelI_vftable_6);
    virtual void ModelI_vftable_6() override;
};

ADDRESSVFTABLE(0x009CCA64, CompressorArith_Z);
class __declspec(dllexport) CompressorArith_Z : public Compressor_Z
{
public:
    ADDRESSVF(0x007D4190, CompressorArith_Z, Compressor_Z_vftable_0);
    virtual void Compressor_Z_vftable_0() override;
    ADDRESSVF(0x007D4240, CompressorArith_Z, Compressor_Z_vftable_1);
    virtual void Compressor_Z_vftable_1() override;
};

ADDRESSVFTABLE(0x009D6298, XSessionCreateLiveOverlappedCommand_Z);
class __declspec(dllexport) XSessionCreateLiveOverlappedCommand_Z : public LiveOverlappedCommand_Z
{
public:
    ADDRESSVF(0x00822630, XSessionCreateLiveOverlappedCommand_Z, LiveOverlappedCommand_Z_vftable_0);
    virtual void LiveOverlappedCommand_Z_vftable_0() override;
    ADDRESSVF(0x008225F0, XSessionCreateLiveOverlappedCommand_Z, LiveOverlappedCommand_Z_vftable_1);
    virtual void LiveOverlappedCommand_Z_vftable_1() override;
    virtual void *LiveOverlappedCommand_Z_vftable_2() override;
};

ADDRESSVFTABLE(0x009BD49C, LevelAgent_G);
class __declspec(dllexport) LevelAgent_G : public Agent_Z
{
public:
    ADDRESSSYMBOL(0x0057B350, "?BaseObject_Z_vftable_0@LevelAgent_G@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x0057B330, LevelAgent_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSVF(0x0057B4A0, LevelAgent_G, BaseObject_Z_vftable_13);
    virtual void BaseObject_Z_vftable_13() override;
    ADDRESSSYMBOL(0x0057B180, "?ABC_Agent_vftable_14@LevelAgent_G@@UAEHXZ");
    virtual int ABC_Agent_vftable_14() override;
    ADDRESSVF(0x0057B190, LevelAgent_G, ABC_Agent_vftable_15);
    virtual void ABC_Agent_vftable_15() override;
    ADDRESSSYMBOL(0x0057B1A0, "?ABC_Agent_vftable_16@LevelAgent_G@@UAEXH@Z");
    virtual void ABC_Agent_vftable_16(int) override;
    ADDRESSVF(0x0057B1D0, LevelAgent_G, ABC_Agent_vftable_17);
    virtual void ABC_Agent_vftable_17() override;
    ADDRESSSYMBOL(0x0057B750, "?Agent_Z_vftable_20@LevelAgent_G@@UAEXXZ");
    virtual void Agent_Z_vftable_20() override;
    ADDRESSVF(0x0057C0A0, LevelAgent_G, LevelAgent_G_vftable_39);
    virtual void LevelAgent_G_vftable_39();
    ADDRESSVF(0x0057C330, LevelAgent_G, LevelAgent_G_vftable_40);
    virtual void LevelAgent_G_vftable_40();
    ADDRESSVF(0x0057C650, LevelAgent_G, LevelAgent_G_vftable_41);
    virtual void LevelAgent_G_vftable_41();
    char data[2240];
};

ADDRESSVFTABLE(0x009C0E5C, CNumericUpDown_G);
class __declspec(dllexport) CNumericUpDown_G : public CWindow_G
{
public:
    ADDRESSVF(0x0059D770, CNumericUpDown_G, CWindowHierarchy_G_vftable_0);
    virtual void CWindowHierarchy_G_vftable_0() override;
    ADDRESSVF(0x0059D7E0, CNumericUpDown_G, CWindow_G_vftable_15);
    virtual void CWindow_G_vftable_15() override;
    ADDRESSVF(0x0059DAE0, CNumericUpDown_G, CWindow_G_vftable_16);
    virtual void CWindow_G_vftable_16() override;
    virtual void CWindow_G_vftable_18() override;
    ADDRESSSYMBOL(0x0059DB80, "?CWindow_G_vftable_21@CNumericUpDown_G@@UAEDXZ");
    virtual char CWindow_G_vftable_21() override;
    ADDRESSVF(0x0059DC30, CNumericUpDown_G, CWindow_G_vftable_25);
    virtual void CWindow_G_vftable_25() override;
    virtual void CNumericUpDown_G_vftable_31();
    virtual void CNumericUpDown_G_vftable_32();
};

ADDRESSVFTABLE(0x009C3228, GameMissionsServer_G);
class __declspec(dllexport) GameMissionsServer_G : public GameMissions_G
{
public:
    ADDRESSVF(0x005B58F0, GameMissionsServer_G, ComObj_Z_vftable_0);
    virtual void ComObj_Z_vftable_0() override;
    ADDRESSSYMBOL(0x005AF9A0, "?ComObj_Z_vftable_1@GameMissionsServer_G@@UAEXXZ");
    virtual void ComObj_Z_vftable_1() override;
    virtual void ComObj_Z_vftable_2() override;
    ADDRESSSYMBOL(0x005AFC60, "?ComObj_Z_vftable_3@GameMissionsServer_G@@UAEXH@Z");
    virtual void ComObj_Z_vftable_3(int) override;
};

ADDRESSVFTABLE(0x009C31FC, GameStateServer_G);
class __declspec(dllexport) GameStateServer_G : public GameState_G
{
public:
    ADDRESSVF(0x005B5540, GameStateServer_G, ComObj_Z_vftable_0);
    virtual void ComObj_Z_vftable_0() override;
    ADDRESSSYMBOL(0x005AF1B0, "?ComObj_Z_vftable_3@GameStateServer_G@@UAEXH@Z");
    virtual void ComObj_Z_vftable_3(int) override;
};

ADDRESSVFTABLE(0x009A4BC4, Dialog_InfosText);
class __declspec(dllexport) Dialog_InfosText : public Dialog_G
{
public:
    ADDRESSVF(0x00440390, Dialog_InfosText, CWindowHierarchy_G_vftable_0);
    virtual void CWindowHierarchy_G_vftable_0() override;
    ADDRESSSYMBOL(0x004403D0, "?Dialog_G_vftable_17@Dialog_InfosText@@UAEXXZ");
    virtual void Dialog_G_vftable_17() override;
    virtual void Dialog_G_vftable_22() override;
    ADDRESSVF(0x00440450, Dialog_InfosText, Dialog_G_vftable_23);
    virtual void Dialog_G_vftable_23() override;
};

ADDRESSVFTABLE(0x009C46FC, SpecialEffectsDirtScreen_G);
class __declspec(dllexport) SpecialEffectsDirtScreen_G : public SpecialEffectsProjection_G
{
public:
    ADDRESSVF(0x005FF7C0, SpecialEffectsDirtScreen_G, SpecialEffectsProjection_G_vftable_0);
    virtual void SpecialEffectsProjection_G_vftable_0() override;
    virtual int SpecialEffectsProjection_G_vftable_1() override;
    ADDRESSVF(0x005FF8B0, SpecialEffectsDirtScreen_G, SpecialEffectsProjection_G_vftable_2);
    virtual void SpecialEffectsProjection_G_vftable_2() override;
};

ADDRESSVFTABLE(0x009B1154, GameWorldClt);
class __declspec(dllexport) GameWorldClt : public ComWorldClt_Z
{
public:
    ADDRESSVF(0x004D5F30, GameWorldClt, ComWorld_Z_vftable_0);
    virtual void ComWorld_Z_vftable_0() override;
    ADDRESSVF(0x005B4FD0, GameWorldClt, ComWorld_Z_vftable_1);
    virtual void ComWorld_Z_vftable_1() override;
};

ADDRESSVFTABLE(0x009B19B4, PATH_MANAGER);
class __declspec(dllexport) PATH_MANAGER : public ObjectGame_Z
{
public:
    ADDRESSVF(0x004DC7A0, PATH_MANAGER, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x0061F970, "?Manipulator_Z_vftable_17@PATH_MANAGER@@UAEXH@Z");
    virtual void Manipulator_Z_vftable_17(int) override;
    virtual void PATH_MANAGER_vftable_23() = 0;
    virtual void PATH_MANAGER_vftable_24() = 0;
    virtual void PATH_MANAGER_vftable_25() = 0;
    virtual void PATH_MANAGER_vftable_26() = 0;
    virtual void PATH_MANAGER_vftable_27() = 0;
    virtual void PATH_MANAGER_vftable_28() = 0;
    virtual void PATH_MANAGER_vftable_29() = 0;
};

ADDRESSVFTABLE(0x009ADEBC, EnemyGenerator_G);
class __declspec(dllexport) EnemyGenerator_G : public ObjectGame_Z
{
public:
    ADDRESSSYMBOL(0x005A48D0, "?BaseObject_Z_vftable_0@EnemyGenerator_G@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x004D4470, EnemyGenerator_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    virtual void Manipulator_Z_vftable_14() override;
    ADDRESSSYMBOL(0x005A51B0, "?Manipulator_Z_vftable_17@EnemyGenerator_G@@UAEXH@Z");
    virtual void Manipulator_Z_vftable_17(int) override;
    ADDRESSSYMBOL(0x005A4C70, "?ObjectGame_Z_vftable_21@EnemyGenerator_G@@UAEXH@Z");
    virtual void ObjectGame_Z_vftable_21(int) override;
    char data[60];
};

ADDRESSVFTABLE(0x009B17D4, LodMove_Z);
class __declspec(dllexport) LodMove_Z : public ObjectThrow_Z
{
public:
    ADDRESSSYMBOL(0x00671480, "?BaseObject_Z_vftable_0@LodMove_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x004DF7F0, LodMove_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x00671580, "?Manipulator_Z_vftable_14@LodMove_Z@@UAEXXZ");
    virtual void Manipulator_Z_vftable_14() override;
    ADDRESSSYMBOL(0x00672180, "?Manipulator_Z_vftable_17@LodMove_Z@@UAEXH@Z");
    virtual void Manipulator_Z_vftable_17(int) override;
    ADDRESSSYMBOL(0x00672190, "?ObjectMove_Z_vftable_19@LodMove_Z@@UAEXHHHHH@Z");
    virtual void ObjectMove_Z_vftable_19(int, int, int, int, int) override;
    ADDRESSVF(0x00672B30, LodMove_Z, ObjectMove_Z_vftable_22);
    virtual void ObjectMove_Z_vftable_22() override;
    ADDRESSVF(0x00672C50, LodMove_Z, ObjectMove_Z_vftable_24);
    virtual void ObjectMove_Z_vftable_24() override;
    ADDRESSVF(0x00672BC0, LodMove_Z, ObjectMove_Z_vftable_26);
    virtual void ObjectMove_Z_vftable_26() override;
    ADDRESSVF(0x0071A840, LodMove_Z, ObjectMove_Z_vftable_27);
    virtual void ObjectMove_Z_vftable_27() override;
    ADDRESSVF(0x00728460, LodMove_Z, ObjectMove_Z_vftable_30);
    virtual void ObjectMove_Z_vftable_30() override;
    ADDRESSVF(0x006722D0, LodMove_Z, ObjectMove_Z_vftable_33);
    virtual void ObjectMove_Z_vftable_33() override;
    ADDRESSVF(0x00671EA0, LodMove_Z, ObjectMove_Z_vftable_50);
    virtual void ObjectMove_Z_vftable_50() override;
    ADDRESSVF(0x00671EE0, LodMove_Z, ObjectMove_Z_vftable_53);
    virtual void ObjectMove_Z_vftable_53() override;
    ADDRESSVF(0x00672040, LodMove_Z, ObjectMove_Z_vftable_54);
    virtual void ObjectMove_Z_vftable_54() override;
    ADDRESSVF(0x00719A20, LodMove_Z, ObjectMove_Z_vftable_72);
    virtual void ObjectMove_Z_vftable_72() override;
    ADDRESSSYMBOL(0x00674900, "?ObjectThrow_Z_vftable_85@LodMove_Z@@UAEXHHH@Z");
    virtual void ObjectThrow_Z_vftable_85(int, int, int) override;
    ADDRESSVF(0x004DBB10, LodMove_Z, LodMove_Z_vftable_87);
    virtual void LodMove_Z_vftable_87();
    virtual void LodMove_Z_vftable_88(int);
    virtual void LodMove_Z_vftable_89(int);
    virtual void LodMove_Z_vftable_90(int);
    ADDRESSVF(0x004DBAB0, LodMove_Z, LodMove_Z_vftable_91);
    virtual void LodMove_Z_vftable_91();
    ADDRESSVF(0x004DBA80, LodMove_Z, LodMove_Z_vftable_92);
    virtual void LodMove_Z_vftable_92();
    ADDRESSVF(0x004DBA70, LodMove_Z, LodMove_Z_vftable_93);
    virtual void LodMove_Z_vftable_93();
    ADDRESSVF(0x004DBA60, LodMove_Z, LodMove_Z_vftable_94);
    virtual void LodMove_Z_vftable_94();
    ADDRESSVF(0x00673580, LodMove_Z, LodMove_Z_vftable_95);
    virtual void LodMove_Z_vftable_95();
    ADDRESSVF(0x0072E080, LodMove_Z, LodMove_Z_vftable_96);
    virtual void LodMove_Z_vftable_96();
    ADDRESSVF(0x004DBA50, LodMove_Z, LodMove_Z_vftable_97);
    virtual void LodMove_Z_vftable_97();
    ADDRESSVF(0x004DBA40, LodMove_Z, LodMove_Z_vftable_98);
    virtual void LodMove_Z_vftable_98();
    ADDRESSVF(0x004DBA30, LodMove_Z, LodMove_Z_vftable_99);
    virtual void LodMove_Z_vftable_99();
    ADDRESSVF(0x004DBA20, LodMove_Z, LodMove_Z_vftable_100);
    virtual void LodMove_Z_vftable_100();
    ADDRESSVF(0x004DBA10, LodMove_Z, LodMove_Z_vftable_101);
    virtual void LodMove_Z_vftable_101();
    ADDRESSVF(0x006723D0, LodMove_Z, LodMove_Z_vftable_102);
    virtual void LodMove_Z_vftable_102();
    char data[284];
};

ADDRESSVFTABLE(0x009CB614, cA_RoadSegment);
class __declspec(dllexport) cA_RoadSegment : public cA_Segment
{
public:
    ADDRESSVF(0x006F19F0, cA_RoadSegment, cA_BaseSurface_vftable_0);
    virtual void cA_BaseSurface_vftable_0() override;
    ADDRESSVF(0x006F18F0, cA_RoadSegment, cA_BaseSurface_vftable_1);
    virtual void cA_BaseSurface_vftable_1() override;
    ADDRESSVF(0x006FDDC0, cA_RoadSegment, cA_BaseSurface_vftable_2);
    virtual void cA_BaseSurface_vftable_2() override;
    ADDRESSVF(0x006FDDF0, cA_RoadSegment, cA_BaseSurface_vftable_3);
    virtual void cA_BaseSurface_vftable_3() override;
    ADDRESSSYMBOL(0x006FDE10, "?cA_BaseSurface_vftable_4@cA_RoadSegment@@UAEXHH@Z");
    virtual void cA_BaseSurface_vftable_4(int, int) override;
    ADDRESSSYMBOL(0x006FDE30, "?cA_BaseSurface_vftable_5@cA_RoadSegment@@UAEHH@Z");
    virtual int cA_BaseSurface_vftable_5(int) override;
    ADDRESSSYMBOL(0x006FDE70, "?cA_BaseSurface_vftable_6@cA_RoadSegment@@UAEXHH@Z");
    virtual void cA_BaseSurface_vftable_6(int, int) override;
    ADDRESSSYMBOL(0x006FDE50, "?cA_BaseSurface_vftable_7@cA_RoadSegment@@UAEXHH@Z");
    virtual void cA_BaseSurface_vftable_7(int, int) override;
};

ADDRESSVFTABLE(0x009A1EDC, CS_Class_ATTACKSUCCESS);
class __declspec(dllexport) CS_Class_ATTACKSUCCESS : public CreaturesState_G
{
public:
    ADDRESSVF(0x00426400, CS_Class_ATTACKSUCCESS, StateTemplate_G_vftable_0);
    virtual void StateTemplate_G_vftable_0() override;
    ADDRESSSYMBOL(0x00426B90, "?StateTemplate_G_vftable_1@CS_Class_ATTACKSUCCESS@@UAEXH@Z");
    virtual void StateTemplate_G_vftable_1(int) override;
    ADDRESSSYMBOL(0x00426C00, "?StateTemplate_G_vftable_3@CS_Class_ATTACKSUCCESS@@UAEDH@Z");
    virtual char StateTemplate_G_vftable_3(int) override;
};

ADDRESSVFTABLE(0x009AC2AC, VignettageHUD);
class __declspec(dllexport) VignettageHUD : public ViewportHUD
{
public:
    ADDRESSSYMBOL(0x004CAE30, "?ViewportHUD_vftable_0@VignettageHUD@@UAEXH@Z");
    virtual void ViewportHUD_vftable_0(int) override;
    virtual void ViewportHUD_vftable_1() override;
    ADDRESSSYMBOL(0x004CAE70, "?ViewportHUD_vftable_2@VignettageHUD@@UAEXH@Z");
    virtual void ViewportHUD_vftable_2(int) override;
    ADDRESSSYMBOL(0x004CAEF0, "?ViewportHUD_vftable_5@VignettageHUD@@UAEXH@Z");
    virtual void ViewportHUD_vftable_5(int) override;
};

ADDRESSVFTABLE(0x009A4E24, Dialog_NetworkAlert);
class __declspec(dllexport) Dialog_NetworkAlert : public DialogMenu_G
{
public:
    ADDRESSVF(0x004418B0, Dialog_NetworkAlert, CWindowHierarchy_G_vftable_0);
    virtual void CWindowHierarchy_G_vftable_0() override;
    ADDRESSSYMBOL(0x00441B10, "?Dialog_G_vftable_15@Dialog_NetworkAlert@@UAEXXZ");
    virtual void Dialog_G_vftable_15() override;
    ADDRESSSYMBOL(0x00441B00, "?Dialog_G_vftable_16@Dialog_NetworkAlert@@UAEXH@Z");
    virtual void Dialog_G_vftable_16(int) override;
    ADDRESSSYMBOL(0x004418F0, "?Dialog_G_vftable_17@Dialog_NetworkAlert@@UAEXXZ");
    virtual void Dialog_G_vftable_17() override;
    ADDRESSVF(0x004419D0, Dialog_NetworkAlert, Dialog_G_vftable_19);
    virtual void Dialog_G_vftable_19() override;
    ADDRESSSYMBOL(0x00441AA0, "?Dialog_G_vftable_20@Dialog_NetworkAlert@@UAEXXZ");
    virtual void Dialog_G_vftable_20() override;
    ADDRESSVF(0x00441A50, Dialog_NetworkAlert, Dialog_G_vftable_22);
    virtual void Dialog_G_vftable_22() override;
};

ADDRESSVFTABLE(0x009C1640, CPurchaseMainStoryLevels);
class __declspec(dllexport) CPurchaseMainStoryLevels : public CPurchase
{
public:
    ADDRESSVF(0x005A2F20, CPurchaseMainStoryLevels, CPurchase_vftable_0);
    virtual void CPurchase_vftable_0() override;
};

ADDRESSVFTABLE(0x009ADE4C, VisibleObjectMgr_G);
class __declspec(dllexport) VisibleObjectMgr_G : public ObjectGame_Z
{
public:
    ADDRESSSYMBOL(0x004FC6F0, "?BaseObject_Z_vftable_0@VisibleObjectMgr_G@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x004D33F0, VisibleObjectMgr_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x004FC990, "?Manipulator_Z_vftable_14@VisibleObjectMgr_G@@UAEXXZ");
    virtual void Manipulator_Z_vftable_14() override;
    ADDRESSSYMBOL(0x004FC9D0, "?Manipulator_Z_vftable_17@VisibleObjectMgr_G@@UAEXH@Z");
    virtual void Manipulator_Z_vftable_17(int) override;
    char data[88];
};

ADDRESSVFTABLE(0x009C8FFC, VehiculeMove_Z);
class __declspec(dllexport) VehiculeMove_Z : public LodMove_Z
{
public:
    ADDRESSSYMBOL(0x007C3EC0, "?BaseObject_Z_vftable_0@VehiculeMove_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x00688240, VehiculeMove_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x007C3EF0, "?Manipulator_Z_vftable_14@VehiculeMove_Z@@UAEXXZ");
    virtual void Manipulator_Z_vftable_14() override;
    ADDRESSSYMBOL(0x007C3F20, "?ObjectMove_Z_vftable_19@VehiculeMove_Z@@UAEXHHHHH@Z");
    virtual void ObjectMove_Z_vftable_19(int, int, int, int, int) override;
};

ADDRESSVFTABLE(0x009AEC74, IAManipulator_G);
class __declspec(dllexport) IAManipulator_G : public ObjectGame_Z
{
public:
    ADDRESSSYMBOL(0x00620BA0, "?BaseObject_Z_vftable_0@IAManipulator_G@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x004D3240, IAManipulator_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    virtual void Manipulator_Z_vftable_14() override;
    ADDRESSSYMBOL(0x00620BC0, "?Manipulator_Z_vftable_15@IAManipulator_G@@UAEXXZ");
    virtual void Manipulator_Z_vftable_15() override;
    ADDRESSSYMBOL(0x00621930, "?Manipulator_Z_vftable_17@IAManipulator_G@@UAEXH@Z");
    virtual void Manipulator_Z_vftable_17(int) override;
    char data[175548];
};

ADDRESSVFTABLE(0x009BD7E4, Mission_Global);
class __declspec(dllexport) Mission_Global : public MissionTemplate_G
{
public:
    ADDRESSVF(0x0057F680, Mission_Global, MissionTemplate_G_vftable_0);
    virtual void MissionTemplate_G_vftable_0() override;
};

ADDRESSVFTABLE(0x009AEA9C, ComClient_Z);
class __declspec(dllexport) ComClient_Z : public ComObject_Z
{
public:
    ADDRESSVF(0x004D2EB0, ComClient_Z, NetObject_Z_vftable_0);
    virtual void NetObject_Z_vftable_0() override;
    ADDRESSVF(0x007171E0, ComClient_Z, NetObject_Z_vftable_1);
    virtual void NetObject_Z_vftable_1() override;
    ADDRESSVF(0x00717200, ComClient_Z, NetObject_Z_vftable_2);
    virtual void NetObject_Z_vftable_2() override;
    virtual void ComObject_Z_vftable_3(int) override;
    ADDRESSVF(0x00716FB0, ComClient_Z, ComObject_Z_vftable_4);
    virtual void ComObject_Z_vftable_4() override;
    ADDRESSVF(0x004D2D20, ComClient_Z, ComObject_Z_vftable_6);
    virtual void ComObject_Z_vftable_6() override;
    ADDRESSVF(0x004D2D60, ComClient_Z, ComObject_Z_vftable_7);
    virtual void ComObject_Z_vftable_7() override;
    ADDRESSVF(0x004D2DB0, ComClient_Z, ComObject_Z_vftable_8);
    virtual void ComObject_Z_vftable_8() override;
    ADDRESSVF(0x00717410, ComClient_Z, ComObject_Z_vftable_9);
    virtual void ComObject_Z_vftable_9() override;
    ADDRESSVF(0x004D2BB0, ComClient_Z, ComObject_Z_vftable_11);
    virtual void ComObject_Z_vftable_11() override;
    ADDRESSSYMBOL(0x004D2B50, "?ComObject_Z_vftable_12@ComClient_Z@@UAEHXZ");
    virtual int ComObject_Z_vftable_12() override;
    ADDRESSVF(0x004D2BD0, ComClient_Z, ComObject_Z_vftable_13);
    virtual void ComObject_Z_vftable_13() override;
    ADDRESSVF(0x004D2E20, ComClient_Z, ComObject_Z_vftable_14);
    virtual void ComObject_Z_vftable_14() override;
    ADDRESSVF(0x004D2DF0, ComClient_Z, ComObject_Z_vftable_15);
    virtual void ComObject_Z_vftable_15() override;
    ADDRESSVF(0x004D2E90, ComClient_Z, ComObject_Z_vftable_16);
    virtual void ComObject_Z_vftable_16() override;
    ADDRESSVF(0x00716EA0, ComClient_Z, ComClient_Z_vftable_17);
    virtual void ComClient_Z_vftable_17();
    ADDRESSVF(0x004D2CA0, ComClient_Z, ComClient_Z_vftable_18);
    virtual void ComClient_Z_vftable_18();
    ADDRESSVF(0x00717150, ComClient_Z, ComClient_Z_vftable_19);
    virtual void ComClient_Z_vftable_19();
};

ADDRESSVFTABLE(0x009D89BC, D3DTnL_VertexBuffer_Z);
class __declspec(dllexport) D3DTnL_VertexBuffer_Z : public VertexBuffer_Z
{
public:
    ADDRESSVF(0x0084C7E0, D3DTnL_VertexBuffer_Z, VertexBuffer_Z_vftable_0);
    virtual void VertexBuffer_Z_vftable_0() override;
    ADDRESSVF(0x0084C870, D3DTnL_VertexBuffer_Z, VertexBuffer_Z_vftable_1);
    virtual void VertexBuffer_Z_vftable_1() override;
    ADDRESSSYMBOL(0x0084C890, "?VertexBuffer_Z_vftable_3@D3DTnL_VertexBuffer_Z@@UAEXXZ");
    virtual void VertexBuffer_Z_vftable_3() override;
    ADDRESSVF(0x0084C850, D3DTnL_VertexBuffer_Z, VertexBuffer_Z_vftable_4);
    virtual void VertexBuffer_Z_vftable_4() override;
};

ADDRESSVFTABLE(0x009C03EC, CGuiSmoothAnimation_G);
class __declspec(dllexport) CGuiSmoothAnimation_G : public CGuiAnimations_G
{
public:
    ADDRESSVF(0x00596CA0, CGuiSmoothAnimation_G, CGuiAnimations_G_vftable_0);
    virtual void CGuiAnimations_G_vftable_0() override;
    ADDRESSVF(0x00596CE0, CGuiSmoothAnimation_G, CGuiAnimations_G_vftable_1);
    virtual void CGuiAnimations_G_vftable_1() override;
};

ADDRESSVFTABLE(0x009AE844, InGameFX_G);
class __declspec(dllexport) InGameFX_G : public ManipulatorSceneDraw_Z
{
public:
    ADDRESSVF(0x004D4910, InGameFX_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    virtual void Manipulator_Z_vftable_17(int) override;
    virtual void ManipulatorSceneDraw_Z_vftable_19(int) override;
    ADDRESSVF(0x0043EC70, InGameFX_G, InGameFX_G_vftable_20);
    virtual void InGameFX_G_vftable_20();
    char data[28];
};

ADDRESSVFTABLE(0x009C2BBC, GamePlayerInfoClient_G);
class __declspec(dllexport) GamePlayerInfoClient_G : public GamePlayerInfo_G
{
public:
    ADDRESSVF(0x005AED10, GamePlayerInfoClient_G, ComObj_Z_vftable_0);
    virtual void ComObj_Z_vftable_0() override;
    ADDRESSSYMBOL(0x005AED90, "?ComObj_Z_vftable_3@GamePlayerInfoClient_G@@UAEXH@Z");
    virtual void ComObj_Z_vftable_3(int) override;
    ADDRESSSYMBOL(0x005AEEB0, "?ComObj_Z_vftable_4@GamePlayerInfoClient_G@@UAEXH@Z");
    virtual void ComObj_Z_vftable_4(int) override;
};

ADDRESSVFTABLE(0x009C8D9C, ObjectsGame_Z);
class __declspec(dllexport) ObjectsGame_Z : public ObjectGame_Z
{
public:
    ADDRESSSYMBOL(0x007B85A0, "?BaseObject_Z_vftable_0@ObjectsGame_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x00686ED0, ObjectsGame_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x007B8770, "?Manipulator_Z_vftable_14@ObjectsGame_Z@@UAEXXZ");
    virtual void Manipulator_Z_vftable_14() override;
    ADDRESSSYMBOL(0x007B86D0, "?Manipulator_Z_vftable_15@ObjectsGame_Z@@UAEXXZ");
    virtual void Manipulator_Z_vftable_15() override;
    ADDRESSSYMBOL(0x007B85D0, "?Manipulator_Z_vftable_16@ObjectsGame_Z@@UAEXXZ");
    virtual void Manipulator_Z_vftable_16() override;
    ADDRESSSYMBOL(0x007B9140, "?Manipulator_Z_vftable_17@ObjectsGame_Z@@UAEXH@Z");
    virtual void Manipulator_Z_vftable_17(int) override;
    ADDRESSSYMBOL(0x007B8850, "?ObjectGame_Z_vftable_19@ObjectsGame_Z@@UAEXH@Z");
    virtual void ObjectGame_Z_vftable_19(int) override;
    ADDRESSSYMBOL(0x007B8A50, "?ObjectGame_Z_vftable_20@ObjectsGame_Z@@UAEXH@Z");
    virtual void ObjectGame_Z_vftable_20(int) override;
    virtual void ObjectGame_Z_vftable_21(int) override;
    char data[1412];
};

ADDRESSVFTABLE(0x009DA6CC, X360LiveFriend_Z);
class __declspec(dllexport) X360LiveFriend_Z : public LiveFriend_Z
{
public:
    ADDRESSVF(0x00873660, X360LiveFriend_Z, LiveFriend_Z_vftable_0);
    virtual void LiveFriend_Z_vftable_0() override;
    ADDRESSVF(0x00873580, X360LiveFriend_Z, LiveFriend_Z_vftable_1);
    virtual void LiveFriend_Z_vftable_1() override;
    ADDRESSVF(0x00873590, X360LiveFriend_Z, LiveFriend_Z_vftable_2);
    virtual void LiveFriend_Z_vftable_2() override;
    ADDRESSVF(0x008735E0, X360LiveFriend_Z, LiveFriend_Z_vftable_3);
    virtual void LiveFriend_Z_vftable_3() override;
    ADDRESSVF(0x008735F0, X360LiveFriend_Z, LiveFriend_Z_vftable_4);
    virtual void LiveFriend_Z_vftable_4() override;
    ADDRESSVF(0x00873610, X360LiveFriend_Z, LiveFriend_Z_vftable_5);
    virtual void LiveFriend_Z_vftable_5() override;
    ADDRESSVF(0x00873630, X360LiveFriend_Z, LiveFriend_Z_vftable_6);
    virtual void LiveFriend_Z_vftable_6() override;
    ADDRESSVF(0x00873640, X360LiveFriend_Z, LiveFriend_Z_vftable_7);
    virtual void LiveFriend_Z_vftable_7() override;
    ADDRESSVF(0x00873650, X360LiveFriend_Z, LiveFriend_Z_vftable_8);
    virtual void LiveFriend_Z_vftable_8() override;
};

ADDRESSVFTABLE(0x009C03D4, CGuiLinearAnimation_G);
class __declspec(dllexport) CGuiLinearAnimation_G : public CGuiAnimations_G
{
public:
    ADDRESSVF(0x00596A60, CGuiLinearAnimation_G, CGuiAnimations_G_vftable_0);
    virtual void CGuiAnimations_G_vftable_0() override;
    ADDRESSVF(0x00596AA0, CGuiLinearAnimation_G, CGuiAnimations_G_vftable_1);
    virtual void CGuiAnimations_G_vftable_1() override;
    ADDRESSSYMBOL(0x00596C60, "?CGuiAnimations_G_vftable_2@CGuiLinearAnimation_G@@UAEXXZ");
    virtual void CGuiAnimations_G_vftable_2() override;
    ADDRESSSYMBOL(0x00596C70, "?CGuiAnimations_G_vftable_3@CGuiLinearAnimation_G@@UAEXXZ");
    virtual void CGuiAnimations_G_vftable_3() override;
};

ADDRESSVFTABLE(0x009BDE34, DialogInGame_G);
class __declspec(dllexport) DialogInGame_G : public Dialog_G
{
public:
    ADDRESSVF(0x00585AE0, DialogInGame_G, CWindowHierarchy_G_vftable_0);
    virtual void CWindowHierarchy_G_vftable_0() override;
    ADDRESSSYMBOL(0x00585C50, "?Dialog_G_vftable_15@DialogInGame_G@@UAEXXZ");
    virtual void Dialog_G_vftable_15() override;
    virtual void Dialog_G_vftable_17() override;
    virtual void Dialog_G_vftable_22() override;
    ADDRESSVF(0x00585B30, DialogInGame_G, Dialog_G_vftable_23);
    virtual void Dialog_G_vftable_23() override;
    ADDRESSVF(0x00585AA0, DialogInGame_G, DialogInGame_G_vftable_28);
    virtual void DialogInGame_G_vftable_28();
};

ADDRESSVFTABLE(0x009A1E04, CS_Class_INIT);
class __declspec(dllexport) CS_Class_INIT : public CreaturesState_G
{
public:
    ADDRESSVF(0x00426280, CS_Class_INIT, StateTemplate_G_vftable_0);
    virtual void StateTemplate_G_vftable_0() override;
    ADDRESSSYMBOL(0x00428230, "?StateTemplate_G_vftable_3@CS_Class_INIT@@UAEDH@Z");
    virtual char StateTemplate_G_vftable_3(int) override;
};

ADDRESSVFTABLE(0x009D2EAC, Binary_Z);
class __declspec(dllexport) Binary_Z : public ResourceObject_Z
{
public:
    ADDRESSVF(0x007C1D10, Binary_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x007C1DA0, "?BaseObject_Z_vftable_3@Binary_Z@@UAEXH@Z");
    virtual void BaseObject_Z_vftable_3(int) override;
    char data[8];
};

ADDRESSVFTABLE(0x009B2CC4, GPSMgr_G);
class __declspec(dllexport) GPSMgr_G : public ObjectGame_Z
{
public:
    ADDRESSSYMBOL(0x004EFA90, "?BaseObject_Z_vftable_0@GPSMgr_G@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x004EFA40, GPSMgr_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x004EFAB0, "?Manipulator_Z_vftable_14@GPSMgr_G@@UAEXXZ");
    virtual void Manipulator_Z_vftable_14() override;
    ADDRESSSYMBOL(0x004EFAD0, "?Manipulator_Z_vftable_17@GPSMgr_G@@UAEXH@Z");
    virtual void Manipulator_Z_vftable_17(int) override;
    char data[80];
};

ADDRESSVFTABLE(0x009C3314, GameLobbyServer_G);
class __declspec(dllexport) GameLobbyServer_G : public GameLobby_G
{
public:
    ADDRESSVF(0x005B5AC0, GameLobbyServer_G, ComObj_Z_vftable_0);
    virtual void ComObj_Z_vftable_0() override;
    ADDRESSSYMBOL(0x005AE2B0, "?ComObj_Z_vftable_1@GameLobbyServer_G@@UAEXXZ");
    virtual void ComObj_Z_vftable_1() override;
    ADDRESSSYMBOL(0x005AE3B0, "?ComObj_Z_vftable_3@GameLobbyServer_G@@UAEXH@Z");
    virtual void ComObj_Z_vftable_3(int) override;
    virtual void ComObj_Z_vftable_4(int) override;
};

ADDRESSVFTABLE(0x009B815C, VolumeAgent_Z);
class __declspec(dllexport) VolumeAgent_Z : public Agent_Z
{
public:
    ADDRESSVF(0x00545DD0, VolumeAgent_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x00545E10, "?ABC_Agent_vftable_14@VolumeAgent_Z@@UAEHXZ");
    virtual int ABC_Agent_vftable_14() override;
    ADDRESSVF(0x00545E20, VolumeAgent_Z, ABC_Agent_vftable_15);
    virtual void ABC_Agent_vftable_15() override;
    ADDRESSSYMBOL(0x00545E40, "?ABC_Agent_vftable_16@VolumeAgent_Z@@UAEXH@Z");
    virtual void ABC_Agent_vftable_16(int) override;
    ADDRESSVF(0x00545E30, VolumeAgent_Z, ABC_Agent_vftable_17);
    virtual void ABC_Agent_vftable_17() override;
    virtual void Agent_Z_vftable_22() override;
    ADDRESSVF(0x00736E70, VolumeAgent_Z, VolumeAgent_Z_vftable_39);
    virtual void VolumeAgent_Z_vftable_39();
    ADDRESSSYMBOL(0x00737340, "?VolumeAgent_Z_vftable_40@VolumeAgent_Z@@UAEXXZ");
    virtual void VolumeAgent_Z_vftable_40();
    ADDRESSVF(0x00737390, VolumeAgent_Z, VolumeAgent_Z_vftable_41);
    virtual void VolumeAgent_Z_vftable_41();
    ADDRESSSYMBOL(0x007373D0, "?VolumeAgent_Z_vftable_42@VolumeAgent_Z@@UAEXH@Z");
    virtual void VolumeAgent_Z_vftable_42(int);
    virtual void VolumeAgent_Z_vftable_43(int);
    virtual void VolumeAgent_Z_vftable_44(int);
    virtual void VolumeAgent_Z_vftable_45(int);
};

ADDRESSVFTABLE(0x009CCDE4, SoundManager_Z);
class __declspec(dllexport) SoundManager_Z : public ClassNameResManager_Z
{
public:
    ADDRESSVF(0x007345F0, SoundManager_Z, ClassNameResManager_Z_vftable_0);
    virtual void ClassNameResManager_Z_vftable_0() override;
    virtual void ClassNameResManager_Z_vftable_1() override;
    ADDRESSVF(0x007327B0, SoundManager_Z, ClassNameResManager_Z_vftable_3);
    virtual void ClassNameResManager_Z_vftable_3() override;
    virtual char SoundManager_Z_vftable_4();
    ADDRESSVF(0x00734000, SoundManager_Z, SoundManager_Z_vftable_5);
    virtual void SoundManager_Z_vftable_5();
    virtual char SoundManager_Z_vftable_6();
    virtual char SoundManager_Z_vftable_7();
    virtual void SoundManager_Z_vftable_8();
    ADDRESSVF(0x00733550, SoundManager_Z, SoundManager_Z_vftable_9);
    virtual void SoundManager_Z_vftable_9();
    ADDRESSVF(0x007336A0, SoundManager_Z, SoundManager_Z_vftable_10);
    virtual void SoundManager_Z_vftable_10();
    ADDRESSVF(0x00732F40, SoundManager_Z, SoundManager_Z_vftable_11);
    virtual void SoundManager_Z_vftable_11();
    virtual void SoundManager_Z_vftable_12(int);
    virtual void SoundManager_Z_vftable_13();
    ADDRESSVF(0x007327C0, SoundManager_Z, SoundManager_Z_vftable_14);
    virtual void SoundManager_Z_vftable_14();
    ADDRESSVF(0x007346A0, SoundManager_Z, SoundManager_Z_vftable_15);
    virtual void SoundManager_Z_vftable_15();
    ADDRESSVF(0x007346C0, SoundManager_Z, SoundManager_Z_vftable_16);
    virtual void SoundManager_Z_vftable_16();
    ADDRESSVF(0x00734700, SoundManager_Z, SoundManager_Z_vftable_17);
    virtual void SoundManager_Z_vftable_17();
    ADDRESSVF(0x00734710, SoundManager_Z, SoundManager_Z_vftable_18);
    virtual void SoundManager_Z_vftable_18();
    ADDRESSVF(0x00734750, SoundManager_Z, SoundManager_Z_vftable_19);
    virtual void SoundManager_Z_vftable_19();
    ADDRESSVF(0x00734760, SoundManager_Z, SoundManager_Z_vftable_20);
    virtual void SoundManager_Z_vftable_20();
    ADDRESSVF(0x007347A0, SoundManager_Z, SoundManager_Z_vftable_21);
    virtual void SoundManager_Z_vftable_21();
    ADDRESSVF(0x007347B0, SoundManager_Z, SoundManager_Z_vftable_22);
    virtual void SoundManager_Z_vftable_22();
    virtual void SoundManager_Z_vftable_23(int);
    virtual void SoundManager_Z_vftable_24();
    ADDRESSVF(0x007347F0, SoundManager_Z, SoundManager_Z_vftable_25);
    virtual void SoundManager_Z_vftable_25();
    ADDRESSVF(0x00734800, SoundManager_Z, SoundManager_Z_vftable_26);
    virtual void SoundManager_Z_vftable_26();
    virtual void SoundManager_Z_vftable_27(int);
    ADDRESSVF(0x00734820, SoundManager_Z, SoundManager_Z_vftable_28);
    virtual void SoundManager_Z_vftable_28();
    virtual char SoundManager_Z_vftable_29(int);
    virtual char SoundManager_Z_vftable_30();
    ADDRESSVF(0x00734850, SoundManager_Z, SoundManager_Z_vftable_31);
    virtual void SoundManager_Z_vftable_31();
    virtual void SoundManager_Z_vftable_32(int, int, int, int);
    virtual void SoundManager_Z_vftable_33(int, int, int, int);
    ADDRESSVF(0x00734880, SoundManager_Z, SoundManager_Z_vftable_34);
    virtual void SoundManager_Z_vftable_34();
    ADDRESSVF(0x00734890, SoundManager_Z, SoundManager_Z_vftable_35);
    virtual void SoundManager_Z_vftable_35();
    virtual void SoundManager_Z_vftable_36(int);
    virtual char SoundManager_Z_vftable_37();
    ADDRESSVF(0x007348C0, SoundManager_Z, SoundManager_Z_vftable_38);
    virtual void SoundManager_Z_vftable_38();
    ADDRESSVF(0x00732CA0, SoundManager_Z, SoundManager_Z_vftable_39);
    virtual void SoundManager_Z_vftable_39();
    virtual void SoundManager_Z_vftable_40(int);
    ADDRESSVF(0x00732AF0, SoundManager_Z, SoundManager_Z_vftable_41);
    virtual void SoundManager_Z_vftable_41();
    virtual int SoundManager_Z_vftable_42(int);
    virtual void SoundManager_Z_vftable_43(int);
    virtual char SoundManager_Z_vftable_44();
    virtual char SoundManager_Z_vftable_45();
    virtual char SoundManager_Z_vftable_46();
    ADDRESSVF(0x00733150, SoundManager_Z, SoundManager_Z_vftable_47);
    virtual void SoundManager_Z_vftable_47();
    ADDRESSVF(0x00734200, SoundManager_Z, SoundManager_Z_vftable_48);
    virtual void SoundManager_Z_vftable_48();
    ADDRESSVF(0x00734930, SoundManager_Z, SoundManager_Z_vftable_49);
    virtual void SoundManager_Z_vftable_49();
    ADDRESSVF(0x00733AC0, SoundManager_Z, SoundManager_Z_vftable_50);
    virtual void SoundManager_Z_vftable_50();
    ADDRESSVF(0x00734940, SoundManager_Z, SoundManager_Z_vftable_51);
    virtual void SoundManager_Z_vftable_51();
    ADDRESSVF(0x00733E50, SoundManager_Z, SoundManager_Z_vftable_52);
    virtual void SoundManager_Z_vftable_52();
    char data[1];
};

ADDRESSVFTABLE(0x009D0938, AGW_TerraBigLake);
class __declspec(dllexport) AGW_TerraBigLake : public AGW_TerraForms
{
public:
    virtual void AGW_TerraForms_vftable_2(int, int, int) override;
    ADDRESSSYMBOL(0x0065A670, "?AGW_TerraForms_vftable_3@AGW_TerraBigLake@@UAEDXZ");
    virtual char AGW_TerraForms_vftable_3() override;
    ADDRESSSYMBOL(0x0065A120, "?AGW_TerraForms_vftable_4@AGW_TerraBigLake@@UAEXHH@Z");
    virtual void AGW_TerraForms_vftable_4(int, int) override;
    ADDRESSSYMBOL(0x0065A0E0, "?AGW_TerraForms_vftable_5@AGW_TerraBigLake@@UAEXXZ");
    virtual void AGW_TerraForms_vftable_5() override;
    ADDRESSVF(0x0074D0B0, AGW_TerraBigLake, AGW_TerraForms_vftable_6);
    virtual void AGW_TerraForms_vftable_6() override;
    ADDRESSVF(0x0074D0D0, AGW_TerraBigLake, AGW_TerraForms_vftable_7);
    virtual void AGW_TerraForms_vftable_7() override;
    ADDRESSVF(0x0065A7E0, AGW_TerraBigLake, AGW_TerraForms_vftable_8);
    virtual void AGW_TerraForms_vftable_8() override;
    ADDRESSVF(0x0074D0E0, AGW_TerraBigLake, AGW_TerraForms_vftable_9);
    virtual void AGW_TerraForms_vftable_9() override;
    ADDRESSVF(0x0074E340, AGW_TerraBigLake, AGW_TerraForms_vftable_11);
    virtual void AGW_TerraForms_vftable_11() override;
    ADDRESSVF(0x0065A260, AGW_TerraBigLake, AGW_TerraForms_vftable_12);
    virtual void AGW_TerraForms_vftable_12() override;
};

ADDRESSVFTABLE(0x009C72B4, ParticlesAgent_Z);
class __declspec(dllexport) ParticlesAgent_Z : public Agent_Z
{
public:
    ADDRESSSYMBOL(0x00677360, "?BaseObject_Z_vftable_0@ParticlesAgent_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x00677320, ParticlesAgent_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSVF(0x006775D0, ParticlesAgent_Z, BaseObject_Z_vftable_13);
    virtual void BaseObject_Z_vftable_13() override;
    ADDRESSSYMBOL(0x006771C0, "?ABC_Agent_vftable_14@ParticlesAgent_Z@@UAEHXZ");
    virtual int ABC_Agent_vftable_14() override;
    ADDRESSVF(0x006771D0, ParticlesAgent_Z, ABC_Agent_vftable_15);
    virtual void ABC_Agent_vftable_15() override;
    ADDRESSSYMBOL(0x006771E0, "?ABC_Agent_vftable_16@ParticlesAgent_Z@@UAEXH@Z");
    virtual void ABC_Agent_vftable_16(int) override;
    ADDRESSVF(0x00677210, ParticlesAgent_Z, ABC_Agent_vftable_17);
    virtual void ABC_Agent_vftable_17() override;
    ADDRESSSYMBOL(0x00677520, "?ABC_Agent_vftable_18@ParticlesAgent_Z@@UAEXXZ");
    virtual void ABC_Agent_vftable_18() override;
    ADDRESSSYMBOL(0x00677580, "?ABC_Agent_vftable_19@ParticlesAgent_Z@@UAEXXZ");
    virtual void ABC_Agent_vftable_19() override;
    ADDRESSSYMBOL(0x00677390, "?Agent_Z_vftable_20@ParticlesAgent_Z@@UAEXXZ");
    virtual void Agent_Z_vftable_20() override;
    ADDRESSVF(0x00677710, ParticlesAgent_Z, Agent_Z_vftable_22);
    virtual void Agent_Z_vftable_22() override;
    ADDRESSVF(0x00677840, ParticlesAgent_Z, Agent_Z_vftable_24);
    virtual void Agent_Z_vftable_24() override;
    ADDRESSVF(0x006778B0, ParticlesAgent_Z, Agent_Z_vftable_25);
    virtual void Agent_Z_vftable_25() override;
    ADDRESSVF(0x00677920, ParticlesAgent_Z, Agent_Z_vftable_26);
    virtual void Agent_Z_vftable_26() override;
    ADDRESSVF(0x00677A70, ParticlesAgent_Z, ParticlesAgent_Z_vftable_39);
    virtual void ParticlesAgent_Z_vftable_39();
    char data[16];
};

ADDRESSVFTABLE(0x009CAE98, CompQuat_32_Z);
class __declspec(dllexport) CompQuat_32_Z : public CompField_Z
{
public:
    ADDRESSVF(0x006C25E0, CompQuat_32_Z, CompField_Z_vftable_0);
    virtual void CompField_Z_vftable_0() override;
    virtual int CompField_Z_vftable_1() override;
    virtual int CompField_Z_vftable_2() override;
    virtual int CompField_Z_vftable_3() override;
    ADDRESSVF(0x006C2160, CompQuat_32_Z, CompField_Z_vftable_4);
    virtual void CompField_Z_vftable_4() override;
    ADDRESSVF(0x006C2170, CompQuat_32_Z, CompField_Z_vftable_5);
    virtual void CompField_Z_vftable_5() override;
};

ADDRESSVFTABLE(0x009C33CC, WeatherManager_G);
class __declspec(dllexport) WeatherManager_G : public ObjectGame_Z
{
public:
    ADDRESSSYMBOL(0x005B97B0, "?BaseObject_Z_vftable_0@WeatherManager_G@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x005B7D70, WeatherManager_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x005B9760, "?Manipulator_Z_vftable_14@WeatherManager_G@@UAEXXZ");
    virtual void Manipulator_Z_vftable_14() override;
    ADDRESSSYMBOL(0x005B9730, "?Manipulator_Z_vftable_17@WeatherManager_G@@UAEXH@Z");
    virtual void Manipulator_Z_vftable_17(int) override;
    ADDRESSVF(0x005B9830, WeatherManager_G, ObjectGame_Z_vftable_22);
    virtual void ObjectGame_Z_vftable_22() override;
    char data[364];
};

ADDRESSVFTABLE(0x009A1E1C, CS_Class_INACTIVE);
class __declspec(dllexport) CS_Class_INACTIVE : public CreaturesState_G
{
public:
    ADDRESSVF(0x004262C0, CS_Class_INACTIVE, StateTemplate_G_vftable_0);
    virtual void StateTemplate_G_vftable_0() override;
    ADDRESSSYMBOL(0x00428330, "?StateTemplate_G_vftable_1@CS_Class_INACTIVE@@UAEXH@Z");
    virtual void StateTemplate_G_vftable_1(int) override;
    ADDRESSSYMBOL(0x00428390, "?StateTemplate_G_vftable_2@CS_Class_INACTIVE@@UAEXH@Z");
    virtual void StateTemplate_G_vftable_2(int) override;
    ADDRESSSYMBOL(0x00428350, "?StateTemplate_G_vftable_3@CS_Class_INACTIVE@@UAEDH@Z");
    virtual char StateTemplate_G_vftable_3(int) override;
};

ADDRESSVFTABLE(0x009AE794, FXParticlesDraw_G);
class __declspec(dllexport) FXParticlesDraw_G : public ManipulatorSceneDraw_Z
{
public:
    ADDRESSSYMBOL(0x005FE9E0, "?BaseObject_Z_vftable_0@FXParticlesDraw_G@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x004D47B0, FXParticlesDraw_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    virtual void Manipulator_Z_vftable_14() override;
    ADDRESSSYMBOL(0x005FEBB0, "?Manipulator_Z_vftable_17@FXParticlesDraw_G@@UAEXH@Z");
    virtual void Manipulator_Z_vftable_17(int) override;
    ADDRESSSYMBOL(0x005FEC30, "?ManipulatorSceneDraw_Z_vftable_19@FXParticlesDraw_G@@UAEXH@Z");
    virtual void ManipulatorSceneDraw_Z_vftable_19(int) override;
    char data[71720];
};

ADDRESSVFTABLE(0x009A48E4, FlashScreenFxManipulator_G);
class __declspec(dllexport) FlashScreenFxManipulator_G : public ManipulatorDraw_Z
{
public:
    ADDRESSSYMBOL(0x0043E890, "?BaseObject_Z_vftable_0@FlashScreenFxManipulator_G@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x0043E840, FlashScreenFxManipulator_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x0043EB90, "?Manipulator_Z_vftable_17@FlashScreenFxManipulator_G@@UAEXH@Z");
    virtual void Manipulator_Z_vftable_17(int) override;
    ADDRESSVF(0x0043EC10, FlashScreenFxManipulator_G, ManipulatorDraw_Z_vftable_18);
    virtual void ManipulatorDraw_Z_vftable_18() override;
    ADDRESSVF(0x0043E8C0, FlashScreenFxManipulator_G, FlashScreenFxManipulator_G_vftable_20);
    virtual void FlashScreenFxManipulator_G_vftable_20();
    char data[40];
};

ADDRESSVFTABLE(0x009C5454, ClassManager_Z);
class __declspec(dllexport) ClassManager_Z : public HandleManager_Z
{
public:
    ADDRESSVF(0x00633620, ClassManager_Z, HandleManager_Z_vftable_0);
    virtual void HandleManager_Z_vftable_0() override;
    ADDRESSVF(0x00633870, ClassManager_Z, HandleManager_Z_vftable_2);
    virtual void HandleManager_Z_vftable_2() override;
    ADDRESSVF(0x006339C0, ClassManager_Z, HandleManager_Z_vftable_3);
    virtual void HandleManager_Z_vftable_3() override;
    ADDRESSVF(0x00633950, ClassManager_Z, HandleManager_Z_vftable_6);
    virtual void HandleManager_Z_vftable_6() override;
    ADDRESSVF(0x007741F0, ClassManager_Z, HandleManager_Z_vftable_8);
    virtual void HandleManager_Z_vftable_8() override;
    ADDRESSVF(0x00634770, ClassManager_Z, HandleManager_Z_vftable_10);
    virtual void HandleManager_Z_vftable_10() override;
    virtual void HandleManager_Z_vftable_11() override;
    ADDRESSVF(0x006339F0, ClassManager_Z, HandleManager_Z_vftable_13);
    virtual void HandleManager_Z_vftable_13() override;
    virtual void HandleManager_Z_vftable_15(int, int) override;
    ADDRESSSYMBOL(0x00634450, "?HandleManager_Z_vftable_16@ClassManager_Z@@UAEXHH@Z");
    virtual void HandleManager_Z_vftable_16(int, int) override;
    ADDRESSVF(0x00633A20, ClassManager_Z, ClassManager_Z_vftable_17);
    virtual void ClassManager_Z_vftable_17();
    virtual char ClassManager_Z_vftable_18(int);
    ADDRESSVF(0x00773B90, ClassManager_Z, ClassManager_Z_vftable_19);
    virtual void ClassManager_Z_vftable_19();
    ADDRESSVF(0x00773D60, ClassManager_Z, ClassManager_Z_vftable_20);
    virtual void ClassManager_Z_vftable_20();
    ADDRESSVF(0x00773A30, ClassManager_Z, ClassManager_Z_vftable_21);
    virtual void ClassManager_Z_vftable_21();
    virtual void ClassManager_Z_vftable_22();
    ADDRESSVF(0x00774430, ClassManager_Z, ClassManager_Z_vftable_23);
    virtual void ClassManager_Z_vftable_23();
    ADDRESSVF(0x007743B0, ClassManager_Z, ClassManager_Z_vftable_24);
    virtual void ClassManager_Z_vftable_24();
    ADDRESSVF(0x007744A0, ClassManager_Z, ClassManager_Z_vftable_25);
    virtual void ClassManager_Z_vftable_25();
    virtual char ClassManager_Z_vftable_26(int);
    ADDRESSVF(0x00633AE0, ClassManager_Z, ClassManager_Z_vftable_27);
    virtual void ClassManager_Z_vftable_27();
    char data[1608];
};

ADDRESSVFTABLE(0x009C15E0, CPurchaseMovieClip);
class __declspec(dllexport) CPurchaseMovieClip : public CPurchase
{
public:
    ADDRESSVF(0x005A2D20, CPurchaseMovieClip, CPurchase_vftable_0);
    virtual void CPurchase_vftable_0() override;
    virtual char CPurchase_vftable_1() override;
    ADDRESSVF(0x005A2D60, CPurchaseMovieClip, CPurchase_vftable_4);
    virtual void CPurchase_vftable_4() override;
};

ADDRESSVFTABLE(0x009D76D8, ComDBSetScoreIfGreater_Z);
class __declspec(dllexport) ComDBSetScoreIfGreater_Z : public ComDBCommand_Z
{
public:
    ADDRESSVF(0x00871670, ComDBSetScoreIfGreater_Z, ComDBCommand_Z_vftable_0);
    virtual void ComDBCommand_Z_vftable_0() override;
};

ADDRESSVFTABLE(0x009D13F4, FakeVertexBuffer_Z);
class __declspec(dllexport) FakeVertexBuffer_Z : public VertexBuffer_Z
{
public:
    ADDRESSVF(0x00773060, FakeVertexBuffer_Z, VertexBuffer_Z_vftable_0);
    virtual void VertexBuffer_Z_vftable_0() override;
    ADDRESSVF(0x00773020, FakeVertexBuffer_Z, VertexBuffer_Z_vftable_1);
    virtual void VertexBuffer_Z_vftable_1() override;
    virtual void VertexBuffer_Z_vftable_3() override;
    ADDRESSVF(0x00773040, FakeVertexBuffer_Z, VertexBuffer_Z_vftable_4);
    virtual void VertexBuffer_Z_vftable_4() override;
    virtual void VertexBuffer_Z_vftable_5(int) override;
};

ADDRESSVFTABLE(0x009C96BC, InGameObjects_Z);
class __declspec(dllexport) InGameObjects_Z : public ManipulatorDraw_Z
{
public:
    ADDRESSSYMBOL(0x0068FB70, "?BaseObject_Z_vftable_0@InGameObjects_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x0068FAD0, InGameObjects_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSVF(0x0068FBB0, InGameObjects_Z, BaseObject_Z_vftable_13);
    virtual void BaseObject_Z_vftable_13() override;
    ADDRESSSYMBOL(0x007CA0A0, "?ManipulatorDraw_Z_vftable_19@InGameObjects_Z@@UAEXH@Z");
    virtual void ManipulatorDraw_Z_vftable_19(int) override;
    ADDRESSVF(0x0068FE00, InGameObjects_Z, InGameObjects_Z_vftable_20);
    virtual void InGameObjects_Z_vftable_20();
    char data[1052];
};

ADDRESSVFTABLE(0x009BBE68, MultiGameToBePlayed);
class __declspec(dllexport) MultiGameToBePlayed : public IsToBePlayed
{
public:
    ADDRESSVF(0x005603A0, MultiGameToBePlayed, IsToBePlayed_vftable_0);
    virtual void IsToBePlayed_vftable_0() override;
    ADDRESSVF(0x00560420, MultiGameToBePlayed, IsToBePlayed_vftable_1);
    virtual void IsToBePlayed_vftable_1() override;
};

ADDRESSVFTABLE(0x009A5564, MessagesHUD);
class __declspec(dllexport) MessagesHUD : public ViewportHUD
{
public:
    ADDRESSSYMBOL(0x004AF800, "?ViewportHUD_vftable_0@MessagesHUD@@UAEXH@Z");
    virtual void ViewportHUD_vftable_0(int) override;
    virtual void ViewportHUD_vftable_1() override;
    ADDRESSSYMBOL(0x004AF8A0, "?ViewportHUD_vftable_2@MessagesHUD@@UAEXH@Z");
    virtual void ViewportHUD_vftable_2(int) override;
    ADDRESSSYMBOL(0x004AF990, "?ViewportHUD_vftable_5@MessagesHUD@@UAEXH@Z");
    virtual void ViewportHUD_vftable_5(int) override;
};

ADDRESSVFTABLE(0x009D894C, WinBackendLeaderboard_Z);
class __declspec(dllexport) WinBackendLeaderboard_Z : public BackendLeaderboard_Z
{
public:
    ADDRESSVF(0x0084B3C0, WinBackendLeaderboard_Z, BackendLeaderboard_Z_vftable_3);
    virtual void BackendLeaderboard_Z_vftable_3() override;
    ADDRESSSYMBOL(0x0084B590, "?BackendLeaderboard_Z_vftable_4@WinBackendLeaderboard_Z@@UAEDHHHHH@Z");
    virtual char BackendLeaderboard_Z_vftable_4(int, int, int, int, int) override;
    ADDRESSVF(0x0084BB40, WinBackendLeaderboard_Z, BackendLeaderboard_Z_vftable_6);
    virtual void BackendLeaderboard_Z_vftable_6() override;
    ADDRESSVF(0x0084BBA0, WinBackendLeaderboard_Z, BackendLeaderboard_Z_vftable_7);
    virtual void BackendLeaderboard_Z_vftable_7() override;
    ADDRESSVF(0x0084BD90, WinBackendLeaderboard_Z, BackendLeaderboard_Z_vftable_8);
    virtual void BackendLeaderboard_Z_vftable_8() override;
    ADDRESSVF(0x0084BBE0, WinBackendLeaderboard_Z, BackendLeaderboard_Z_vftable_9);
    virtual void BackendLeaderboard_Z_vftable_9() override;
    ADDRESSVF(0x0084BF60, WinBackendLeaderboard_Z, BackendLeaderboard_Z_vftable_10);
    virtual void BackendLeaderboard_Z_vftable_10() override;
    ADDRESSVF(0x0084B550, WinBackendLeaderboard_Z, BackendLeaderboard_Z_vftable_11);
    virtual void BackendLeaderboard_Z_vftable_11() override;
    ADDRESSSYMBOL(0x0084BAE0, "?BackendLeaderboard_Z_vftable_13@WinBackendLeaderboard_Z@@UAEXXZ");
    virtual void BackendLeaderboard_Z_vftable_13() override;
};

ADDRESSVFTABLE(0x009A1D44, CreaturesStatesMachine_G);
class __declspec(dllexport) CreaturesStatesMachine_G : public StatesMachine_G
{
public:
    ADDRESSVF(0x00425EE0, CreaturesStatesMachine_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x00425F60, "?StatesMachine_G_vftable_14@CreaturesStatesMachine_G@@UAEHH@Z");
    virtual int StatesMachine_G_vftable_14(int) override;
    ADDRESSSYMBOL(0x00426600, "?StatesMachine_G_vftable_15@CreaturesStatesMachine_G@@UAEXH@Z");
    virtual void StatesMachine_G_vftable_15(int) override;
    ADDRESSSYMBOL(0x00426620, "?StatesMachine_G_vftable_16@CreaturesStatesMachine_G@@UAEHH@Z");
    virtual int StatesMachine_G_vftable_16(int) override;
    char data[4];
};

ADDRESSVFTABLE(0x009AABD4, InGameWarningHUD);
class __declspec(dllexport) InGameWarningHUD : public InGameMenuHUD
{
public:
    ADDRESSSYMBOL(0x0049B730, "?ViewportHUD_vftable_0@InGameWarningHUD@@UAEXH@Z");
    virtual void ViewportHUD_vftable_0(int) override;
    ADDRESSSYMBOL(0x0049B780, "?ViewportHUD_vftable_1@InGameWarningHUD@@UAEXXZ");
    virtual void ViewportHUD_vftable_1() override;
    ADDRESSSYMBOL(0x0049B810, "?ViewportHUD_vftable_2@InGameWarningHUD@@UAEXH@Z");
    virtual void ViewportHUD_vftable_2(int) override;
    ADDRESSSYMBOL(0x0049B950, "?ViewportHUD_vftable_5@InGameWarningHUD@@UAEXH@Z");
    virtual void ViewportHUD_vftable_5(int) override;
    virtual void ViewportHUD_vftable_7() override;
    ADDRESSVF(0x0049B7B0, InGameWarningHUD, ViewportHUD_vftable_8);
    virtual void ViewportHUD_vftable_8() override;
};

ADDRESSVFTABLE(0x009D33BC, GwRoad_Z);
class __declspec(dllexport) GwRoad_Z : public ResourceObject_Z
{
public:
    ADDRESSVF(0x007C4080, GwRoad_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x007C41B0, "?BaseObject_Z_vftable_3@GwRoad_Z@@UAEXH@Z");
    virtual void BaseObject_Z_vftable_3(int) override;
    ADDRESSSYMBOL(0x007C45C0, "?BaseObject_Z_vftable_4@GwRoad_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_4() override;
    ADDRESSSYMBOL(0x007C4140, "?BaseObject_Z_vftable_12@GwRoad_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_12() override;
    char data[384];
};

ADDRESSVFTABLE(0x009D0B74, MaterialAnim_Z);
class __declspec(dllexport) MaterialAnim_Z : public ResourceObject_Z
{
public:
    ADDRESSVF(0x00769F60, MaterialAnim_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x00800570, "?BaseObject_Z_vftable_3@MaterialAnim_Z@@UAEXH@Z");
    virtual void BaseObject_Z_vftable_3(int) override;
    ADDRESSSYMBOL(0x00800610, "?BaseObject_Z_vftable_4@MaterialAnim_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_4() override;
    ADDRESSSYMBOL(0x00800640, "?BaseObject_Z_vftable_5@MaterialAnim_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_5() override;
    ADDRESSVF(0x0076A130, MaterialAnim_Z, BaseObject_Z_vftable_13);
    virtual void BaseObject_Z_vftable_13() override;
    ADDRESSVF(0x0076A1B0, MaterialAnim_Z, MaterialAnim_Z_vftable_16);
    virtual void MaterialAnim_Z_vftable_16();
    char data[136];
};

ADDRESSVFTABLE(0x009B7ACC, DetectVolumeAgent_G);
class __declspec(dllexport) DetectVolumeAgent_G : public VolumeAgent_Z
{
public:
    ADDRESSSYMBOL(0x0056FEB0, "?BaseObject_Z_vftable_0@DetectVolumeAgent_G@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x005424D0, DetectVolumeAgent_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x00542430, "?ABC_Agent_vftable_14@DetectVolumeAgent_G@@UAEHXZ");
    virtual int ABC_Agent_vftable_14() override;
    ADDRESSVF(0x00542440, DetectVolumeAgent_G, ABC_Agent_vftable_15);
    virtual void ABC_Agent_vftable_15() override;
    ADDRESSSYMBOL(0x00542470, "?ABC_Agent_vftable_16@DetectVolumeAgent_G@@UAEXH@Z");
    virtual void ABC_Agent_vftable_16(int) override;
    ADDRESSVF(0x005424A0, DetectVolumeAgent_G, ABC_Agent_vftable_17);
    virtual void ABC_Agent_vftable_17() override;
    ADDRESSSYMBOL(0x0056FED0, "?Agent_Z_vftable_20@DetectVolumeAgent_G@@UAEXXZ");
    virtual void Agent_Z_vftable_20() override;
    ADDRESSSYMBOL(0x0056FF20, "?VolumeAgent_Z_vftable_42@DetectVolumeAgent_G@@UAEXH@Z");
    virtual void VolumeAgent_Z_vftable_42(int) override;
    ADDRESSSYMBOL(0x0056FF70, "?VolumeAgent_Z_vftable_43@DetectVolumeAgent_G@@UAEXH@Z");
    virtual void VolumeAgent_Z_vftable_43(int) override;
    ADDRESSSYMBOL(0x0056FFC0, "?VolumeAgent_Z_vftable_44@DetectVolumeAgent_G@@UAEXH@Z");
    virtual void VolumeAgent_Z_vftable_44(int) override;
    char data[4];
};

ADDRESSVFTABLE(0x009BBE74, ChampionshipToBePlayed);
class __declspec(dllexport) ChampionshipToBePlayed : public IsToBePlayed
{
public:
    ADDRESSVF(0x005601F0, ChampionshipToBePlayed, IsToBePlayed_vftable_0);
    virtual void IsToBePlayed_vftable_0() override;
    ADDRESSVF(0x00560A90, ChampionshipToBePlayed, IsToBePlayed_vftable_1);
    virtual void IsToBePlayed_vftable_1() override;
};

ADDRESSVFTABLE(0x009BD34C, TornadoEventVolumeAgent_G);
class __declspec(dllexport) TornadoEventVolumeAgent_G : public VolumeAgent_Z
{
public:
    ADDRESSSYMBOL(0x0057AA30, "?BaseObject_Z_vftable_0@TornadoEventVolumeAgent_G@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x0057AAA0, TornadoEventVolumeAgent_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x0057A9A0, "?ABC_Agent_vftable_14@TornadoEventVolumeAgent_G@@UAEHXZ");
    virtual int ABC_Agent_vftable_14() override;
    ADDRESSVF(0x0057A9B0, TornadoEventVolumeAgent_G, ABC_Agent_vftable_15);
    virtual void ABC_Agent_vftable_15() override;
    ADDRESSSYMBOL(0x0057A9C0, "?ABC_Agent_vftable_16@TornadoEventVolumeAgent_G@@UAEXH@Z");
    virtual void ABC_Agent_vftable_16(int) override;
    ADDRESSVF(0x0057A9F0, TornadoEventVolumeAgent_G, ABC_Agent_vftable_17);
    virtual void ABC_Agent_vftable_17() override;
    ADDRESSVF(0x0057AB40, TornadoEventVolumeAgent_G, Agent_Z_vftable_24);
    virtual void Agent_Z_vftable_24() override;
    ADDRESSVF(0x0057AC10, TornadoEventVolumeAgent_G, Agent_Z_vftable_25);
    virtual void Agent_Z_vftable_25() override;
};

ADDRESSVFTABLE(0x009D3B68, StockATVs);
class __declspec(dllexport) StockATVs : public StockData
{
public:
    ADDRESSVF(0x007DAAD0, StockATVs, StockData_vftable_0);
    virtual void StockData_vftable_0() override;
    ADDRESSVF(0x007DAAE0, StockATVs, StockData_vftable_1);
    virtual void StockData_vftable_1() override;
    ADDRESSVF(0x007DAB50, StockATVs, StockData_vftable_2);
    virtual void StockData_vftable_2() override;
    ADDRESSVF(0x007DAAF0, StockATVs, StockData_vftable_3);
    virtual void StockData_vftable_3() override;
};

ADDRESSVFTABLE(0x009B71CC, FallVolumeAgent_G);
class __declspec(dllexport) FallVolumeAgent_G : public VolumeAgent_Z
{
public:
    ADDRESSVF(0x005410D0, FallVolumeAgent_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x00541040, "?ABC_Agent_vftable_14@FallVolumeAgent_G@@UAEHXZ");
    virtual int ABC_Agent_vftable_14() override;
    ADDRESSVF(0x00541050, FallVolumeAgent_G, ABC_Agent_vftable_15);
    virtual void ABC_Agent_vftable_15() override;
    ADDRESSSYMBOL(0x00541080, "?ABC_Agent_vftable_16@FallVolumeAgent_G@@UAEXH@Z");
    virtual void ABC_Agent_vftable_16(int) override;
    ADDRESSVF(0x005410B0, FallVolumeAgent_G, ABC_Agent_vftable_17);
    virtual void ABC_Agent_vftable_17() override;
    ADDRESSSYMBOL(0x005726D0, "?VolumeAgent_Z_vftable_42@FallVolumeAgent_G@@UAEXH@Z");
    virtual void VolumeAgent_Z_vftable_42(int) override;
    ADDRESSSYMBOL(0x00572780, "?VolumeAgent_Z_vftable_43@FallVolumeAgent_G@@UAEXH@Z");
    virtual void VolumeAgent_Z_vftable_43(int) override;
    ADDRESSSYMBOL(0x005727C0, "?VolumeAgent_Z_vftable_45@FallVolumeAgent_G@@UAEXH@Z");
    virtual void VolumeAgent_Z_vftable_45(int) override;
};

ADDRESSVFTABLE(0x009C01A4, Dialog_StartLang);
class __declspec(dllexport) Dialog_StartLang : public DialogMenu_G
{
public:
    ADDRESSVF(0x00593CD0, Dialog_StartLang, CWindowHierarchy_G_vftable_0);
    virtual void CWindowHierarchy_G_vftable_0() override;
    ADDRESSSYMBOL(0x005941C0, "?Dialog_G_vftable_15@Dialog_StartLang@@UAEXXZ");
    virtual void Dialog_G_vftable_15() override;
    ADDRESSSYMBOL(0x005943D0, "?Dialog_G_vftable_16@Dialog_StartLang@@UAEXH@Z");
    virtual void Dialog_G_vftable_16(int) override;
    ADDRESSSYMBOL(0x00593D60, "?Dialog_G_vftable_17@Dialog_StartLang@@UAEXXZ");
    virtual void Dialog_G_vftable_17() override;
    ADDRESSVF(0x005940D0, Dialog_StartLang, Dialog_G_vftable_19);
    virtual void Dialog_G_vftable_19() override;
    ADDRESSSYMBOL(0x005941B0, "?Dialog_G_vftable_20@Dialog_StartLang@@UAEXXZ");
    virtual void Dialog_G_vftable_20() override;
    ADDRESSVF(0x00594010, Dialog_StartLang, Dialog_G_vftable_22);
    virtual void Dialog_G_vftable_22() override;
    ADDRESSSYMBOL(0x005945D0, "?DialogMenu_G_vftable_30@Dialog_StartLang@@UAEHXZ");
    virtual int DialogMenu_G_vftable_30() override;
    virtual int Dialog_StartLang_vftable_31();
};

ADDRESSVFTABLE(0x009C67AC, World_Z);
class __declspec(dllexport) World_Z : public ResourceObject_Z
{
public:
    ADDRESSVF(0x0065B5F0, World_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x007AB360, "?BaseObject_Z_vftable_3@World_Z@@UAEXH@Z");
    virtual void BaseObject_Z_vftable_3(int) override;
    ADDRESSSYMBOL(0x007AB660, "?BaseObject_Z_vftable_4@World_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_4() override;
    ADDRESSSYMBOL(0x007AB9F0, "?BaseObject_Z_vftable_5@World_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_5() override;
    ADDRESSSYMBOL(0x007ABA00, "?BaseObject_Z_vftable_6@World_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_6() override;
    ADDRESSVF(0x0065B630, World_Z, BaseObject_Z_vftable_13);
    virtual void BaseObject_Z_vftable_13() override;
    char data[1144];
};

ADDRESSVFTABLE(0x009D62A8, XSessionJoinLocalLiveOverlappedCommand_Z);
class __declspec(dllexport) XSessionJoinLocalLiveOverlappedCommand_Z : public LiveOverlappedCommand_Z
{
public:
    ADDRESSVF(0x00822700, XSessionJoinLocalLiveOverlappedCommand_Z, LiveOverlappedCommand_Z_vftable_0);
    virtual void LiveOverlappedCommand_Z_vftable_0() override;
    ADDRESSVF(0x008226D0, XSessionJoinLocalLiveOverlappedCommand_Z, LiveOverlappedCommand_Z_vftable_1);
    virtual void LiveOverlappedCommand_Z_vftable_1() override;
    virtual void *LiveOverlappedCommand_Z_vftable_2() override;
};

ADDRESSVFTABLE(0x009D76E8, ComDBSetServerStatus_Z);
class __declspec(dllexport) ComDBSetServerStatus_Z : public ComDBCommand_Z
{
public:
    ADDRESSVF(0x00871AA0, ComDBSetServerStatus_Z, ComDBCommand_Z_vftable_0);
    virtual void ComDBCommand_Z_vftable_0() override;
};

ADDRESSVFTABLE(0x009B710C, CameraFxVolumeAgent_G);
class __declspec(dllexport) CameraFxVolumeAgent_G : public VolumeAgent_Z
{
public:
    ADDRESSVF(0x00540FB0, CameraFxVolumeAgent_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x00540EE0, "?ABC_Agent_vftable_14@CameraFxVolumeAgent_G@@UAEHXZ");
    virtual int ABC_Agent_vftable_14() override;
    ADDRESSVF(0x00540EF0, CameraFxVolumeAgent_G, ABC_Agent_vftable_15);
    virtual void ABC_Agent_vftable_15() override;
    ADDRESSSYMBOL(0x00540F20, "?ABC_Agent_vftable_16@CameraFxVolumeAgent_G@@UAEXH@Z");
    virtual void ABC_Agent_vftable_16(int) override;
    ADDRESSVF(0x00540F50, CameraFxVolumeAgent_G, ABC_Agent_vftable_17);
    virtual void ABC_Agent_vftable_17() override;
};

ADDRESSVFTABLE(0x009B20A4, IT_SOURCEENERGYMove_G);
class __declspec(dllexport) IT_SOURCEENERGYMove_G : public ObjectMove_Z
{
public:
    ADDRESSVF(0x004DC3F0, IT_SOURCEENERGYMove_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
};

ADDRESSVFTABLE(0x009B1174, Client_G);
class __declspec(dllexport) Client_G : public ComClient_Z
{
public:
    ADDRESSVF(0x004D60A0, Client_G, NetObject_Z_vftable_0);
    virtual void NetObject_Z_vftable_0() override;
    virtual void *ComObject_Z_vftable_5() override;
    ADDRESSVF(0x004D5EB0, Client_G, ComObject_Z_vftable_7);
    virtual void ComObject_Z_vftable_7() override;
};

ADDRESSVFTABLE(0x009B4C8C, IT_MAGNET);
class __declspec(dllexport) IT_MAGNET : public Agent_Z
{
public:
    ADDRESSSYMBOL(0x00516FC0, "?BaseObject_Z_vftable_0@IT_MAGNET@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x00516ED0, IT_MAGNET, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x00516E60, "?ABC_Agent_vftable_14@IT_MAGNET@@UAEHXZ");
    virtual int ABC_Agent_vftable_14() override;
    ADDRESSVF(0x00516E70, IT_MAGNET, ABC_Agent_vftable_15);
    virtual void ABC_Agent_vftable_15() override;
    ADDRESSSYMBOL(0x00516E80, "?ABC_Agent_vftable_16@IT_MAGNET@@UAEXH@Z");
    virtual void ABC_Agent_vftable_16(int) override;
    ADDRESSVF(0x00516EB0, IT_MAGNET, ABC_Agent_vftable_17);
    virtual void ABC_Agent_vftable_17() override;
    ADDRESSVF(0x005170B0, IT_MAGNET, Agent_Z_vftable_24);
    virtual void Agent_Z_vftable_24() override;
    ADDRESSVF(0x00517120, IT_MAGNET, Agent_Z_vftable_25);
    virtual void Agent_Z_vftable_25() override;
    char data[8];
};

ADDRESSVFTABLE(0x009B1A3C, PATH_ATV_ALT_Cache);
class __declspec(dllexport) PATH_ATV_ALT_Cache : public PATH_Cache
{
public:
    ADDRESSVF(0x004DD630, PATH_ATV_ALT_Cache, PATH_Cache_vftable_0);
    virtual void PATH_Cache_vftable_0() override;
    ADDRESSVF(0x004DD650, PATH_ATV_ALT_Cache, PATH_Cache_vftable_1);
    virtual void PATH_Cache_vftable_1() override;
};

ADDRESSVFTABLE(0x009B4A9C, GameAgent_G);
class __declspec(dllexport) GameAgent_G : public Agent_Z
{
public:
    ADDRESSSYMBOL(0x0051B640, "?BaseObject_Z_vftable_0@GameAgent_G@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x00515A00, GameAgent_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x00515980, "?ABC_Agent_vftable_14@GameAgent_G@@UAEHXZ");
    virtual int ABC_Agent_vftable_14() override;
    ADDRESSVF(0x00515990, GameAgent_G, ABC_Agent_vftable_15);
    virtual void ABC_Agent_vftable_15() override;
    ADDRESSSYMBOL(0x005159A0, "?ABC_Agent_vftable_16@GameAgent_G@@UAEXH@Z");
    virtual void ABC_Agent_vftable_16(int) override;
    ADDRESSVF(0x005159D0, GameAgent_G, ABC_Agent_vftable_17);
    virtual void ABC_Agent_vftable_17() override;
    virtual void GameAgent_G_vftable_39();
};

ADDRESSVFTABLE(0x009A6E74, EditorHUD);
class __declspec(dllexport) EditorHUD : public MapHUD
{
public:
    ADDRESSSYMBOL(0x00461330, "?ViewportHUD_vftable_0@EditorHUD@@UAEXH@Z");
    virtual void ViewportHUD_vftable_0(int) override;
    ADDRESSSYMBOL(0x00463010, "?ViewportHUD_vftable_1@EditorHUD@@UAEXXZ");
    virtual void ViewportHUD_vftable_1() override;
    ADDRESSSYMBOL(0x00463220, "?ViewportHUD_vftable_2@EditorHUD@@UAEXH@Z");
    virtual void ViewportHUD_vftable_2(int) override;
    ADDRESSSYMBOL(0x00467070, "?ViewportHUD_vftable_5@EditorHUD@@UAEXH@Z");
    virtual void ViewportHUD_vftable_5(int) override;
    ADDRESSVF(0x00461420, EditorHUD, ViewportHUD_vftable_7);
    virtual void ViewportHUD_vftable_7() override;
    ADDRESSVF(0x00461400, EditorHUD, ViewportHUD_vftable_8);
    virtual void ViewportHUD_vftable_8() override;
    ADDRESSVF(0x004612C0, EditorHUD, MapHUD_vftable_20);
    virtual void MapHUD_vftable_20() override;
};

ADDRESSVFTABLE(0x009AC4D4, PageTutorial);
class __declspec(dllexport) PageTutorial : public InGameMenuHUD
{
public:
    ADDRESSSYMBOL(0x004CEDE0, "?ViewportHUD_vftable_0@PageTutorial@@UAEXH@Z");
    virtual void ViewportHUD_vftable_0(int) override;
    ADDRESSSYMBOL(0x004CEE30, "?ViewportHUD_vftable_1@PageTutorial@@UAEXXZ");
    virtual void ViewportHUD_vftable_1() override;
    ADDRESSSYMBOL(0x004CF070, "?ViewportHUD_vftable_2@PageTutorial@@UAEXH@Z");
    virtual void ViewportHUD_vftable_2(int) override;
    ADDRESSSYMBOL(0x004CF150, "?ViewportHUD_vftable_5@PageTutorial@@UAEXH@Z");
    virtual void ViewportHUD_vftable_5(int) override;
    ADDRESSVF(0x004CEE50, PageTutorial, ViewportHUD_vftable_7);
    virtual void ViewportHUD_vftable_7() override;
    ADDRESSVF(0x004CEFF0, PageTutorial, ViewportHUD_vftable_8);
    virtual void ViewportHUD_vftable_8() override;
    ADDRESSSYMBOL(0x004CF2D0, "?ViewportHUD_vftable_9@PageTutorial@@UAEHXZ");
    virtual int ViewportHUD_vftable_9() override;
};

ADDRESSVFTABLE(0x009C1658, CPurchaseSolo);
class __declspec(dllexport) CPurchaseSolo : public CPurchaseMainStoryLevels
{
public:
    ADDRESSVF(0x005A2FA0, CPurchaseSolo, CPurchase_vftable_0);
    virtual void CPurchase_vftable_0() override;
    ADDRESSSYMBOL(0x005A2FD0, "?CPurchase_vftable_1@CPurchaseSolo@@UAEDXZ");
    virtual char CPurchase_vftable_1() override;
    ADDRESSVF(0x005A3080, CPurchaseSolo, CPurchase_vftable_4);
    virtual void CPurchase_vftable_4() override;
};

ADDRESSVFTABLE(0x009C4B94, MenuItemImage_G);
class __declspec(dllexport) MenuItemImage_G : public MenuItemFillRect_G
{
public:
    ADDRESSVF(0x00611E20, MenuItemImage_G, MenuItem_G_vftable_0);
    virtual void MenuItem_G_vftable_0() override;
    ADDRESSSYMBOL(0x00612020, "?MenuItem_G_vftable_3@MenuItemImage_G@@UAEXH@Z");
    virtual void MenuItem_G_vftable_3(int) override;
    virtual int MenuItem_G_vftable_6() override;
    ADDRESSVF(0x00611C20, MenuItemImage_G, MenuItem_G_vftable_7);
    virtual void MenuItem_G_vftable_7() override;
    ADDRESSVF(0x00611C40, MenuItemImage_G, MenuItem_G_vftable_8);
    virtual void MenuItem_G_vftable_8() override;
    ADDRESSVF(0x00611BF0, MenuItemImage_G, MenuItem_G_vftable_9);
    virtual void MenuItem_G_vftable_9() override;
};

ADDRESSVFTABLE(0x009AE4EC, CameraMove_G);
class __declspec(dllexport) CameraMove_G : public CameraEngineZone_Z
{
public:
    ADDRESSSYMBOL(0x00412AF0, "?BaseObject_Z_vftable_0@CameraMove_G@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x004D3B00, CameraMove_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x00412CF0, "?Manipulator_Z_vftable_14@CameraMove_G@@UAEXXZ");
    virtual void Manipulator_Z_vftable_14() override;
    ADDRESSSYMBOL(0x00412E80, "?Manipulator_Z_vftable_17@CameraMove_G@@UAEXH@Z");
    virtual void Manipulator_Z_vftable_17(int) override;
    ADDRESSVF(0x00410FE0, CameraMove_G, CameraEngine_Z_vftable_19);
    virtual void CameraEngine_Z_vftable_19() override;
    virtual void CameraEngine_Z_vftable_20(int) override;
    char data[6392];
};

ADDRESSVFTABLE(0x009D0244, Rtc_Z);
class __declspec(dllexport) Rtc_Z : public ResourceObject_Z
{
public:
    ADDRESSVF(0x00746C80, Rtc_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x007D6AD0, "?BaseObject_Z_vftable_3@Rtc_Z@@UAEXH@Z");
    virtual void BaseObject_Z_vftable_3(int) override;
    ADDRESSSYMBOL(0x007D6EA0, "?BaseObject_Z_vftable_4@Rtc_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_4() override;
    ADDRESSSYMBOL(0x007D71D0, "?BaseObject_Z_vftable_5@Rtc_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_5() override;
    ADDRESSVF(0x00746D40, Rtc_Z, BaseObject_Z_vftable_13);
    virtual void BaseObject_Z_vftable_13() override;
    char data[76];
};

ADDRESSVFTABLE(0x009BE4C4, Dialog_ALERT);
class __declspec(dllexport) Dialog_ALERT : public DialogMenu_G
{
public:
    ADDRESSVF(0x005886B0, Dialog_ALERT, CWindowHierarchy_G_vftable_0);
    virtual void CWindowHierarchy_G_vftable_0() override;
    virtual void Dialog_G_vftable_15() override;
    ADDRESSSYMBOL(0x00596330, "?Dialog_G_vftable_16@Dialog_ALERT@@UAEXH@Z");
    virtual void Dialog_G_vftable_16(int) override;
    ADDRESSSYMBOL(0x00595FE0, "?Dialog_G_vftable_17@Dialog_ALERT@@UAEXXZ");
    virtual void Dialog_G_vftable_17() override;
    ADDRESSVF(0x00596010, Dialog_ALERT, Dialog_G_vftable_19);
    virtual void Dialog_G_vftable_19() override;
    ADDRESSVF(0x00596140, Dialog_ALERT, Dialog_G_vftable_23);
    virtual void Dialog_G_vftable_23() override;
    virtual int Dialog_ALERT_vftable_31();
};

ADDRESSVFTABLE(0x009D542C, ComWinLivesockUDP_Z);
class __declspec(dllexport) ComWinLivesockUDP_Z : public ComWinsockUDP_Z
{
public:
    ADDRESSVF(0x0081CB70, ComWinLivesockUDP_Z, ComNet_Z_vftable_5);
    virtual void ComNet_Z_vftable_5() override;
    virtual int ComUDP_Z_vftable_22(SOCKET s, const struct sockaddr FAR * name, int namelen) override;
    virtual int ComUDP_Z_vftable_23(SOCKET s, const struct sockaddr FAR * name, int namelen) override;
    virtual SOCKET ComUDP_Z_vftable_24(int af, int type, int protocol) override;
    virtual int ComUDP_Z_vftable_25(SOCKET s, int backlog) override;
    virtual int ComUDP_Z_vftable_26(SOCKET s, char FAR * buf, int len, int flags) override;
    virtual int ComUDP_Z_vftable_27(SOCKET s, const char FAR * buf, int len, int flags) override;
    virtual int ComUDP_Z_vftable_28(SOCKET s, const char FAR * buf, int len, int flags, const struct sockaddr FAR * to, int tolen) override;
    virtual int ComUDP_Z_vftable_29(SOCKET s, int level, int optname, const char FAR * optval, int optlen) override;
    virtual unsigned long ComUDP_Z_vftable_30(unsigned long hostlong) override;
    virtual unsigned short ComUDP_Z_vftable_31(unsigned short hostlong) override;
    virtual unsigned long ComUDP_Z_vftable_32(unsigned long netlong) override;
    virtual unsigned short ComUDP_Z_vftable_33(unsigned short netshort) override;
    virtual int ComUDP_Z_vftable_35(char *, int) override;
    virtual unsigned long ComUDP_Z_vftable_37(const char FAR * cp) override;
    virtual int ComUDP_Z_vftable_38(SOCKET s, long cmd, unsigned long *argp) override;
    ADDRESSVF(0x0081C930, ComWinLivesockUDP_Z, ComUDP_Z_vftable_39);
    virtual void ComUDP_Z_vftable_39() override;
    ADDRESSVF(0x0081C990, ComWinLivesockUDP_Z, ComUDP_Z_vftable_40);
    virtual void ComUDP_Z_vftable_40() override;
};

ADDRESSVFTABLE(0x009C4DDC, MenuItemVirtualLabel_G);
class __declspec(dllexport) MenuItemVirtualLabel_G : public MenuItemFillRect_G
{
public:
    ADDRESSVF(0x00614830, MenuItemVirtualLabel_G, MenuItem_G_vftable_0);
    virtual void MenuItem_G_vftable_0() override;
    ADDRESSVF(0x00615100, MenuItemVirtualLabel_G, MenuItem_G_vftable_1);
    virtual void MenuItem_G_vftable_1() override;
    ADDRESSSYMBOL(0x00614DD0, "?MenuItem_G_vftable_2@MenuItemVirtualLabel_G@@UAEXH@Z");
    virtual void MenuItem_G_vftable_2(int) override;
    ADDRESSSYMBOL(0x00614DF0, "?MenuItem_G_vftable_3@MenuItemVirtualLabel_G@@UAEXH@Z");
    virtual void MenuItem_G_vftable_3(int) override;
    ADDRESSSYMBOL(0x006148F0, "?MenuItem_G_vftable_4@MenuItemVirtualLabel_G@@UAEXXZ");
    virtual void MenuItem_G_vftable_4() override;
    ADDRESSVF(0x006144B0, MenuItemVirtualLabel_G, MenuItem_G_vftable_8);
    virtual void MenuItem_G_vftable_8() override;
    virtual void MenuItemVirtualLabel_G_vftable_10() = 0;
    ADDRESSVF(0x00614AA0, MenuItemVirtualLabel_G, MenuItemVirtualLabel_G_vftable_11);
    virtual void MenuItemVirtualLabel_G_vftable_11();
    ADDRESSVF(0x00614B10, MenuItemVirtualLabel_G, MenuItemVirtualLabel_G_vftable_12);
    virtual void MenuItemVirtualLabel_G_vftable_12();
    ADDRESSVF(0x006150F0, MenuItemVirtualLabel_G, MenuItemVirtualLabel_G_vftable_13);
    virtual void MenuItemVirtualLabel_G_vftable_13();
};

ADDRESSVFTABLE(0x009C15F8, CPurchaseConceptArt);
class __declspec(dllexport) CPurchaseConceptArt : public CPurchase
{
public:
    ADDRESSVF(0x005A2DA0, CPurchaseConceptArt, CPurchase_vftable_0);
    virtual void CPurchase_vftable_0() override;
    virtual char CPurchase_vftable_1() override;
    ADDRESSVF(0x005A2DE0, CPurchaseConceptArt, CPurchase_vftable_4);
    virtual void CPurchase_vftable_4() override;
};

ADDRESSVFTABLE(0x009AE55C, SpecialEffectsManager_G);
class __declspec(dllexport) SpecialEffectsManager_G : public ManipulatorSceneDraw_Z
{
public:
    ADDRESSSYMBOL(0x005F5F60, "?BaseObject_Z_vftable_0@SpecialEffectsManager_G@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x004D1960, SpecialEffectsManager_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    virtual void Manipulator_Z_vftable_14() override;
    ADDRESSSYMBOL(0x005F62C0, "?Manipulator_Z_vftable_17@SpecialEffectsManager_G@@UAEXH@Z");
    virtual void Manipulator_Z_vftable_17(int) override;
    ADDRESSSYMBOL(0x005F65C0, "?ManipulatorSceneDraw_Z_vftable_19@SpecialEffectsManager_G@@UAEXH@Z");
    virtual void ManipulatorSceneDraw_Z_vftable_19(int) override;
    ADDRESSVF(0x005F6DB0, SpecialEffectsManager_G, SpecialEffectsManager_G_vftable_20);
    virtual void SpecialEffectsManager_G_vftable_20();
    ADDRESSVF(0x005F6240, SpecialEffectsManager_G, SpecialEffectsManager_G_vftable_21);
    virtual void SpecialEffectsManager_G_vftable_21();
    char data[412];
};

ADDRESSVFTABLE(0x009CFF04, MovieManipulator_Z);
class __declspec(dllexport) MovieManipulator_Z : public ManipulatorDraw_Z
{
public:
    ADDRESSVF(0x0073A5A0, MovieManipulator_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSVF(0x0073A620, MovieManipulator_Z, BaseObject_Z_vftable_13);
    virtual void BaseObject_Z_vftable_13() override;
    ADDRESSSYMBOL(0x0073AA90, "?Manipulator_Z_vftable_17@MovieManipulator_Z@@UAEXH@Z");
    virtual void Manipulator_Z_vftable_17(int) override;
    ADDRESSVF(0x0073AEF0, MovieManipulator_Z, ManipulatorDraw_Z_vftable_18);
    virtual void ManipulatorDraw_Z_vftable_18() override;
    ADDRESSVF(0x0073A6F0, MovieManipulator_Z, MovieManipulator_Z_vftable_20);
    virtual void MovieManipulator_Z_vftable_20();
    ADDRESSVF(0x0073ACC0, MovieManipulator_Z, MovieManipulator_Z_vftable_21);
    virtual void MovieManipulator_Z_vftable_21();
    ADDRESSVF(0x0073A990, MovieManipulator_Z, MovieManipulator_Z_vftable_22);
    virtual void MovieManipulator_Z_vftable_22();
    ADDRESSVF(0x0073AA00, MovieManipulator_Z, MovieManipulator_Z_vftable_23);
    virtual void MovieManipulator_Z_vftable_23();
    ADDRESSVF(0x0073AA50, MovieManipulator_Z, MovieManipulator_Z_vftable_24);
    virtual void MovieManipulator_Z_vftable_24();
    ADDRESSVF(0x0073AA70, MovieManipulator_Z, MovieManipulator_Z_vftable_25);
    virtual void MovieManipulator_Z_vftable_25();
    ADDRESSVF(0x0073A480, MovieManipulator_Z, MovieManipulator_Z_vftable_26);
    virtual void MovieManipulator_Z_vftable_26();
    ADDRESSVF(0x0073ADA0, MovieManipulator_Z, MovieManipulator_Z_vftable_27);
    virtual void MovieManipulator_Z_vftable_27();
    virtual void MovieManipulator_Z_vftable_28();
    char data[456];
};

ADDRESSVFTABLE(0x009BE3BC, Dialog_AfterPressStart);
class __declspec(dllexport) Dialog_AfterPressStart : public DialogMenu_G
{
public:
    ADDRESSVF(0x00589620, Dialog_AfterPressStart, CWindowHierarchy_G_vftable_0);
    virtual void CWindowHierarchy_G_vftable_0() override;
    ADDRESSVF(0x0058F330, Dialog_AfterPressStart, Dialog_G_vftable_19);
    virtual void Dialog_G_vftable_19() override;
    virtual void Dialog_G_vftable_20() override;
    ADDRESSVF(0x0058F3C0, Dialog_AfterPressStart, Dialog_G_vftable_23);
    virtual void Dialog_G_vftable_23() override;
};

ADDRESSVFTABLE(0x009D6268, XUserSetPropertyExLiveOverlappedCommand_Z);
class __declspec(dllexport) XUserSetPropertyExLiveOverlappedCommand_Z : public LiveOverlappedCommand_Z
{
public:
    ADDRESSVF(0x00822410, XUserSetPropertyExLiveOverlappedCommand_Z, LiveOverlappedCommand_Z_vftable_0);
    virtual void LiveOverlappedCommand_Z_vftable_0() override;
    ADDRESSVF(0x008223E0, XUserSetPropertyExLiveOverlappedCommand_Z, LiveOverlappedCommand_Z_vftable_1);
    virtual void LiveOverlappedCommand_Z_vftable_1() override;
    virtual void *LiveOverlappedCommand_Z_vftable_2() override;
};

ADDRESSVFTABLE(0x009B0314, IT_PilotMove);
class __declspec(dllexport) IT_PilotMove : public LodMove_Z
{
public:
    ADDRESSSYMBOL(0x00604550, "?BaseObject_Z_vftable_0@IT_PilotMove@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x004D58B0, IT_PilotMove, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x006045F0, "?Manipulator_Z_vftable_14@IT_PilotMove@@UAEXXZ");
    virtual void Manipulator_Z_vftable_14() override;
    ADDRESSSYMBOL(0x00604630, "?Manipulator_Z_vftable_17@IT_PilotMove@@UAEXH@Z");
    virtual void Manipulator_Z_vftable_17(int) override;
    ADDRESSSYMBOL(0x006047D0, "?ObjectMove_Z_vftable_18@IT_PilotMove@@UAEXHHHHHH@Z");
    virtual void ObjectMove_Z_vftable_18(int, int, int, int, int, int) override;
    char data[360];
};

#include "D3DTnL_Renderer_Z.h"

ADDRESSVFTABLE(0x009B36EC, MISSION_START_MIDDLE_G);
class __declspec(dllexport) MISSION_START_MIDDLE_G : public Agent_Z
{
public:
    ADDRESSSYMBOL(0x004FE730, "?BaseObject_Z_vftable_0@MISSION_START_MIDDLE_G@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x004FE6F0, MISSION_START_MIDDLE_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x004FE600, "?ABC_Agent_vftable_14@MISSION_START_MIDDLE_G@@UAEHXZ");
    virtual int ABC_Agent_vftable_14() override;
    ADDRESSVF(0x004FE610, MISSION_START_MIDDLE_G, ABC_Agent_vftable_15);
    virtual void ABC_Agent_vftable_15() override;
    ADDRESSSYMBOL(0x004FE620, "?ABC_Agent_vftable_16@MISSION_START_MIDDLE_G@@UAEXH@Z");
    virtual void ABC_Agent_vftable_16(int) override;
    ADDRESSVF(0x004FE650, MISSION_START_MIDDLE_G, ABC_Agent_vftable_17);
    virtual void ABC_Agent_vftable_17() override;
    ADDRESSSYMBOL(0x004FE740, "?Agent_Z_vftable_20@MISSION_START_MIDDLE_G@@UAEXXZ");
    virtual void Agent_Z_vftable_20() override;
};

ADDRESSVFTABLE(0x009AEC1C, ClientGame_G);
class __declspec(dllexport) ClientGame_G : public Client_G
{
public:
    ADDRESSVF(0x004D6010, ClientGame_G, NetObject_Z_vftable_0);
    virtual void NetObject_Z_vftable_0() override;
    ADDRESSSYMBOL(0x005AB1B0, "?ComObject_Z_vftable_3@ClientGame_G@@UAEXH@Z");
    virtual void ComObject_Z_vftable_3(int) override;
    ADDRESSVF(0x004D5FC0, ClientGame_G, ComObject_Z_vftable_7);
    virtual void ComObject_Z_vftable_7() override;
};

ADDRESSVFTABLE(0x009D6278, XUserSetContextExLiveOverlappedCommand_Z);
class __declspec(dllexport) XUserSetContextExLiveOverlappedCommand_Z : public LiveOverlappedCommand_Z
{
public:
    ADDRESSVF(0x008224B0, XUserSetContextExLiveOverlappedCommand_Z, LiveOverlappedCommand_Z_vftable_0);
    virtual void LiveOverlappedCommand_Z_vftable_0() override;
    ADDRESSVF(0x00822480, XUserSetContextExLiveOverlappedCommand_Z, LiveOverlappedCommand_Z_vftable_1);
    virtual void LiveOverlappedCommand_Z_vftable_1() override;
    virtual void *LiveOverlappedCommand_Z_vftable_2() override;
};

ADDRESSVFTABLE(0x009C919C, DynamicAnim2_Z);
class __declspec(dllexport) DynamicAnim2_Z : public DynamicAnim_Z
{
public:
    ADDRESSVF(0x00688410, DynamicAnim2_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x007C5220, "?Manipulator_Z_vftable_14@DynamicAnim2_Z@@UAEXXZ");
    virtual void Manipulator_Z_vftable_14() override;
    ADDRESSSYMBOL(0x007C64A0, "?Manipulator_Z_vftable_17@DynamicAnim2_Z@@UAEXH@Z");
    virtual void Manipulator_Z_vftable_17(int) override;
    ADDRESSVF(0x00688370, DynamicAnim2_Z, DynamicAnim_Z_vftable_18);
    virtual void DynamicAnim_Z_vftable_18() override;
    ADDRESSVF(0x007C53C0, DynamicAnim2_Z, DynamicAnim_Z_vftable_19);
    virtual void DynamicAnim_Z_vftable_19() override;
    ADDRESSVF(0x007C7BD0, DynamicAnim2_Z, DynamicAnim_Z_vftable_20);
    virtual void DynamicAnim_Z_vftable_20() override;
    ADDRESSVF(0x007C7C90, DynamicAnim2_Z, DynamicAnim_Z_vftable_21);
    virtual void DynamicAnim_Z_vftable_21() override;
    ADDRESSVF(0x00688380, DynamicAnim2_Z, DynamicAnim_Z_vftable_22);
    virtual void DynamicAnim_Z_vftable_22() override;
    char data[548];
};

ADDRESSVFTABLE(0x009CAE18, CompVec2100k_48_Z);
class __declspec(dllexport) CompVec2100k_48_Z : public CompField_Z
{
public:
    ADDRESSVF(0x006C2520, CompVec2100k_48_Z, CompField_Z_vftable_0);
    virtual void CompField_Z_vftable_0() override;
    virtual int CompField_Z_vftable_1() override;
    virtual int CompField_Z_vftable_2() override;
    virtual int CompField_Z_vftable_3() override;
    ADDRESSVF(0x006C1FB0, CompVec2100k_48_Z, CompField_Z_vftable_4);
    virtual void CompField_Z_vftable_4() override;
    ADDRESSVF(0x006C1FD0, CompVec2100k_48_Z, CompField_Z_vftable_5);
    virtual void CompField_Z_vftable_5() override;
};

ADDRESSVFTABLE(0x009BE6CC, Dialog_Loading);
class __declspec(dllexport) Dialog_Loading : public DialogMenu_G
{
public:
    ADDRESSVF(0x00589600, Dialog_Loading, CWindowHierarchy_G_vftable_0);
    virtual void CWindowHierarchy_G_vftable_0() override;
    ADDRESSVF(0x0058FB00, Dialog_Loading, Dialog_G_vftable_19);
    virtual void Dialog_G_vftable_19() override;
    ADDRESSSYMBOL(0x0058FBD0, "?Dialog_G_vftable_20@Dialog_Loading@@UAEXXZ");
    virtual void Dialog_G_vftable_20() override;
    ADDRESSVF(0x0058FC20, Dialog_Loading, Dialog_G_vftable_23);
    virtual void Dialog_G_vftable_23() override;
};

ADDRESSVFTABLE(0x009B446C, IT_BREAKBASE_G);
class __declspec(dllexport) IT_BREAKBASE_G : public Agent_Z
{
public:
    ADDRESSSYMBOL(0x0050F3A0, "?BaseObject_Z_vftable_0@IT_BREAKBASE_G@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x0050F320, IT_BREAKBASE_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x00510400, "?ABC_Agent_vftable_14@IT_BREAKBASE_G@@UAEHXZ");
    virtual int ABC_Agent_vftable_14() override;
    ADDRESSVF(0x005103F0, IT_BREAKBASE_G, ABC_Agent_vftable_15);
    virtual void ABC_Agent_vftable_15() override;
    ADDRESSSYMBOL(0x005103C0, "?ABC_Agent_vftable_16@IT_BREAKBASE_G@@UAEXH@Z");
    virtual void ABC_Agent_vftable_16(int) override;
    ADDRESSVF(0x005103B0, IT_BREAKBASE_G, ABC_Agent_vftable_17);
    virtual void ABC_Agent_vftable_17() override;
    ADDRESSSYMBOL(0x0050F3C0, "?Agent_Z_vftable_20@IT_BREAKBASE_G@@UAEXXZ");
    virtual void Agent_Z_vftable_20() override;
    ADDRESSVF(0x0050F430, IT_BREAKBASE_G, Agent_Z_vftable_24);
    virtual void Agent_Z_vftable_24() override;
    ADDRESSVF(0x0050F5B0, IT_BREAKBASE_G, Agent_Z_vftable_25);
    virtual void Agent_Z_vftable_25() override;
    ADDRESSVF(0x0050F6D0, IT_BREAKBASE_G, IT_BREAKBASE_G_vftable_39);
    virtual void IT_BREAKBASE_G_vftable_39();
    ADDRESSVF(0x0050FEF0, IT_BREAKBASE_G, IT_BREAKBASE_G_vftable_40);
    virtual void IT_BREAKBASE_G_vftable_40();
    char data[24];
};

ADDRESSVFTABLE(0x009C3078, GameServerAtLogin_G);
class __declspec(dllexport) GameServerAtLogin_G : public BaseGameObject_G
{
public:
    ADDRESSVF(0x005B4980, GameServerAtLogin_G, ComObj_Z_vftable_0);
    virtual void ComObj_Z_vftable_0() override;
    virtual void ComObj_Z_vftable_3(int) override;
    virtual void ComObj_Z_vftable_4(int) override;
};

ADDRESSVFTABLE(0x009CC8E8, ComPipeMessage_Z);
class __declspec(dllexport) ComPipeMessage_Z : public ComPipe_Z
{
public:
    ADDRESSSYMBOL(0x0072D140, "?ComPipe_Z_vftable_2@ComPipeMessage_Z@@UAEXXZ");
    virtual void ComPipe_Z_vftable_2() override;
    ADDRESSVF(0x0072CE40, ComPipeMessage_Z, ComPipeMessage_Z_vftable_7);
    virtual void ComPipeMessage_Z_vftable_7();
    ADDRESSVF(0x0072CED0, ComPipeMessage_Z, ComPipeMessage_Z_vftable_8);
    virtual void ComPipeMessage_Z_vftable_8();
    virtual char ComPipeMessage_Z_vftable_9();
};

ADDRESSVFTABLE(0x009C9E6C, Material_Z);
class __declspec(dllexport) Material_Z : public ResourceObject_Z
{
public:
    ADDRESSVF(0x00695DA0, Material_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x006DDC50, "?BaseObject_Z_vftable_3@Material_Z@@UAEXH@Z");
    virtual void BaseObject_Z_vftable_3(int) override;
    ADDRESSSYMBOL(0x006DDCA0, "?BaseObject_Z_vftable_4@Material_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_4() override;
    ADDRESSVF(0x006DDE00, Material_Z, BaseObject_Z_vftable_11);
    virtual void BaseObject_Z_vftable_11() override;
    ADDRESSSYMBOL(0x00695EA0, "?BaseObject_Z_vftable_12@Material_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_12() override;
    ADDRESSVF(0x00695E40, Material_Z, BaseObject_Z_vftable_13);
    virtual void BaseObject_Z_vftable_13() override;
    ADDRESSVF(0x00696140, Material_Z, Material_Z_vftable_16);
    virtual void Material_Z_vftable_16();
    ADDRESSVF(0x00695EE0, Material_Z, Material_Z_vftable_17);
    virtual void Material_Z_vftable_17();
    ADDRESSVF(0x00695F70, Material_Z, Material_Z_vftable_18);
    virtual void Material_Z_vftable_18();
    char data[180];
};

ADDRESSVFTABLE(0x009C2934, GameWorldSrv);
class __declspec(dllexport) GameWorldSrv : public ComWorldSrv_Z
{
public:
    ADDRESSVF(0x005AADC0, GameWorldSrv, ComWorld_Z_vftable_0);
    virtual void ComWorld_Z_vftable_0() override;
    ADDRESSVF(0x005B5630, GameWorldSrv, ComWorld_Z_vftable_1);
    virtual void ComWorld_Z_vftable_1() override;
};

ADDRESSVFTABLE(0x009A4FB4, Dialog_BaseAlert);
class __declspec(dllexport) Dialog_BaseAlert : public Dialog_G
{
public:
    ADDRESSVF(0x00442770, Dialog_BaseAlert, CWindowHierarchy_G_vftable_0);
    virtual void CWindowHierarchy_G_vftable_0() override;
    ADDRESSSYMBOL(0x0043FFE0, "?Dialog_G_vftable_16@Dialog_BaseAlert@@UAEXH@Z");
    virtual void Dialog_G_vftable_16(int) override;
    ADDRESSSYMBOL(0x0043FE50, "?Dialog_G_vftable_17@Dialog_BaseAlert@@UAEXXZ");
    virtual void Dialog_G_vftable_17() override;
    ADDRESSVF(0x0043FF30, Dialog_BaseAlert, Dialog_G_vftable_19);
    virtual void Dialog_G_vftable_19() override;
    ADDRESSSYMBOL(0x0043FFA0, "?Dialog_G_vftable_20@Dialog_BaseAlert@@UAEXXZ");
    virtual void Dialog_G_vftable_20() override;
    virtual void Dialog_G_vftable_22() override;
    virtual void Dialog_BaseAlert_vftable_28() = 0;
    virtual void Dialog_BaseAlert_vftable_29() = 0;
};

ADDRESSVFTABLE(0x009B1A58, PATH_ATV_Cache);
class __declspec(dllexport) PATH_ATV_Cache : public PATH_Cache
{
public:
    ADDRESSVF(0x004DD400, PATH_ATV_Cache, PATH_Cache_vftable_0);
    virtual void PATH_Cache_vftable_0() override;
    ADDRESSVF(0x004DD420, PATH_ATV_Cache, PATH_Cache_vftable_1);
    virtual void PATH_Cache_vftable_1() override;
};

ADDRESSVFTABLE(0x009A1DBC, CS_Class_WAIT);
class __declspec(dllexport) CS_Class_WAIT : public CreaturesState_G
{
public:
    ADDRESSVF(0x00426300, CS_Class_WAIT, StateTemplate_G_vftable_0);
    virtual void StateTemplate_G_vftable_0() override;
    ADDRESSSYMBOL(0x004283A0, "?StateTemplate_G_vftable_1@CS_Class_WAIT@@UAEXH@Z");
    virtual void StateTemplate_G_vftable_1(int) override;
    ADDRESSSYMBOL(0x00428400, "?StateTemplate_G_vftable_3@CS_Class_WAIT@@UAEDH@Z");
    virtual char StateTemplate_G_vftable_3(int) override;
};

ADDRESSVFTABLE(0x009C68AC, Node_Z);
class __declspec(dllexport) Node_Z : public ResourceObject_Z
{
public:
    ADDRESSVF(0x0065E0F0, Node_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x00771D20, "?BaseObject_Z_vftable_3@Node_Z@@UAEXH@Z");
    virtual void BaseObject_Z_vftable_3(int) override;
    ADDRESSSYMBOL(0x00771E20, "?BaseObject_Z_vftable_4@Node_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_4() override;
    ADDRESSSYMBOL(0x00771EE0, "?BaseObject_Z_vftable_5@Node_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_5() override;
    ADDRESSVF(0x0065E280, Node_Z, BaseObject_Z_vftable_13);
    virtual void BaseObject_Z_vftable_13() override;
    char data[208];
};

ADDRESSVFTABLE(0x009A5304, DebugInfo);
class __declspec(dllexport) DebugInfo : public ViewportHUD
{
public:
    ADDRESSVF(0x0045F790, DebugInfo, ViewportHUD_vftable_13);
    virtual void ViewportHUD_vftable_13() override;
    ADDRESSVF(0x0045F760, DebugInfo, ViewportHUD_vftable_14);
    virtual void ViewportHUD_vftable_14() override;
};

ADDRESSVFTABLE(0x009B788C, MapVolumeAgent_G);
class __declspec(dllexport) MapVolumeAgent_G : public VolumeAgent_Z
{
public:
    ADDRESSSYMBOL(0x00573FB0, "?BaseObject_Z_vftable_0@MapVolumeAgent_G@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x005420E0, MapVolumeAgent_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x00542020, "?ABC_Agent_vftable_14@MapVolumeAgent_G@@UAEHXZ");
    virtual int ABC_Agent_vftable_14() override;
    ADDRESSVF(0x00542030, MapVolumeAgent_G, ABC_Agent_vftable_15);
    virtual void ABC_Agent_vftable_15() override;
    ADDRESSSYMBOL(0x00542060, "?ABC_Agent_vftable_16@MapVolumeAgent_G@@UAEXH@Z");
    virtual void ABC_Agent_vftable_16(int) override;
    ADDRESSVF(0x00542090, MapVolumeAgent_G, ABC_Agent_vftable_17);
    virtual void ABC_Agent_vftable_17() override;
    ADDRESSSYMBOL(0x00574010, "?Agent_Z_vftable_20@MapVolumeAgent_G@@UAEXXZ");
    virtual void Agent_Z_vftable_20() override;
    ADDRESSVF(0x00573FD0, MapVolumeAgent_G, Agent_Z_vftable_24);
    virtual void Agent_Z_vftable_24() override;
    ADDRESSSYMBOL(0x00574050, "?VolumeAgent_Z_vftable_42@MapVolumeAgent_G@@UAEXH@Z");
    virtual void VolumeAgent_Z_vftable_42(int) override;
    ADDRESSSYMBOL(0x00574100, "?VolumeAgent_Z_vftable_43@MapVolumeAgent_G@@UAEXH@Z");
    virtual void VolumeAgent_Z_vftable_43(int) override;
    ADDRESSSYMBOL(0x005740B0, "?VolumeAgent_Z_vftable_44@MapVolumeAgent_G@@UAEXH@Z");
    virtual void VolumeAgent_Z_vftable_44(int) override;
    char data[4];
};

ADDRESSVFTABLE(0x009D08A4, AGW_WorkBumps);
class __declspec(dllexport) AGW_WorkBumps : public AGW_TerraForms
{
public:
    ADDRESSSYMBOL(0x0079C980, "?AGW_TerraForms_vftable_2@AGW_WorkBumps@@UAEXHHH@Z");
    virtual void AGW_TerraForms_vftable_2(int, int, int) override;
    ADDRESSVF(0x0074CF20, AGW_WorkBumps, AGW_TerraForms_vftable_6);
    virtual void AGW_TerraForms_vftable_6() override;
    ADDRESSVF(0x0074CF40, AGW_WorkBumps, AGW_TerraForms_vftable_7);
    virtual void AGW_TerraForms_vftable_7() override;
    ADDRESSVF(0x0079D2F0, AGW_WorkBumps, AGW_TerraForms_vftable_8);
    virtual void AGW_TerraForms_vftable_8() override;
    ADDRESSVF(0x0074CF50, AGW_WorkBumps, AGW_TerraForms_vftable_9);
    virtual void AGW_TerraForms_vftable_9() override;
    ADDRESSVF(0x0074E2D0, AGW_WorkBumps, AGW_TerraForms_vftable_11);
    virtual void AGW_TerraForms_vftable_11() override;
    ADDRESSVF(0x0079C8E0, AGW_WorkBumps, AGW_TerraForms_vftable_12);
    virtual void AGW_TerraForms_vftable_12() override;
};

ADDRESSVFTABLE(0x009A3694, BaseSharingPlayAnimAgent_G);
class __declspec(dllexport) BaseSharingPlayAnimAgent_G : public Agent_Z
{
public:
    ADDRESSVF(0x00434BC0, BaseSharingPlayAnimAgent_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x00434860, "?ABC_Agent_vftable_14@BaseSharingPlayAnimAgent_G@@UAEHXZ");
    virtual int ABC_Agent_vftable_14() override;
    ADDRESSVF(0x00434870, BaseSharingPlayAnimAgent_G, ABC_Agent_vftable_15);
    virtual void ABC_Agent_vftable_15() override;
    ADDRESSSYMBOL(0x00434880, "?ABC_Agent_vftable_16@BaseSharingPlayAnimAgent_G@@UAEXH@Z");
    virtual void ABC_Agent_vftable_16(int) override;
    ADDRESSVF(0x004348B0, BaseSharingPlayAnimAgent_G, ABC_Agent_vftable_17);
    virtual void ABC_Agent_vftable_17() override;
    ADDRESSVF(0x004348C0, BaseSharingPlayAnimAgent_G, Agent_Z_vftable_21);
    virtual void Agent_Z_vftable_21() override;
};

ADDRESSVFTABLE(0x009B758C, FXVolumeAgent_G);
class __declspec(dllexport) FXVolumeAgent_G : public VolumeAgent_Z
{
public:
    ADDRESSSYMBOL(0x00571730, "?BaseObject_Z_vftable_0@FXVolumeAgent_G@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x005416E0, FXVolumeAgent_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x00541640, "?ABC_Agent_vftable_14@FXVolumeAgent_G@@UAEHXZ");
    virtual int ABC_Agent_vftable_14() override;
    ADDRESSVF(0x00541650, FXVolumeAgent_G, ABC_Agent_vftable_15);
    virtual void ABC_Agent_vftable_15() override;
    ADDRESSSYMBOL(0x00541680, "?ABC_Agent_vftable_16@FXVolumeAgent_G@@UAEXH@Z");
    virtual void ABC_Agent_vftable_16(int) override;
    ADDRESSVF(0x005416B0, FXVolumeAgent_G, ABC_Agent_vftable_17);
    virtual void ABC_Agent_vftable_17() override;
    ADDRESSSYMBOL(0x00571750, "?Agent_Z_vftable_20@FXVolumeAgent_G@@UAEXXZ");
    virtual void Agent_Z_vftable_20() override;
    ADDRESSVF(0x00571780, FXVolumeAgent_G, Agent_Z_vftable_24);
    virtual void Agent_Z_vftable_24() override;
    ADDRESSSYMBOL(0x00571840, "?VolumeAgent_Z_vftable_42@FXVolumeAgent_G@@UAEXH@Z");
    virtual void VolumeAgent_Z_vftable_42(int) override;
    ADDRESSSYMBOL(0x005718C0, "?VolumeAgent_Z_vftable_44@FXVolumeAgent_G@@UAEXH@Z");
    virtual void VolumeAgent_Z_vftable_44(int) override;
    char data[8];
};

ADDRESSVFTABLE(0x009A1E34, CS_Class_RUN);
class __declspec(dllexport) CS_Class_RUN : public CreaturesState_G
{
public:
    ADDRESSVF(0x004262E0, CS_Class_RUN, StateTemplate_G_vftable_0);
    virtual void StateTemplate_G_vftable_0() override;
    ADDRESSSYMBOL(0x00427E40, "?StateTemplate_G_vftable_1@CS_Class_RUN@@UAEXH@Z");
    virtual void StateTemplate_G_vftable_1(int) override;
    ADDRESSSYMBOL(0x00427E70, "?StateTemplate_G_vftable_3@CS_Class_RUN@@UAEDH@Z");
    virtual char StateTemplate_G_vftable_3(int) override;
};

ADDRESSVFTABLE(0x009D81AC, WinLiveVoiceManager_Z);
class __declspec(dllexport) WinLiveVoiceManager_Z : public LiveVoiceManager_Z
{
public:
    ADDRESSVF(0x00875210, WinLiveVoiceManager_Z, VoiceManager_Z_vftable_3);
    virtual void VoiceManager_Z_vftable_3() override;
    ADDRESSVF(0x008751A0, WinLiveVoiceManager_Z, LiveVoiceManager_Z_vftable_19);
    virtual void LiveVoiceManager_Z_vftable_19() override;
};

ADDRESSVFTABLE(0x009AC0C4, SignallingHUD);
class __declspec(dllexport) SignallingHUD : public ViewportHUD
{
public:
    virtual void ViewportHUD_vftable_0(int) override;
    virtual void ViewportHUD_vftable_1() override;
    virtual void ViewportHUD_vftable_2(int) override;
    virtual void ViewportHUD_vftable_5(int) override;
};

ADDRESSVFTABLE(0x009D61B4, NetWorkPeerToPeer_Z);
class __declspec(dllexport) NetWorkPeerToPeer_Z : public NetWorkServerClient_Z
{
public:
    ADDRESSVF(0x008222E0, NetWorkPeerToPeer_Z, NetObject_Z_vftable_0);
    virtual void NetObject_Z_vftable_0() override;
    virtual int NetWorkPeerToPeer_Z_vftable_12();
    virtual void NetWorkPeerToPeer_Z_vftable_13();
    virtual void NetWorkPeerToPeer_Z_vftable_14(int);
    virtual void NetWorkPeerToPeer_Z_vftable_15(int);
    virtual int NetWorkPeerToPeer_Z_vftable_16();
    virtual char NetWorkPeerToPeer_Z_vftable_17(int);
    virtual int NetWorkPeerToPeer_Z_vftable_18();
    virtual int NetWorkPeerToPeer_Z_vftable_19();
    virtual int NetWorkPeerToPeer_Z_vftable_20(int);
    virtual void NetWorkPeerToPeer_Z_vftable_21();
    virtual char NetWorkPeerToPeer_Z_vftable_22(int);
    virtual char NetWorkPeerToPeer_Z_vftable_23(int);
    virtual int NetWorkPeerToPeer_Z_vftable_24();
    virtual void NetWorkPeerToPeer_Z_vftable_25();
    virtual void NetWorkPeerToPeer_Z_vftable_26();
    virtual void NetWorkPeerToPeer_Z_vftable_27();
    virtual char NetWorkPeerToPeer_Z_vftable_28();
    virtual char NetWorkPeerToPeer_Z_vftable_29();
    virtual int NetWorkPeerToPeer_Z_vftable_30();
    virtual void *NetWorkPeerToPeer_Z_vftable_31(int);
    virtual int NetWorkPeerToPeer_Z_vftable_32();
    virtual int NetWorkPeerToPeer_Z_vftable_33();
    virtual char NetWorkPeerToPeer_Z_vftable_34();
    virtual void NetWorkPeerToPeer_Z_vftable_35();
    virtual char NetWorkPeerToPeer_Z_vftable_36();
    virtual void NetWorkPeerToPeer_Z_vftable_37(int);
    ADDRESSVF(0x008222C0, NetWorkPeerToPeer_Z, NetWorkPeerToPeer_Z_vftable_38);
    virtual void NetWorkPeerToPeer_Z_vftable_38();
    ADDRESSVF(0x008222D0, NetWorkPeerToPeer_Z, NetWorkPeerToPeer_Z_vftable_39);
    virtual void NetWorkPeerToPeer_Z_vftable_39();
};

ADDRESSVFTABLE(0x009B13E4, Object_Z);
class __declspec(dllexport) Object_Z : public ResourceObject_Z
{
public:
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x004DFB00, Object_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    virtual void BaseObject_Z_vftable_3(int) override;
    ADDRESSSYMBOL(0x00672630, "?BaseObject_Z_vftable_4@Object_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_4() override;
    ADDRESSVF(0x006725C0, Object_Z, BaseObject_Z_vftable_7);
    virtual void BaseObject_Z_vftable_7() override;
    virtual void BaseObject_Z_vftable_8() override;
    ADDRESSSYMBOL(0x00672600, "?BaseObject_Z_vftable_9@Object_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_9() override;
    ADDRESSVF(0x006724A0, Object_Z, BaseObject_Z_vftable_13);
    virtual void BaseObject_Z_vftable_13() override;
    virtual void Object_Z_vftable_16(int, int);
    ADDRESSVF(0x00672670, Object_Z, Object_Z_vftable_17);
    virtual void Object_Z_vftable_17();
    virtual void Object_Z_vftable_18(int, int, int);
    virtual void Object_Z_vftable_19(int, int);
    virtual int Object_Z_vftable_20(int, int, int);
    virtual int Object_Z_vftable_21(int, int);
    virtual int Object_Z_vftable_22(int, int);
    virtual int Object_Z_vftable_23(int, int, int);
    virtual int Object_Z_vftable_24(int, int);
    virtual int Object_Z_vftable_25(int, int);
    ADDRESSVF(0x00672580, Object_Z, Object_Z_vftable_26);
    virtual void Object_Z_vftable_26();
    ADDRESSVF(0x00672510, Object_Z, Object_Z_vftable_27);
    virtual void Object_Z_vftable_27();
    ADDRESSVF(0x004DFBD0, Object_Z, Object_Z_vftable_28);
    virtual void Object_Z_vftable_28();
    virtual char Object_Z_vftable_29(int, int, int, int, int, int, int, int);
    virtual char Object_Z_vftable_30(int, int, int, int, int, int, int, int);
    virtual char Object_Z_vftable_31(int, int, int, int, int, int, int, int);
    virtual char Object_Z_vftable_32(int, int, int, int, int, int, int, int);
    virtual int Object_Z_vftable_33(int, int, int, int, int, int, int, int);
    virtual int Object_Z_vftable_34(int, int, int, int, int, int, int, int);
    virtual int Object_Z_vftable_35(int, int, int, int, int, int, int, int);
    virtual int Object_Z_vftable_36(int, int, int, int, int, int, int, int, int, int, int);
    virtual char Object_Z_vftable_37(int, int, int, int);
    ADDRESSVF(0x004DFCF0, Object_Z, Object_Z_vftable_38);
    virtual void Object_Z_vftable_38();
    ADDRESSVF(0x004DFD00, Object_Z, Object_Z_vftable_39);
    virtual void Object_Z_vftable_39();
    virtual void *Object_Z_vftable_40(int);
    virtual int Object_Z_vftable_41();
    virtual void *Object_Z_vftable_42();
    char data[96];
};

ADDRESSVFTABLE(0x009D74BC, WinInput_Z);
class __declspec(dllexport) WinInput_Z : public InputPlatForm_Z
{
public:
    ADDRESSVF(0x0083B070, WinInput_Z, InputPlatForm_Z_vftable_0);
    virtual void InputPlatForm_Z_vftable_0() override;
    ADDRESSVF(0x0083B120, WinInput_Z, InputPlatForm_Z_vftable_1);
    virtual void InputPlatForm_Z_vftable_1() override;
    ADDRESSSYMBOL(0x0083B1D0, "?InputPlatForm_Z_vftable_3@WinInput_Z@@UAEXXZ");
    virtual void InputPlatForm_Z_vftable_3() override;
    ADDRESSVF(0x0083B280, WinInput_Z, InputPlatForm_Z_vftable_4);
    virtual void InputPlatForm_Z_vftable_4() override;
    ADDRESSVF(0x0083C710, WinInput_Z, InputPlatForm_Z_vftable_7);
    virtual void InputPlatForm_Z_vftable_7() override;
    virtual void InputPlatForm_Z_vftable_15(int, int) override;
    ADDRESSSYMBOL(0x0083B2E0, "?InputPlatForm_Z_vftable_16@WinInput_Z@@UAEXHHH@Z");
    virtual void InputPlatForm_Z_vftable_16(int, int, int) override;
    virtual int InputPlatForm_Z_vftable_18(int, int) override;
    ADDRESSSYMBOL(0x0083E3D0, "?InputPlatForm_Z_vftable_19@WinInput_Z@@UAEXXZ");
    virtual void InputPlatForm_Z_vftable_19() override;
    ADDRESSVF(0x0083DCE0, WinInput_Z, InputPlatForm_Z_vftable_20);
    virtual void InputPlatForm_Z_vftable_20() override;
    ADDRESSVF(0x0083DD50, WinInput_Z, InputPlatForm_Z_vftable_21);
    virtual void InputPlatForm_Z_vftable_21() override;
    ADDRESSVF(0x0083DD70, WinInput_Z, InputPlatForm_Z_vftable_26);
    virtual void InputPlatForm_Z_vftable_26() override;
    ADDRESSVF(0x0083D340, WinInput_Z, InputPlatForm_Z_vftable_28);
    virtual void InputPlatForm_Z_vftable_28() override;
    ADDRESSVF(0x0083D370, WinInput_Z, InputPlatForm_Z_vftable_29);
    virtual void InputPlatForm_Z_vftable_29() override;
    ADDRESSSYMBOL(0x0083DF10, "?InputPlatForm_Z_vftable_33@WinInput_Z@@UAEXXZ");
    virtual void InputPlatForm_Z_vftable_33() override;
    ADDRESSSYMBOL(0x0083E110, "?InputPlatForm_Z_vftable_34@WinInput_Z@@UAEHHHH@Z");
    virtual int InputPlatForm_Z_vftable_34(int, int, int) override;
    ADDRESSSYMBOL(0x0083E230, "?InputPlatForm_Z_vftable_35@WinInput_Z@@UAEHHH@Z");
    virtual int InputPlatForm_Z_vftable_35(int, int) override;
    ADDRESSSYMBOL(0x0083E500, "?InputPlatForm_Z_vftable_38@WinInput_Z@@UAEXHH@Z");
    virtual void InputPlatForm_Z_vftable_38(int, int) override;
    ADDRESSVF(0x0083B7E0, WinInput_Z, InputPlatForm_Z_vftable_40);
    virtual void InputPlatForm_Z_vftable_40() override;
    ADDRESSVF(0x0083D390, WinInput_Z, WinInput_Z_vftable_41);
    virtual void WinInput_Z_vftable_41();
};

ADDRESSVFTABLE(0x009D825C, WarpPc_Z);
class __declspec(dllexport) WarpPc_Z : public Warp_Z
{
public:
    ADDRESSVF(0x00849A30, WarpPc_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x00849AC0, "?BaseObject_Z_vftable_4@WarpPc_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_4() override;
    ADDRESSSYMBOL(0x00875930, "?Warp_Z_vftable_16@WarpPc_Z@@UAEXH@Z");
    virtual void Warp_Z_vftable_16(int) override;
    ADDRESSSYMBOL(0x00849970, "?Warp_Z_vftable_17@WarpPc_Z@@UAEHH@Z");
    virtual int Warp_Z_vftable_17(int) override;
};

ADDRESSVFTABLE(0x009D08DC, cA_GulchSegment);
class __declspec(dllexport) cA_GulchSegment : public cA_Segment
{
public:
    ADDRESSVF(0x0074D020, cA_GulchSegment, cA_BaseSurface_vftable_0);
    virtual void cA_BaseSurface_vftable_0() override;
    ADDRESSVF(0x0074CF90, cA_GulchSegment, cA_BaseSurface_vftable_1);
    virtual void cA_BaseSurface_vftable_1() override;
    ADDRESSVF(0x007A06D0, cA_GulchSegment, cA_BaseSurface_vftable_2);
    virtual void cA_BaseSurface_vftable_2() override;
    ADDRESSVF(0x007A06F0, cA_GulchSegment, cA_BaseSurface_vftable_3);
    virtual void cA_BaseSurface_vftable_3() override;
    virtual void cA_BaseSurface_vftable_4(int, int) override;
};

ADDRESSVFTABLE(0x009D29AC, Particles_Z);
class __declspec(dllexport) Particles_Z : public Object_Z
{
public:
    ADDRESSVF(0x007B6820, Particles_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x0080BF20, "?BaseObject_Z_vftable_3@Particles_Z@@UAEXH@Z");
    virtual void BaseObject_Z_vftable_3(int) override;
    ADDRESSSYMBOL(0x0080C010, "?BaseObject_Z_vftable_4@Particles_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_4() override;
    ADDRESSSYMBOL(0x0080C0B0, "?BaseObject_Z_vftable_5@Particles_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_5() override;
    ADDRESSSYMBOL(0x0080C120, "?BaseObject_Z_vftable_12@Particles_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_12() override;
    ADDRESSVF(0x007B68A0, Particles_Z, BaseObject_Z_vftable_13);
    virtual void BaseObject_Z_vftable_13() override;
    ADDRESSVF(0x007B6AB0, Particles_Z, Object_Z_vftable_26);
    virtual void Object_Z_vftable_26() override;
    ADDRESSSYMBOL(0x007B6940, "?Object_Z_vftable_36@Particles_Z@@UAEHHHHHHHHHHHH@Z");
    virtual int Object_Z_vftable_36(int, int, int, int, int, int, int, int, int, int, int) override;
    char data[24];
};

ADDRESSVFTABLE(0x009A1E7C, CS_Class_NOTICED);
class __declspec(dllexport) CS_Class_NOTICED : public CreaturesState_G
{
public:
    ADDRESSVF(0x004263C0, CS_Class_NOTICED, StateTemplate_G_vftable_0);
    virtual void StateTemplate_G_vftable_0() override;
    ADDRESSSYMBOL(0x00426630, "?StateTemplate_G_vftable_1@CS_Class_NOTICED@@UAEXH@Z");
    virtual void StateTemplate_G_vftable_1(int) override;
    ADDRESSSYMBOL(0x004268C0, "?StateTemplate_G_vftable_2@CS_Class_NOTICED@@UAEXH@Z");
    virtual void StateTemplate_G_vftable_2(int) override;
    ADDRESSSYMBOL(0x00426810, "?StateTemplate_G_vftable_3@CS_Class_NOTICED@@UAEDH@Z");
    virtual char StateTemplate_G_vftable_3(int) override;
};

ADDRESSVFTABLE(0x009A3914, FLOTTE_SPOTLIGHT);
class __declspec(dllexport) FLOTTE_SPOTLIGHT : public BaseSharingPlayAnimAgent_G
{
public:
    ADDRESSVF(0x004353C0, FLOTTE_SPOTLIGHT, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSVF(0x00435320, FLOTTE_SPOTLIGHT, BaseObject_Z_vftable_13);
    virtual void BaseObject_Z_vftable_13() override;
    ADDRESSSYMBOL(0x00435230, "?ABC_Agent_vftable_14@FLOTTE_SPOTLIGHT@@UAEHXZ");
    virtual int ABC_Agent_vftable_14() override;
    ADDRESSVF(0x00435240, FLOTTE_SPOTLIGHT, ABC_Agent_vftable_15);
    virtual void ABC_Agent_vftable_15() override;
    ADDRESSSYMBOL(0x00435250, "?ABC_Agent_vftable_16@FLOTTE_SPOTLIGHT@@UAEXH@Z");
    virtual void ABC_Agent_vftable_16(int) override;
    ADDRESSVF(0x00435280, FLOTTE_SPOTLIGHT, ABC_Agent_vftable_17);
    virtual void ABC_Agent_vftable_17() override;
    ADDRESSVF(0x00435290, FLOTTE_SPOTLIGHT, Agent_Z_vftable_24);
    virtual void Agent_Z_vftable_24() override;
    ADDRESSVF(0x004352F0, FLOTTE_SPOTLIGHT, Agent_Z_vftable_25);
    virtual void Agent_Z_vftable_25() override;
    char data[96];
};

ADDRESSVFTABLE(0x009C0EEC, CPreviewList_G);
class __declspec(dllexport) CPreviewList_G : public CWindow_G
{
public:
    ADDRESSVF(0x0059DFB0, CPreviewList_G, CWindowHierarchy_G_vftable_0);
    virtual void CWindowHierarchy_G_vftable_0() override;
    ADDRESSVF(0x0059E030, CPreviewList_G, CWindow_G_vftable_15);
    virtual void CWindow_G_vftable_15() override;
    virtual void CWindow_G_vftable_16() override;
    virtual void CWindow_G_vftable_18() override;
    virtual char CWindow_G_vftable_21() override;
    ADDRESSSYMBOL(0x0059E140, "?CWindow_G_vftable_22@CPreviewList_G@@UAEDXZ");
    virtual char CWindow_G_vftable_22() override;
    ADDRESSVF(0x0059E260, CPreviewList_G, CWindow_G_vftable_25);
    virtual void CWindow_G_vftable_25() override;
    virtual int CPreviewList_G_vftable_31();
    ADDRESSVF(0x0059E2B0, CPreviewList_G, CPreviewList_G_vftable_32);
    virtual void CPreviewList_G_vftable_32();
    ADDRESSVF(0x0059E0A0, CPreviewList_G, CPreviewList_G_vftable_33);
    virtual void CPreviewList_G_vftable_33();
    ADDRESSVF(0x0059E0E0, CPreviewList_G, CPreviewList_G_vftable_34);
    virtual void CPreviewList_G_vftable_34();
    ADDRESSVF(0x0059E380, CPreviewList_G, CPreviewList_G_vftable_35);
    virtual void CPreviewList_G_vftable_35();
    ADDRESSVF(0x0059E430, CPreviewList_G, CPreviewList_G_vftable_36);
    virtual void CPreviewList_G_vftable_36();
    ADDRESSVF(0x0059E3D0, CPreviewList_G, CPreviewList_G_vftable_37);
    virtual void CPreviewList_G_vftable_37();
    ADDRESSVF(0x0059E4C0, CPreviewList_G, CPreviewList_G_vftable_38);
    virtual void CPreviewList_G_vftable_38();
    ADDRESSVF(0x0059E520, CPreviewList_G, CPreviewList_G_vftable_39);
    virtual void CPreviewList_G_vftable_39();
};

ADDRESSVFTABLE(0x009C2FF4, GameMissionsStart_G);
class __declspec(dllexport) GameMissionsStart_G : public BaseGameObject_G
{
public:
    ADDRESSVF(0x005B4800, GameMissionsStart_G, ComObj_Z_vftable_0);
    virtual void ComObj_Z_vftable_0() override;
    virtual void ComObj_Z_vftable_1() override;
    virtual void ComObj_Z_vftable_2() override;
    virtual void ComObj_Z_vftable_3(int) override;
    virtual void ComObj_Z_vftable_4(int) override;
    ADDRESSSYMBOL(0x005B47C0, "?ComObj_Z_vftable_7@GameMissionsStart_G@@UAEDH@Z");
    virtual char ComObj_Z_vftable_7(int) override;
    virtual char ComObj_Z_vftable_8(int) override;
};

ADDRESSVFTABLE(0x009C58D4, Spline_Z);
class __declspec(dllexport) Spline_Z : public Object_Z
{
public:
    ADDRESSVF(0x0063B300, Spline_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x00777D00, "?BaseObject_Z_vftable_3@Spline_Z@@UAEXH@Z");
    virtual void BaseObject_Z_vftable_3(int) override;
    ADDRESSSYMBOL(0x0063B360, "?BaseObject_Z_vftable_12@Spline_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_12() override;
    virtual void Object_Z_vftable_16(int, int) override;
    char data[36];
};

ADDRESSVFTABLE(0x009C7234, ObjectDatas_Z);
class __declspec(dllexport) ObjectDatas_Z : public ResourceObject_Z
{
public:
    ADDRESSVF(0x006727C0, ObjectDatas_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x006728D0, "?BaseObject_Z_vftable_3@ObjectDatas_Z@@UAEXH@Z");
    virtual void BaseObject_Z_vftable_3(int) override;
    ADDRESSVF(0x006727F0, ObjectDatas_Z, BaseObject_Z_vftable_13);
    virtual void BaseObject_Z_vftable_13() override;
    virtual void ObjectDatas_Z_vftable_16(int, int, int);
    virtual void ObjectDatas_Z_vftable_17(int, int);
    ADDRESSVF(0x00672850, ObjectDatas_Z, ObjectDatas_Z_vftable_18);
    virtual void ObjectDatas_Z_vftable_18();
    ADDRESSVF(0x006728A0, ObjectDatas_Z, ObjectDatas_Z_vftable_19);
    virtual void ObjectDatas_Z_vftable_19();
    ADDRESSVF(0x006728C0, ObjectDatas_Z, ObjectDatas_Z_vftable_20);
    virtual void ObjectDatas_Z_vftable_20();
    ADDRESSVF(0x0066EBD0, ObjectDatas_Z, ObjectDatas_Z_vftable_21);
    virtual void ObjectDatas_Z_vftable_21();
    virtual void ObjectDatas_Z_vftable_22(int);
    virtual int ObjectDatas_Z_vftable_23(int, int, int);
    virtual void ObjectDatas_Z_vftable_24(int, int);
    virtual void ObjectDatas_Z_vftable_25(int);
};

ADDRESSVFTABLE(0x009B704C, WakeUpDynVolAgent_G);
class __declspec(dllexport) WakeUpDynVolAgent_G : public VolumeAgent_Z
{
public:
    ADDRESSVF(0x00540E30, WakeUpDynVolAgent_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x00540DA0, "?ABC_Agent_vftable_14@WakeUpDynVolAgent_G@@UAEHXZ");
    virtual int ABC_Agent_vftable_14() override;
    ADDRESSVF(0x00540DB0, WakeUpDynVolAgent_G, ABC_Agent_vftable_15);
    virtual void ABC_Agent_vftable_15() override;
    ADDRESSSYMBOL(0x00540DE0, "?ABC_Agent_vftable_16@WakeUpDynVolAgent_G@@UAEXH@Z");
    virtual void ABC_Agent_vftable_16(int) override;
    ADDRESSVF(0x00540E10, WakeUpDynVolAgent_G, ABC_Agent_vftable_17);
    virtual void ABC_Agent_vftable_17() override;
    ADDRESSSYMBOL(0x00572540, "?VolumeAgent_Z_vftable_42@WakeUpDynVolAgent_G@@UAEXH@Z");
    virtual void VolumeAgent_Z_vftable_42(int) override;
};

ADDRESSVFTABLE(0x009CAEB8, CompMov3100k_Z);
class __declspec(dllexport) CompMov3100k_Z : public CompField_Z
{
public:
    ADDRESSVF(0x006C2620, CompMov3100k_Z, CompField_Z_vftable_0);
    virtual void CompField_Z_vftable_0() override;
    virtual int CompField_Z_vftable_1() override;
    virtual int CompField_Z_vftable_2() override;
    virtual int CompField_Z_vftable_3() override;
    ADDRESSVF(0x006C21B0, CompMov3100k_Z, CompField_Z_vftable_4);
    virtual void CompField_Z_vftable_4() override;
    ADDRESSVF(0x006C2250, CompMov3100k_Z, CompField_Z_vftable_5);
    virtual void CompField_Z_vftable_5() override;
};

ADDRESSVFTABLE(0x009B0934, IT_TornadoDebrisManipulator);
class __declspec(dllexport) IT_TornadoDebrisManipulator : public LodMove_Z
{
public:
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x004D5C20, IT_TornadoDebrisManipulator, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    virtual void Manipulator_Z_vftable_14() override;
    ADDRESSSYMBOL(0x005EA0A0, "?Manipulator_Z_vftable_17@IT_TornadoDebrisManipulator@@UAEXH@Z");
    virtual void Manipulator_Z_vftable_17(int) override;
    virtual void ObjectMove_Z_vftable_18(int, int, int, int, int, int) override;
    char data[4];
};

ADDRESSVFTABLE(0x009D303C, GenWorldSurface_Z);
class __declspec(dllexport) GenWorldSurface_Z : public Object_Z
{
public:
    ADDRESSVF(0x007C2DF0, GenWorldSurface_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x0077C4A0, "?BaseObject_Z_vftable_3@GenWorldSurface_Z@@UAEXH@Z");
    virtual void BaseObject_Z_vftable_3(int) override;
    ADDRESSSYMBOL(0x0077C4D0, "?BaseObject_Z_vftable_4@GenWorldSurface_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_4() override;
    ADDRESSVF(0x007C2E30, GenWorldSurface_Z, BaseObject_Z_vftable_13);
    virtual void BaseObject_Z_vftable_13() override;
    char data[132];
};

ADDRESSVFTABLE(0x009CAD38, CompU_32_Z);
class __declspec(dllexport) CompU_32_Z : public CompField_Z
{
public:
    ADDRESSVF(0x006C23A0, CompU_32_Z, CompField_Z_vftable_0);
    virtual void CompField_Z_vftable_0() override;
    virtual int CompField_Z_vftable_1() override;
    virtual int CompField_Z_vftable_2() override;
    virtual int CompField_Z_vftable_3() override;
    ADDRESSVF(0x006C1AB0, CompU_32_Z, CompField_Z_vftable_4);
    virtual void CompField_Z_vftable_4() override;
    ADDRESSVF(0x006C1B10, CompU_32_Z, CompField_Z_vftable_5);
    virtual void CompField_Z_vftable_5() override;
};

ADDRESSVFTABLE(0x009B04B4, IT_POWERJOBManipulator_G);
class __declspec(dllexport) IT_POWERJOBManipulator_G : public LodMove_Z
{
public:
    ADDRESSSYMBOL(0x00514F30, "?BaseObject_Z_vftable_0@IT_POWERJOBManipulator_G@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x004D59B0, IT_POWERJOBManipulator_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x00514F50, "?Manipulator_Z_vftable_14@IT_POWERJOBManipulator_G@@UAEXXZ");
    virtual void Manipulator_Z_vftable_14() override;
    ADDRESSSYMBOL(0x00514F70, "?Manipulator_Z_vftable_17@IT_POWERJOBManipulator_G@@UAEXH@Z");
    virtual void Manipulator_Z_vftable_17(int) override;
    ADDRESSSYMBOL(0x00515020, "?ObjectMove_Z_vftable_18@IT_POWERJOBManipulator_G@@UAEXHHHHHH@Z");
    virtual void ObjectMove_Z_vftable_18(int, int, int, int, int, int) override;
    char data[4];
};

ADDRESSVFTABLE(0x009C24AC, ComMgrSrv_Z);
class __declspec(dllexport) ComMgrSrv_Z : public ComMgr_Z
{
public:
    ADDRESSVF(0x005A5D80, ComMgrSrv_Z, ComOwner_Z_vftable_0);
    virtual void ComOwner_Z_vftable_0() override;
    ADDRESSSYMBOL(0x0076F100, "?ComMgr_Z_vftable_7@ComMgrSrv_Z@@UAEXH@Z");
    virtual void ComMgr_Z_vftable_7(int) override;
    ADDRESSVF(0x0076EE50, ComMgrSrv_Z, ComMgr_Z_vftable_9);
    virtual void ComMgr_Z_vftable_9() override;
    ADDRESSSYMBOL(0x0076F290, "?ComMgr_Z_vftable_16@ComMgrSrv_Z@@UAEDHH@Z");
    virtual char ComMgr_Z_vftable_16(int, int) override;
    ADDRESSSYMBOL(0x0076F300, "?ComMgr_Z_vftable_17@ComMgrSrv_Z@@UAEDHH@Z");
    virtual char ComMgr_Z_vftable_17(int, int) override;
    ADDRESSSYMBOL(0x0076F3A0, "?ComMgr_Z_vftable_18@ComMgrSrv_Z@@UAEDHH@Z");
    virtual char ComMgr_Z_vftable_18(int, int) override;
    ADDRESSVF(0x005A5D20, ComMgrSrv_Z, ComMgr_Z_vftable_22);
    virtual void ComMgr_Z_vftable_22() override;
    ADDRESSVF(0x0076ED70, ComMgrSrv_Z, ComMgrSrv_Z_vftable_32);
    virtual void ComMgrSrv_Z_vftable_32();
    ADDRESSVF(0x0076F1E0, ComMgrSrv_Z, ComMgrSrv_Z_vftable_33);
    virtual void ComMgrSrv_Z_vftable_33();
    ADDRESSVF(0x005A5D30, ComMgrSrv_Z, ComMgrSrv_Z_vftable_34);
    virtual void ComMgrSrv_Z_vftable_34();
    virtual char ComMgrSrv_Z_vftable_35();
    virtual char ComMgrSrv_Z_vftable_36();
};

ADDRESSVFTABLE(0x009DB7A4, Lod_Z);
class __declspec(dllexport) Lod_Z : public Object_Z
{
public:
    ADDRESSVF(0x0087E9E0, Lod_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x00883770, "?BaseObject_Z_vftable_3@Lod_Z@@UAEXH@Z");
    virtual void BaseObject_Z_vftable_3(int) override;
    ADDRESSSYMBOL(0x008838C0, "?BaseObject_Z_vftable_4@Lod_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_4() override;
    ADDRESSSYMBOL(0x0087EAF0, "?BaseObject_Z_vftable_12@Lod_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_12() override;
    ADDRESSVF(0x0087EB50, Lod_Z, BaseObject_Z_vftable_13);
    virtual void BaseObject_Z_vftable_13() override;
    ADDRESSSYMBOL(0x00884170, "?Object_Z_vftable_16@Lod_Z@@UAEXHH@Z");
    virtual void Object_Z_vftable_16(int, int) override;
    ADDRESSVF(0x00884440, Lod_Z, Object_Z_vftable_17);
    virtual void Object_Z_vftable_17() override;
    ADDRESSSYMBOL(0x0087EE40, "?Object_Z_vftable_20@Lod_Z@@UAEHHHH@Z");
    virtual int Object_Z_vftable_20(int, int, int) override;
    ADDRESSSYMBOL(0x0087EDF0, "?Object_Z_vftable_21@Lod_Z@@UAEHHH@Z");
    virtual int Object_Z_vftable_21(int, int) override;
    ADDRESSSYMBOL(0x0087EF30, "?Object_Z_vftable_22@Lod_Z@@UAEHHH@Z");
    virtual int Object_Z_vftable_22(int, int) override;
    ADDRESSSYMBOL(0x0087EEE0, "?Object_Z_vftable_23@Lod_Z@@UAEHHHH@Z");
    virtual int Object_Z_vftable_23(int, int, int) override;
    ADDRESSSYMBOL(0x0087EE90, "?Object_Z_vftable_24@Lod_Z@@UAEHHH@Z");
    virtual int Object_Z_vftable_24(int, int) override;
    ADDRESSSYMBOL(0x0087EF70, "?Object_Z_vftable_25@Lod_Z@@UAEHHH@Z");
    virtual int Object_Z_vftable_25(int, int) override;
    ADDRESSVF(0x0087EFB0, Lod_Z, Object_Z_vftable_26);
    virtual void Object_Z_vftable_26() override;
    ADDRESSSYMBOL(0x008846D0, "?Object_Z_vftable_29@Lod_Z@@UAEDHHHHHHHH@Z");
    virtual char Object_Z_vftable_29(int, int, int, int, int, int, int, int) override;
    ADDRESSSYMBOL(0x00884B90, "?Object_Z_vftable_30@Lod_Z@@UAEDHHHHHHHH@Z");
    virtual char Object_Z_vftable_30(int, int, int, int, int, int, int, int) override;
    ADDRESSSYMBOL(0x00885310, "?Object_Z_vftable_31@Lod_Z@@UAEDHHHHHHHH@Z");
    virtual char Object_Z_vftable_31(int, int, int, int, int, int, int, int) override;
    ADDRESSSYMBOL(0x00884DC0, "?Object_Z_vftable_33@Lod_Z@@UAEHHHHHHHHH@Z");
    virtual int Object_Z_vftable_33(int, int, int, int, int, int, int, int) override;
    ADDRESSSYMBOL(0x00885110, "?Object_Z_vftable_34@Lod_Z@@UAEHHHHHHHHH@Z");
    virtual int Object_Z_vftable_34(int, int, int, int, int, int, int, int) override;
    ADDRESSSYMBOL(0x00884F50, "?Object_Z_vftable_35@Lod_Z@@UAEHHHHHHHHH@Z");
    virtual int Object_Z_vftable_35(int, int, int, int, int, int, int, int) override;
    ADDRESSSYMBOL(0x00885650, "?Object_Z_vftable_36@Lod_Z@@UAEHHHHHHHHHHHH@Z");
    virtual int Object_Z_vftable_36(int, int, int, int, int, int, int, int, int, int, int) override;
    ADDRESSSYMBOL(0x00885850, "?Object_Z_vftable_37@Lod_Z@@UAEDHHHH@Z");
    virtual char Object_Z_vftable_37(int, int, int, int) override;
    ADDRESSVF(0x00885940, Lod_Z, Object_Z_vftable_38);
    virtual void Object_Z_vftable_38() override;
    ADDRESSVF(0x00885990, Lod_Z, Object_Z_vftable_39);
    virtual void Object_Z_vftable_39() override;
    ADDRESSSYMBOL(0x008858B0, "?Object_Z_vftable_40@Lod_Z@@UAEPAXH@Z");
    virtual void *Object_Z_vftable_40(int) override;
    ADDRESSSYMBOL(0x008858E0, "?Object_Z_vftable_41@Lod_Z@@UAEHXZ");
    virtual int Object_Z_vftable_41() override;
    ADDRESSSYMBOL(0x00885910, "?Object_Z_vftable_42@Lod_Z@@UAEPAXXZ");
    virtual void *Object_Z_vftable_42() override;
    char data[44];
};

ADDRESSVFTABLE(0x009C8F54, Txt_Z);
class __declspec(dllexport) Txt_Z : public ResourceObject_Z
{
public:
    ADDRESSVF(0x00687A90, Txt_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x007C30F0, "?BaseObject_Z_vftable_3@Txt_Z@@UAEXH@Z");
    virtual void BaseObject_Z_vftable_3(int) override;
    char data[560];
};

ADDRESSVFTABLE(0x009AED34, FakeShadows_G);
class __declspec(dllexport) FakeShadows_G : public ManipulatorSceneDraw_Z
{
public:
    ADDRESSSYMBOL(0x00509390, "?BaseObject_Z_vftable_0@FakeShadows_G@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x004D6160, FakeShadows_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSVF(0x00509540, FakeShadows_G, BaseObject_Z_vftable_13);
    virtual void BaseObject_Z_vftable_13() override;
    ADDRESSSYMBOL(0x005093C0, "?Manipulator_Z_vftable_14@FakeShadows_G@@UAEXXZ");
    virtual void Manipulator_Z_vftable_14() override;
    ADDRESSSYMBOL(0x00509630, "?ManipulatorSceneDraw_Z_vftable_19@FakeShadows_G@@UAEXH@Z");
    virtual void ManipulatorSceneDraw_Z_vftable_19(int) override;
    ADDRESSVF(0x005093D0, FakeShadows_G, FakeShadows_G_vftable_20);
    virtual void FakeShadows_G_vftable_20();
    char data[52];
};

ADDRESSVFTABLE(0x009C4C44, MenuItemLabelTT_G);
class __declspec(dllexport) MenuItemLabelTT_G : public MenuItemVirtualLabel_G
{
public:
    ADDRESSVF(0x00612470, MenuItemLabelTT_G, MenuItem_G_vftable_0);
    virtual void MenuItem_G_vftable_0() override;
    virtual int MenuItem_G_vftable_6() override;
    ADDRESSVF(0x006123F0, MenuItemLabelTT_G, MenuItem_G_vftable_7);
    virtual void MenuItem_G_vftable_7() override;
    ADDRESSVF(0x00612410, MenuItemLabelTT_G, MenuItem_G_vftable_8);
    virtual void MenuItem_G_vftable_8() override;
    ADDRESSVF(0x006123A0, MenuItemLabelTT_G, MenuItem_G_vftable_9);
    virtual void MenuItem_G_vftable_9() override;
    ADDRESSVF(0x006124C0, MenuItemLabelTT_G, MenuItemVirtualLabel_G_vftable_10);
    virtual void MenuItemVirtualLabel_G_vftable_10() override;
    ADDRESSVF(0x006124F0, MenuItemLabelTT_G, MenuItemLabelTT_G_vftable_14);
    virtual void MenuItemLabelTT_G_vftable_14();
};

ADDRESSVFTABLE(0x009A1DA4, CreaturesDynState_G);
class __declspec(dllexport) CreaturesDynState_G : public CreaturesState_G
{
public:
    ADDRESSVF(0x00426530, CreaturesDynState_G, StateTemplate_G_vftable_0);
    virtual void StateTemplate_G_vftable_0() override;
    ADDRESSSYMBOL(0x00427D50, "?StateTemplate_G_vftable_1@CreaturesDynState_G@@UAEXH@Z");
    virtual void StateTemplate_G_vftable_1(int) override;
    ADDRESSSYMBOL(0x00427DC0, "?StateTemplate_G_vftable_3@CreaturesDynState_G@@UAEDH@Z");
    virtual char StateTemplate_G_vftable_3(int) override;
    ADDRESSVF(0x00427BE0, CreaturesDynState_G, CreaturesState_G_vftable_4);
    virtual void CreaturesState_G_vftable_4() override;
};

ADDRESSVFTABLE(0x009C6A54, Camera_Z);
class __declspec(dllexport) Camera_Z : public Object_Z
{
public:
    ADDRESSVF(0x00663680, Camera_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x00664740, "?BaseObject_Z_vftable_3@Camera_Z@@UAEXH@Z");
    virtual void BaseObject_Z_vftable_3(int) override;
    ADDRESSSYMBOL(0x00664780, "?BaseObject_Z_vftable_4@Camera_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_4() override;
    virtual void Object_Z_vftable_16(int, int) override;
    ADDRESSVF(0x006639D0, Camera_Z, Object_Z_vftable_26);
    virtual void Object_Z_vftable_26() override;
    char data[4812];
};

ADDRESSVFTABLE(0x009D57CC, MemoryManager_Z);
class __declspec(dllexport) MemoryManager_Z : public Hi_MemoryManager_Z
{
public:
    ADDRESSVF(0x00820D00, MemoryManager_Z, Hi_MemoryManager_Z_vftable_0);
    virtual void Hi_MemoryManager_Z_vftable_0() override;
    virtual void Hi_MemoryManager_Z_vftable_1() override;
    virtual void Hi_MemoryManager_Z_vftable_2() override;
    ADDRESSVF(0x00820E60, MemoryManager_Z, Hi_MemoryManager_Z_vftable_3);
    virtual void Hi_MemoryManager_Z_vftable_3() override;
    ADDRESSVF(0x00820E70, MemoryManager_Z, Hi_MemoryManager_Z_vftable_4);
    virtual void Hi_MemoryManager_Z_vftable_4() override;
    ADDRESSVF(0x00820E90, MemoryManager_Z, Hi_MemoryManager_Z_vftable_5);
    virtual void Hi_MemoryManager_Z_vftable_5() override;
    ADDRESSVF(0x00820EB0, MemoryManager_Z, Hi_MemoryManager_Z_vftable_6);
    virtual void Hi_MemoryManager_Z_vftable_6() override;
    virtual void Hi_MemoryManager_Z_vftable_7(int, int) override;
    virtual int Hi_MemoryManager_Z_vftable_8(int, int) override;
    virtual char Hi_MemoryManager_Z_vftable_9(int, int, int, int) override;
    ADDRESSVF(0x00820E80, MemoryManager_Z, Hi_MemoryManager_Z_vftable_10);
    virtual void Hi_MemoryManager_Z_vftable_10() override;
    ADDRESSVF(0x00820EC0, MemoryManager_Z, Hi_MemoryManager_Z_vftable_11);
    virtual void Hi_MemoryManager_Z_vftable_11() override;
    ADDRESSVF(0x00820DE0, MemoryManager_Z, Hi_MemoryManager_Z_vftable_13);
    virtual void Hi_MemoryManager_Z_vftable_13() override;
    virtual int Hi_MemoryManager_Z_vftable_17() override;
    ADDRESSVF(0x00820ED0, MemoryManager_Z, Hi_MemoryManager_Z_vftable_18);
    virtual void Hi_MemoryManager_Z_vftable_18() override;
    virtual int Hi_MemoryManager_Z_vftable_19() override;
    virtual char Hi_MemoryManager_Z_vftable_20(int) override;
    ADDRESSVF(0x00820F10, MemoryManager_Z, Hi_MemoryManager_Z_vftable_21);
    virtual void Hi_MemoryManager_Z_vftable_21() override;
    virtual void Hi_MemoryManager_Z_vftable_26(int) override;
    virtual int Hi_MemoryManager_Z_vftable_27() override;
    virtual void Hi_MemoryManager_Z_vftable_28() override;
    virtual void Hi_MemoryManager_Z_vftable_29(int, int) override;
    virtual void Hi_MemoryManager_Z_vftable_30(int) override;
    virtual char Hi_MemoryManager_Z_vftable_31() override;
    ADDRESSVF(0x00820DB0, MemoryManager_Z, Hi_MemoryManager_Z_vftable_32);
    virtual void Hi_MemoryManager_Z_vftable_32() override;
    virtual int MemoryManager_Z_vftable_33();
};

ADDRESSVFTABLE(0x009D0900, AGW_Gulches);
class __declspec(dllexport) AGW_Gulches : public AGW_TerraForms
{
public:
    ADDRESSSYMBOL(0x0074D050, "?AGW_TerraForms_vftable_0@AGW_Gulches@@UAEXH@Z");
    virtual void AGW_TerraForms_vftable_0(int) override;
    ADDRESSSYMBOL(0x0079F970, "?AGW_TerraForms_vftable_2@AGW_Gulches@@UAEXHHH@Z");
    virtual void AGW_TerraForms_vftable_2(int, int, int) override;
    ADDRESSSYMBOL(0x0079F7A0, "?AGW_TerraForms_vftable_4@AGW_Gulches@@UAEXHH@Z");
    virtual void AGW_TerraForms_vftable_4(int, int) override;
    ADDRESSSYMBOL(0x0079F760, "?AGW_TerraForms_vftable_5@AGW_Gulches@@UAEXXZ");
    virtual void AGW_TerraForms_vftable_5() override;
    ADDRESSVF(0x0074D070, AGW_Gulches, AGW_TerraForms_vftable_6);
    virtual void AGW_TerraForms_vftable_6() override;
    ADDRESSVF(0x0074D090, AGW_Gulches, AGW_TerraForms_vftable_7);
    virtual void AGW_TerraForms_vftable_7() override;
    ADDRESSVF(0x007A0730, AGW_Gulches, AGW_TerraForms_vftable_8);
    virtual void AGW_TerraForms_vftable_8() override;
    ADDRESSVF(0x0074D0A0, AGW_Gulches, AGW_TerraForms_vftable_9);
    virtual void AGW_TerraForms_vftable_9() override;
    ADDRESSVF(0x0074E2A0, AGW_Gulches, AGW_TerraForms_vftable_11);
    virtual void AGW_TerraForms_vftable_11() override;
    ADDRESSVF(0x0079F8D0, AGW_Gulches, AGW_TerraForms_vftable_12);
    virtual void AGW_TerraForms_vftable_12() override;
};

ADDRESSVFTABLE(0x009A1EC4, CS_Class_ATTACKBOUNCE);
class __declspec(dllexport) CS_Class_ATTACKBOUNCE : public CreaturesState_G
{
public:
    ADDRESSVF(0x00426440, CS_Class_ATTACKBOUNCE, StateTemplate_G_vftable_0);
    virtual void StateTemplate_G_vftable_0() override;
    ADDRESSSYMBOL(0x00427410, "?StateTemplate_G_vftable_1@CS_Class_ATTACKBOUNCE@@UAEXH@Z");
    virtual void StateTemplate_G_vftable_1(int) override;
    ADDRESSSYMBOL(0x00427480, "?StateTemplate_G_vftable_3@CS_Class_ATTACKBOUNCE@@UAEDH@Z");
    virtual char StateTemplate_G_vftable_3(int) override;
};

ADDRESSVFTABLE(0x009C09FC, CGauge_G);
class __declspec(dllexport) CGauge_G : public CWindow_G
{
public:
    ADDRESSVF(0x0059B050, CGauge_G, CWindowHierarchy_G_vftable_0);
    virtual void CWindowHierarchy_G_vftable_0() override;
    ADDRESSSYMBOL(0x0059B6D0, "?CWindowHierarchy_G_vftable_13@CGauge_G@@UAEXH@Z");
    virtual void CWindowHierarchy_G_vftable_13(int) override;
    ADDRESSVF(0x0059B0C0, CGauge_G, CWindow_G_vftable_15);
    virtual void CWindow_G_vftable_15() override;
    ADDRESSVF(0x0059B200, CGauge_G, CWindow_G_vftable_16);
    virtual void CWindow_G_vftable_16() override;
    ADDRESSVF(0x0059B290, CGauge_G, CWindow_G_vftable_17);
    virtual void CWindow_G_vftable_17() override;
    virtual void CWindow_G_vftable_18() override;
    virtual char CWindow_G_vftable_21() override;
    virtual char CWindow_G_vftable_22() override;
    ADDRESSVF(0x0059B640, CGauge_G, CWindow_G_vftable_25);
    virtual void CWindow_G_vftable_25() override;
    ADDRESSVF(0x0059B3A0, CGauge_G, CGauge_G_vftable_31);
    virtual void CGauge_G_vftable_31();
    virtual void CGauge_G_vftable_32();
    virtual void CGauge_G_vftable_33();
};

ADDRESSVFTABLE(0x009A6ED4, InGameMapHUD);
class __declspec(dllexport) InGameMapHUD : public MapHUD
{
public:
    ADDRESSSYMBOL(0x0046A310, "?ViewportHUD_vftable_0@InGameMapHUD@@UAEXH@Z");
    virtual void ViewportHUD_vftable_0(int) override;
    ADDRESSSYMBOL(0x0046A3B0, "?ViewportHUD_vftable_1@InGameMapHUD@@UAEXXZ");
    virtual void ViewportHUD_vftable_1() override;
    ADDRESSSYMBOL(0x0046A420, "?ViewportHUD_vftable_2@InGameMapHUD@@UAEXH@Z");
    virtual void ViewportHUD_vftable_2(int) override;
    ADDRESSSYMBOL(0x0046A6D0, "?ViewportHUD_vftable_5@InGameMapHUD@@UAEXH@Z");
    virtual void ViewportHUD_vftable_5(int) override;
    ADDRESSVF(0x0046A2D0, InGameMapHUD, MapHUD_vftable_20);
    virtual void MapHUD_vftable_20() override;
    ADDRESSSYMBOL(0x0046A8F0, "?MapHUD_vftable_21@InGameMapHUD@@UAEDXZ");
    virtual char MapHUD_vftable_21() override;
};

ADDRESSVFTABLE(0x009C2F9C, GfxComObj_G);
class __declspec(dllexport) GfxComObj_G : public BaseGameObject_G
{
public:
    ADDRESSVF(0x005B3930, GfxComObj_G, ComObj_Z_vftable_0);
    virtual void ComObj_Z_vftable_0() override;
    virtual void ComObj_Z_vftable_1() override;
    virtual void ComObj_Z_vftable_2() override;
    virtual void ComObj_Z_vftable_3(int) override;
    virtual void ComObj_Z_vftable_4(int) override;
    ADDRESSSYMBOL(0x005B38F0, "?ComObj_Z_vftable_7@GfxComObj_G@@UAEDH@Z");
    virtual char ComObj_Z_vftable_7(int) override;
    virtual char ComObj_Z_vftable_8(int) override;
};

ADDRESSVFTABLE(0x009C134C, CStaticText_G);
class __declspec(dllexport) CStaticText_G : public CWindow_G
{
public:
    ADDRESSVF(0x005A02A0, CStaticText_G, CWindowHierarchy_G_vftable_0);
    virtual void CWindowHierarchy_G_vftable_0() override;
    ADDRESSVF(0x005A0320, CStaticText_G, CWindow_G_vftable_15);
    virtual void CWindow_G_vftable_15() override;
    ADDRESSVF(0x005A0390, CStaticText_G, CWindow_G_vftable_16);
    virtual void CWindow_G_vftable_16() override;
    ADDRESSVF(0x005A03C0, CStaticText_G, CWindow_G_vftable_17);
    virtual void CWindow_G_vftable_17() override;
    ADDRESSVF(0x005A05B0, CStaticText_G, CWindow_G_vftable_18);
    virtual void CWindow_G_vftable_18() override;
    virtual char CWindow_G_vftable_21() override;
    ADDRESSSYMBOL(0x005A0B20, "?CWindow_G_vftable_22@CStaticText_G@@UAEDXZ");
    virtual char CWindow_G_vftable_22() override;
    ADDRESSSYMBOL(0x005A0420, "?CWindow_G_vftable_23@CStaticText_G@@UAEXXZ");
    virtual void CWindow_G_vftable_23() override;
    ADDRESSSYMBOL(0x005A0440, "?CWindow_G_vftable_24@CStaticText_G@@UAEXXZ");
    virtual void CWindow_G_vftable_24() override;
    ADDRESSVF(0x005A09D0, CStaticText_G, CWindow_G_vftable_25);
    virtual void CWindow_G_vftable_25() override;
    virtual void CWindow_G_vftable_28() override;
    virtual void CWindow_G_vftable_29() override;
    ADDRESSVF(0x005A0590, CStaticText_G, CStaticText_G_vftable_31);
    virtual void CStaticText_G_vftable_31();
};

ADDRESSVFTABLE(0x009C1628, CPurchaseChampionship);
class __declspec(dllexport) CPurchaseChampionship : public CPurchase
{
public:
    ADDRESSVF(0x005A2EA0, CPurchaseChampionship, CPurchase_vftable_0);
    virtual void CPurchase_vftable_0() override;
    virtual char CPurchase_vftable_1() override;
    ADDRESSVF(0x005A2EE0, CPurchaseChampionship, CPurchase_vftable_4);
    virtual void CPurchase_vftable_4() override;
};

ADDRESSVFTABLE(0x009D89D8, D3DTnL_IndexBuffer_Z);
class __declspec(dllexport) D3DTnL_IndexBuffer_Z : public IndexBuffer_Z
{
public:
    ADDRESSVF(0x0084C900, D3DTnL_IndexBuffer_Z, IndexBuffer_Z_vftable_0);
    virtual void IndexBuffer_Z_vftable_0() override;
    ADDRESSVF(0x0084C990, D3DTnL_IndexBuffer_Z, IndexBuffer_Z_vftable_1);
    virtual void IndexBuffer_Z_vftable_1() override;
    ADDRESSSYMBOL(0x0084C9B0, "?IndexBuffer_Z_vftable_2@D3DTnL_IndexBuffer_Z@@UAEXXZ");
    virtual void IndexBuffer_Z_vftable_2() override;
    ADDRESSVF(0x0084C970, D3DTnL_IndexBuffer_Z, IndexBuffer_Z_vftable_3);
    virtual void IndexBuffer_Z_vftable_3() override;
};

ADDRESSVFTABLE(0x009BE54C, Dialog_Profile);
class __declspec(dllexport) Dialog_Profile : public DialogMenu_G
{
public:
    ADDRESSVF(0x005895E0, Dialog_Profile, CWindowHierarchy_G_vftable_0);
    virtual void CWindowHierarchy_G_vftable_0() override;
    ADDRESSVF(0x00592F10, Dialog_Profile, Dialog_G_vftable_19);
    virtual void Dialog_G_vftable_19() override;
    virtual void Dialog_G_vftable_20() override;
    ADDRESSVF(0x00593020, Dialog_Profile, Dialog_G_vftable_23);
    virtual void Dialog_G_vftable_23() override;
};

ADDRESSVFTABLE(0x009D65B4, WinMovieManipulator_Z);
class __declspec(dllexport) WinMovieManipulator_Z : public MovieManipulator_Z
{
public:
    ADDRESSVF(0x00831030, WinMovieManipulator_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSVF(0x00831450, WinMovieManipulator_Z, ManipulatorDraw_Z_vftable_18);
    virtual void ManipulatorDraw_Z_vftable_18() override;
    ADDRESSVF(0x008310A0, WinMovieManipulator_Z, MovieManipulator_Z_vftable_20);
    virtual void MovieManipulator_Z_vftable_20() override;
    ADDRESSVF(0x00831280, WinMovieManipulator_Z, MovieManipulator_Z_vftable_22);
    virtual void MovieManipulator_Z_vftable_22() override;
    ADDRESSSYMBOL(0x00831330, "?MovieManipulator_Z_vftable_28@WinMovieManipulator_Z@@UAEXXZ");
    virtual void MovieManipulator_Z_vftable_28() override;
};

ADDRESSVFTABLE(0x009D4C6C, WinSound_Z);
class __declspec(dllexport) WinSound_Z : public SoundManager_Z
{
public:
    ADDRESSVF(0x0081DC60, WinSound_Z, ClassNameResManager_Z_vftable_0);
    virtual void ClassNameResManager_Z_vftable_0() override;
    ADDRESSSYMBOL(0x00833810, "?ClassNameResManager_Z_vftable_1@WinSound_Z@@UAEXXZ");
    virtual void ClassNameResManager_Z_vftable_1() override;
    ADDRESSSYMBOL(0x00833750, "?SoundManager_Z_vftable_4@WinSound_Z@@UAEDXZ");
    virtual char SoundManager_Z_vftable_4() override;
    ADDRESSSYMBOL(0x00833B70, "?SoundManager_Z_vftable_6@WinSound_Z@@UAEDXZ");
    virtual char SoundManager_Z_vftable_6() override;
    ADDRESSSYMBOL(0x00833AF0, "?SoundManager_Z_vftable_7@WinSound_Z@@UAEDXZ");
    virtual char SoundManager_Z_vftable_7() override;
    ADDRESSVF(0x008342A0, WinSound_Z, SoundManager_Z_vftable_9);
    virtual void SoundManager_Z_vftable_9() override;
    ADDRESSSYMBOL(0x00834000, "?SoundManager_Z_vftable_12@WinSound_Z@@UAEXH@Z");
    virtual void SoundManager_Z_vftable_12(int) override;
    ADDRESSVF(0x00833C70, WinSound_Z, SoundManager_Z_vftable_14);
    virtual void SoundManager_Z_vftable_14() override;
    ADDRESSVF(0x00833CC0, WinSound_Z, SoundManager_Z_vftable_15);
    virtual void SoundManager_Z_vftable_15() override;
    ADDRESSSYMBOL(0x00832570, "?SoundManager_Z_vftable_23@WinSound_Z@@UAEXH@Z");
    virtual void SoundManager_Z_vftable_23(int) override;
    ADDRESSSYMBOL(0x008325E0, "?SoundManager_Z_vftable_24@WinSound_Z@@UAEXXZ");
    virtual void SoundManager_Z_vftable_24() override;
    ADDRESSVF(0x008326E0, WinSound_Z, SoundManager_Z_vftable_25);
    virtual void SoundManager_Z_vftable_25() override;
    ADDRESSVF(0x008329C0, WinSound_Z, SoundManager_Z_vftable_26);
    virtual void SoundManager_Z_vftable_26() override;
    ADDRESSSYMBOL(0x00832AE0, "?SoundManager_Z_vftable_27@WinSound_Z@@UAEXH@Z");
    virtual void SoundManager_Z_vftable_27(int) override;
    ADDRESSVF(0x00832610, WinSound_Z, SoundManager_Z_vftable_28);
    virtual void SoundManager_Z_vftable_28() override;
    ADDRESSSYMBOL(0x00832B70, "?SoundManager_Z_vftable_29@WinSound_Z@@UAEDH@Z");
    virtual char SoundManager_Z_vftable_29(int) override;
    ADDRESSSYMBOL(0x00832C00, "?SoundManager_Z_vftable_30@WinSound_Z@@UAEDXZ");
    virtual char SoundManager_Z_vftable_30() override;
    ADDRESSVF(0x00831EE0, WinSound_Z, SoundManager_Z_vftable_31);
    virtual void SoundManager_Z_vftable_31() override;
    ADDRESSSYMBOL(0x00832310, "?SoundManager_Z_vftable_32@WinSound_Z@@UAEXHHHH@Z");
    virtual void SoundManager_Z_vftable_32(int, int, int, int) override;
    ADDRESSSYMBOL(0x00832510, "?SoundManager_Z_vftable_33@WinSound_Z@@UAEXHHHH@Z");
    virtual void SoundManager_Z_vftable_33(int, int, int, int) override;
    ADDRESSVF(0x008324F0, WinSound_Z, SoundManager_Z_vftable_34);
    virtual void SoundManager_Z_vftable_34() override;
    ADDRESSVF(0x008324C0, WinSound_Z, SoundManager_Z_vftable_35);
    virtual void SoundManager_Z_vftable_35() override;
    ADDRESSSYMBOL(0x00832450, "?SoundManager_Z_vftable_36@WinSound_Z@@UAEXH@Z");
    virtual void SoundManager_Z_vftable_36(int) override;
    ADDRESSSYMBOL(0x008324B0, "?SoundManager_Z_vftable_37@WinSound_Z@@UAEDXZ");
    virtual char SoundManager_Z_vftable_37() override;
    ADDRESSVF(0x00832C50, WinSound_Z, SoundManager_Z_vftable_38);
    virtual void SoundManager_Z_vftable_38() override;
    ADDRESSVF(0x008340D0, WinSound_Z, SoundManager_Z_vftable_39);
    virtual void SoundManager_Z_vftable_39() override;
    ADDRESSSYMBOL(0x00834050, "?SoundManager_Z_vftable_40@WinSound_Z@@UAEXH@Z");
    virtual void SoundManager_Z_vftable_40(int) override;
    ADDRESSSYMBOL(0x00833D90, "?SoundManager_Z_vftable_42@WinSound_Z@@UAEHH@Z");
    virtual int SoundManager_Z_vftable_42(int) override;
    ADDRESSSYMBOL(0x00833F80, "?SoundManager_Z_vftable_43@WinSound_Z@@UAEXH@Z");
    virtual void SoundManager_Z_vftable_43(int) override;
    ADDRESSVF(0x00832CE0, WinSound_Z, SoundManager_Z_vftable_49);
    virtual void SoundManager_Z_vftable_49() override;
    ADDRESSVF(0x00832DC0, WinSound_Z, SoundManager_Z_vftable_50);
    virtual void SoundManager_Z_vftable_50() override;
    ADDRESSVF(0x0081BA30, WinSound_Z, SoundManager_Z_vftable_51);
    virtual void SoundManager_Z_vftable_51() override;
};

ADDRESSVFTABLE(0x009DB69C, Sound_Z);
class __declspec(dllexport) Sound_Z : public ResourceObject_Z
{
public:
    ADDRESSVF(0x0087D8C0, Sound_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x008836B0, "?BaseObject_Z_vftable_3@Sound_Z@@UAEXH@Z");
    virtual void BaseObject_Z_vftable_3(int) override;
    ADDRESSVF(0x00883680, Sound_Z, BaseObject_Z_vftable_7);
    virtual void BaseObject_Z_vftable_7() override;
    ADDRESSSYMBOL(0x008836F0, "?BaseObject_Z_vftable_9@Sound_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_9() override;
    ADDRESSSYMBOL(0x00883700, "?BaseObject_Z_vftable_12@Sound_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_12() override;
    char data[20];
};

ADDRESSVFTABLE(0x009BE5CC, Dialog_Background);
class __declspec(dllexport) Dialog_Background : public DialogMenu_G
{
public:
    ADDRESSVF(0x005895A0, Dialog_Background, CWindowHierarchy_G_vftable_0);
    virtual void CWindowHierarchy_G_vftable_0() override;
};

ADDRESSVFTABLE(0x009D3644, Points_Z);
class __declspec(dllexport) Points_Z : public Object_Z
{
public:
    ADDRESSVF(0x007C96C0, Points_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x00813BB0, "?BaseObject_Z_vftable_3@Points_Z@@UAEXH@Z");
    virtual void BaseObject_Z_vftable_3(int) override;
    ADDRESSSYMBOL(0x00813BD0, "?BaseObject_Z_vftable_4@Points_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_4() override;
    ADDRESSSYMBOL(0x00813BF0, "?BaseObject_Z_vftable_12@Points_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_12() override;
    virtual int Points_Z_vftable_43();
    char data[16];
};

ADDRESSVFTABLE(0x009B728C, TeleportVolumeAgent_G);
class __declspec(dllexport) TeleportVolumeAgent_G : public VolumeAgent_Z
{
public:
    ADDRESSVF(0x00541200, TeleportVolumeAgent_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x00541170, "?ABC_Agent_vftable_14@TeleportVolumeAgent_G@@UAEHXZ");
    virtual int ABC_Agent_vftable_14() override;
    ADDRESSVF(0x00541180, TeleportVolumeAgent_G, ABC_Agent_vftable_15);
    virtual void ABC_Agent_vftable_15() override;
    ADDRESSSYMBOL(0x005411B0, "?ABC_Agent_vftable_16@TeleportVolumeAgent_G@@UAEXH@Z");
    virtual void ABC_Agent_vftable_16(int) override;
    ADDRESSVF(0x005411E0, TeleportVolumeAgent_G, ABC_Agent_vftable_17);
    virtual void ABC_Agent_vftable_17() override;
    ADDRESSSYMBOL(0x00572870, "?VolumeAgent_Z_vftable_42@TeleportVolumeAgent_G@@UAEXH@Z");
    virtual void VolumeAgent_Z_vftable_42(int) override;
};

ADDRESSVFTABLE(0x009C94C4, HFogData_Z);
class __declspec(dllexport) HFogData_Z : public ObjectDatas_Z
{
public:
    ADDRESSVF(0x0068C8C0, HFogData_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x007C1CC0, "?BaseObject_Z_vftable_3@HFogData_Z@@UAEXH@Z");
    virtual void BaseObject_Z_vftable_3(int) override;
    ADDRESSVF(0x007C1B80, HFogData_Z, ObjectDatas_Z_vftable_18);
    virtual void ObjectDatas_Z_vftable_18() override;
    char data[92];
};

ADDRESSVFTABLE(0x009BFE94, Dialog_MainMenuFirst);
class __declspec(dllexport) Dialog_MainMenuFirst : public DialogMenu_G
{
public:
    ADDRESSVF(0x00590560, Dialog_MainMenuFirst, CWindowHierarchy_G_vftable_0);
    virtual void CWindowHierarchy_G_vftable_0() override;
    ADDRESSSYMBOL(0x005906E0, "?Dialog_G_vftable_15@Dialog_MainMenuFirst@@UAEXXZ");
    virtual void Dialog_G_vftable_15() override;
    virtual void Dialog_G_vftable_17() override;
    ADDRESSVF(0x005905C0, Dialog_MainMenuFirst, Dialog_G_vftable_19);
    virtual void Dialog_G_vftable_19() override;
    ADDRESSSYMBOL(0x005906D0, "?Dialog_G_vftable_20@Dialog_MainMenuFirst@@UAEXXZ");
    virtual void Dialog_G_vftable_20() override;
    virtual void Dialog_G_vftable_22() override;
    ADDRESSVF(0x00590740, Dialog_MainMenuFirst, Dialog_G_vftable_23);
    virtual void Dialog_G_vftable_23() override;
    ADDRESSSYMBOL(0x005907C0, "?DialogMenu_G_vftable_29@Dialog_MainMenuFirst@@UAEXXZ");
    virtual void DialogMenu_G_vftable_29() override;
    virtual int Dialog_MainMenuFirst_vftable_31();
};

ADDRESSVFTABLE(0x009A4834, InGameDatas_Z);
class __declspec(dllexport) InGameDatas_Z : public ManipulatorDraw_Z
{
public:
    ADDRESSVF(0x0043C830, InGameDatas_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    virtual void Manipulator_Z_vftable_17(int) override;
    virtual void ManipulatorDraw_Z_vftable_19(int) override;
    virtual void InGameDatas_Z_vftable_20();
    ADDRESSVF(0x00694AA0, InGameDatas_Z, InGameDatas_Z_vftable_21);
    virtual void InGameDatas_Z_vftable_21();
    char data[44];
};

ADDRESSVFTABLE(0x009CC08C, Bitmap_Z);
class __declspec(dllexport) Bitmap_Z : public ResourceObject_Z
{
public:
    ADDRESSSYMBOL(0x00726A20, "?BaseObject_Z_vftable_0@Bitmap_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x00726910, Bitmap_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x007286A0, "?BaseObject_Z_vftable_3@Bitmap_Z@@UAEXH@Z");
    virtual void BaseObject_Z_vftable_3(int) override;
    ADDRESSVF(0x00728630, Bitmap_Z, BaseObject_Z_vftable_7);
    virtual void BaseObject_Z_vftable_7() override;
    ADDRESSSYMBOL(0x007286F0, "?BaseObject_Z_vftable_12@Bitmap_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_12() override;
    char data[40];
};

ADDRESSVFTABLE(0x009D0AC4, CollisionVol_Z);
class __declspec(dllexport) CollisionVol_Z : public Object_Z
{
public:
    ADDRESSVF(0x00759DE0, CollisionVol_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x007FEDD0, "?BaseObject_Z_vftable_3@CollisionVol_Z@@UAEXH@Z");
    virtual void BaseObject_Z_vftable_3(int) override;
    ADDRESSSYMBOL(0x007FEF10, "?BaseObject_Z_vftable_4@CollisionVol_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_4() override;
    ADDRESSVF(0x00759E60, CollisionVol_Z, BaseObject_Z_vftable_13);
    virtual void BaseObject_Z_vftable_13() override;
    virtual void Object_Z_vftable_16(int, int) override;
    ADDRESSSYMBOL(0x00737410, "?Object_Z_vftable_36@CollisionVol_Z@@UAEHHHHHHHHHHHH@Z");
    virtual int Object_Z_vftable_36(int, int, int, int, int, int, int, int, int, int, int) override;
    char data[136];
};

ADDRESSVFTABLE(0x009C8B14, GameObj_Z);
class __declspec(dllexport) GameObj_Z : public ResourceObject_Z
{
public:
    ADDRESSVF(0x00687780, GameObj_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x007B7560, "?BaseObject_Z_vftable_3@GameObj_Z@@UAEXH@Z");
    virtual void BaseObject_Z_vftable_3(int) override;
    ADDRESSSYMBOL(0x007B75B0, "?BaseObject_Z_vftable_4@GameObj_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_4() override;
    ADDRESSSYMBOL(0x007B75F0, "?BaseObject_Z_vftable_5@GameObj_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_5() override;
    ADDRESSVF(0x007B7510, GameObj_Z, BaseObject_Z_vftable_13);
    virtual void BaseObject_Z_vftable_13() override;
    char data[8];
};

ADDRESSVFTABLE(0x009AE73C, TextGameDraw_G);
class __declspec(dllexport) TextGameDraw_G : public ManipulatorSceneDraw_Z
{
public:
    ADDRESSSYMBOL(0x00504340, "?BaseObject_Z_vftable_0@TextGameDraw_G@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x004D4500, TextGameDraw_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x00504370, "?Manipulator_Z_vftable_14@TextGameDraw_G@@UAEXXZ");
    virtual void Manipulator_Z_vftable_14() override;
    ADDRESSSYMBOL(0x005043F0, "?Manipulator_Z_vftable_17@TextGameDraw_G@@UAEXH@Z");
    virtual void Manipulator_Z_vftable_17(int) override;
    ADDRESSSYMBOL(0x00504470, "?ManipulatorSceneDraw_Z_vftable_19@TextGameDraw_G@@UAEXH@Z");
    virtual void ManipulatorSceneDraw_Z_vftable_19(int) override;
    ADDRESSVF(0x005043C0, TextGameDraw_G, TextGameDraw_G_vftable_20);
    virtual void TextGameDraw_G_vftable_20();
    char data[72];
};

ADDRESSVFTABLE(0x009C02EC, Dialog_TRCMessage);
class __declspec(dllexport) Dialog_TRCMessage : public DialogMenu_G
{
public:
    ADDRESSVF(0x00594780, Dialog_TRCMessage, CWindowHierarchy_G_vftable_0);
    virtual void CWindowHierarchy_G_vftable_0() override;
    ADDRESSSYMBOL(0x005949E0, "?Dialog_G_vftable_15@Dialog_TRCMessage@@UAEXXZ");
    virtual void Dialog_G_vftable_15() override;
    ADDRESSVF(0x005947B0, Dialog_TRCMessage, Dialog_G_vftable_19);
    virtual void Dialog_G_vftable_19() override;
    ADDRESSSYMBOL(0x00594850, "?Dialog_G_vftable_20@Dialog_TRCMessage@@UAEXXZ");
    virtual void Dialog_G_vftable_20() override;
    ADDRESSVF(0x005948D0, Dialog_TRCMessage, Dialog_G_vftable_23);
    virtual void Dialog_G_vftable_23() override;
    virtual void DialogMenu_G_vftable_29() override;
};

ADDRESSVFTABLE(0x009A478C, BaseInGameDatas_G);
class __declspec(dllexport) BaseInGameDatas_G : public InGameDatas_Z
{
public:
    ADDRESSSYMBOL(0x00437780, "?BaseObject_Z_vftable_0@BaseInGameDatas_G@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x00437640, BaseInGameDatas_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSVF(0x004378D0, BaseInGameDatas_G, BaseObject_Z_vftable_13);
    virtual void BaseObject_Z_vftable_13() override;
    ADDRESSSYMBOL(0x004374D0, "?Manipulator_Z_vftable_14@BaseInGameDatas_G@@UAEXXZ");
    virtual void Manipulator_Z_vftable_14() override;
    ADDRESSSYMBOL(0x00438560, "?Manipulator_Z_vftable_17@BaseInGameDatas_G@@UAEXH@Z");
    virtual void Manipulator_Z_vftable_17(int) override;
    ADDRESSSYMBOL(0x00438BE0, "?ManipulatorDraw_Z_vftable_19@BaseInGameDatas_G@@UAEXH@Z");
    virtual void ManipulatorDraw_Z_vftable_19(int) override;
    ADDRESSVF(0x004378F0, BaseInGameDatas_G, BaseInGameDatas_G_vftable_22);
    virtual void BaseInGameDatas_G_vftable_22();
    ADDRESSVF(0x00437AA0, BaseInGameDatas_G, BaseInGameDatas_G_vftable_23);
    virtual void BaseInGameDatas_G_vftable_23();
    virtual void BaseInGameDatas_G_vftable_24() = 0;
    virtual void *BaseInGameDatas_G_vftable_25() = 0;
    ADDRESSVF(0x0043C3B0, BaseInGameDatas_G, BaseInGameDatas_G_vftable_26);
    virtual void BaseInGameDatas_G_vftable_26();
    ADDRESSVF(0x00437B70, BaseInGameDatas_G, BaseInGameDatas_G_vftable_27);
    virtual void BaseInGameDatas_G_vftable_27();
    virtual void *BaseInGameDatas_G_vftable_28() = 0;
    virtual int BaseInGameDatas_G_vftable_29() = 0;
    virtual void *BaseInGameDatas_G_vftable_30() = 0;
    virtual int BaseInGameDatas_G_vftable_31() = 0;
    ADDRESSVF(0x00437C30, BaseInGameDatas_G, BaseInGameDatas_G_vftable_32);
    virtual void BaseInGameDatas_G_vftable_32();
    ADDRESSVF(0x00437CC0, BaseInGameDatas_G, BaseInGameDatas_G_vftable_33);
    virtual void BaseInGameDatas_G_vftable_33();
    ADDRESSVF(0x0043BC70, BaseInGameDatas_G, BaseInGameDatas_G_vftable_34);
    virtual void BaseInGameDatas_G_vftable_34();
    ADDRESSVF(0x00437EB0, BaseInGameDatas_G, BaseInGameDatas_G_vftable_35);
    virtual void BaseInGameDatas_G_vftable_35();
    ADDRESSVF(0x00437D40, BaseInGameDatas_G, BaseInGameDatas_G_vftable_36);
    virtual void BaseInGameDatas_G_vftable_36();
    virtual char BaseInGameDatas_G_vftable_37();
    ADDRESSVF(0x00438AD0, BaseInGameDatas_G, BaseInGameDatas_G_vftable_38);
    virtual void BaseInGameDatas_G_vftable_38();
    ADDRESSVF(0x00437E70, BaseInGameDatas_G, BaseInGameDatas_G_vftable_39);
    virtual void BaseInGameDatas_G_vftable_39();
    ADDRESSVF(0x00437E90, BaseInGameDatas_G, BaseInGameDatas_G_vftable_40);
    virtual void BaseInGameDatas_G_vftable_40();

    void _0x00442C20();
};

ADDRESSVFTABLE(0x009C8BBC, BasePlayAnim_Z);
class __declspec(dllexport) BasePlayAnim_Z : public ManipulatorSceneDraw_Z
{
public:
    ADDRESSSYMBOL(0x0064F100, "?BaseObject_Z_vftable_0@BasePlayAnim_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x00688110, BasePlayAnim_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSVF(0x0064F180, BasePlayAnim_Z, BaseObject_Z_vftable_13);
    virtual void BaseObject_Z_vftable_13() override;
    ADDRESSSYMBOL(0x0064F150, "?Manipulator_Z_vftable_14@BasePlayAnim_Z@@UAEXXZ");
    virtual void Manipulator_Z_vftable_14() override;
    ADDRESSSYMBOL(0x0064F1F0, "?Manipulator_Z_vftable_15@BasePlayAnim_Z@@UAEXXZ");
    virtual void Manipulator_Z_vftable_15() override;
    ADDRESSSYMBOL(0x0064F260, "?Manipulator_Z_vftable_16@BasePlayAnim_Z@@UAEXXZ");
    virtual void Manipulator_Z_vftable_16() override;
    virtual void Manipulator_Z_vftable_17(int) override;
    ADDRESSVF(0x0064F2E0, BasePlayAnim_Z, BasePlayAnim_Z_vftable_20);
    virtual void BasePlayAnim_Z_vftable_20();
    ADDRESSVF(0x00687C80, BasePlayAnim_Z, BasePlayAnim_Z_vftable_21);
    virtual void BasePlayAnim_Z_vftable_21();
    virtual void BasePlayAnim_Z_vftable_22(int, int);
    virtual void BasePlayAnim_Z_vftable_23(int, int, int, int);
    virtual void BasePlayAnim_Z_vftable_24(int);
    virtual char BasePlayAnim_Z_vftable_25(int);
    ADDRESSVF(0x00687CD0, BasePlayAnim_Z, BasePlayAnim_Z_vftable_26);
    virtual void BasePlayAnim_Z_vftable_26();
    ADDRESSVF(0x00687CE0, BasePlayAnim_Z, BasePlayAnim_Z_vftable_27);
    virtual void BasePlayAnim_Z_vftable_27();
    virtual void BasePlayAnim_Z_vftable_28(int, int);
    ADDRESSVF(0x00687D00, BasePlayAnim_Z, BasePlayAnim_Z_vftable_29);
    virtual void BasePlayAnim_Z_vftable_29();
    virtual void BasePlayAnim_Z_vftable_30(int);
    virtual void BasePlayAnim_Z_vftable_31(int, int);
    ADDRESSVF(0x00687D30, BasePlayAnim_Z, BasePlayAnim_Z_vftable_32);
    virtual void BasePlayAnim_Z_vftable_32();
    virtual void BasePlayAnim_Z_vftable_33(int, int);
    virtual void BasePlayAnim_Z_vftable_34(int, int);
    ADDRESSVF(0x00687D60, BasePlayAnim_Z, BasePlayAnim_Z_vftable_35);
    virtual void BasePlayAnim_Z_vftable_35();
    virtual void BasePlayAnim_Z_vftable_36(int);
    virtual char BasePlayAnim_Z_vftable_37(int, int, int, int, int);
};

ADDRESSVFTABLE(0x009C2EAC, GameMoving3DObject_G);
class __declspec(dllexport) GameMoving3DObject_G : public BaseGameObject_G
{
public:
    ADDRESSVF(0x005B30B0, GameMoving3DObject_G, ComObj_Z_vftable_0);
    virtual void ComObj_Z_vftable_0() override;
    ADDRESSSYMBOL(0x005B3000, "?ComObj_Z_vftable_6@GameMoving3DObject_G@@UAEDH@Z");
    virtual char ComObj_Z_vftable_6(int) override;
    ADDRESSSYMBOL(0x005B2FC0, "?ComObj_Z_vftable_7@GameMoving3DObject_G@@UAEDH@Z");
    virtual char ComObj_Z_vftable_7(int) override;
    ADDRESSSYMBOL(0x005B3070, "?ComObj_Z_vftable_8@GameMoving3DObject_G@@UAEDH@Z");
    virtual char ComObj_Z_vftable_8(int) override;
};

ADDRESSVFTABLE(0x009C2564, ComServer_Z);
class __declspec(dllexport) ComServer_Z : public ComObject_Z
{
public:
    ADDRESSVF(0x005A6250, ComServer_Z, NetObject_Z_vftable_0);
    virtual void NetObject_Z_vftable_0() override;
    ADDRESSVF(0x0076F5A0, ComServer_Z, NetObject_Z_vftable_1);
    virtual void NetObject_Z_vftable_1() override;
    ADDRESSVF(0x0076F6A0, ComServer_Z, NetObject_Z_vftable_2);
    virtual void NetObject_Z_vftable_2() override;
    virtual void ComObject_Z_vftable_3(int) override;
    ADDRESSVF(0x0076F550, ComServer_Z, ComObject_Z_vftable_4);
    virtual void ComObject_Z_vftable_4() override;
    ADDRESSVF(0x005A60D0, ComServer_Z, ComObject_Z_vftable_6);
    virtual void ComObject_Z_vftable_6() override;
    ADDRESSVF(0x005A60F0, ComServer_Z, ComObject_Z_vftable_7);
    virtual void ComObject_Z_vftable_7() override;
    ADDRESSVF(0x005A6120, ComServer_Z, ComObject_Z_vftable_8);
    virtual void ComObject_Z_vftable_8() override;
    ADDRESSVF(0x0076FAA0, ComServer_Z, ComObject_Z_vftable_9);
    virtual void ComObject_Z_vftable_9() override;
    ADDRESSSYMBOL(0x005A6180, "?ComObject_Z_vftable_10@ComServer_Z@@UAEHXZ");
    virtual int ComObject_Z_vftable_10() override;
    ADDRESSVF(0x005A61B0, ComServer_Z, ComObject_Z_vftable_14);
    virtual void ComObject_Z_vftable_14() override;
    ADDRESSVF(0x005A6190, ComServer_Z, ComObject_Z_vftable_15);
    virtual void ComObject_Z_vftable_15() override;
    ADDRESSVF(0x005A6220, ComServer_Z, ComObject_Z_vftable_16);
    virtual void ComObject_Z_vftable_16() override;
    virtual void ComServer_Z_vftable_17(int);
};

ADDRESSVFTABLE(0x009C8E9C, MaterialObj_Z);
class __declspec(dllexport) MaterialObj_Z : public ResourceObject_Z
{
public:
    ADDRESSVF(0x00687820, MaterialObj_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x007B77A0, "?BaseObject_Z_vftable_3@MaterialObj_Z@@UAEXH@Z");
    virtual void BaseObject_Z_vftable_3(int) override;
    ADDRESSSYMBOL(0x007B7840, "?BaseObject_Z_vftable_4@MaterialObj_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_4() override;
    ADDRESSVF(0x007B7750, MaterialObj_Z, BaseObject_Z_vftable_13);
    virtual void BaseObject_Z_vftable_13() override;
    char data[8];
};

ADDRESSVFTABLE(0x009C0254, Dialog_TestMenu);
class __declspec(dllexport) Dialog_TestMenu : public DialogMenu_G
{
public:
    ADDRESSVF(0x00594660, Dialog_TestMenu, CWindowHierarchy_G_vftable_0);
    virtual void CWindowHierarchy_G_vftable_0() override;
    ADDRESSSYMBOL(0x00594730, "?Dialog_G_vftable_16@Dialog_TestMenu@@UAEXH@Z");
    virtual void Dialog_G_vftable_16(int) override;
    virtual void Dialog_G_vftable_17() override;
    ADDRESSVF(0x005946C0, Dialog_TestMenu, Dialog_G_vftable_19);
    virtual void Dialog_G_vftable_19() override;
    virtual void Dialog_G_vftable_20() override;
    virtual void Dialog_G_vftable_22() override;
    ADDRESSVF(0x005946F0, Dialog_TestMenu, Dialog_G_vftable_23);
    virtual void Dialog_G_vftable_23() override;
    virtual void DialogMenu_G_vftable_29() override;
    virtual int Dialog_TestMenu_vftable_31();
};

ADDRESSVFTABLE(0x009C948C, BigFileLoader_Z);
class __declspec(dllexport) BigFileLoader_Z : public WinStream_Z
{
public:
    ADDRESSVF(0x0068DB40, BigFileLoader_Z, BaseStream_Z_vftable_0);
    virtual void BaseStream_Z_vftable_0() override;
    ADDRESSVF(0x007C3590, BigFileLoader_Z, BigFileLoader_Z_vftable_9);
    virtual void BigFileLoader_Z_vftable_9();
    ADDRESSVF(0x007C3610, BigFileLoader_Z, BigFileLoader_Z_vftable_10);
    virtual void BigFileLoader_Z_vftable_10();
    ADDRESSVF(0x007C3A60, BigFileLoader_Z, BigFileLoader_Z_vftable_11);
    virtual void BigFileLoader_Z_vftable_11();
    ADDRESSVF(0x007C3B60, BigFileLoader_Z, BigFileLoader_Z_vftable_12);
    virtual void BigFileLoader_Z_vftable_12();
};

ADDRESSVFTABLE(0x009B740C, PlatformCameraAgent_G);
class __declspec(dllexport) PlatformCameraAgent_G : public VolumeAgent_Z
{
public:
    ADDRESSSYMBOL(0x00572F40, "?BaseObject_Z_vftable_0@PlatformCameraAgent_G@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x00541460, PlatformCameraAgent_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x005413D0, "?ABC_Agent_vftable_14@PlatformCameraAgent_G@@UAEHXZ");
    virtual int ABC_Agent_vftable_14() override;
    ADDRESSVF(0x005413E0, PlatformCameraAgent_G, ABC_Agent_vftable_15);
    virtual void ABC_Agent_vftable_15() override;
    ADDRESSSYMBOL(0x00541410, "?ABC_Agent_vftable_16@PlatformCameraAgent_G@@UAEXH@Z");
    virtual void ABC_Agent_vftable_16(int) override;
    ADDRESSVF(0x00541440, PlatformCameraAgent_G, ABC_Agent_vftable_17);
    virtual void ABC_Agent_vftable_17() override;
    ADDRESSSYMBOL(0x00572F50, "?Agent_Z_vftable_20@PlatformCameraAgent_G@@UAEXXZ");
    virtual void Agent_Z_vftable_20() override;
    ADDRESSSYMBOL(0x00572F80, "?VolumeAgent_Z_vftable_42@PlatformCameraAgent_G@@UAEXH@Z");
    virtual void VolumeAgent_Z_vftable_42(int) override;
    ADDRESSSYMBOL(0x00572FF0, "?VolumeAgent_Z_vftable_43@PlatformCameraAgent_G@@UAEXH@Z");
    virtual void VolumeAgent_Z_vftable_43(int) override;
    ADDRESSSYMBOL(0x00573000, "?VolumeAgent_Z_vftable_44@PlatformCameraAgent_G@@UAEXH@Z");
    virtual void VolumeAgent_Z_vftable_44(int) override;
};

ADDRESSVFTABLE(0x009C128C, CScrollBar_G);
class __declspec(dllexport) CScrollBar_G : public CWindow_G
{
public:
    ADDRESSVF(0x0059FAE0, CScrollBar_G, CWindowHierarchy_G_vftable_0);
    virtual void CWindowHierarchy_G_vftable_0() override;
    ADDRESSVF(0x0059FB50, CScrollBar_G, CWindow_G_vftable_15);
    virtual void CWindow_G_vftable_15() override;
    ADDRESSVF(0x0059FD30, CScrollBar_G, CWindow_G_vftable_16);
    virtual void CWindow_G_vftable_16() override;
    virtual void CWindow_G_vftable_18() override;
    virtual char CWindow_G_vftable_21() override;
    ADDRESSSYMBOL(0x0059FE50, "?CWindow_G_vftable_22@CScrollBar_G@@UAEDXZ");
    virtual char CWindow_G_vftable_22() override;
    ADDRESSVF(0x0059FDC0, CScrollBar_G, CWindow_G_vftable_25);
    virtual void CWindow_G_vftable_25() override;
    virtual void CScrollBar_G_vftable_31() = 0;
    ADDRESSVF(0x0059FFC0, CScrollBar_G, CScrollBar_G_vftable_32);
    virtual void CScrollBar_G_vftable_32();
    ADDRESSVF(0x005A0020, CScrollBar_G, CScrollBar_G_vftable_33);
    virtual void CScrollBar_G_vftable_33();
};

ADDRESSVFTABLE(0x009AF87C, IT_TornadoPathMove);
class __declspec(dllexport) IT_TornadoPathMove : public LodMove_Z
{
public:
    ADDRESSSYMBOL(0x00518B80, "?BaseObject_Z_vftable_0@IT_TornadoPathMove@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x004D5310, IT_TornadoPathMove, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x00518BB0, "?Manipulator_Z_vftable_14@IT_TornadoPathMove@@UAEXXZ");
    virtual void Manipulator_Z_vftable_14() override;
    ADDRESSSYMBOL(0x00518DC0, "?Manipulator_Z_vftable_17@IT_TornadoPathMove@@UAEXH@Z");
    virtual void Manipulator_Z_vftable_17(int) override;
    virtual void ObjectMove_Z_vftable_18(int, int, int, int, int, int) override;
    char data[16];
};

ADDRESSVFTABLE(0x009B5324, IT_BIRD_G);
class __declspec(dllexport) IT_BIRD_G : public Agent_Z
{
public:
    ADDRESSSYMBOL(0x0051A8E0, "?BaseObject_Z_vftable_0@IT_BIRD_G@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x0051A810, IT_BIRD_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSVF(0x0051AA00, IT_BIRD_G, BaseObject_Z_vftable_13);
    virtual void BaseObject_Z_vftable_13() override;
    ADDRESSSYMBOL(0x0051A790, "?ABC_Agent_vftable_14@IT_BIRD_G@@UAEHXZ");
    virtual int ABC_Agent_vftable_14() override;
    ADDRESSVF(0x0051A7A0, IT_BIRD_G, ABC_Agent_vftable_15);
    virtual void ABC_Agent_vftable_15() override;
    ADDRESSSYMBOL(0x0051A7B0, "?ABC_Agent_vftable_16@IT_BIRD_G@@UAEXH@Z");
    virtual void ABC_Agent_vftable_16(int) override;
    ADDRESSVF(0x0051A7E0, IT_BIRD_G, ABC_Agent_vftable_17);
    virtual void ABC_Agent_vftable_17() override;
    ADDRESSSYMBOL(0x0051A990, "?Agent_Z_vftable_20@IT_BIRD_G@@UAEXXZ");
    virtual void Agent_Z_vftable_20() override;
    ADDRESSVF(0x0051A940, IT_BIRD_G, Agent_Z_vftable_24);
    virtual void Agent_Z_vftable_24() override;
    char data[4];
};

ADDRESSVFTABLE(0x009B4164, IT_Break);
class __declspec(dllexport) IT_Break : public Agent_Z
{
public:
    ADDRESSSYMBOL(0x0050A200, "?BaseObject_Z_vftable_0@IT_Break@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x0050A120, IT_Break, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSVF(0x0050A290, IT_Break, BaseObject_Z_vftable_13);
    virtual void BaseObject_Z_vftable_13() override;
    ADDRESSSYMBOL(0x0050C110, "?ABC_Agent_vftable_14@IT_Break@@UAEHXZ");
    virtual int ABC_Agent_vftable_14() override;
    ADDRESSVF(0x0050C100, IT_Break, ABC_Agent_vftable_15);
    virtual void ABC_Agent_vftable_15() override;
    ADDRESSSYMBOL(0x0050C0D0, "?ABC_Agent_vftable_16@IT_Break@@UAEXH@Z");
    virtual void ABC_Agent_vftable_16(int) override;
    ADDRESSVF(0x0050C0C0, IT_Break, ABC_Agent_vftable_17);
    virtual void ABC_Agent_vftable_17() override;
    ADDRESSSYMBOL(0x0050A310, "?Agent_Z_vftable_20@IT_Break@@UAEXXZ");
    virtual void Agent_Z_vftable_20() override;
    ADDRESSVF(0x0050A440, IT_Break, Agent_Z_vftable_24);
    virtual void Agent_Z_vftable_24() override;
    ADDRESSVF(0x0050B540, IT_Break, IT_Break_vftable_39);
    virtual void IT_Break_vftable_39();
    ADDRESSVF(0x0050B2B0, IT_Break, IT_Break_vftable_40);
    virtual void IT_Break_vftable_40();
    ADDRESSVF(0x0050B4F0, IT_Break, IT_Break_vftable_41);
    virtual void IT_Break_vftable_41();
    char data[40];
};

ADDRESSVFTABLE(0x009AFA1C, TornadoManipulator_G);
class __declspec(dllexport) TornadoManipulator_G : public LodMove_Z
{
public:
    ADDRESSSYMBOL(0x005BCFA0, "?BaseObject_Z_vftable_0@TornadoManipulator_G@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x004D5410, TornadoManipulator_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x005BD030, "?Manipulator_Z_vftable_14@TornadoManipulator_G@@UAEXXZ");
    virtual void Manipulator_Z_vftable_14() override;
    ADDRESSSYMBOL(0x005BD050, "?Manipulator_Z_vftable_17@TornadoManipulator_G@@UAEXH@Z");
    virtual void Manipulator_Z_vftable_17(int) override;
    ADDRESSSYMBOL(0x005BEA80, "?ObjectMove_Z_vftable_18@TornadoManipulator_G@@UAEXHHHHHH@Z");
    virtual void ObjectMove_Z_vftable_18(int, int, int, int, int, int) override;
    virtual void TornadoManipulator_G_vftable_103();
    ADDRESSVF(0x005BE300, TornadoManipulator_G, TornadoManipulator_G_vftable_104);
    virtual void TornadoManipulator_G_vftable_104();
    ADDRESSVF(0x004D5390, TornadoManipulator_G, TornadoManipulator_G_vftable_105);
    virtual void TornadoManipulator_G_vftable_105();
    virtual void TornadoManipulator_G_vftable_106();
    char data[184];
};

ADDRESSVFTABLE(0x009B74CC, BehindCameraAgent_G);
class __declspec(dllexport) BehindCameraAgent_G : public VolumeAgent_Z
{
public:
    ADDRESSSYMBOL(0x005730A0, "?BaseObject_Z_vftable_0@BehindCameraAgent_G@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x00541590, BehindCameraAgent_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x00541500, "?ABC_Agent_vftable_14@BehindCameraAgent_G@@UAEHXZ");
    virtual int ABC_Agent_vftable_14() override;
    ADDRESSVF(0x00541510, BehindCameraAgent_G, ABC_Agent_vftable_15);
    virtual void ABC_Agent_vftable_15() override;
    ADDRESSSYMBOL(0x00541540, "?ABC_Agent_vftable_16@BehindCameraAgent_G@@UAEXH@Z");
    virtual void ABC_Agent_vftable_16(int) override;
    ADDRESSVF(0x00541570, BehindCameraAgent_G, ABC_Agent_vftable_17);
    virtual void ABC_Agent_vftable_17() override;
    ADDRESSSYMBOL(0x005730B0, "?Agent_Z_vftable_20@BehindCameraAgent_G@@UAEXXZ");
    virtual void Agent_Z_vftable_20() override;
    ADDRESSSYMBOL(0x005730E0, "?VolumeAgent_Z_vftable_42@BehindCameraAgent_G@@UAEXH@Z");
    virtual void VolumeAgent_Z_vftable_42(int) override;
    ADDRESSSYMBOL(0x00573150, "?VolumeAgent_Z_vftable_43@BehindCameraAgent_G@@UAEXH@Z");
    virtual void VolumeAgent_Z_vftable_43(int) override;
    ADDRESSSYMBOL(0x00573160, "?VolumeAgent_Z_vftable_44@BehindCameraAgent_G@@UAEXH@Z");
    virtual void VolumeAgent_Z_vftable_44(int) override;
};

#include "InGamePauseHUD.h"

ADDRESSVFTABLE(0x009C06DC, CButtonBase_G);
class __declspec(dllexport) CButtonBase_G : public CWindow_G
{
public:
    ADDRESSVF(0x00599690, CButtonBase_G, CWindowHierarchy_G_vftable_0);
    virtual void CWindowHierarchy_G_vftable_0() override;
    virtual void CWindow_G_vftable_18() override;
    ADDRESSSYMBOL(0x00599B30, "?CWindow_G_vftable_21@CButtonBase_G@@UAEDXZ");
    virtual char CWindow_G_vftable_21() override;
    ADDRESSSYMBOL(0x00599AC0, "?CWindow_G_vftable_22@CButtonBase_G@@UAEDXZ");
    virtual char CWindow_G_vftable_22() override;
    ADDRESSSYMBOL(0x00599940, "?CWindow_G_vftable_24@CButtonBase_G@@UAEXXZ");
    virtual void CWindow_G_vftable_24() override;
    ADDRESSVF(0x00599A00, CButtonBase_G, CWindow_G_vftable_25);
    virtual void CWindow_G_vftable_25() override;
    ADDRESSVF(0x00599920, CButtonBase_G, CWindow_G_vftable_27);
    virtual void CWindow_G_vftable_27() override;
    ADDRESSVF(0x005997F0, CButtonBase_G, CWindow_G_vftable_30);
    virtual void CWindow_G_vftable_30() override;
    virtual void CButtonBase_G_vftable_31();
    ADDRESSVF(0x005998C0, CButtonBase_G, CButtonBase_G_vftable_32);
    virtual void CButtonBase_G_vftable_32();
    ADDRESSVF(0x005998F0, CButtonBase_G, CButtonBase_G_vftable_33);
    virtual void CButtonBase_G_vftable_33();
    virtual void CButtonBase_G_vftable_34();
};

ADDRESSVFTABLE(0x009B7B8C, VolumeRTC_G);
class __declspec(dllexport) VolumeRTC_G : public VolumeAgent_Z
{
public:
    ADDRESSSYMBOL(0x005738B0, "?BaseObject_Z_vftable_0@VolumeRTC_G@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x00542780, VolumeRTC_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSVF(0x00573960, VolumeRTC_G, BaseObject_Z_vftable_13);
    virtual void BaseObject_Z_vftable_13() override;
    ADDRESSSYMBOL(0x005426E0, "?ABC_Agent_vftable_14@VolumeRTC_G@@UAEHXZ");
    virtual int ABC_Agent_vftable_14() override;
    ADDRESSVF(0x005426F0, VolumeRTC_G, ABC_Agent_vftable_15);
    virtual void ABC_Agent_vftable_15() override;
    ADDRESSSYMBOL(0x00542720, "?ABC_Agent_vftable_16@VolumeRTC_G@@UAEXH@Z");
    virtual void ABC_Agent_vftable_16(int) override;
    ADDRESSVF(0x00542750, VolumeRTC_G, ABC_Agent_vftable_17);
    virtual void ABC_Agent_vftable_17() override;
    ADDRESSSYMBOL(0x00573A70, "?Agent_Z_vftable_20@VolumeRTC_G@@UAEXXZ");
    virtual void Agent_Z_vftable_20() override;
    ADDRESSSYMBOL(0x00573AB0, "?VolumeAgent_Z_vftable_42@VolumeRTC_G@@UAEXH@Z");
    virtual void VolumeAgent_Z_vftable_42(int) override;
    ADDRESSSYMBOL(0x00573AA0, "?VolumeAgent_Z_vftable_43@VolumeRTC_G@@UAEXH@Z");
    virtual void VolumeAgent_Z_vftable_43(int) override;
    ADDRESSSYMBOL(0x00573BC0, "?VolumeAgent_Z_vftable_44@VolumeRTC_G@@UAEXH@Z");
    virtual void VolumeAgent_Z_vftable_44(int) override;
    char data[20];
};

ADDRESSVFTABLE(0x009BFFE4, Dialog_PressStart);
class __declspec(dllexport) Dialog_PressStart : public DialogMenu_G
{
public:
    ADDRESSVF(0x00591A40, Dialog_PressStart, CWindowHierarchy_G_vftable_0);
    virtual void CWindowHierarchy_G_vftable_0() override;
    ADDRESSSYMBOL(0x00591AE0, "?Dialog_G_vftable_15@Dialog_PressStart@@UAEXXZ");
    virtual void Dialog_G_vftable_15() override;
    ADDRESSSYMBOL(0x00591AB0, "?Dialog_G_vftable_17@Dialog_PressStart@@UAEXXZ");
    virtual void Dialog_G_vftable_17() override;
    ADDRESSVF(0x00591B90, Dialog_PressStart, Dialog_G_vftable_19);
    virtual void Dialog_G_vftable_19() override;
    virtual void Dialog_G_vftable_21() override;
    virtual void Dialog_G_vftable_22() override;
    ADDRESSVF(0x00591D60, Dialog_PressStart, Dialog_G_vftable_23);
    virtual void Dialog_G_vftable_23() override;
    virtual int Dialog_PressStart_vftable_31();
};

ADDRESSVFTABLE(0x009A5784, InGameCreatures_G);
class __declspec(dllexport) InGameCreatures_G : public InGameDatas_Z
{
public:
    ADDRESSVF(0x00448660, InGameCreatures_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x004487D0, "?Manipulator_Z_vftable_14@InGameCreatures_G@@UAEXXZ");
    virtual void Manipulator_Z_vftable_14() override;
    ADDRESSSYMBOL(0x004488C0, "?Manipulator_Z_vftable_17@InGameCreatures_G@@UAEXH@Z");
    virtual void Manipulator_Z_vftable_17(int) override;
    ADDRESSSYMBOL(0x00448B20, "?ManipulatorDraw_Z_vftable_19@InGameCreatures_G@@UAEXH@Z");
    virtual void ManipulatorDraw_Z_vftable_19(int) override;
    ADDRESSVF(0x00448700, InGameCreatures_G, InGameCreatures_G_vftable_22);
    virtual void InGameCreatures_G_vftable_22();
    char data[48];
};

ADDRESSVFTABLE(0x009BFD14, Dialog_CHANGELEVELDEMO);
class __declspec(dllexport) Dialog_CHANGELEVELDEMO : public DialogMenu_G
{
public:
    ADDRESSVF(0x0058EAC0, Dialog_CHANGELEVELDEMO, CWindowHierarchy_G_vftable_0);
    virtual void CWindowHierarchy_G_vftable_0() override;
    ADDRESSSYMBOL(0x0058EF10, "?Dialog_G_vftable_15@Dialog_CHANGELEVELDEMO@@UAEXXZ");
    virtual void Dialog_G_vftable_15() override;
    ADDRESSSYMBOL(0x0058EAF0, "?Dialog_G_vftable_17@Dialog_CHANGELEVELDEMO@@UAEXXZ");
    virtual void Dialog_G_vftable_17() override;
    ADDRESSSYMBOL(0x0058EEF0, "?Dialog_G_vftable_18@Dialog_CHANGELEVELDEMO@@UAEXXZ");
    virtual void Dialog_G_vftable_18() override;
    ADDRESSVF(0x0058EDE0, Dialog_CHANGELEVELDEMO, Dialog_G_vftable_22);
    virtual void Dialog_G_vftable_22() override;
    ADDRESSSYMBOL(0x0058EF30, "?DialogMenu_G_vftable_29@Dialog_CHANGELEVELDEMO@@UAEXXZ");
    virtual void DialogMenu_G_vftable_29() override;
    virtual int Dialog_CHANGELEVELDEMO_vftable_31();
};

ADDRESSVFTABLE(0x009B794C, ChangeLevelVolumeAgent_G);
class __declspec(dllexport) ChangeLevelVolumeAgent_G : public VolumeAgent_Z
{
public:
    ADDRESSSYMBOL(0x0056F030, "?BaseObject_Z_vftable_0@ChangeLevelVolumeAgent_G@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x00542230, ChangeLevelVolumeAgent_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x00542170, "?ABC_Agent_vftable_14@ChangeLevelVolumeAgent_G@@UAEHXZ");
    virtual int ABC_Agent_vftable_14() override;
    ADDRESSVF(0x00542180, ChangeLevelVolumeAgent_G, ABC_Agent_vftable_15);
    virtual void ABC_Agent_vftable_15() override;
    ADDRESSSYMBOL(0x005421B0, "?ABC_Agent_vftable_16@ChangeLevelVolumeAgent_G@@UAEXH@Z");
    virtual void ABC_Agent_vftable_16(int) override;
    ADDRESSVF(0x005421E0, ChangeLevelVolumeAgent_G, ABC_Agent_vftable_17);
    virtual void ABC_Agent_vftable_17() override;
    virtual void Agent_Z_vftable_20() override;
    ADDRESSVF(0x0056F050, ChangeLevelVolumeAgent_G, Agent_Z_vftable_24);
    virtual void Agent_Z_vftable_24() override;
    ADDRESSSYMBOL(0x0056F2D0, "?VolumeAgent_Z_vftable_42@ChangeLevelVolumeAgent_G@@UAEXH@Z");
    virtual void VolumeAgent_Z_vftable_42(int) override;
    char data[8];
};

ADDRESSVFTABLE(0x009A1E64, CS_Class_DYNEVERUN);
class __declspec(dllexport) CS_Class_DYNEVERUN : public CreaturesDynState_G
{
public:
    ADDRESSVF(0x004263A0, CS_Class_DYNEVERUN, StateTemplate_G_vftable_0);
    virtual void StateTemplate_G_vftable_0() override;
    ADDRESSSYMBOL(0x00428120, "?StateTemplate_G_vftable_1@CS_Class_DYNEVERUN@@UAEXH@Z");
    virtual void StateTemplate_G_vftable_1(int) override;
    ADDRESSSYMBOL(0x00428180, "?StateTemplate_G_vftable_3@CS_Class_DYNEVERUN@@UAEDH@Z");
    virtual char StateTemplate_G_vftable_3(int) override;
};

ADDRESSVFTABLE(0x009B82DC, VolumeDelayedStart_G);
class __declspec(dllexport) VolumeDelayedStart_G : public VolumeAgent_Z
{
public:
    ADDRESSSYMBOL(0x00573240, "?BaseObject_Z_vftable_0@VolumeDelayedStart_G@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x00545D30, VolumeDelayedStart_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSVF(0x00573340, VolumeDelayedStart_G, BaseObject_Z_vftable_13);
    virtual void BaseObject_Z_vftable_13() override;
    ADDRESSSYMBOL(0x00545D70, "?ABC_Agent_vftable_14@VolumeDelayedStart_G@@UAEHXZ");
    virtual int ABC_Agent_vftable_14() override;
    ADDRESSVF(0x00545D80, VolumeDelayedStart_G, ABC_Agent_vftable_15);
    virtual void ABC_Agent_vftable_15() override;
    ADDRESSSYMBOL(0x00545E80, "?ABC_Agent_vftable_16@VolumeDelayedStart_G@@UAEXH@Z");
    virtual void ABC_Agent_vftable_16(int) override;
    ADDRESSVF(0x00545E70, VolumeDelayedStart_G, ABC_Agent_vftable_17);
    virtual void ABC_Agent_vftable_17() override;
    ADDRESSSYMBOL(0x005733C0, "?Agent_Z_vftable_20@VolumeDelayedStart_G@@UAEXXZ");
    virtual void Agent_Z_vftable_20() override;
    ADDRESSVF(0x005732A0, VolumeDelayedStart_G, Agent_Z_vftable_24);
    virtual void Agent_Z_vftable_24() override;
    ADDRESSSYMBOL(0x00573410, "?VolumeAgent_Z_vftable_42@VolumeDelayedStart_G@@UAEXH@Z");
    virtual void VolumeAgent_Z_vftable_42(int) override;
    ADDRESSSYMBOL(0x00573400, "?VolumeAgent_Z_vftable_43@VolumeDelayedStart_G@@UAEXH@Z");
    virtual void VolumeAgent_Z_vftable_43(int) override;
    ADDRESSSYMBOL(0x005734D0, "?VolumeAgent_Z_vftable_44@VolumeDelayedStart_G@@UAEXH@Z");
    virtual void VolumeAgent_Z_vftable_44(int) override;
    virtual void VolumeDelayedStart_G_vftable_46(int);
    char data[12];
};

ADDRESSVFTABLE(0x009C00CC, Dialog_SigninAlert);
class __declspec(dllexport) Dialog_SigninAlert : public DialogMenu_G
{
public:
    ADDRESSVF(0x00593130, Dialog_SigninAlert, CWindowHierarchy_G_vftable_0);
    virtual void CWindowHierarchy_G_vftable_0() override;
    ADDRESSSYMBOL(0x00593910, "?Dialog_G_vftable_16@Dialog_SigninAlert@@UAEXH@Z");
    virtual void Dialog_G_vftable_16(int) override;
    ADDRESSSYMBOL(0x00593170, "?Dialog_G_vftable_17@Dialog_SigninAlert@@UAEXXZ");
    virtual void Dialog_G_vftable_17() override;
    ADDRESSVF(0x005932A0, Dialog_SigninAlert, Dialog_G_vftable_19);
    virtual void Dialog_G_vftable_19() override;
    ADDRESSSYMBOL(0x00593920, "?Dialog_G_vftable_20@Dialog_SigninAlert@@UAEXXZ");
    virtual void Dialog_G_vftable_20() override;
    ADDRESSVF(0x00593250, Dialog_SigninAlert, Dialog_G_vftable_22);
    virtual void Dialog_G_vftable_22() override;
    ADDRESSVF(0x00593370, Dialog_SigninAlert, Dialog_G_vftable_23);
    virtual void Dialog_G_vftable_23() override;
    virtual void DialogMenu_G_vftable_29() override;
    ADDRESSSYMBOL(0x00593AF0, "?DialogMenu_G_vftable_30@Dialog_SigninAlert@@UAEHXZ");
    virtual int DialogMenu_G_vftable_30() override;
    virtual int Dialog_SigninAlert_vftable_31();
};

ADDRESSVFTABLE(0x009D2664, SplineZone_Z);
class __declspec(dllexport) SplineZone_Z : public Object_Z
{
public:
    ADDRESSVF(0x007AE050, SplineZone_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x00800680, "?BaseObject_Z_vftable_3@SplineZone_Z@@UAEXH@Z");
    virtual void BaseObject_Z_vftable_3(int) override;
    ADDRESSSYMBOL(0x007AE070, "?BaseObject_Z_vftable_12@SplineZone_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_12() override;
    virtual void Object_Z_vftable_16(int, int) override;
    ADDRESSVF(0x007AE1E0, SplineZone_Z, SplineZone_Z_vftable_43);
    virtual void SplineZone_Z_vftable_43();
    ADDRESSVF(0x007ADEA0, SplineZone_Z, SplineZone_Z_vftable_44);
    virtual void SplineZone_Z_vftable_44();
    char data[112];
};

ADDRESSVFTABLE(0x009BE28C, MenuManager_G);
class __declspec(dllexport) MenuManager_G : public BaseInGameDatas_G
{
public:
    ADDRESSSYMBOL(0x005887D0, "?BaseObject_Z_vftable_0@MenuManager_G@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x00588770, MenuManager_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSVF(0x00588E40, MenuManager_G, BaseObject_Z_vftable_13);
    virtual void BaseObject_Z_vftable_13() override;
    ADDRESSSYMBOL(0x005889C0, "?Manipulator_Z_vftable_17@MenuManager_G@@UAEXH@Z");
    virtual void Manipulator_Z_vftable_17(int) override;
    ADDRESSSYMBOL(0x00588B30, "?ManipulatorDraw_Z_vftable_19@MenuManager_G@@UAEXH@Z");
    virtual void ManipulatorDraw_Z_vftable_19(int) override;
    ADDRESSVF(0x00589120, MenuManager_G, BaseInGameDatas_G_vftable_22);
    virtual void BaseInGameDatas_G_vftable_22() override;
    virtual void BaseInGameDatas_G_vftable_23() override;
    ADDRESSSYMBOL(0x00589180, "?BaseInGameDatas_G_vftable_24@MenuManager_G@@UAEXXZ");
    virtual void BaseInGameDatas_G_vftable_24() override;
    virtual void *BaseInGameDatas_G_vftable_25() override;
    virtual void *BaseInGameDatas_G_vftable_28() override;
    virtual int BaseInGameDatas_G_vftable_29() override;
    virtual void *BaseInGameDatas_G_vftable_30() override;
    virtual int BaseInGameDatas_G_vftable_31() override;
    ADDRESSVF(0x0058AAE0, MenuManager_G, BaseInGameDatas_G_vftable_34);
    virtual void BaseInGameDatas_G_vftable_34() override;
    ADDRESSVF(0x00588E90, MenuManager_G, BaseInGameDatas_G_vftable_35);
    virtual void BaseInGameDatas_G_vftable_35() override;
    ADDRESSVF(0x00588F50, MenuManager_G, MenuManager_G_vftable_41);
    virtual void MenuManager_G_vftable_41();
    char data[5716];
};

ADDRESSVFTABLE(0x009C13D4, CVGauge_G);
class __declspec(dllexport) CVGauge_G : public CGauge_G
{
public:
    ADDRESSVF(0x005A0E30, CVGauge_G, CWindowHierarchy_G_vftable_0);
    virtual void CWindowHierarchy_G_vftable_0() override;
    ADDRESSVF(0x005A0E60, CVGauge_G, CGauge_G_vftable_31);
    virtual void CGauge_G_vftable_31() override;
};

ADDRESSVFTABLE(0x009CCA1C, ComPipeDirect_Z);
class __declspec(dllexport) ComPipeDirect_Z : public ComPipeMessage_Z
{
public:
    ADDRESSVF(0x0072DCB0, ComPipeDirect_Z, ComPipeMessage_Z_vftable_7);
    virtual void ComPipeMessage_Z_vftable_7() override;
    ADDRESSVF(0x0072DD10, ComPipeDirect_Z, ComPipeMessage_Z_vftable_8);
    virtual void ComPipeMessage_Z_vftable_8() override;
};

ADDRESSVFTABLE(0x009AEE7C, CameraUser_C);
class __declspec(dllexport) CameraUser_C : public CameraUser_Z
{
public:
    ADDRESSVF(0x004D39A0, CameraUser_C, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x004119F0, "?Manipulator_Z_vftable_15@CameraUser_C@@UAEXXZ");
    virtual void Manipulator_Z_vftable_15() override;
    ADDRESSSYMBOL(0x00411A40, "?Manipulator_Z_vftable_16@CameraUser_C@@UAEXXZ");
    virtual void Manipulator_Z_vftable_16() override;
    ADDRESSSYMBOL(0x00411A70, "?Manipulator_Z_vftable_17@CameraUser_C@@UAEXH@Z");
    virtual void Manipulator_Z_vftable_17(int) override;
};

ADDRESSVFTABLE(0x009CFF7C, AnimFrame_Z);
class __declspec(dllexport) AnimFrame_Z : public ResourceObject_Z
{
public:
    ADDRESSVF(0x0073C290, AnimFrame_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x007D5C60, "?BaseObject_Z_vftable_3@AnimFrame_Z@@UAEXH@Z");
    virtual void BaseObject_Z_vftable_3(int) override;
    ADDRESSSYMBOL(0x007D5E10, "?BaseObject_Z_vftable_4@AnimFrame_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_4() override;
    ADDRESSSYMBOL(0x0073C3F0, "?BaseObject_Z_vftable_12@AnimFrame_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_12() override;
    ADDRESSVF(0x0073CD50, AnimFrame_Z, BaseObject_Z_vftable_13);
    virtual void BaseObject_Z_vftable_13() override;
    virtual void AnimFrame_Z_vftable_16(int);
    char data[116];
};

ADDRESSVFTABLE(0x009AEB94, ComMgrClt_Z);
class __declspec(dllexport) ComMgrClt_Z : public ComMgr_Z
{
public:
    ADDRESSVF(0x004D2A40, ComMgrClt_Z, ComOwner_Z_vftable_0);
    virtual void ComOwner_Z_vftable_0() override;
    ADDRESSSYMBOL(0x0072CB30, "?ComMgr_Z_vftable_6@ComMgrClt_Z@@UAEDHH@Z");
    virtual char ComMgr_Z_vftable_6(int, int) override;
    ADDRESSSYMBOL(0x0072CA00, "?ComMgr_Z_vftable_7@ComMgrClt_Z@@UAEXH@Z");
    virtual void ComMgr_Z_vftable_7(int) override;
    ADDRESSSYMBOL(0x0072C850, "?ComMgr_Z_vftable_8@ComMgrClt_Z@@UAEXH@Z");
    virtual void ComMgr_Z_vftable_8(int) override;
    ADDRESSVF(0x0072C980, ComMgrClt_Z, ComMgr_Z_vftable_9);
    virtual void ComMgr_Z_vftable_9() override;
    ADDRESSSYMBOL(0x0072CBB0, "?ComMgr_Z_vftable_13@ComMgrClt_Z@@UAEHHHH@Z");
    virtual int ComMgr_Z_vftable_13(int, int, int) override;
    ADDRESSSYMBOL(0x0072CA90, "?ComMgr_Z_vftable_19@ComMgrClt_Z@@UAEDHH@Z");
    virtual char ComMgr_Z_vftable_19(int, int) override;
    ADDRESSSYMBOL(0x0072CB60, "?ComMgr_Z_vftable_20@ComMgrClt_Z@@UAEDHH@Z");
    virtual char ComMgr_Z_vftable_20(int, int) override;
    ADDRESSSYMBOL(0x004D2850, "?ComMgr_Z_vftable_26@ComMgrClt_Z@@UAEDHH@Z");
    virtual char ComMgr_Z_vftable_26(int, int) override;
    ADDRESSSYMBOL(0x004D28F0, "?ComMgr_Z_vftable_27@ComMgrClt_Z@@UAEDH@Z");
    virtual char ComMgr_Z_vftable_27(int) override;
    ADDRESSSYMBOL(0x004D2950, "?ComMgr_Z_vftable_29@ComMgrClt_Z@@UAEDH@Z");
    virtual char ComMgr_Z_vftable_29(int) override;
    ADDRESSVF(0x004D29B0, ComMgrClt_Z, ComMgrClt_Z_vftable_32);
    virtual void ComMgrClt_Z_vftable_32();
};

ADDRESSVFTABLE(0x009CBA04, PhysicObj_Z);
class __declspec(dllexport) PhysicObj_Z : public LodMove_Z
{
public:
    ADDRESSSYMBOL(0x0070BF50, "?BaseObject_Z_vftable_0@PhysicObj_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x0070B420, PhysicObj_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x0070C710, "?Manipulator_Z_vftable_14@PhysicObj_Z@@UAEXXZ");
    virtual void Manipulator_Z_vftable_14() override;
    virtual void ObjectMove_Z_vftable_19(int, int, int, int, int) override;
    ADDRESSVF(0x004DBD20, PhysicObj_Z, ObjectMove_Z_vftable_33);
    virtual void ObjectMove_Z_vftable_33() override;
    ADDRESSVF(0x004DBD00, PhysicObj_Z, ObjectMove_Z_vftable_38);
    virtual void ObjectMove_Z_vftable_38() override;
    ADDRESSSYMBOL(0x0070CC10, "?ObjectMove_Z_vftable_39@PhysicObj_Z@@UAEXH@Z");
    virtual void ObjectMove_Z_vftable_39(int) override;
    ADDRESSSYMBOL(0x0070CBF0, "?ObjectMove_Z_vftable_40@PhysicObj_Z@@UAEXH@Z");
    virtual void ObjectMove_Z_vftable_40(int) override;
    ADDRESSSYMBOL(0x0070CBD0, "?ObjectMove_Z_vftable_41@PhysicObj_Z@@UAEXXZ");
    virtual void ObjectMove_Z_vftable_41() override;
    ADDRESSVF(0x00711390, PhysicObj_Z, PhysicObj_Z_vftable_103);
    virtual void PhysicObj_Z_vftable_103();
    ADDRESSVF(0x00712D90, PhysicObj_Z, PhysicObj_Z_vftable_104);
    virtual void PhysicObj_Z_vftable_104();
    ADDRESSVF(0x004DB9E0, PhysicObj_Z, PhysicObj_Z_vftable_105);
    virtual void PhysicObj_Z_vftable_105();
    virtual void PhysicObj_Z_vftable_106();
    ADDRESSVF(0x0070BBB0, PhysicObj_Z, PhysicObj_Z_vftable_107);
    virtual void PhysicObj_Z_vftable_107();
    virtual char PhysicObj_Z_vftable_108(int, int, int);
    virtual void PhysicObj_Z_vftable_109();
    virtual void PhysicObj_Z_vftable_110();
    virtual void PhysicObj_Z_vftable_111();
    virtual char PhysicObj_Z_vftable_112(int, int);
    ADDRESSVF(0x0071C100, PhysicObj_Z, PhysicObj_Z_vftable_113);
    virtual void PhysicObj_Z_vftable_113();
    ADDRESSVF(0x0071C060, PhysicObj_Z, PhysicObj_Z_vftable_114);
    virtual void PhysicObj_Z_vftable_114();
    virtual void PhysicObj_Z_vftable_115(int, int);
    ADDRESSVF(0x00713AD0, PhysicObj_Z, PhysicObj_Z_vftable_116);
    virtual void PhysicObj_Z_vftable_116();
    ADDRESSVF(0x00713E80, PhysicObj_Z, PhysicObj_Z_vftable_117);
    virtual void PhysicObj_Z_vftable_117();
    ADDRESSVF(0x00710970, PhysicObj_Z, PhysicObj_Z_vftable_118);
    virtual void PhysicObj_Z_vftable_118();
    ADDRESSVF(0x00710A40, PhysicObj_Z, PhysicObj_Z_vftable_119);
    virtual void PhysicObj_Z_vftable_119();
    ADDRESSVF(0x00710B20, PhysicObj_Z, PhysicObj_Z_vftable_120);
    virtual void PhysicObj_Z_vftable_120();
    virtual void PhysicObj_Z_vftable_121();
    ADDRESSVF(0x004DB750, PhysicObj_Z, PhysicObj_Z_vftable_122);
    virtual void PhysicObj_Z_vftable_122();
    virtual void PhysicObj_Z_vftable_123();
    virtual void PhysicObj_Z_vftable_124();
    ADDRESSVF(0x00711600, PhysicObj_Z, PhysicObj_Z_vftable_125);
    virtual void PhysicObj_Z_vftable_125();
    ADDRESSVF(0x007112E0, PhysicObj_Z, PhysicObj_Z_vftable_126);
    virtual void PhysicObj_Z_vftable_126();
    ADDRESSVF(0x007110A0, PhysicObj_Z, PhysicObj_Z_vftable_127);
    virtual void PhysicObj_Z_vftable_127();
    ADDRESSVF(0x004DB720, PhysicObj_Z, PhysicObj_Z_vftable_128);
    virtual void PhysicObj_Z_vftable_128();
    virtual void PhysicObj_Z_vftable_129();
    virtual void PhysicObj_Z_vftable_130();
    virtual void PhysicObj_Z_vftable_131();
    virtual void PhysicObj_Z_vftable_132();
    ADDRESSVF(0x00711A30, PhysicObj_Z, PhysicObj_Z_vftable_133);
    virtual void PhysicObj_Z_vftable_133();
    ADDRESSVF(0x004DB680, PhysicObj_Z, PhysicObj_Z_vftable_134);
    virtual void PhysicObj_Z_vftable_134();
    ADDRESSVF(0x00711720, PhysicObj_Z, PhysicObj_Z_vftable_135);
    virtual void PhysicObj_Z_vftable_135();
    virtual void PhysicObj_Z_vftable_136();
    ADDRESSVF(0x004DB640, PhysicObj_Z, PhysicObj_Z_vftable_137);
    virtual void PhysicObj_Z_vftable_137();
    virtual void PhysicObj_Z_vftable_138(int, int);
    virtual void PhysicObj_Z_vftable_139(int, int);
    virtual void PhysicObj_Z_vftable_140(int);
    virtual char PhysicObj_Z_vftable_141(int, int);
    virtual void PhysicObj_Z_vftable_142(int, int);
    char data[2936];
};

ADDRESSVFTABLE(0x009B7E1C, KillVolume_G);
class __declspec(dllexport) KillVolume_G : public VolumeAgent_Z
{
public:
    ADDRESSVF(0x00543290, KillVolume_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x00543200, "?ABC_Agent_vftable_14@KillVolume_G@@UAEHXZ");
    virtual int ABC_Agent_vftable_14() override;
    ADDRESSVF(0x00543210, KillVolume_G, ABC_Agent_vftable_15);
    virtual void ABC_Agent_vftable_15() override;
    ADDRESSSYMBOL(0x00543240, "?ABC_Agent_vftable_16@KillVolume_G@@UAEXH@Z");
    virtual void ABC_Agent_vftable_16(int) override;
    ADDRESSVF(0x00543270, KillVolume_G, ABC_Agent_vftable_17);
    virtual void ABC_Agent_vftable_17() override;
    virtual void VolumeAgent_Z_vftable_42(int) override;
};

ADDRESSVFTABLE(0x009BFBEC, Dialog_SelectVehicle);
class __declspec(dllexport) Dialog_SelectVehicle : public DialogMenu_G
{
public:
    ADDRESSVF(0x0058D110, Dialog_SelectVehicle, CWindowHierarchy_G_vftable_0);
    virtual void CWindowHierarchy_G_vftable_0() override;
    ADDRESSSYMBOL(0x0058DE70, "?Dialog_G_vftable_15@Dialog_SelectVehicle@@UAEXXZ");
    virtual void Dialog_G_vftable_15() override;
    virtual void Dialog_G_vftable_17() override;
    ADDRESSVF(0x0058D7A0, Dialog_SelectVehicle, Dialog_G_vftable_19);
    virtual void Dialog_G_vftable_19() override;
    ADDRESSVF(0x0058DFC0, Dialog_SelectVehicle, Dialog_G_vftable_21);
    virtual void Dialog_G_vftable_21() override;
    virtual void Dialog_G_vftable_22() override;
    ADDRESSVF(0x0058D8F0, Dialog_SelectVehicle, Dialog_G_vftable_23);
    virtual void Dialog_G_vftable_23() override;
};

ADDRESSVFTABLE(0x009A39B4, CHECKPOINT_FLAG_LEFT02);
class __declspec(dllexport) CHECKPOINT_FLAG_LEFT02 : public BaseSharingPlayAnimAgent_G
{
public:
    ADDRESSVF(0x004355C0, CHECKPOINT_FLAG_LEFT02, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSVF(0x00435520, CHECKPOINT_FLAG_LEFT02, BaseObject_Z_vftable_13);
    virtual void BaseObject_Z_vftable_13() override;
    ADDRESSSYMBOL(0x00435430, "?ABC_Agent_vftable_14@CHECKPOINT_FLAG_LEFT02@@UAEHXZ");
    virtual int ABC_Agent_vftable_14() override;
    ADDRESSVF(0x00435440, CHECKPOINT_FLAG_LEFT02, ABC_Agent_vftable_15);
    virtual void ABC_Agent_vftable_15() override;
    ADDRESSSYMBOL(0x00435450, "?ABC_Agent_vftable_16@CHECKPOINT_FLAG_LEFT02@@UAEXH@Z");
    virtual void ABC_Agent_vftable_16(int) override;
    ADDRESSVF(0x00435480, CHECKPOINT_FLAG_LEFT02, ABC_Agent_vftable_17);
    virtual void ABC_Agent_vftable_17() override;
    ADDRESSVF(0x00435490, CHECKPOINT_FLAG_LEFT02, Agent_Z_vftable_24);
    virtual void Agent_Z_vftable_24() override;
    ADDRESSVF(0x004354F0, CHECKPOINT_FLAG_LEFT02, Agent_Z_vftable_25);
    virtual void Agent_Z_vftable_25() override;
    char data[96];
};

ADDRESSVFTABLE(0x009C556C, CameraAgent_Z);
class __declspec(dllexport) CameraAgent_Z : public Agent_Z
{
public:
    ADDRESSSYMBOL(0x00635430, "?BaseObject_Z_vftable_0@CameraAgent_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x006353E0, CameraAgent_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSVF(0x00635960, CameraAgent_Z, BaseObject_Z_vftable_13);
    virtual void BaseObject_Z_vftable_13() override;
    ADDRESSSYMBOL(0x00401050, "?ABC_Agent_vftable_14@CameraAgent_Z@@UAEHXZ");
    virtual int ABC_Agent_vftable_14() override;
    ADDRESSVF(0x00635010, CameraAgent_Z, ABC_Agent_vftable_15);
    virtual void ABC_Agent_vftable_15() override;
    ADDRESSSYMBOL(0x00401060, "?ABC_Agent_vftable_16@CameraAgent_Z@@UAEXH@Z");
    virtual void ABC_Agent_vftable_16(int) override;
    ADDRESSVF(0x00401090, CameraAgent_Z, ABC_Agent_vftable_17);
    virtual void ABC_Agent_vftable_17() override;
    ADDRESSSYMBOL(0x006354D0, "?ABC_Agent_vftable_18@CameraAgent_Z@@UAEXXZ");
    virtual void ABC_Agent_vftable_18() override;
    ADDRESSSYMBOL(0x006358B0, "?ABC_Agent_vftable_19@CameraAgent_Z@@UAEXXZ");
    virtual void ABC_Agent_vftable_19() override;
    ADDRESSSYMBOL(0x00635460, "?Agent_Z_vftable_20@CameraAgent_Z@@UAEXXZ");
    virtual void Agent_Z_vftable_20() override;
    ADDRESSVF(0x00635B00, CameraAgent_Z, Agent_Z_vftable_24);
    virtual void Agent_Z_vftable_24() override;
    ADDRESSVF(0x00635D00, CameraAgent_Z, Agent_Z_vftable_25);
    virtual void Agent_Z_vftable_25() override;
    virtual int CameraAgent_Z_vftable_39();
    ADDRESSVF(0x004010B0, CameraAgent_Z, CameraAgent_Z_vftable_40);
    virtual void CameraAgent_Z_vftable_40();
    ADDRESSVF(0x00635A20, CameraAgent_Z, CameraAgent_Z_vftable_41);
    virtual void CameraAgent_Z_vftable_41();
    ADDRESSVF(0x004010C0, CameraAgent_Z, CameraAgent_Z_vftable_42);
    virtual void CameraAgent_Z_vftable_42();
    ADDRESSVF(0x006350F0, CameraAgent_Z, CameraAgent_Z_vftable_43);
    virtual void CameraAgent_Z_vftable_43();
    char data[12];
};

ADDRESSVFTABLE(0x009B1B6C, PhysicObj_G);
class __declspec(dllexport) PhysicObj_G : public PhysicObj_Z
{
public:
    ADDRESSVF(0x004E0610, PhysicObj_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
};

ADDRESSVFTABLE(0x009CADB8, CompString_16_Z);
class __declspec(dllexport) CompString_16_Z : public CompString_Z
{
public:
    ADDRESSVF(0x006C2420, CompString_16_Z, CompField_Z_vftable_0);
    virtual void CompField_Z_vftable_0() override;
    virtual int CompField_Z_vftable_1() override;
    virtual int CompField_Z_vftable_2() override;
    virtual int CompField_Z_vftable_3() override;
};

ADDRESSVFTABLE(0x009A5034, Dialog_MCAlert);
class __declspec(dllexport) Dialog_MCAlert : public Dialog_BaseAlert
{
public:
    ADDRESSVF(0x004427E0, Dialog_MCAlert, CWindowHierarchy_G_vftable_0);
    virtual void CWindowHierarchy_G_vftable_0() override;
    ADDRESSSYMBOL(0x004410D0, "?Dialog_G_vftable_16@Dialog_MCAlert@@UAEXH@Z");
    virtual void Dialog_G_vftable_16(int) override;
    ADDRESSVF(0x00440A30, Dialog_MCAlert, Dialog_G_vftable_19);
    virtual void Dialog_G_vftable_19() override;
    ADDRESSSYMBOL(0x00440A80, "?Dialog_G_vftable_20@Dialog_MCAlert@@UAEXXZ");
    virtual void Dialog_G_vftable_20() override;
    ADDRESSVF(0x00440AD0, Dialog_MCAlert, Dialog_BaseAlert_vftable_28);
    virtual void Dialog_BaseAlert_vftable_28() override;
    ADDRESSVF(0x00440B10, Dialog_MCAlert, Dialog_BaseAlert_vftable_29);
    virtual void Dialog_BaseAlert_vftable_29() override;
};

ADDRESSVFTABLE(0x009553E4, CameraAgent_G);
class __declspec(dllexport) CameraAgent_G : public CameraAgent_Z
{
public:
    ADDRESSSYMBOL(0x00401350, "?BaseObject_Z_vftable_0@CameraAgent_G@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x00401300, CameraAgent_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x00401150, "?ABC_Agent_vftable_14@CameraAgent_G@@UAEHXZ");
    virtual int ABC_Agent_vftable_14() override;
    ADDRESSVF(0x00401160, CameraAgent_G, ABC_Agent_vftable_15);
    virtual void ABC_Agent_vftable_15() override;
    ADDRESSSYMBOL(0x00401170, "?ABC_Agent_vftable_16@CameraAgent_G@@UAEXH@Z");
    virtual void ABC_Agent_vftable_16(int) override;
    ADDRESSVF(0x004011A0, CameraAgent_G, ABC_Agent_vftable_17);
    virtual void ABC_Agent_vftable_17() override;
    ADDRESSSYMBOL(0x00401390, "?ABC_Agent_vftable_19@CameraAgent_G@@UAEXXZ");
    virtual void ABC_Agent_vftable_19() override;
    ADDRESSVF(0x004013F0, CameraAgent_G, CameraAgent_G_vftable_44);
    virtual void CameraAgent_G_vftable_44();
};

ADDRESSVFTABLE(0x009BFF34, Dialog_Online);
class __declspec(dllexport) Dialog_Online : public DialogMenu_G
{
public:
    ADDRESSVF(0x005909A0, Dialog_Online, CWindowHierarchy_G_vftable_0);
    virtual void CWindowHierarchy_G_vftable_0() override;
    ADDRESSSYMBOL(0x00591650, "?Dialog_G_vftable_15@Dialog_Online@@UAEXXZ");
    virtual void Dialog_G_vftable_15() override;
    ADDRESSSYMBOL(0x00591540, "?Dialog_G_vftable_17@Dialog_Online@@UAEXXZ");
    virtual void Dialog_G_vftable_17() override;
    ADDRESSVF(0x00591550, Dialog_Online, Dialog_G_vftable_19);
    virtual void Dialog_G_vftable_19() override;
    ADDRESSVF(0x005915F0, Dialog_Online, Dialog_G_vftable_21);
    virtual void Dialog_G_vftable_21() override;
    virtual void Dialog_G_vftable_22() override;
    ADDRESSVF(0x005915A0, Dialog_Online, Dialog_G_vftable_23);
    virtual void Dialog_G_vftable_23() override;
};

ADDRESSVFTABLE(0x009D27A4, UserDefine_Z);
class __declspec(dllexport) UserDefine_Z : public ResourceObject_Z
{
public:
    ADDRESSVF(0x007B1A00, UserDefine_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x007B1CD0, "?BaseObject_Z_vftable_3@UserDefine_Z@@UAEXH@Z");
    virtual void BaseObject_Z_vftable_3(int) override;
    char data[12];
};

ADDRESSVFTABLE(0x009B2994, IT_SOUND);
class __declspec(dllexport) IT_SOUND : public Agent_Z
{
public:
    ADDRESSSYMBOL(0x004EAA30, "?BaseObject_Z_vftable_0@IT_SOUND@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x004EA3A0, IT_SOUND, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x004EA310, "?ABC_Agent_vftable_14@IT_SOUND@@UAEHXZ");
    virtual int ABC_Agent_vftable_14() override;
    ADDRESSVF(0x004EA320, IT_SOUND, ABC_Agent_vftable_15);
    virtual void ABC_Agent_vftable_15() override;
    ADDRESSSYMBOL(0x004EA330, "?ABC_Agent_vftable_16@IT_SOUND@@UAEXH@Z");
    virtual void ABC_Agent_vftable_16(int) override;
    ADDRESSVF(0x004EA360, IT_SOUND, ABC_Agent_vftable_17);
    virtual void ABC_Agent_vftable_17() override;
    ADDRESSSYMBOL(0x004EAAC0, "?Agent_Z_vftable_20@IT_SOUND@@UAEXXZ");
    virtual void Agent_Z_vftable_20() override;
    char data[72];
};

ADDRESSVFTABLE(0x009C32E8, GamePlayerInfoServer_G);
class __declspec(dllexport) GamePlayerInfoServer_G : public GamePlayerInfo_G
{
public:
    ADDRESSVF(0x005B5A70, GamePlayerInfoServer_G, ComObj_Z_vftable_0);
    virtual void ComObj_Z_vftable_0() override;
    virtual void ComObj_Z_vftable_3(int) override;
    virtual void ComObj_Z_vftable_4(int) override;
};

ADDRESSVFTABLE(0x009DB4FC, RotShape_Z);
class __declspec(dllexport) RotShape_Z : public Points_Z
{
public:
    ADDRESSVF(0x0087D310, RotShape_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x0087C8C0, "?BaseObject_Z_vftable_3@RotShape_Z@@UAEXH@Z");
    virtual void BaseObject_Z_vftable_3(int) override;
    ADDRESSSYMBOL(0x0087C990, "?BaseObject_Z_vftable_4@RotShape_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_4() override;
    ADDRESSSYMBOL(0x0087CA30, "?BaseObject_Z_vftable_5@RotShape_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_5() override;
    ADDRESSSYMBOL(0x0087CA90, "?BaseObject_Z_vftable_12@RotShape_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_12() override;
    ADDRESSVF(0x0087D330, RotShape_Z, BaseObject_Z_vftable_13);
    virtual void BaseObject_Z_vftable_13() override;
    ADDRESSSYMBOL(0x008834F0, "?Object_Z_vftable_16@RotShape_Z@@UAEXHH@Z");
    virtual void Object_Z_vftable_16(int, int) override;
    virtual int Object_Z_vftable_36(int, int, int, int, int, int, int, int, int, int, int) override;
    char data[40];
};

ADDRESSVFTABLE(0x009D3AF4, StreamBigFileLoader_Z);
class __declspec(dllexport) StreamBigFileLoader_Z : public BigFileLoader_Z
{
public:
    ADDRESSVF(0x007DA740, StreamBigFileLoader_Z, BaseStream_Z_vftable_0);
    virtual void BaseStream_Z_vftable_0() override;
    ADDRESSSYMBOL(0x007DA760, "?BaseStream_Z_vftable_4@StreamBigFileLoader_Z@@UAEXHHH@Z");
    virtual void BaseStream_Z_vftable_4(int, int, int) override;
    ADDRESSVF(0x007DA7A0, StreamBigFileLoader_Z, BigFileLoader_Z_vftable_11);
    virtual void BigFileLoader_Z_vftable_11() override;
    ADDRESSVF(0x007DA800, StreamBigFileLoader_Z, BigFileLoader_Z_vftable_12);
    virtual void BigFileLoader_Z_vftable_12() override;
};

ADDRESSVFTABLE(0x009B5284, F14_G);
class __declspec(dllexport) F14_G : public Agent_Z
{
public:
    ADDRESSSYMBOL(0x00519DD0, "?BaseObject_Z_vftable_0@F14_G@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x00519D00, F14_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSVF(0x00519F50, F14_G, BaseObject_Z_vftable_13);
    virtual void BaseObject_Z_vftable_13() override;
    ADDRESSSYMBOL(0x00519C80, "?ABC_Agent_vftable_14@F14_G@@UAEHXZ");
    virtual int ABC_Agent_vftable_14() override;
    ADDRESSVF(0x00519C90, F14_G, ABC_Agent_vftable_15);
    virtual void ABC_Agent_vftable_15() override;
    ADDRESSSYMBOL(0x00519CA0, "?ABC_Agent_vftable_16@F14_G@@UAEXH@Z");
    virtual void ABC_Agent_vftable_16(int) override;
    ADDRESSVF(0x00519CD0, F14_G, ABC_Agent_vftable_17);
    virtual void ABC_Agent_vftable_17() override;
    ADDRESSSYMBOL(0x00519EE0, "?Agent_Z_vftable_20@F14_G@@UAEXXZ");
    virtual void Agent_Z_vftable_20() override;
    ADDRESSVF(0x00519E30, F14_G, Agent_Z_vftable_24);
    virtual void Agent_Z_vftable_24() override;
    char data[4];
};

ADDRESSVFTABLE(0x009C95CC, Animation_Z);
class __declspec(dllexport) Animation_Z : public ResourceObject_Z
{
public:
    ADDRESSVF(0x0068C490, Animation_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x007C4980, "?BaseObject_Z_vftable_3@Animation_Z@@UAEXH@Z");
    virtual void BaseObject_Z_vftable_3(int) override;
    ADDRESSSYMBOL(0x007C4BC0, "?BaseObject_Z_vftable_4@Animation_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_4() override;
    ADDRESSSYMBOL(0x007C4BD0, "?BaseObject_Z_vftable_5@Animation_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_5() override;
    virtual void BaseObject_Z_vftable_8() override;
    ADDRESSSYMBOL(0x007C4E20, "?BaseObject_Z_vftable_12@Animation_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_12() override;
    ADDRESSVF(0x00749D70, Animation_Z, BaseObject_Z_vftable_13);
    virtual void BaseObject_Z_vftable_13() override;
    char data[180];
};

ADDRESSVFTABLE(0x009C6D3C, AnimatedMsgAgent_Z);
class __declspec(dllexport) AnimatedMsgAgent_Z : public Agent_Z
{
public:
    ADDRESSVF(0x00669100, AnimatedMsgAgent_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x0041A8F0, "?ABC_Agent_vftable_14@AnimatedMsgAgent_Z@@UAEHXZ");
    virtual int ABC_Agent_vftable_14() override;
    ADDRESSVF(0x00669140, AnimatedMsgAgent_Z, ABC_Agent_vftable_15);
    virtual void ABC_Agent_vftable_15() override;
    ADDRESSSYMBOL(0x0041A900, "?ABC_Agent_vftable_16@AnimatedMsgAgent_Z@@UAEXH@Z");
    virtual void ABC_Agent_vftable_16(int) override;
    ADDRESSVF(0x0041A8E0, AnimatedMsgAgent_Z, ABC_Agent_vftable_17);
    virtual void ABC_Agent_vftable_17() override;
};

ADDRESSVFTABLE(0x009BE43C, Dialog_MsgBox);
class __declspec(dllexport) Dialog_MsgBox : public DialogMenu_G
{
public:
    ADDRESSVF(0x00588660, Dialog_MsgBox, CWindowHierarchy_G_vftable_0);
    virtual void CWindowHierarchy_G_vftable_0() override;
    ADDRESSSYMBOL(0x00595910, "?Dialog_G_vftable_15@Dialog_MsgBox@@UAEXXZ");
    virtual void Dialog_G_vftable_15() override;
    ADDRESSSYMBOL(0x005958A0, "?Dialog_G_vftable_16@Dialog_MsgBox@@UAEXH@Z");
    virtual void Dialog_G_vftable_16(int) override;
    ADDRESSSYMBOL(0x00594D50, "?Dialog_G_vftable_17@Dialog_MsgBox@@UAEXXZ");
    virtual void Dialog_G_vftable_17() override;
    ADDRESSVF(0x00595000, Dialog_MsgBox, Dialog_G_vftable_19);
    virtual void Dialog_G_vftable_19() override;
    ADDRESSSYMBOL(0x00595830, "?Dialog_G_vftable_20@Dialog_MsgBox@@UAEXXZ");
    virtual void Dialog_G_vftable_20() override;
    ADDRESSVF(0x00594F40, Dialog_MsgBox, Dialog_G_vftable_22);
    virtual void Dialog_G_vftable_22() override;
    ADDRESSSYMBOL(0x005959C0, "?DialogMenu_G_vftable_30@Dialog_MsgBox@@UAEHXZ");
    virtual int DialogMenu_G_vftable_30() override;
    virtual int Dialog_MsgBox_vftable_31();
};

ADDRESSVFTABLE(0x009DB6E4, Skin_Z);
class __declspec(dllexport) Skin_Z : public Object_Z
{
public:
    ADDRESSVF(0x0087E110, Skin_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x0087FC30, "?BaseObject_Z_vftable_3@Skin_Z@@UAEXH@Z");
    virtual void BaseObject_Z_vftable_3(int) override;
    ADDRESSSYMBOL(0x00880040, "?BaseObject_Z_vftable_4@Skin_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_4() override;
    virtual void BaseObject_Z_vftable_5() override;
    ADDRESSVF(0x00880220, Skin_Z, BaseObject_Z_vftable_10);
    virtual void BaseObject_Z_vftable_10() override;
    ADDRESSVF(0x008802A0, Skin_Z, BaseObject_Z_vftable_11);
    virtual void BaseObject_Z_vftable_11() override;
    ADDRESSSYMBOL(0x0087E330, "?BaseObject_Z_vftable_12@Skin_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_12() override;
    ADDRESSVF(0x0087E220, Skin_Z, BaseObject_Z_vftable_13);
    virtual void BaseObject_Z_vftable_13() override;
    virtual void Object_Z_vftable_16(int, int) override;
    ADDRESSSYMBOL(0x00880520, "?Object_Z_vftable_29@Skin_Z@@UAEDHHHHHHHH@Z");
    virtual char Object_Z_vftable_29(int, int, int, int, int, int, int, int) override;
    ADDRESSSYMBOL(0x00880590, "?Object_Z_vftable_30@Skin_Z@@UAEDHHHHHHHH@Z");
    virtual char Object_Z_vftable_30(int, int, int, int, int, int, int, int) override;
    virtual char Object_Z_vftable_31(int, int, int, int, int, int, int, int) override;
    ADDRESSSYMBOL(0x00880620, "?Object_Z_vftable_33@Skin_Z@@UAEHHHHHHHHH@Z");
    virtual int Object_Z_vftable_33(int, int, int, int, int, int, int, int) override;
    ADDRESSSYMBOL(0x008805E0, "?Object_Z_vftable_35@Skin_Z@@UAEHHHHHHHHH@Z");
    virtual int Object_Z_vftable_35(int, int, int, int, int, int, int, int) override;
    virtual void Skin_Z_vftable_43(int);
    char data[36];
};

ADDRESSVFTABLE(0x009B1A8C, PATH_ATV_MANAGER);
class __declspec(dllexport) PATH_ATV_MANAGER : public PATH_MANAGER
{
public:
    ADDRESSVF(0x004DC7D0, PATH_ATV_MANAGER, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSVF(0x004DC840, PATH_ATV_MANAGER, PATH_MANAGER_vftable_23);
    virtual void PATH_MANAGER_vftable_23() override;
    ADDRESSVF(0x004DC860, PATH_ATV_MANAGER, PATH_MANAGER_vftable_24);
    virtual void PATH_MANAGER_vftable_24() override;
    ADDRESSVF(0x004DC880, PATH_ATV_MANAGER, PATH_MANAGER_vftable_25);
    virtual void PATH_MANAGER_vftable_25() override;
    ADDRESSVF(0x004DC8D0, PATH_ATV_MANAGER, PATH_MANAGER_vftable_26);
    virtual void PATH_MANAGER_vftable_26() override;
    ADDRESSVF(0x004DD0C0, PATH_ATV_MANAGER, PATH_MANAGER_vftable_27);
    virtual void PATH_MANAGER_vftable_27() override;
    ADDRESSVF(0x004DD1C0, PATH_ATV_MANAGER, PATH_MANAGER_vftable_28);
    virtual void PATH_MANAGER_vftable_28() override;
    ADDRESSVF(0x004DD200, PATH_ATV_MANAGER, PATH_MANAGER_vftable_29);
    virtual void PATH_MANAGER_vftable_29() override;
    char data[116];
};

ADDRESSVFTABLE(0x009B0AD4, IT_SPINCOLLECTManipulator_G);
class __declspec(dllexport) IT_SPINCOLLECTManipulator_G : public LodMove_Z
{
public:
    ADDRESSSYMBOL(0x005194C0, "?BaseObject_Z_vftable_0@IT_SPINCOLLECTManipulator_G@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x004D5CA0, IT_SPINCOLLECTManipulator_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x005194E0, "?Manipulator_Z_vftable_14@IT_SPINCOLLECTManipulator_G@@UAEXXZ");
    virtual void Manipulator_Z_vftable_14() override;
    ADDRESSSYMBOL(0x00519500, "?Manipulator_Z_vftable_17@IT_SPINCOLLECTManipulator_G@@UAEXH@Z");
    virtual void Manipulator_Z_vftable_17(int) override;
    ADDRESSSYMBOL(0x005195E0, "?ObjectMove_Z_vftable_18@IT_SPINCOLLECTManipulator_G@@UAEXHHHHHH@Z");
    virtual void ObjectMove_Z_vftable_18(int, int, int, int, int, int) override;
    char data[4];
};

ADDRESSVFTABLE(0x009BE33C, Dialog_CompileShader);
class __declspec(dllexport) Dialog_CompileShader : public DialogMenu_G
{
public:
    ADDRESSVF(0x005895C0, Dialog_CompileShader, CWindowHierarchy_G_vftable_0);
    virtual void CWindowHierarchy_G_vftable_0() override;
    ADDRESSVF(0x0058F590, Dialog_CompileShader, Dialog_G_vftable_19);
    virtual void Dialog_G_vftable_19() override;
    ADDRESSSYMBOL(0x0058F6E0, "?Dialog_G_vftable_20@Dialog_CompileShader@@UAEXXZ");
    virtual void Dialog_G_vftable_20() override;
    ADDRESSVF(0x0058F710, Dialog_CompileShader, Dialog_G_vftable_23);
    virtual void Dialog_G_vftable_23() override;
};

ADDRESSVFTABLE(0x009BE64C, Dialog_LoadProfileData);
class __declspec(dllexport) Dialog_LoadProfileData : public DialogMenu_G
{
public:
    ADDRESSVF(0x00589640, Dialog_LoadProfileData, CWindowHierarchy_G_vftable_0);
    virtual void CWindowHierarchy_G_vftable_0() override;
    ADDRESSVF(0x005904C0, Dialog_LoadProfileData, Dialog_G_vftable_19);
    virtual void Dialog_G_vftable_19() override;
    virtual void Dialog_G_vftable_20() override;
    ADDRESSVF(0x00590500, Dialog_LoadProfileData, Dialog_G_vftable_23);
    virtual void Dialog_G_vftable_23() override;
};

ADDRESSVFTABLE(0x009B1DAC, CreaturesMove_G);
class __declspec(dllexport) CreaturesMove_G : public LodMove_Z
{
public:
    ADDRESSSYMBOL(0x0041B010, "?BaseObject_Z_vftable_0@CreaturesMove_G@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x004DFD90, CreaturesMove_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSVF(0x0041B230, CreaturesMove_G, BaseObject_Z_vftable_13);
    virtual void BaseObject_Z_vftable_13() override;
    ADDRESSSYMBOL(0x0041B090, "?Manipulator_Z_vftable_14@CreaturesMove_G@@UAEXXZ");
    virtual void Manipulator_Z_vftable_14() override;
    virtual void Manipulator_Z_vftable_15() override;
    virtual void Manipulator_Z_vftable_16() override;
    ADDRESSSYMBOL(0x0041C660, "?Manipulator_Z_vftable_17@CreaturesMove_G@@UAEXH@Z");
    virtual void Manipulator_Z_vftable_17(int) override;
    ADDRESSSYMBOL(0x0041C9A0, "?ObjectMove_Z_vftable_18@CreaturesMove_G@@UAEXHHHHHH@Z");
    virtual void ObjectMove_Z_vftable_18(int, int, int, int, int, int) override;
    virtual void ObjectMove_Z_vftable_21() override;
    ADDRESSVF(0x0041D010, CreaturesMove_G, ObjectMove_Z_vftable_26);
    virtual void ObjectMove_Z_vftable_26() override;
    ADDRESSVF(0x0041C440, CreaturesMove_G, ObjectMove_Z_vftable_30);
    virtual void ObjectMove_Z_vftable_30() override;
    ADDRESSVF(0x0041CF90, CreaturesMove_G, ObjectMove_Z_vftable_33);
    virtual void ObjectMove_Z_vftable_33() override;
    ADDRESSVF(0x004DB5C0, CreaturesMove_G, ObjectMove_Z_vftable_38);
    virtual void ObjectMove_Z_vftable_38() override;
    ADDRESSSYMBOL(0x004DB5B0, "?ObjectMove_Z_vftable_39@CreaturesMove_G@@UAEXH@Z");
    virtual void ObjectMove_Z_vftable_39(int) override;
    ADDRESSSYMBOL(0x004DB5A0, "?ObjectMove_Z_vftable_40@CreaturesMove_G@@UAEXH@Z");
    virtual void ObjectMove_Z_vftable_40(int) override;
    ADDRESSVF(0x004DB580, CreaturesMove_G, ObjectMove_Z_vftable_62);
    virtual void ObjectMove_Z_vftable_62() override;
    ADDRESSVF(0x004DB570, CreaturesMove_G, ObjectThrow_Z_vftable_77);
    virtual void ObjectThrow_Z_vftable_77() override;
    ADDRESSVF(0x004DB560, CreaturesMove_G, ObjectThrow_Z_vftable_78);
    virtual void ObjectThrow_Z_vftable_78() override;
    ADDRESSVF(0x004DB550, CreaturesMove_G, ObjectThrow_Z_vftable_79);
    virtual void ObjectThrow_Z_vftable_79() override;
    ADDRESSVF(0x004DB540, CreaturesMove_G, ObjectThrow_Z_vftable_80);
    virtual void ObjectThrow_Z_vftable_80() override;
    virtual void LodMove_Z_vftable_89(int) override;
    virtual void LodMove_Z_vftable_90(int) override;
    ADDRESSVF(0x004DB4F0, CreaturesMove_G, LodMove_Z_vftable_91);
    virtual void LodMove_Z_vftable_91() override;
    ADDRESSVF(0x004DB4C0, CreaturesMove_G, LodMove_Z_vftable_92);
    virtual void LodMove_Z_vftable_92() override;
    ADDRESSVF(0x004DB490, CreaturesMove_G, LodMove_Z_vftable_97);
    virtual void LodMove_Z_vftable_97() override;
    ADDRESSVF(0x004DB480, CreaturesMove_G, LodMove_Z_vftable_98);
    virtual void LodMove_Z_vftable_98() override;
    ADDRESSVF(0x004DB450, CreaturesMove_G, LodMove_Z_vftable_99);
    virtual void LodMove_Z_vftable_99() override;
    ADDRESSVF(0x004DB420, CreaturesMove_G, LodMove_Z_vftable_101);
    virtual void LodMove_Z_vftable_101() override;
    ADDRESSVF(0x0041C2C0, CreaturesMove_G, CreaturesMove_G_vftable_103);
    virtual void CreaturesMove_G_vftable_103();
    ADDRESSVF(0x004DB400, CreaturesMove_G, CreaturesMove_G_vftable_104);
    virtual void CreaturesMove_G_vftable_104();
    ADDRESSVF(0x004DB3E0, CreaturesMove_G, CreaturesMove_G_vftable_105);
    virtual void CreaturesMove_G_vftable_105();
    ADDRESSVF(0x004DFDE0, CreaturesMove_G, CreaturesMove_G_vftable_106);
    virtual void CreaturesMove_G_vftable_106();
    ADDRESSVF(0x004DFDF0, CreaturesMove_G, CreaturesMove_G_vftable_107);
    virtual void CreaturesMove_G_vftable_107();
    ADDRESSVF(0x004DB3A0, CreaturesMove_G, CreaturesMove_G_vftable_108);
    virtual void CreaturesMove_G_vftable_108();
    ADDRESSVF(0x004DB360, CreaturesMove_G, CreaturesMove_G_vftable_109);
    virtual void CreaturesMove_G_vftable_109();
    ADDRESSVF(0x004DB350, CreaturesMove_G, CreaturesMove_G_vftable_110);
    virtual void CreaturesMove_G_vftable_110();
    char data[1152];
};

ADDRESSVFTABLE(0x009A37D4, CHECKPOINT_FLAG_RIGHT);
class __declspec(dllexport) CHECKPOINT_FLAG_RIGHT : public BaseSharingPlayAnimAgent_G
{
public:
    ADDRESSVF(0x00434FC0, CHECKPOINT_FLAG_RIGHT, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSVF(0x00434F20, CHECKPOINT_FLAG_RIGHT, BaseObject_Z_vftable_13);
    virtual void BaseObject_Z_vftable_13() override;
    ADDRESSSYMBOL(0x00434E30, "?ABC_Agent_vftable_14@CHECKPOINT_FLAG_RIGHT@@UAEHXZ");
    virtual int ABC_Agent_vftable_14() override;
    ADDRESSVF(0x00434E40, CHECKPOINT_FLAG_RIGHT, ABC_Agent_vftable_15);
    virtual void ABC_Agent_vftable_15() override;
    ADDRESSSYMBOL(0x00434E50, "?ABC_Agent_vftable_16@CHECKPOINT_FLAG_RIGHT@@UAEXH@Z");
    virtual void ABC_Agent_vftable_16(int) override;
    ADDRESSVF(0x00434E80, CHECKPOINT_FLAG_RIGHT, ABC_Agent_vftable_17);
    virtual void ABC_Agent_vftable_17() override;
    ADDRESSVF(0x00434E90, CHECKPOINT_FLAG_RIGHT, Agent_Z_vftable_24);
    virtual void Agent_Z_vftable_24() override;
    ADDRESSVF(0x00434EF0, CHECKPOINT_FLAG_RIGHT, Agent_Z_vftable_25);
    virtual void Agent_Z_vftable_25() override;
    char data[96];
};

ADDRESSVFTABLE(0x009C9BD4, SubLevelVolumeAgent_Z);
class __declspec(dllexport) SubLevelVolumeAgent_Z : public VolumeAgent_Z
{
public:
    ADDRESSVF(0x00691A90, SubLevelVolumeAgent_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x006919F0, "?ABC_Agent_vftable_14@SubLevelVolumeAgent_Z@@UAEHXZ");
    virtual int ABC_Agent_vftable_14() override;
    ADDRESSVF(0x00691A00, SubLevelVolumeAgent_Z, ABC_Agent_vftable_15);
    virtual void ABC_Agent_vftable_15() override;
    ADDRESSSYMBOL(0x00691A30, "?ABC_Agent_vftable_16@SubLevelVolumeAgent_Z@@UAEXH@Z");
    virtual void ABC_Agent_vftable_16(int) override;
    ADDRESSVF(0x00691A60, SubLevelVolumeAgent_Z, ABC_Agent_vftable_17);
    virtual void ABC_Agent_vftable_17() override;
    ADDRESSVF(0x007CB150, SubLevelVolumeAgent_Z, Agent_Z_vftable_24);
    virtual void Agent_Z_vftable_24() override;
    virtual void VolumeAgent_Z_vftable_42(int) override;
    virtual void VolumeAgent_Z_vftable_43(int) override;
    virtual void VolumeAgent_Z_vftable_44(int) override;
    char data[4];
};

ADDRESSVFTABLE(0x009D356C, Tree_Z);
class __declspec(dllexport) Tree_Z : public Object_Z
{
public:
    ADDRESSVF(0x007C9210, Tree_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x007C9330, "?BaseObject_Z_vftable_3@Tree_Z@@UAEXH@Z");
    virtual void BaseObject_Z_vftable_3(int) override;
    ADDRESSSYMBOL(0x007C9420, "?BaseObject_Z_vftable_4@Tree_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_4() override;
    virtual void BaseObject_Z_vftable_5() override;
    ADDRESSVF(0x007C92D0, Tree_Z, BaseObject_Z_vftable_13);
    virtual void BaseObject_Z_vftable_13() override;
    char data[88];
};

ADDRESSVFTABLE(0x009D531C, InGameObjectsPc_Z);
class __declspec(dllexport) InGameObjectsPc_Z : public InGameObjects_Z
{
public:
    ADDRESSVF(0x0081C620, InGameObjectsPc_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x00845AC0, "?ManipulatorDraw_Z_vftable_19@InGameObjectsPc_Z@@UAEXH@Z");
    virtual void ManipulatorDraw_Z_vftable_19(int) override;
};

ADDRESSVFTABLE(0x009C1670, CPurchaseMulti);
class __declspec(dllexport) CPurchaseMulti : public CPurchaseMainStoryLevels
{
public:
    ADDRESSVF(0x005A30C0, CPurchaseMulti, CPurchase_vftable_0);
    virtual void CPurchase_vftable_0() override;
    ADDRESSSYMBOL(0x005A30F0, "?CPurchase_vftable_1@CPurchaseMulti@@UAEDXZ");
    virtual char CPurchase_vftable_1() override;
    ADDRESSVF(0x005A3100, CPurchaseMulti, CPurchase_vftable_4);
    virtual void CPurchase_vftable_4() override;
};

ADDRESSVFTABLE(0x009A535C, InGamePlayer_G);
class __declspec(dllexport) InGamePlayer_G : public BaseInGameDatas_G
{
public:
    ADDRESSSYMBOL(0x004438D0, "?BaseObject_Z_vftable_0@InGamePlayer_G@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x00443B70, InGamePlayer_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSVF(0x004438B0, InGamePlayer_G, BaseObject_Z_vftable_13);
    virtual void BaseObject_Z_vftable_13() override;
    ADDRESSSYMBOL(0x00443920, "?Manipulator_Z_vftable_14@InGamePlayer_G@@UAEXXZ");
    virtual void Manipulator_Z_vftable_14() override;
    ADDRESSSYMBOL(0x004445C0, "?Manipulator_Z_vftable_17@InGamePlayer_G@@UAEXH@Z");
    virtual void Manipulator_Z_vftable_17(int) override;
    ADDRESSSYMBOL(0x00443290, "?ManipulatorDraw_Z_vftable_19@InGamePlayer_G@@UAEXH@Z");
    virtual void ManipulatorDraw_Z_vftable_19(int) override;
    virtual void BaseInGameDatas_G_vftable_22() override;
    virtual void BaseInGameDatas_G_vftable_23() override;
    virtual void BaseInGameDatas_G_vftable_24() override;
    virtual void *BaseInGameDatas_G_vftable_25() override;
    virtual void *BaseInGameDatas_G_vftable_28() override;
    virtual int BaseInGameDatas_G_vftable_29() override;
    virtual void *BaseInGameDatas_G_vftable_30() override;
    virtual int BaseInGameDatas_G_vftable_31() override;
    char data[30072];
};

ADDRESSVFTABLE(0x009A34FC, LogicAgent_G);
class __declspec(dllexport) LogicAgent_G : public Agent_Z
{
public:
    ADDRESSSYMBOL(0x00433190, "?BaseObject_Z_vftable_0@LogicAgent_G@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x00433150, LogicAgent_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSVF(0x00433250, LogicAgent_G, BaseObject_Z_vftable_13);
    virtual void BaseObject_Z_vftable_13() override;
    ADDRESSSYMBOL(0x004317A0, "?ABC_Agent_vftable_14@LogicAgent_G@@UAEHXZ");
    virtual int ABC_Agent_vftable_14() override;
    ADDRESSVF(0x00432FE0, LogicAgent_G, ABC_Agent_vftable_15);
    virtual void ABC_Agent_vftable_15() override;
    ADDRESSSYMBOL(0x004317B0, "?ABC_Agent_vftable_16@LogicAgent_G@@UAEXH@Z");
    virtual void ABC_Agent_vftable_16(int) override;
    ADDRESSVF(0x004317E0, LogicAgent_G, ABC_Agent_vftable_17);
    virtual void ABC_Agent_vftable_17() override;
    ADDRESSSYMBOL(0x00433220, "?Agent_Z_vftable_20@LogicAgent_G@@UAEXXZ");
    virtual void Agent_Z_vftable_20() override;
    ADDRESSVF(0x004332E0, LogicAgent_G, LogicAgent_G_vftable_39);
    virtual void LogicAgent_G_vftable_39();
    virtual int LogicAgent_G_vftable_40();
    virtual char LogicAgent_G_vftable_41(int, int, int);
    virtual char LogicAgent_G_vftable_42();
    virtual void LogicAgent_G_vftable_43();
    virtual void LogicAgent_G_vftable_44(int);
    ADDRESSVF(0x004333B0, LogicAgent_G, LogicAgent_G_vftable_45);
    virtual void LogicAgent_G_vftable_45();
    ADDRESSVF(0x004336D0, LogicAgent_G, LogicAgent_G_vftable_46);
    virtual void LogicAgent_G_vftable_46();
    char data[44];
};

ADDRESSVFTABLE(0x009DB854, LodData_Z);
class __declspec(dllexport) LodData_Z : public ObjectDatas_Z
{
public:
    ADDRESSVF(0x0087F330, LodData_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x00883AB0, "?BaseObject_Z_vftable_3@LodData_Z@@UAEXH@Z");
    virtual void BaseObject_Z_vftable_3(int) override;
    ADDRESSSYMBOL(0x00883B90, "?BaseObject_Z_vftable_4@LodData_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_4() override;
    ADDRESSVF(0x0087F3D0, LodData_Z, BaseObject_Z_vftable_13);
    virtual void BaseObject_Z_vftable_13() override;
    ADDRESSSYMBOL(0x0087F780, "?ObjectDatas_Z_vftable_16@LodData_Z@@UAEXHHH@Z");
    virtual void ObjectDatas_Z_vftable_16(int, int, int) override;
    ADDRESSVF(0x0087F4A0, LodData_Z, ObjectDatas_Z_vftable_18);
    virtual void ObjectDatas_Z_vftable_18() override;
    ADDRESSVF(0x00883E00, LodData_Z, ObjectDatas_Z_vftable_19);
    virtual void ObjectDatas_Z_vftable_19() override;
    ADDRESSVF(0x00883E80, LodData_Z, ObjectDatas_Z_vftable_20);
    virtual void ObjectDatas_Z_vftable_20() override;
    ADDRESSVF(0x00883C80, LodData_Z, ObjectDatas_Z_vftable_21);
    virtual void ObjectDatas_Z_vftable_21() override;
    ADDRESSSYMBOL(0x00884630, "?ObjectDatas_Z_vftable_22@LodData_Z@@UAEXH@Z");
    virtual void ObjectDatas_Z_vftable_22(int) override;
    ADDRESSSYMBOL(0x0087F820, "?ObjectDatas_Z_vftable_23@LodData_Z@@UAEHHHH@Z");
    virtual int ObjectDatas_Z_vftable_23(int, int, int) override;
    ADDRESSSYMBOL(0x008859E0, "?ObjectDatas_Z_vftable_24@LodData_Z@@UAEXHH@Z");
    virtual void ObjectDatas_Z_vftable_24(int, int) override;
    char data[28];
};

ADDRESSVFTABLE(0x009B839C, EndMissionVolumeAgent_G);
class __declspec(dllexport) EndMissionVolumeAgent_G : public VolumeDelayedStart_G
{
public:
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x00545970, EndMissionVolumeAgent_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x005459D0, "?ABC_Agent_vftable_14@EndMissionVolumeAgent_G@@UAEHXZ");
    virtual int ABC_Agent_vftable_14() override;
    ADDRESSVF(0x005459E0, EndMissionVolumeAgent_G, ABC_Agent_vftable_15);
    virtual void ABC_Agent_vftable_15() override;
    ADDRESSSYMBOL(0x005459F0, "?ABC_Agent_vftable_16@EndMissionVolumeAgent_G@@UAEXH@Z");
    virtual void ABC_Agent_vftable_16(int) override;
    ADDRESSVF(0x00545A30, EndMissionVolumeAgent_G, ABC_Agent_vftable_17);
    virtual void ABC_Agent_vftable_17() override;
    ADDRESSSYMBOL(0x00570070, "?Agent_Z_vftable_20@EndMissionVolumeAgent_G@@UAEXXZ");
    virtual void Agent_Z_vftable_20() override;
    virtual void Agent_Z_vftable_24() override;
    ADDRESSSYMBOL(0x005701D0, "?VolumeAgent_Z_vftable_44@EndMissionVolumeAgent_G@@UAEXH@Z");
    virtual void VolumeAgent_Z_vftable_44(int) override;
    ADDRESSSYMBOL(0x005700C0, "?VolumeDelayedStart_G_vftable_46@EndMissionVolumeAgent_G@@UAEXH@Z");
    virtual void VolumeDelayedStart_G_vftable_46(int) override;
};

ADDRESSVFTABLE(0x009A3874, DRAPEAU_SKIN);
class __declspec(dllexport) DRAPEAU_SKIN : public BaseSharingPlayAnimAgent_G
{
public:
    ADDRESSVF(0x004351C0, DRAPEAU_SKIN, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSVF(0x00435120, DRAPEAU_SKIN, BaseObject_Z_vftable_13);
    virtual void BaseObject_Z_vftable_13() override;
    ADDRESSSYMBOL(0x00435030, "?ABC_Agent_vftable_14@DRAPEAU_SKIN@@UAEHXZ");
    virtual int ABC_Agent_vftable_14() override;
    ADDRESSVF(0x00435040, DRAPEAU_SKIN, ABC_Agent_vftable_15);
    virtual void ABC_Agent_vftable_15() override;
    ADDRESSSYMBOL(0x00435050, "?ABC_Agent_vftable_16@DRAPEAU_SKIN@@UAEXH@Z");
    virtual void ABC_Agent_vftable_16(int) override;
    ADDRESSVF(0x00435080, DRAPEAU_SKIN, ABC_Agent_vftable_17);
    virtual void ABC_Agent_vftable_17() override;
    ADDRESSVF(0x00435090, DRAPEAU_SKIN, Agent_Z_vftable_24);
    virtual void Agent_Z_vftable_24() override;
    ADDRESSVF(0x004350F0, DRAPEAU_SKIN, Agent_Z_vftable_25);
    virtual void Agent_Z_vftable_25() override;
    char data[96];
};

ADDRESSVFTABLE(0x009C0514, CBitmap_G);
class __declspec(dllexport) CBitmap_G : public CWindow_G
{
public:
    ADDRESSVF(0x00598720, CBitmap_G, CWindowHierarchy_G_vftable_0);
    virtual void CWindowHierarchy_G_vftable_0() override;
    ADDRESSVF(0x00598760, CBitmap_G, CWindow_G_vftable_15);
    virtual void CWindow_G_vftable_15() override;
    virtual void CWindow_G_vftable_16() override;
    ADDRESSVF(0x00598AD0, CBitmap_G, CWindow_G_vftable_17);
    virtual void CWindow_G_vftable_17() override;
    ADDRESSVF(0x00598830, CBitmap_G, CWindow_G_vftable_18);
    virtual void CWindow_G_vftable_18() override;
    virtual char CWindow_G_vftable_21() override;
    ADDRESSSYMBOL(0x00598E10, "?CWindow_G_vftable_22@CBitmap_G@@UAEDXZ");
    virtual char CWindow_G_vftable_22() override;
    virtual void CWindow_G_vftable_28() override;
    virtual void CWindow_G_vftable_29() override;
};

#include "WinLiveNetPlayManager_Z.h"

ADDRESSVFTABLE(0x009A50B4, Dialog_PADAlert);
class __declspec(dllexport) Dialog_PADAlert : public Dialog_BaseAlert
{
public:
    ADDRESSVF(0x00442AE0, Dialog_PADAlert, CWindowHierarchy_G_vftable_0);
    virtual void CWindowHierarchy_G_vftable_0() override;
    ADDRESSSYMBOL(0x004425C0, "?Dialog_G_vftable_16@Dialog_PADAlert@@UAEXH@Z");
    virtual void Dialog_G_vftable_16(int) override;
    ADDRESSVF(0x004424A0, Dialog_PADAlert, Dialog_G_vftable_19);
    virtual void Dialog_G_vftable_19() override;
    ADDRESSVF(0x00442420, Dialog_PADAlert, Dialog_BaseAlert_vftable_28);
    virtual void Dialog_BaseAlert_vftable_28() override;
    ADDRESSVF(0x00442460, Dialog_PADAlert, Dialog_BaseAlert_vftable_29);
    virtual void Dialog_BaseAlert_vftable_29() override;
};

ADDRESSVFTABLE(0x009D4F9C, FlareDataPc_Z);
class __declspec(dllexport) FlareDataPc_Z : public ObjectDatas_Z
{
public:
    ADDRESSVF(0x0081BF40, FlareDataPc_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSVF(0x00834DB0, FlareDataPc_Z, ObjectDatas_Z_vftable_18);
    virtual void ObjectDatas_Z_vftable_18() override;
};

ADDRESSVFTABLE(0x009C289C, MgrSrv_G);
class __declspec(dllexport) MgrSrv_G : public ComMgrSrv_Z
{
public:
    ADDRESSVF(0x005AACA0, MgrSrv_G, ComOwner_Z_vftable_0);
    virtual void ComOwner_Z_vftable_0() override;
    ADDRESSVF(0x005B61F0, MgrSrv_G, ComMgrSrv_Z_vftable_32);
    virtual void ComMgrSrv_Z_vftable_32() override;
    ADDRESSSYMBOL(0x005B6120, "?ComMgrSrv_Z_vftable_35@MgrSrv_G@@UAEDXZ");
    virtual char ComMgrSrv_Z_vftable_35() override;
};

ADDRESSVFTABLE(0x009D25B4, Graph_Z);
class __declspec(dllexport) Graph_Z : public Object_Z
{
public:
    ADDRESSVF(0x007AD670, Graph_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x00806D80, "?BaseObject_Z_vftable_3@Graph_Z@@UAEXH@Z");
    virtual void BaseObject_Z_vftable_3(int) override;
    ADDRESSSYMBOL(0x007AD7C0, "?BaseObject_Z_vftable_12@Graph_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_12() override;
    virtual void Object_Z_vftable_16(int, int) override;
    char data[24];
};

ADDRESSVFTABLE(0x009B77CC, NoGeneratedObjectVolumeAgent_G);
class __declspec(dllexport) NoGeneratedObjectVolumeAgent_G : public VolumeAgent_Z
{
public:
    ADDRESSSYMBOL(0x00574C00, "?BaseObject_Z_vftable_0@NoGeneratedObjectVolumeAgent_G@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x00541CE0, NoGeneratedObjectVolumeAgent_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x00541C50, "?ABC_Agent_vftable_14@NoGeneratedObjectVolumeAgent_G@@UAEHXZ");
    virtual int ABC_Agent_vftable_14() override;
    ADDRESSVF(0x00541C60, NoGeneratedObjectVolumeAgent_G, ABC_Agent_vftable_15);
    virtual void ABC_Agent_vftable_15() override;
    ADDRESSSYMBOL(0x00541C90, "?ABC_Agent_vftable_16@NoGeneratedObjectVolumeAgent_G@@UAEXH@Z");
    virtual void ABC_Agent_vftable_16(int) override;
    ADDRESSVF(0x00541CC0, NoGeneratedObjectVolumeAgent_G, ABC_Agent_vftable_17);
    virtual void ABC_Agent_vftable_17() override;
};

ADDRESSVFTABLE(0x009AEECC, RtcScripted_G);
class __declspec(dllexport) RtcScripted_G : public RtcPlayer_Z
{
public:
    ADDRESSSYMBOL(0x0053BB10, "?BaseObject_Z_vftable_0@RtcScripted_G@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x004D3D60, RtcScripted_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSVF(0x0053BCA0, RtcScripted_G, BaseObject_Z_vftable_13);
    virtual void BaseObject_Z_vftable_13() override;
    ADDRESSSYMBOL(0x0053BBE0, "?Manipulator_Z_vftable_14@RtcScripted_G@@UAEXXZ");
    virtual void Manipulator_Z_vftable_14() override;
    ADDRESSSYMBOL(0x0053C150, "?Manipulator_Z_vftable_17@RtcScripted_G@@UAEXH@Z");
    virtual void Manipulator_Z_vftable_17(int) override;
    ADDRESSVF(0x0053BCB0, RtcScripted_G, RtcPlayer_Z_vftable_21);
    virtual void RtcPlayer_Z_vftable_21() override;
    virtual void RtcPlayer_Z_vftable_22(int) override;
    char data[1640];
};

ADDRESSVFTABLE(0x009C080C, CCounter_G);
class __declspec(dllexport) CCounter_G : public CStaticText_G
{
public:
    ADDRESSVF(0x0059A2C0, CCounter_G, CWindowHierarchy_G_vftable_0);
    virtual void CWindowHierarchy_G_vftable_0() override;
    ADDRESSVF(0x0059A350, CCounter_G, CWindow_G_vftable_15);
    virtual void CWindow_G_vftable_15() override;
    ADDRESSVF(0x0059A370, CCounter_G, CWindow_G_vftable_16);
    virtual void CWindow_G_vftable_16() override;
    ADDRESSVF(0x0059A3A0, CCounter_G, CWindow_G_vftable_17);
    virtual void CWindow_G_vftable_17() override;
    ADDRESSVF(0x0059A6C0, CCounter_G, CWindow_G_vftable_25);
    virtual void CWindow_G_vftable_25() override;
    virtual void CCounter_G_vftable_32();
    virtual void CCounter_G_vftable_33();
};

ADDRESSVFTABLE(0x009D018C, RtcAgent_Z);
class __declspec(dllexport) RtcAgent_Z : public AnimatedMsgAgent_Z
{
public:
    ADDRESSSYMBOL(0x00746150, "?BaseObject_Z_vftable_0@RtcAgent_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x00746110, RtcAgent_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSVF(0x00746400, RtcAgent_Z, BaseObject_Z_vftable_13);
    virtual void BaseObject_Z_vftable_13() override;
    ADDRESSSYMBOL(0x00534630, "?ABC_Agent_vftable_14@RtcAgent_Z@@UAEHXZ");
    virtual int ABC_Agent_vftable_14() override;
    ADDRESSVF(0x00745DA0, RtcAgent_Z, ABC_Agent_vftable_15);
    virtual void ABC_Agent_vftable_15() override;
    ADDRESSSYMBOL(0x00534640, "?ABC_Agent_vftable_16@RtcAgent_Z@@UAEXH@Z");
    virtual void ABC_Agent_vftable_16(int) override;
    ADDRESSVF(0x00534670, RtcAgent_Z, ABC_Agent_vftable_17);
    virtual void ABC_Agent_vftable_17() override;
    ADDRESSSYMBOL(0x00746260, "?ABC_Agent_vftable_18@RtcAgent_Z@@UAEXXZ");
    virtual void ABC_Agent_vftable_18() override;
    ADDRESSSYMBOL(0x007462B0, "?ABC_Agent_vftable_19@RtcAgent_Z@@UAEXXZ");
    virtual void ABC_Agent_vftable_19() override;
    ADDRESSSYMBOL(0x007461B0, "?Agent_Z_vftable_20@RtcAgent_Z@@UAEXXZ");
    virtual void Agent_Z_vftable_20() override;
    ADDRESSVF(0x00746300, RtcAgent_Z, Agent_Z_vftable_24);
    virtual void Agent_Z_vftable_24() override;
    ADDRESSVF(0x00746310, RtcAgent_Z, Agent_Z_vftable_25);
    virtual void Agent_Z_vftable_25() override;
    ADDRESSVF(0x00745E60, RtcAgent_Z, RtcAgent_Z_vftable_39);
    virtual void RtcAgent_Z_vftable_39();
    ADDRESSVF(0x00746490, RtcAgent_Z, RtcAgent_Z_vftable_40);
    virtual void RtcAgent_Z_vftable_40();
    ADDRESSVF(0x00746610, RtcAgent_Z, RtcAgent_Z_vftable_41);
    virtual void RtcAgent_Z_vftable_41();
    ADDRESSVF(0x00746770, RtcAgent_Z, RtcAgent_Z_vftable_42);
    virtual void RtcAgent_Z_vftable_42();
    virtual void RtcAgent_Z_vftable_43(int, int);
    virtual void RtcAgent_Z_vftable_44(int, int);
    char data[12];
};

ADDRESSVFTABLE(0x009BFDC4, Dialog_LegalText);
class __declspec(dllexport) Dialog_LegalText : public DialogMenu_G
{
public:
    ADDRESSVF(0x0058F8C0, Dialog_LegalText, CWindowHierarchy_G_vftable_0);
    virtual void CWindowHierarchy_G_vftable_0() override;
    ADDRESSSYMBOL(0x0058F980, "?Dialog_G_vftable_16@Dialog_LegalText@@UAEXH@Z");
    virtual void Dialog_G_vftable_16(int) override;
    virtual void Dialog_G_vftable_17() override;
    ADDRESSVF(0x0058F920, Dialog_LegalText, Dialog_G_vftable_19);
    virtual void Dialog_G_vftable_19() override;
    ADDRESSSYMBOL(0x0058F9D0, "?Dialog_G_vftable_20@Dialog_LegalText@@UAEXXZ");
    virtual void Dialog_G_vftable_20() override;
    virtual void Dialog_G_vftable_22() override;
    ADDRESSVF(0x0058F970, Dialog_LegalText, Dialog_G_vftable_23);
    virtual void Dialog_G_vftable_23() override;
    virtual void DialogMenu_G_vftable_29() override;
    virtual int Dialog_LegalText_vftable_31();
};

ADDRESSVFTABLE(0x009C7194, Skel_Z);
class __declspec(dllexport) Skel_Z : public ObjectDatas_Z
{
public:
    ADDRESSVF(0x0066B640, Skel_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x007B4830, "?BaseObject_Z_vftable_3@Skel_Z@@UAEXH@Z");
    virtual void BaseObject_Z_vftable_3(int) override;
    ADDRESSSYMBOL(0x007B4EE0, "?BaseObject_Z_vftable_4@Skel_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_4() override;
    ADDRESSVF(0x0066B7D0, Skel_Z, BaseObject_Z_vftable_13);
    virtual void BaseObject_Z_vftable_13() override;
    ADDRESSSYMBOL(0x0069E020, "?ObjectDatas_Z_vftable_16@Skel_Z@@UAEXHHH@Z");
    virtual void ObjectDatas_Z_vftable_16(int, int, int) override;
    ADDRESSVF(0x0066C0E0, Skel_Z, ObjectDatas_Z_vftable_18);
    virtual void ObjectDatas_Z_vftable_18() override;
    ADDRESSVF(0x007B5070, Skel_Z, ObjectDatas_Z_vftable_19);
    virtual void ObjectDatas_Z_vftable_19() override;
    ADDRESSVF(0x007B5380, Skel_Z, ObjectDatas_Z_vftable_20);
    virtual void ObjectDatas_Z_vftable_20() override;
    ADDRESSSYMBOL(0x007B6600, "?ObjectDatas_Z_vftable_22@Skel_Z@@UAEXH@Z");
    virtual void ObjectDatas_Z_vftable_22(int) override;
    ADDRESSSYMBOL(0x0066D7B0, "?ObjectDatas_Z_vftable_23@Skel_Z@@UAEHHHH@Z");
    virtual int ObjectDatas_Z_vftable_23(int, int, int) override;
    ADDRESSVF(0x0066EFD0, Skel_Z, Skel_Z_vftable_26);
    virtual void Skel_Z_vftable_26();
    virtual char Skel_Z_vftable_27(int, int, int);
    ADDRESSVF(0x007B2080, Skel_Z, Skel_Z_vftable_28);
    virtual void Skel_Z_vftable_28();
    ADDRESSVF(0x007B24C0, Skel_Z, Skel_Z_vftable_29);
    virtual void Skel_Z_vftable_29();
    ADDRESSVF(0x007B27F0, Skel_Z, Skel_Z_vftable_30);
    virtual void Skel_Z_vftable_30();
    ADDRESSVF(0x007B26B0, Skel_Z, Skel_Z_vftable_31);
    virtual void Skel_Z_vftable_31();
    char data[384];
};

ADDRESSVFTABLE(0x009A5404, DebugCarHUD);
class __declspec(dllexport) DebugCarHUD : public DebugInfo
{
public:
    ADDRESSSYMBOL(0x00450C80, "?ViewportHUD_vftable_0@DebugCarHUD@@UAEXH@Z");
    virtual void ViewportHUD_vftable_0(int) override;
    ADDRESSSYMBOL(0x00451120, "?ViewportHUD_vftable_1@DebugCarHUD@@UAEXXZ");
    virtual void ViewportHUD_vftable_1() override;
    ADDRESSSYMBOL(0x004511B0, "?ViewportHUD_vftable_2@DebugCarHUD@@UAEXH@Z");
    virtual void ViewportHUD_vftable_2(int) override;
    ADDRESSSYMBOL(0x00451750, "?ViewportHUD_vftable_5@DebugCarHUD@@UAEXH@Z");
    virtual void ViewportHUD_vftable_5(int) override;
};

ADDRESSVFTABLE(0x009AEF2C, IT_DebrisMove);
class __declspec(dllexport) IT_DebrisMove : public PhysicObj_G
{
public:
    ADDRESSSYMBOL(0x00533BD0, "?BaseObject_Z_vftable_0@IT_DebrisMove@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x004D4140, IT_DebrisMove, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x00533C40, "?Manipulator_Z_vftable_14@IT_DebrisMove@@UAEXXZ");
    virtual void Manipulator_Z_vftable_14() override;
    ADDRESSVF(0x00534330, IT_DebrisMove, PhysicObj_Z_vftable_118);
    virtual void PhysicObj_Z_vftable_118() override;
    ADDRESSSYMBOL(0x00533B50, "?PhysicObj_Z_vftable_129@IT_DebrisMove@@UAEXXZ");
    virtual void PhysicObj_Z_vftable_129() override;
    ADDRESSSYMBOL(0x004D4060, "?PhysicObj_Z_vftable_136@IT_DebrisMove@@UAEXXZ");
    virtual void PhysicObj_Z_vftable_136() override;
    ADDRESSSYMBOL(0x005341A0, "?PhysicObj_Z_vftable_138@IT_DebrisMove@@UAEXHH@Z");
    virtual void PhysicObj_Z_vftable_138(int, int) override;
    ADDRESSSYMBOL(0x005341F0, "?PhysicObj_Z_vftable_139@IT_DebrisMove@@UAEXHH@Z");
    virtual void PhysicObj_Z_vftable_139(int, int) override;
    ADDRESSSYMBOL(0x00533EC0, "?PhysicObj_Z_vftable_140@IT_DebrisMove@@UAEXH@Z");
    virtual void PhysicObj_Z_vftable_140(int) override;
    ADDRESSSYMBOL(0x005341B0, "?PhysicObj_Z_vftable_141@IT_DebrisMove@@UAEDHH@Z");
    virtual char PhysicObj_Z_vftable_141(int, int) override;
    char data[96];
};

ADDRESSVFTABLE(0x009B7A0C, ImpactVolumeAgent_G);
class __declspec(dllexport) ImpactVolumeAgent_G : public VolumeAgent_Z
{
public:
    ADDRESSVF(0x00542390, ImpactVolumeAgent_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x005422C0, "?ABC_Agent_vftable_14@ImpactVolumeAgent_G@@UAEHXZ");
    virtual int ABC_Agent_vftable_14() override;
    ADDRESSVF(0x005422D0, ImpactVolumeAgent_G, ABC_Agent_vftable_15);
    virtual void ABC_Agent_vftable_15() override;
    ADDRESSSYMBOL(0x00542300, "?ABC_Agent_vftable_16@ImpactVolumeAgent_G@@UAEXH@Z");
    virtual void ABC_Agent_vftable_16(int) override;
    ADDRESSVF(0x00542330, ImpactVolumeAgent_G, ABC_Agent_vftable_17);
    virtual void ABC_Agent_vftable_17() override;
    ADDRESSVF(0x005719F0, ImpactVolumeAgent_G, Agent_Z_vftable_24);
    virtual void Agent_Z_vftable_24() override;
    virtual void VolumeAgent_Z_vftable_40() override;
    char data[8];
};

ADDRESSVFTABLE(0x009B821C, LightVolumeAgent_G);
class __declspec(dllexport) LightVolumeAgent_G : public VolumeAgent_Z
{
public:
    ADDRESSSYMBOL(0x00571E50, "?BaseObject_Z_vftable_0@LightVolumeAgent_G@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x005456A0, LightVolumeAgent_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x00545700, "?ABC_Agent_vftable_14@LightVolumeAgent_G@@UAEHXZ");
    virtual int ABC_Agent_vftable_14() override;
    ADDRESSVF(0x00545710, LightVolumeAgent_G, ABC_Agent_vftable_15);
    virtual void ABC_Agent_vftable_15() override;
    ADDRESSSYMBOL(0x00545720, "?ABC_Agent_vftable_16@LightVolumeAgent_G@@UAEXH@Z");
    virtual void ABC_Agent_vftable_16(int) override;
    ADDRESSVF(0x00545750, LightVolumeAgent_G, ABC_Agent_vftable_17);
    virtual void ABC_Agent_vftable_17() override;
    ADDRESSSYMBOL(0x00571E60, "?Agent_Z_vftable_20@LightVolumeAgent_G@@UAEXXZ");
    virtual void Agent_Z_vftable_20() override;
    virtual void Agent_Z_vftable_22() override;
    ADDRESSVF(0x00571EA0, LightVolumeAgent_G, Agent_Z_vftable_24);
    virtual void Agent_Z_vftable_24() override;
    ADDRESSSYMBOL(0x00571EC0, "?VolumeAgent_Z_vftable_42@LightVolumeAgent_G@@UAEXH@Z");
    virtual void VolumeAgent_Z_vftable_42(int) override;
    ADDRESSSYMBOL(0x00571EB0, "?VolumeAgent_Z_vftable_43@LightVolumeAgent_G@@UAEXH@Z");
    virtual void VolumeAgent_Z_vftable_43(int) override;
    ADDRESSSYMBOL(0x00571F30, "?VolumeAgent_Z_vftable_44@LightVolumeAgent_G@@UAEXH@Z");
    virtual void VolumeAgent_Z_vftable_44(int) override;
    char data[4];
};

ADDRESSVFTABLE(0x009D54E4, LivesockVDP_Z);
class __declspec(dllexport) LivesockVDP_Z : public ComWinLivesockUDP_Z
{
public:
    ADDRESSVF(0x0081CB10, LivesockVDP_Z, ComNet_Z_vftable_5);
    virtual void ComNet_Z_vftable_5() override;
    ADDRESSVF(0x00835620, LivesockVDP_Z, ComUDP_Z_vftable_34);
    virtual void ComUDP_Z_vftable_34() override;
    ADDRESSVF(0x00835660, LivesockVDP_Z, ComUDP_Z_vftable_41);
    virtual void ComUDP_Z_vftable_41() override;
    ADDRESSVF(0x00835640, LivesockVDP_Z, ComUDP_Z_vftable_42);
    virtual void ComUDP_Z_vftable_42() override;
    ADDRESSVF(0x00835690, LivesockVDP_Z, ComUDP_Z_vftable_43);
    virtual void ComUDP_Z_vftable_43() override;
    ADDRESSVF(0x00835770, LivesockVDP_Z, ComUDP_Z_vftable_44);
    virtual void ComUDP_Z_vftable_44() override;
};

ADDRESSVFTABLE(0x009AFF2C, IT_HelicoMove);
class __declspec(dllexport) IT_HelicoMove : public LodMove_Z
{
public:
    ADDRESSSYMBOL(0x005153A0, "?BaseObject_Z_vftable_0@IT_HelicoMove@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x004D5770, IT_HelicoMove, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x00515430, "?Manipulator_Z_vftable_14@IT_HelicoMove@@UAEXXZ");
    virtual void Manipulator_Z_vftable_14() override;
    ADDRESSSYMBOL(0x00515490, "?Manipulator_Z_vftable_17@IT_HelicoMove@@UAEXH@Z");
    virtual void Manipulator_Z_vftable_17(int) override;
    virtual void ObjectMove_Z_vftable_18(int, int, int, int, int, int) override;
};

ADDRESSVFTABLE(0x009CC914, ComPipeStatisticsMessage_Z);
class __declspec(dllexport) ComPipeStatisticsMessage_Z : public ComPipeMessage_Z
{
public:
    ADDRESSVF(0x0072D330, ComPipeStatisticsMessage_Z, ComPipeMessage_Z_vftable_7);
    virtual void ComPipeMessage_Z_vftable_7() override;
    ADDRESSVF(0x0072D360, ComPipeStatisticsMessage_Z, ComPipeMessage_Z_vftable_8);
    virtual void ComPipeMessage_Z_vftable_8() override;
};

ADDRESSVFTABLE(0x009B770C, NodeVolumeAgent_G);
class __declspec(dllexport) NodeVolumeAgent_G : public VolumeAgent_Z
{
public:
    ADDRESSVF(0x00541970, NodeVolumeAgent_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x005418E0, "?ABC_Agent_vftable_14@NodeVolumeAgent_G@@UAEHXZ");
    virtual int ABC_Agent_vftable_14() override;
    ADDRESSVF(0x005418F0, NodeVolumeAgent_G, ABC_Agent_vftable_15);
    virtual void ABC_Agent_vftable_15() override;
    ADDRESSSYMBOL(0x00541920, "?ABC_Agent_vftable_16@NodeVolumeAgent_G@@UAEXH@Z");
    virtual void ABC_Agent_vftable_16(int) override;
    ADDRESSVF(0x00541950, NodeVolumeAgent_G, ABC_Agent_vftable_17);
    virtual void ABC_Agent_vftable_17() override;
};

ADDRESSVFTABLE(0x009D2DEC, HFog_Z);
class __declspec(dllexport) HFog_Z : public Object_Z
{
public:
    ADDRESSVF(0x007C17D0, HFog_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x007C1C90, "?BaseObject_Z_vftable_3@HFog_Z@@UAEXH@Z");
    virtual void BaseObject_Z_vftable_3(int) override;
    ADDRESSSYMBOL(0x007C1850, "?BaseObject_Z_vftable_12@HFog_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_12() override;
    virtual void Object_Z_vftable_16(int, int) override;
    ADDRESSVF(0x007C19A0, HFog_Z, Object_Z_vftable_26);
    virtual void Object_Z_vftable_26() override;
    char data[128];
};

ADDRESSVFTABLE(0x009C0A94, CHGauge_G);
class __declspec(dllexport) CHGauge_G : public CGauge_G
{
public:
    ADDRESSVF(0x0059B880, CHGauge_G, CWindowHierarchy_G_vftable_0);
    virtual void CWindowHierarchy_G_vftable_0() override;
    ADDRESSVF(0x0059B8B0, CHGauge_G, CGauge_G_vftable_31);
    virtual void CGauge_G_vftable_31() override;
};

ADDRESSVFTABLE(0x009C987C, LightData_Z);
class __declspec(dllexport) LightData_Z : public ObjectDatas_Z
{
public:
    ADDRESSVF(0x006911B0, LightData_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x007CABC0, "?BaseObject_Z_vftable_3@LightData_Z@@UAEXH@Z");
    virtual void BaseObject_Z_vftable_3(int) override;
    ADDRESSVF(0x006911E0, LightData_Z, ObjectDatas_Z_vftable_18);
    virtual void ObjectDatas_Z_vftable_18() override;
    char data[68];
};

ADDRESSVFTABLE(0x009D2914, PointsDatas_Z);
class __declspec(dllexport) PointsDatas_Z : public ObjectDatas_Z
{
public:
    ADDRESSVF(0x007B4710, PointsDatas_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    virtual void ObjectDatas_Z_vftable_25(int) override;
};

ADDRESSVFTABLE(0x009C4D78, MenuItemRegionImage_G);
class __declspec(dllexport) MenuItemRegionImage_G : public MenuItemImage_G
{
public:
    ADDRESSVF(0x006141D0, MenuItemRegionImage_G, MenuItem_G_vftable_0);
    virtual void MenuItem_G_vftable_0() override;
    ADDRESSSYMBOL(0x006142E0, "?MenuItem_G_vftable_3@MenuItemRegionImage_G@@UAEXH@Z");
    virtual void MenuItem_G_vftable_3(int) override;
    virtual int MenuItem_G_vftable_6() override;
    ADDRESSVF(0x00614110, MenuItemRegionImage_G, MenuItem_G_vftable_7);
    virtual void MenuItem_G_vftable_7() override;
    ADDRESSVF(0x00614130, MenuItemRegionImage_G, MenuItem_G_vftable_8);
    virtual void MenuItem_G_vftable_8() override;
    ADDRESSVF(0x006140E0, MenuItemRegionImage_G, MenuItem_G_vftable_9);
    virtual void MenuItem_G_vftable_9() override;
};

ADDRESSVFTABLE(0x009B734C, SASVolumeAgent_G);
class __declspec(dllexport) SASVolumeAgent_G : public VolumeAgent_Z
{
public:
    ADDRESSSYMBOL(0x00572B80, "?BaseObject_Z_vftable_0@SASVolumeAgent_G@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x00541330, SASVolumeAgent_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x005412A0, "?ABC_Agent_vftable_14@SASVolumeAgent_G@@UAEHXZ");
    virtual int ABC_Agent_vftable_14() override;
    ADDRESSVF(0x005412B0, SASVolumeAgent_G, ABC_Agent_vftable_15);
    virtual void ABC_Agent_vftable_15() override;
    ADDRESSSYMBOL(0x005412E0, "?ABC_Agent_vftable_16@SASVolumeAgent_G@@UAEXH@Z");
    virtual void ABC_Agent_vftable_16(int) override;
    ADDRESSVF(0x00541310, SASVolumeAgent_G, ABC_Agent_vftable_17);
    virtual void ABC_Agent_vftable_17() override;
    ADDRESSSYMBOL(0x00572BB0, "?Agent_Z_vftable_20@SASVolumeAgent_G@@UAEXXZ");
    virtual void Agent_Z_vftable_20() override;
    ADDRESSSYMBOL(0x00572C20, "?VolumeAgent_Z_vftable_42@SASVolumeAgent_G@@UAEXH@Z");
    virtual void VolumeAgent_Z_vftable_42(int) override;
    ADDRESSSYMBOL(0x00572C00, "?VolumeAgent_Z_vftable_43@SASVolumeAgent_G@@UAEXH@Z");
    virtual void VolumeAgent_Z_vftable_43(int) override;
    ADDRESSSYMBOL(0x00572C40, "?VolumeAgent_Z_vftable_44@SASVolumeAgent_G@@UAEXH@Z");
    virtual void VolumeAgent_Z_vftable_44(int) override;
    ADDRESSSYMBOL(0x00572C60, "?VolumeAgent_Z_vftable_45@SASVolumeAgent_G@@UAEXH@Z");
    virtual void VolumeAgent_Z_vftable_45(int) override;
    ADDRESSVF(0x00572930, SASVolumeAgent_G, SASVolumeAgent_G_vftable_46);
    virtual void SASVolumeAgent_G_vftable_46();
    char data[8];
};

ADDRESSVFTABLE(0x009C0B64, CListBox_G);
class __declspec(dllexport) CListBox_G : public CPreviewList_G
{
public:
    ADDRESSVF(0x0059B980, CListBox_G, CWindowHierarchy_G_vftable_0);
    virtual void CWindowHierarchy_G_vftable_0() override;
    ADDRESSVF(0x0059BA40, CListBox_G, CWindow_G_vftable_15);
    virtual void CWindow_G_vftable_15() override;
    ADDRESSVF(0x0059BC70, CListBox_G, CWindow_G_vftable_16);
    virtual void CWindow_G_vftable_16() override;
    ADDRESSSYMBOL(0x0059BE50, "?CWindow_G_vftable_22@CListBox_G@@UAEDXZ");
    virtual char CWindow_G_vftable_22() override;
    ADDRESSVF(0x0059BD50, CListBox_G, CWindow_G_vftable_25);
    virtual void CWindow_G_vftable_25() override;
    ADDRESSSYMBOL(0x0059C3F0, "?CPreviewList_G_vftable_31@CListBox_G@@UAEHXZ");
    virtual int CPreviewList_G_vftable_31() override;
    ADDRESSVF(0x0059C2E0, CListBox_G, CPreviewList_G_vftable_32);
    virtual void CPreviewList_G_vftable_32() override;
    ADDRESSVF(0x0059C7E0, CListBox_G, CPreviewList_G_vftable_34);
    virtual void CPreviewList_G_vftable_34() override;
    ADDRESSVF(0x0059C5F0, CListBox_G, CPreviewList_G_vftable_36);
    virtual void CPreviewList_G_vftable_36() override;
    virtual void CPreviewList_G_vftable_37() override;
    ADDRESSVF(0x0059C5D0, CListBox_G, CPreviewList_G_vftable_38);
    virtual void CPreviewList_G_vftable_38() override;
    ADDRESSVF(0x0059BF90, CListBox_G, CPreviewList_G_vftable_39);
    virtual void CPreviewList_G_vftable_39() override;
    ADDRESSVF(0x0059C6D0, CListBox_G, CListBox_G_vftable_40);
    virtual void CListBox_G_vftable_40();
    ADDRESSSYMBOL(0x0059BE80, "?CListBox_G_vftable_41@CListBox_G@@UAEDXZ");
    virtual char CListBox_G_vftable_41();
    ADDRESSSYMBOL(0x0059BEA0, "?CListBox_G_vftable_42@CListBox_G@@UAEDXZ");
    virtual char CListBox_G_vftable_42();
};

ADDRESSVFTABLE(0x009D4DBC, SkinPc_Z);
class __declspec(dllexport) SkinPc_Z : public Skin_Z
{
public:
    ADDRESSVF(0x0081BC70, SkinPc_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x00842770, "?BaseObject_Z_vftable_3@SkinPc_Z@@UAEXH@Z");
    virtual void BaseObject_Z_vftable_3(int) override;
    ADDRESSSYMBOL(0x00842910, "?BaseObject_Z_vftable_5@SkinPc_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_5() override;
    ADDRESSSYMBOL(0x00844ED0, "?Object_Z_vftable_16@SkinPc_Z@@UAEXHH@Z");
    virtual void Object_Z_vftable_16(int, int) override;
    ADDRESSSYMBOL(0x00845720, "?Object_Z_vftable_19@SkinPc_Z@@UAEXHH@Z");
    virtual void Object_Z_vftable_19(int, int) override;
    ADDRESSSYMBOL(0x00842250, "?Skin_Z_vftable_43@SkinPc_Z@@UAEXH@Z");
    virtual void Skin_Z_vftable_43(int) override;
};

ADDRESSVFTABLE(0x009DB444, HField_Z);
class __declspec(dllexport) HField_Z : public Object_Z
{
public:
    ADDRESSVF(0x0087B940, HField_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    virtual void BaseObject_Z_vftable_3(int) override;
    ADDRESSSYMBOL(0x0087B680, "?BaseObject_Z_vftable_4@HField_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_4() override;
    virtual void BaseObject_Z_vftable_5() override;
    ADDRESSVF(0x0087B960, HField_Z, BaseObject_Z_vftable_13);
    virtual void BaseObject_Z_vftable_13() override;
    virtual void Object_Z_vftable_16(int, int) override;
    ADDRESSSYMBOL(0x0087C060, "?Object_Z_vftable_29@HField_Z@@UAEDHHHHHHHH@Z");
    virtual char Object_Z_vftable_29(int, int, int, int, int, int, int, int) override;
    ADDRESSSYMBOL(0x0087CCB0, "?Object_Z_vftable_30@HField_Z@@UAEDHHHHHHHH@Z");
    virtual char Object_Z_vftable_30(int, int, int, int, int, int, int, int) override;
    ADDRESSVF(0x0087CE70, HField_Z, HField_Z_vftable_43);
    virtual void HField_Z_vftable_43();
    char data[484];
};

ADDRESSVFTABLE(0x009C4BEC, MenuItemLabel_G);
class __declspec(dllexport) MenuItemLabel_G : public MenuItemLabelTT_G
{
public:
    ADDRESSVF(0x006122D0, MenuItemLabel_G, MenuItem_G_vftable_0);
    virtual void MenuItem_G_vftable_0() override;
    virtual int MenuItem_G_vftable_6() override;
    ADDRESSVF(0x00612240, MenuItemLabel_G, MenuItem_G_vftable_7);
    virtual void MenuItem_G_vftable_7() override;
    ADDRESSVF(0x00612260, MenuItemLabel_G, MenuItem_G_vftable_8);
    virtual void MenuItem_G_vftable_8() override;
    ADDRESSVF(0x006121F0, MenuItemLabel_G, MenuItem_G_vftable_9);
    virtual void MenuItem_G_vftable_9() override;
    ADDRESSVF(0x00612310, MenuItemLabel_G, MenuItemVirtualLabel_G_vftable_10);
    virtual void MenuItemVirtualLabel_G_vftable_10() override;
    ADDRESSVF(0x00612320, MenuItemLabel_G, MenuItemLabelTT_G_vftable_14);
    virtual void MenuItemLabelTT_G_vftable_14() override;
};

ADDRESSVFTABLE(0x009C8C5C, PlayAnim_Z);
class __declspec(dllexport) PlayAnim_Z : public BasePlayAnim_Z
{
public:
    ADDRESSVF(0x00687F00, PlayAnim_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x007BBE50, "?Manipulator_Z_vftable_14@PlayAnim_Z@@UAEXXZ");
    virtual void Manipulator_Z_vftable_14() override;
    ADDRESSSYMBOL(0x007BC0A0, "?Manipulator_Z_vftable_17@PlayAnim_Z@@UAEXH@Z");
    virtual void Manipulator_Z_vftable_17(int) override;
    ADDRESSVF(0x007BBF30, PlayAnim_Z, BasePlayAnim_Z_vftable_20);
    virtual void BasePlayAnim_Z_vftable_20() override;
    ADDRESSSYMBOL(0x007BCD40, "?BasePlayAnim_Z_vftable_22@PlayAnim_Z@@UAEXHH@Z");
    virtual void BasePlayAnim_Z_vftable_22(int, int) override;
    ADDRESSSYMBOL(0x007BCCD0, "?BasePlayAnim_Z_vftable_23@PlayAnim_Z@@UAEXHHHH@Z");
    virtual void BasePlayAnim_Z_vftable_23(int, int, int, int) override;
    ADDRESSSYMBOL(0x007BCF80, "?BasePlayAnim_Z_vftable_24@PlayAnim_Z@@UAEXH@Z");
    virtual void BasePlayAnim_Z_vftable_24(int) override;
    ADDRESSSYMBOL(0x007BC070, "?BasePlayAnim_Z_vftable_25@PlayAnim_Z@@UAEDH@Z");
    virtual char BasePlayAnim_Z_vftable_25(int) override;
    ADDRESSVF(0x00687D90, PlayAnim_Z, BasePlayAnim_Z_vftable_26);
    virtual void BasePlayAnim_Z_vftable_26() override;
    ADDRESSVF(0x007BC040, PlayAnim_Z, BasePlayAnim_Z_vftable_27);
    virtual void BasePlayAnim_Z_vftable_27() override;
    ADDRESSSYMBOL(0x00687DA0, "?BasePlayAnim_Z_vftable_28@PlayAnim_Z@@UAEXHH@Z");
    virtual void BasePlayAnim_Z_vftable_28(int, int) override;
    ADDRESSVF(0x00687DC0, PlayAnim_Z, BasePlayAnim_Z_vftable_29);
    virtual void BasePlayAnim_Z_vftable_29() override;
    ADDRESSSYMBOL(0x00687DE0, "?BasePlayAnim_Z_vftable_30@PlayAnim_Z@@UAEXH@Z");
    virtual void BasePlayAnim_Z_vftable_30(int) override;
    ADDRESSSYMBOL(0x00687E00, "?BasePlayAnim_Z_vftable_31@PlayAnim_Z@@UAEXHH@Z");
    virtual void BasePlayAnim_Z_vftable_31(int, int) override;
    char data[508];
};

ADDRESSVFTABLE(0x009AD93C, ThrownMove_G);
class __declspec(dllexport) ThrownMove_G : public PhysicObj_G
{
public:
    ADDRESSSYMBOL(0x005326D0, "?BaseObject_Z_vftable_0@ThrownMove_G@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x004D4310, ThrownMove_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x00532730, "?Manipulator_Z_vftable_14@ThrownMove_G@@UAEXXZ");
    virtual void Manipulator_Z_vftable_14() override;
    ADDRESSVF(0x00532FF0, ThrownMove_G, PhysicObj_Z_vftable_118);
    virtual void PhysicObj_Z_vftable_118() override;
    ADDRESSSYMBOL(0x005325C0, "?PhysicObj_Z_vftable_129@ThrownMove_G@@UAEXXZ");
    virtual void PhysicObj_Z_vftable_129() override;
    ADDRESSSYMBOL(0x004D4240, "?PhysicObj_Z_vftable_136@ThrownMove_G@@UAEXXZ");
    virtual void PhysicObj_Z_vftable_136() override;
    ADDRESSSYMBOL(0x00532BF0, "?PhysicObj_Z_vftable_139@ThrownMove_G@@UAEXHH@Z");
    virtual void PhysicObj_Z_vftable_139(int, int) override;
    ADDRESSSYMBOL(0x00532A40, "?PhysicObj_Z_vftable_140@ThrownMove_G@@UAEXH@Z");
    virtual void PhysicObj_Z_vftable_140(int) override;
    char data[76];
};

ADDRESSVFTABLE(0x009A1DEC, CS_Class_DYNEVEWAIT);
class __declspec(dllexport) CS_Class_DYNEVEWAIT : public CreaturesDynState_G
{
public:
    ADDRESSVF(0x00426380, CS_Class_DYNEVEWAIT, StateTemplate_G_vftable_0);
    virtual void StateTemplate_G_vftable_0() override;
    ADDRESSSYMBOL(0x004284C0, "?StateTemplate_G_vftable_1@CS_Class_DYNEVEWAIT@@UAEXH@Z");
    virtual void StateTemplate_G_vftable_1(int) override;
    ADDRESSSYMBOL(0x00428520, "?StateTemplate_G_vftable_3@CS_Class_DYNEVEWAIT@@UAEDH@Z");
    virtual char StateTemplate_G_vftable_3(int) override;
};

ADDRESSVFTABLE(0x009C4A8C, MenuItemButtonTT_G);
class __declspec(dllexport) MenuItemButtonTT_G : public MenuItemLabelTT_G
{
public:
    ADDRESSVF(0x00610C50, MenuItemButtonTT_G, MenuItem_G_vftable_0);
    virtual void MenuItem_G_vftable_0() override;
    ADDRESSSYMBOL(0x00610D80, "?MenuItem_G_vftable_3@MenuItemButtonTT_G@@UAEXH@Z");
    virtual void MenuItem_G_vftable_3(int) override;
    virtual int MenuItem_G_vftable_6() override;
    ADDRESSVF(0x00610AE0, MenuItemButtonTT_G, MenuItem_G_vftable_7);
    virtual void MenuItem_G_vftable_7() override;
    ADDRESSVF(0x00610B00, MenuItemButtonTT_G, MenuItem_G_vftable_8);
    virtual void MenuItem_G_vftable_8() override;
    ADDRESSVF(0x00610AB0, MenuItemButtonTT_G, MenuItem_G_vftable_9);
    virtual void MenuItem_G_vftable_9() override;
};

ADDRESSVFTABLE(0x009C102C, CRadioButton_G);
class __declspec(dllexport) CRadioButton_G : public CButtonBase_G
{
public:
    ADDRESSVF(0x0059E7A0, CRadioButton_G, CWindowHierarchy_G_vftable_0);
    virtual void CWindowHierarchy_G_vftable_0() override;
    ADDRESSVF(0x0059EB10, CRadioButton_G, CWindow_G_vftable_25);
    virtual void CWindow_G_vftable_25() override;
    ADDRESSVF(0x0059EA90, CRadioButton_G, CWindow_G_vftable_26);
    virtual void CWindow_G_vftable_26() override;
    ADDRESSVF(0x0059EA50, CRadioButton_G, CWindow_G_vftable_27);
    virtual void CWindow_G_vftable_27() override;
    ADDRESSSYMBOL(0x0059EBA0, "?CButtonBase_G_vftable_31@CRadioButton_G@@UAEXXZ");
    virtual void CButtonBase_G_vftable_31() override;
    ADDRESSVF(0x0059E890, CRadioButton_G, CButtonBase_G_vftable_32);
    virtual void CButtonBase_G_vftable_32() override;
    ADDRESSVF(0x0059E8C0, CRadioButton_G, CButtonBase_G_vftable_33);
    virtual void CButtonBase_G_vftable_33() override;
    ADDRESSVF(0x0059E900, CRadioButton_G, CRadioButton_G_vftable_35);
    virtual void CRadioButton_G_vftable_35();
    ADDRESSVF(0x0059E9F0, CRadioButton_G, CRadioButton_G_vftable_36);
    virtual void CRadioButton_G_vftable_36();
};

ADDRESSVFTABLE(0x009D0C44, Occluder_Z);
class __declspec(dllexport) Occluder_Z : public SplineZone_Z
{
public:
    ADDRESSVF(0x0076B840, Occluder_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x0076B9F0, "?BaseObject_Z_vftable_3@Occluder_Z@@UAEXH@Z");
    virtual void BaseObject_Z_vftable_3(int) override;
    virtual void Object_Z_vftable_16(int, int) override;
    char data[68];
};

ADDRESSVFTABLE(0x009C2954, Server_G);
class __declspec(dllexport) Server_G : public ComServer_Z
{
public:
    ADDRESSVF(0x005AB060, Server_G, NetObject_Z_vftable_0);
    virtual void NetObject_Z_vftable_0() override;
    virtual void *ComObject_Z_vftable_5() override;
    ADDRESSVF(0x005AAD30, Server_G, ComObject_Z_vftable_6);
    virtual void ComObject_Z_vftable_6() override;
    ADDRESSVF(0x005AAD70, Server_G, ComObject_Z_vftable_7);
    virtual void ComObject_Z_vftable_7() override;
};

ADDRESSVFTABLE(0x009B4B44, IT_DECORDYNMESH_G);
class __declspec(dllexport) IT_DECORDYNMESH_G : public GameAgent_G
{
public:
    ADDRESSSYMBOL(0x00515C40, "?BaseObject_Z_vftable_0@IT_DECORDYNMESH_G@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x00515B10, IT_DECORDYNMESH_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x00515A70, "?ABC_Agent_vftable_14@IT_DECORDYNMESH_G@@UAEHXZ");
    virtual int ABC_Agent_vftable_14() override;
    ADDRESSVF(0x00515A80, IT_DECORDYNMESH_G, ABC_Agent_vftable_15);
    virtual void ABC_Agent_vftable_15() override;
    ADDRESSSYMBOL(0x00515A90, "?ABC_Agent_vftable_16@IT_DECORDYNMESH_G@@UAEXH@Z");
    virtual void ABC_Agent_vftable_16(int) override;
    ADDRESSVF(0x00515AC0, IT_DECORDYNMESH_G, ABC_Agent_vftable_17);
    virtual void ABC_Agent_vftable_17() override;
    ADDRESSSYMBOL(0x00515C80, "?Agent_Z_vftable_20@IT_DECORDYNMESH_G@@UAEXXZ");
    virtual void Agent_Z_vftable_20() override;
    ADDRESSVF(0x00516490, IT_DECORDYNMESH_G, Agent_Z_vftable_24);
    virtual void Agent_Z_vftable_24() override;
    ADDRESSVF(0x00516500, IT_DECORDYNMESH_G, Agent_Z_vftable_25);
    virtual void Agent_Z_vftable_25() override;
    virtual void GameAgent_G_vftable_39() override;
    char data[12];
};

ADDRESSVFTABLE(0x009A1E4C, CS_Class_DYNRUN);
class __declspec(dllexport) CS_Class_DYNRUN : public CreaturesDynState_G
{
public:
    ADDRESSVF(0x00426360, CS_Class_DYNRUN, StateTemplate_G_vftable_0);
    virtual void StateTemplate_G_vftable_0() override;
    ADDRESSSYMBOL(0x00427FE0, "?StateTemplate_G_vftable_1@CS_Class_DYNRUN@@UAEXH@Z");
    virtual void StateTemplate_G_vftable_1(int) override;
    virtual void StateTemplate_G_vftable_2(int) override;
    ADDRESSSYMBOL(0x00428040, "?StateTemplate_G_vftable_3@CS_Class_DYNRUN@@UAEDH@Z");
    virtual char StateTemplate_G_vftable_3(int) override;
};

ADDRESSVFTABLE(0x009D6A04, Flare_Z);
class __declspec(dllexport) Flare_Z : public Object_Z
{
public:
    ADDRESSVF(0x008348B0, Flare_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x00882F60, "?BaseObject_Z_vftable_3@Flare_Z@@UAEXH@Z");
    virtual void BaseObject_Z_vftable_3(int) override;
    ADDRESSSYMBOL(0x00882FD0, "?BaseObject_Z_vftable_4@Flare_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_4() override;
    ADDRESSSYMBOL(0x00883080, "?BaseObject_Z_vftable_5@Flare_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_5() override;
    ADDRESSSYMBOL(0x00882F50, "?BaseObject_Z_vftable_12@Flare_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_12() override;
    ADDRESSVF(0x00882EE0, Flare_Z, BaseObject_Z_vftable_13);
    virtual void BaseObject_Z_vftable_13() override;
    virtual void Object_Z_vftable_16(int, int) override;
    ADDRESSVF(0x008831B0, Flare_Z, Flare_Z_vftable_43);
    virtual void Flare_Z_vftable_43();
    char data[160];
};

ADDRESSVFTABLE(0x009D3404, Emiter_Z);
class __declspec(dllexport) Emiter_Z : public Object_Z
{
public:
    ADDRESSVF(0x007C5160, Emiter_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x007C51A0, "?BaseObject_Z_vftable_3@Emiter_Z@@UAEXH@Z");
    virtual void BaseObject_Z_vftable_3(int) override;
    virtual void Object_Z_vftable_16(int, int) override;
    ADDRESSVF(0x00814B90, Emiter_Z, Emiter_Z_vftable_43);
    virtual void Emiter_Z_vftable_43();
    char data[16];
};

ADDRESSVFTABLE(0x009C9714, Omni_Z);
class __declspec(dllexport) Omni_Z : public Object_Z
{
public:
    ADDRESSVF(0x00690360, Omni_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x00690B50, "?BaseObject_Z_vftable_3@Omni_Z@@UAEXH@Z");
    virtual void BaseObject_Z_vftable_3(int) override;
    ADDRESSSYMBOL(0x00690BD0, "?BaseObject_Z_vftable_4@Omni_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_4() override;
    ADDRESSSYMBOL(0x00690C50, "?BaseObject_Z_vftable_5@Omni_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_5() override;
    ADDRESSVF(0x00690C80, Omni_Z, BaseObject_Z_vftable_10);
    virtual void BaseObject_Z_vftable_10() override;
    ADDRESSVF(0x00690CE0, Omni_Z, BaseObject_Z_vftable_11);
    virtual void BaseObject_Z_vftable_11() override;
    ADDRESSVF(0x006903A0, Omni_Z, BaseObject_Z_vftable_13);
    virtual void BaseObject_Z_vftable_13() override;
    virtual void Object_Z_vftable_16(int, int) override;
    ADDRESSVF(0x00690700, Omni_Z, Object_Z_vftable_26);
    virtual void Object_Z_vftable_26() override;
    ADDRESSVF(0x00690950, Omni_Z, Object_Z_vftable_27);
    virtual void Object_Z_vftable_27() override;
    ADDRESSVF(0x00798050, Omni_Z, Omni_Z_vftable_43);
    virtual void Omni_Z_vftable_43();
    char data[208];
};

ADDRESSVFTABLE(0x009AF16C, IT_SmallDebrisMove);
class __declspec(dllexport) IT_SmallDebrisMove : public IT_DebrisMove
{
public:
    ADDRESSVF(0x004D41F0, IT_SmallDebrisMove, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x005345F0, "?PhysicObj_Z_vftable_129@IT_SmallDebrisMove@@UAEXXZ");
    virtual void PhysicObj_Z_vftable_129() override;
};

ADDRESSVFTABLE(0x009D6ABC, FlarePc_Z);
class __declspec(dllexport) FlarePc_Z : public Flare_Z
{
public:
    ADDRESSVF(0x00834970, FlarePc_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x00834A20, "?BaseObject_Z_vftable_4@FlarePc_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_4() override;
    ADDRESSSYMBOL(0x0084E7E0, "?Object_Z_vftable_16@FlarePc_Z@@UAEXHH@Z");
    virtual void Object_Z_vftable_16(int, int) override;
};

ADDRESSVFTABLE(0x009B6BEC, CheckpointVolAgent_G);
class __declspec(dllexport) CheckpointVolAgent_G : public VolumeDelayedStart_G
{
public:
    ADDRESSVF(0x00541F90, CheckpointVolAgent_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x00541EE0, "?ABC_Agent_vftable_14@CheckpointVolAgent_G@@UAEHXZ");
    virtual int ABC_Agent_vftable_14() override;
    ADDRESSVF(0x00541EF0, CheckpointVolAgent_G, ABC_Agent_vftable_15);
    virtual void ABC_Agent_vftable_15() override;
    ADDRESSSYMBOL(0x00541F20, "?ABC_Agent_vftable_16@CheckpointVolAgent_G@@UAEXH@Z");
    virtual void ABC_Agent_vftable_16(int) override;
    ADDRESSVF(0x00541F60, CheckpointVolAgent_G, ABC_Agent_vftable_17);
    virtual void ABC_Agent_vftable_17() override;
    ADDRESSVF(0x0056FAA0, CheckpointVolAgent_G, Agent_Z_vftable_24);
    virtual void Agent_Z_vftable_24() override;
    ADDRESSVF(0x0056FAE0, CheckpointVolAgent_G, Agent_Z_vftable_25);
    virtual void Agent_Z_vftable_25() override;
    ADDRESSSYMBOL(0x0056FB00, "?VolumeAgent_Z_vftable_42@CheckpointVolAgent_G@@UAEXH@Z");
    virtual void VolumeAgent_Z_vftable_42(int) override;
    ADDRESSSYMBOL(0x0056FC40, "?VolumeAgent_Z_vftable_43@CheckpointVolAgent_G@@UAEXH@Z");
    virtual void VolumeAgent_Z_vftable_43(int) override;
};

ADDRESSVFTABLE(0x009D2EF4, Road_Z);
class __declspec(dllexport) Road_Z : public Spline_Z
{
public:
    ADDRESSVF(0x007C1E30, Road_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
};

ADDRESSVFTABLE(0x009A6ADC, DebugHUD);
class __declspec(dllexport) DebugHUD : public DebugInfo
{
public:
    virtual void ViewportHUD_vftable_1() override;
    ADDRESSSYMBOL(0x00456440, "?ViewportHUD_vftable_2@DebugHUD@@UAEXH@Z");
    virtual void ViewportHUD_vftable_2(int) override;
    ADDRESSSYMBOL(0x00454510, "?ViewportHUD_vftable_5@DebugHUD@@UAEXH@Z");
    virtual void ViewportHUD_vftable_5(int) override;
    ADDRESSVF(0x004544A0, DebugHUD, DebugHUD_vftable_20);
    virtual void DebugHUD_vftable_20();
    ADDRESSVF(0x004544D0, DebugHUD, DebugHUD_vftable_21);
    virtual void DebugHUD_vftable_21();
};

ADDRESSVFTABLE(0x009D500C, RotShapePc_Z);
class __declspec(dllexport) RotShapePc_Z : public RotShape_Z
{
public:
    ADDRESSVF(0x0081BFB0, RotShapePc_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x00835A00, "?Object_Z_vftable_16@RotShapePc_Z@@UAEXHH@Z");
    virtual void Object_Z_vftable_16(int, int) override;
};

ADDRESSVFTABLE(0x009A3A54, CHECKPOINT_FLAG_RIGHT02);
class __declspec(dllexport) CHECKPOINT_FLAG_RIGHT02 : public BaseSharingPlayAnimAgent_G
{
public:
    ADDRESSVF(0x004357C0, CHECKPOINT_FLAG_RIGHT02, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSVF(0x00435720, CHECKPOINT_FLAG_RIGHT02, BaseObject_Z_vftable_13);
    virtual void BaseObject_Z_vftable_13() override;
    ADDRESSSYMBOL(0x00435630, "?ABC_Agent_vftable_14@CHECKPOINT_FLAG_RIGHT02@@UAEHXZ");
    virtual int ABC_Agent_vftable_14() override;
    ADDRESSVF(0x00435640, CHECKPOINT_FLAG_RIGHT02, ABC_Agent_vftable_15);
    virtual void ABC_Agent_vftable_15() override;
    ADDRESSSYMBOL(0x00435650, "?ABC_Agent_vftable_16@CHECKPOINT_FLAG_RIGHT02@@UAEXH@Z");
    virtual void ABC_Agent_vftable_16(int) override;
    ADDRESSVF(0x00435680, CHECKPOINT_FLAG_RIGHT02, ABC_Agent_vftable_17);
    virtual void ABC_Agent_vftable_17() override;
    ADDRESSVF(0x00435690, CHECKPOINT_FLAG_RIGHT02, Agent_Z_vftable_24);
    virtual void Agent_Z_vftable_24() override;
    ADDRESSVF(0x004356F0, CHECKPOINT_FLAG_RIGHT02, Agent_Z_vftable_25);
    virtual void Agent_Z_vftable_25() override;
    char data[96];
};

ADDRESSVFTABLE(0x009C0F94, CPushButton_G);
class __declspec(dllexport) CPushButton_G : public CButtonBase_G
{
public:
    ADDRESSVF(0x0059E650, CPushButton_G, CWindowHierarchy_G_vftable_0);
    virtual void CWindowHierarchy_G_vftable_0() override;
    virtual void CWindow_G_vftable_18() override;
    ADDRESSVF(0x0059E720, CPushButton_G, CWindow_G_vftable_25);
    virtual void CWindow_G_vftable_25() override;
    ADDRESSSYMBOL(0x0059E6D0, "?CButtonBase_G_vftable_31@CPushButton_G@@UAEXXZ");
    virtual void CButtonBase_G_vftable_31() override;
    ADDRESSVF(0x0059E6F0, CPushButton_G, CPushButton_G_vftable_35);
    virtual void CPushButton_G_vftable_35();
};

ADDRESSVFTABLE(0x009D3154, SplineGraph_Z);
class __declspec(dllexport) SplineGraph_Z : public Spline_Z
{
public:
    ADDRESSVF(0x007C3450, SplineGraph_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x00814250, "?BaseObject_Z_vftable_3@SplineGraph_Z@@UAEXH@Z");
    virtual void BaseObject_Z_vftable_3(int) override;
    ADDRESSSYMBOL(0x008141E0, "?BaseObject_Z_vftable_12@SplineGraph_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_12() override;
    virtual void Object_Z_vftable_16(int, int) override;
    char data[24];
};

ADDRESSVFTABLE(0x009A1DD4, CS_Class_DYNWAIT);
class __declspec(dllexport) CS_Class_DYNWAIT : public CreaturesDynState_G
{
public:
    ADDRESSVF(0x00426320, CS_Class_DYNWAIT, StateTemplate_G_vftable_0);
    virtual void StateTemplate_G_vftable_0() override;
    ADDRESSSYMBOL(0x00428430, "?StateTemplate_G_vftable_1@CS_Class_DYNWAIT@@UAEXH@Z");
    virtual void StateTemplate_G_vftable_1(int) override;
    ADDRESSSYMBOL(0x00428490, "?StateTemplate_G_vftable_3@CS_Class_DYNWAIT@@UAEDH@Z");
    virtual char StateTemplate_G_vftable_3(int) override;
};

ADDRESSVFTABLE(0x009D2A5C, ParticlesData_Z);
class __declspec(dllexport) ParticlesData_Z : public ObjectDatas_Z
{
public:
    ADDRESSVF(0x007B6D20, ParticlesData_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x0080C170, "?BaseObject_Z_vftable_3@ParticlesData_Z@@UAEXH@Z");
    virtual void BaseObject_Z_vftable_3(int) override;
    ADDRESSVF(0x007B6DA0, ParticlesData_Z, ObjectDatas_Z_vftable_18);
    virtual void ObjectDatas_Z_vftable_18() override;
    ADDRESSSYMBOL(0x0080C540, "?ObjectDatas_Z_vftable_22@ParticlesData_Z@@UAEXH@Z");
    virtual void ObjectDatas_Z_vftable_22(int) override;
    ADDRESSVF(0x007B6EA0, ParticlesData_Z, ParticlesData_Z_vftable_26);
    virtual void ParticlesData_Z_vftable_26();
    char data[52];
};

ADDRESSVFTABLE(0x009BCB2C, EvenementVolAgent_G);
class __declspec(dllexport) EvenementVolAgent_G : public VolumeDelayedStart_G
{
public:
    ADDRESSVF(0x005704A0, EvenementVolAgent_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x00571660, "?ABC_Agent_vftable_14@EvenementVolAgent_G@@UAEHXZ");
    virtual int ABC_Agent_vftable_14() override;
    ADDRESSVF(0x00571650, EvenementVolAgent_G, ABC_Agent_vftable_15);
    virtual void ABC_Agent_vftable_15() override;
    ADDRESSSYMBOL(0x00571610, "?ABC_Agent_vftable_16@EvenementVolAgent_G@@UAEXH@Z");
    virtual void ABC_Agent_vftable_16(int) override;
    ADDRESSVF(0x00571600, EvenementVolAgent_G, ABC_Agent_vftable_17);
    virtual void ABC_Agent_vftable_17() override;
    ADDRESSSYMBOL(0x00570500, "?Agent_Z_vftable_20@EvenementVolAgent_G@@UAEXXZ");
    virtual void Agent_Z_vftable_20() override;
    ADDRESSVF(0x00570580, EvenementVolAgent_G, Agent_Z_vftable_24);
    virtual void Agent_Z_vftable_24() override;
    ADDRESSVF(0x00570780, EvenementVolAgent_G, Agent_Z_vftable_25);
    virtual void Agent_Z_vftable_25() override;
    ADDRESSSYMBOL(0x005708B0, "?VolumeAgent_Z_vftable_43@EvenementVolAgent_G@@UAEXH@Z");
    virtual void VolumeAgent_Z_vftable_43(int) override;
    virtual void VolumeAgent_Z_vftable_44(int) override;
    ADDRESSSYMBOL(0x00570870, "?VolumeDelayedStart_G_vftable_46@EvenementVolAgent_G@@UAEXH@Z");
    virtual void VolumeDelayedStart_G_vftable_46(int) override;
    ADDRESSVF(0x00570FA0, EvenementVolAgent_G, EvenementVolAgent_G_vftable_47);
    virtual void EvenementVolAgent_G_vftable_47();
    ADDRESSVF(0x00571200, EvenementVolAgent_G, EvenementVolAgent_G_vftable_48);
    virtual void EvenementVolAgent_G_vftable_48();
    char data[32];
};

ADDRESSVFTABLE(0x009A5134, Dialog_IGMsgBox);
class __declspec(dllexport) Dialog_IGMsgBox : public Dialog_BaseAlert
{
public:
    ADDRESSVF(0x00442B10, Dialog_IGMsgBox, CWindowHierarchy_G_vftable_0);
    virtual void CWindowHierarchy_G_vftable_0() override;
    ADDRESSSYMBOL(0x004401A0, "?Dialog_G_vftable_16@Dialog_IGMsgBox@@UAEXH@Z");
    virtual void Dialog_G_vftable_16(int) override;
    ADDRESSVF(0x00440120, Dialog_IGMsgBox, Dialog_BaseAlert_vftable_28);
    virtual void Dialog_BaseAlert_vftable_28() override;
    ADDRESSVF(0x00440160, Dialog_IGMsgBox, Dialog_BaseAlert_vftable_29);
    virtual void Dialog_BaseAlert_vftable_29() override;
};

ADDRESSVFTABLE(0x009A4F0C, FrontGlobalInGameData_G);
class __declspec(dllexport) FrontGlobalInGameData_G : public BaseInGameDatas_G
{
public:
    ADDRESSSYMBOL(0x00442900, "?BaseObject_Z_vftable_0@FrontGlobalInGameData_G@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x004428B0, FrontGlobalInGameData_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSVF(0x00442B60, FrontGlobalInGameData_G, BaseObject_Z_vftable_13);
    virtual void BaseObject_Z_vftable_13() override;
    ADDRESSSYMBOL(0x00442C80, "?Manipulator_Z_vftable_17@FrontGlobalInGameData_G@@UAEXH@Z");
    virtual void Manipulator_Z_vftable_17(int) override;
    ADDRESSSYMBOL(0x00442D20, "?ManipulatorDraw_Z_vftable_19@FrontGlobalInGameData_G@@UAEXH@Z");
    virtual void ManipulatorDraw_Z_vftable_19(int) override;
    virtual void BaseInGameDatas_G_vftable_22() override;
    virtual void BaseInGameDatas_G_vftable_23() override;
    ADDRESSSYMBOL(0x00442990, "?BaseInGameDatas_G_vftable_24@FrontGlobalInGameData_G@@UAEXXZ");
    virtual void BaseInGameDatas_G_vftable_24() override;
    virtual void *BaseInGameDatas_G_vftable_25() override;
    virtual void *BaseInGameDatas_G_vftable_28() override;
    virtual int BaseInGameDatas_G_vftable_29() override;
    virtual void *BaseInGameDatas_G_vftable_30() override;
    virtual int BaseInGameDatas_G_vftable_31() override;
    ADDRESSVF(0x00442C30, FrontGlobalInGameData_G, BaseInGameDatas_G_vftable_35);
    virtual void BaseInGameDatas_G_vftable_35() override;
    virtual char BaseInGameDatas_G_vftable_37() override;
    char data[5084];
};

ADDRESSVFTABLE(0x009C5B14, GenWorld_Z);
class __declspec(dllexport) GenWorld_Z : public Object_Z
{
public:
    ADDRESSVF(0x0063FE30, GenWorld_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x0077C690, "?BaseObject_Z_vftable_3@GenWorld_Z@@UAEXH@Z");
    virtual void BaseObject_Z_vftable_3(int) override;
    ADDRESSSYMBOL(0x0077CBC0, "?BaseObject_Z_vftable_4@GenWorld_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_4() override;
    ADDRESSSYMBOL(0x0077CDF0, "?BaseObject_Z_vftable_5@GenWorld_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_5() override;
    ADDRESSSYMBOL(0x0077D480, "?BaseObject_Z_vftable_6@GenWorld_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_6() override;
    ADDRESSVF(0x006400F0, GenWorld_Z, BaseObject_Z_vftable_13);
    virtual void BaseObject_Z_vftable_13() override;
    ADDRESSSYMBOL(0x00779440, "?Object_Z_vftable_16@GenWorld_Z@@UAEXHH@Z");
    virtual void Object_Z_vftable_16(int, int) override;
    ADDRESSSYMBOL(0x0077EBD0, "?Object_Z_vftable_29@GenWorld_Z@@UAEDHHHHHHHH@Z");
    virtual char Object_Z_vftable_29(int, int, int, int, int, int, int, int) override;
    virtual char Object_Z_vftable_30(int, int, int, int, int, int, int, int) override;
    ADDRESSSYMBOL(0x0077F510, "?Object_Z_vftable_34@GenWorld_Z@@UAEHHHHHHHHH@Z");
    virtual int Object_Z_vftable_34(int, int, int, int, int, int, int, int) override;
    ADDRESSVF(0x0077A3B0, GenWorld_Z, GenWorld_Z_vftable_43);
    virtual void GenWorld_Z_vftable_43();
    ADDRESSVF(0x00779D40, GenWorld_Z, GenWorld_Z_vftable_44);
    virtual void GenWorld_Z_vftable_44();
    ADDRESSVF(0x0077B940, GenWorld_Z, GenWorld_Z_vftable_45);
    virtual void GenWorld_Z_vftable_45();
    char data[751188];
};

ADDRESSVFTABLE(0x009B0C74, IT_LIVERYManipulator_G);
class __declspec(dllexport) IT_LIVERYManipulator_G : public IT_SPINCOLLECTManipulator_G
{
public:
    ADDRESSVF(0x004D5D20, IT_LIVERYManipulator_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x00519870, "?Manipulator_Z_vftable_17@IT_LIVERYManipulator_G@@UAEXH@Z");
    virtual void Manipulator_Z_vftable_17(int) override;
    virtual void ObjectMove_Z_vftable_18(int, int, int, int, int, int) override;
};

ADDRESSVFTABLE(0x009D62EC, NetWorkPeerToPeer_XBL);
class __declspec(dllexport) NetWorkPeerToPeer_XBL : public NetWorkPeerToPeer_Z
{
public:
    ADDRESSVF(0x00822BA0, NetWorkPeerToPeer_XBL, NetObject_Z_vftable_0);
    virtual void NetObject_Z_vftable_0() override;
    ADDRESSSYMBOL(0x005A6830, "?NetWorkServerClient_Z_vftable_11@NetWorkPeerToPeer_XBL@@UAEDXZ");
    virtual char NetWorkServerClient_Z_vftable_11() override;
    ADDRESSSYMBOL(0x00822C90, "?NetWorkPeerToPeer_Z_vftable_12@NetWorkPeerToPeer_XBL@@UAEHXZ");
    virtual int NetWorkPeerToPeer_Z_vftable_12() override;
    ADDRESSSYMBOL(0x00822CD0, "?NetWorkPeerToPeer_Z_vftable_13@NetWorkPeerToPeer_XBL@@UAEXXZ");
    virtual void NetWorkPeerToPeer_Z_vftable_13() override;
    ADDRESSSYMBOL(0x00822CF0, "?NetWorkPeerToPeer_Z_vftable_14@NetWorkPeerToPeer_XBL@@UAEXH@Z");
    virtual void NetWorkPeerToPeer_Z_vftable_14(int) override;
    ADDRESSSYMBOL(0x00822D90, "?NetWorkPeerToPeer_Z_vftable_15@NetWorkPeerToPeer_XBL@@UAEXH@Z");
    virtual void NetWorkPeerToPeer_Z_vftable_15(int) override;
    ADDRESSSYMBOL(0x00823070, "?NetWorkPeerToPeer_Z_vftable_16@NetWorkPeerToPeer_XBL@@UAEHXZ");
    virtual int NetWorkPeerToPeer_Z_vftable_16() override;
    ADDRESSSYMBOL(0x00823090, "?NetWorkPeerToPeer_Z_vftable_17@NetWorkPeerToPeer_XBL@@UAEDH@Z");
    virtual char NetWorkPeerToPeer_Z_vftable_17(int) override;
    ADDRESSSYMBOL(0x008236B0, "?NetWorkPeerToPeer_Z_vftable_18@NetWorkPeerToPeer_XBL@@UAEHXZ");
    virtual int NetWorkPeerToPeer_Z_vftable_18() override;
    ADDRESSSYMBOL(0x008236D0, "?NetWorkPeerToPeer_Z_vftable_19@NetWorkPeerToPeer_XBL@@UAEHXZ");
    virtual int NetWorkPeerToPeer_Z_vftable_19() override;
    ADDRESSSYMBOL(0x008236F0, "?NetWorkPeerToPeer_Z_vftable_20@NetWorkPeerToPeer_XBL@@UAEHH@Z");
    virtual int NetWorkPeerToPeer_Z_vftable_20(int) override;
    ADDRESSSYMBOL(0x00823720, "?NetWorkPeerToPeer_Z_vftable_21@NetWorkPeerToPeer_XBL@@UAEXXZ");
    virtual void NetWorkPeerToPeer_Z_vftable_21() override;
    ADDRESSSYMBOL(0x00823790, "?NetWorkPeerToPeer_Z_vftable_22@NetWorkPeerToPeer_XBL@@UAEDH@Z");
    virtual char NetWorkPeerToPeer_Z_vftable_22(int) override;
    ADDRESSSYMBOL(0x008238A0, "?NetWorkPeerToPeer_Z_vftable_23@NetWorkPeerToPeer_XBL@@UAEDH@Z");
    virtual char NetWorkPeerToPeer_Z_vftable_23(int) override;
    ADDRESSSYMBOL(0x00823A60, "?NetWorkPeerToPeer_Z_vftable_24@NetWorkPeerToPeer_XBL@@UAEHXZ");
    virtual int NetWorkPeerToPeer_Z_vftable_24() override;
    ADDRESSSYMBOL(0x00823C00, "?NetWorkPeerToPeer_Z_vftable_25@NetWorkPeerToPeer_XBL@@UAEXXZ");
    virtual void NetWorkPeerToPeer_Z_vftable_25() override;
    ADDRESSSYMBOL(0x00823D90, "?NetWorkPeerToPeer_Z_vftable_26@NetWorkPeerToPeer_XBL@@UAEXXZ");
    virtual void NetWorkPeerToPeer_Z_vftable_26() override;
    ADDRESSSYMBOL(0x00823E60, "?NetWorkPeerToPeer_Z_vftable_27@NetWorkPeerToPeer_XBL@@UAEXXZ");
    virtual void NetWorkPeerToPeer_Z_vftable_27() override;
    ADDRESSSYMBOL(0x00823EC0, "?NetWorkPeerToPeer_Z_vftable_28@NetWorkPeerToPeer_XBL@@UAEDXZ");
    virtual char NetWorkPeerToPeer_Z_vftable_28() override;
    ADDRESSSYMBOL(0x00823ED0, "?NetWorkPeerToPeer_Z_vftable_29@NetWorkPeerToPeer_XBL@@UAEDXZ");
    virtual char NetWorkPeerToPeer_Z_vftable_29() override;
    ADDRESSSYMBOL(0x00822D20, "?NetWorkPeerToPeer_Z_vftable_33@NetWorkPeerToPeer_XBL@@UAEHXZ");
    virtual int NetWorkPeerToPeer_Z_vftable_33() override;
    ADDRESSSYMBOL(0x00822D70, "?NetWorkPeerToPeer_Z_vftable_34@NetWorkPeerToPeer_XBL@@UAEDXZ");
    virtual char NetWorkPeerToPeer_Z_vftable_34() override;
    ADDRESSSYMBOL(0x00822D80, "?NetWorkPeerToPeer_Z_vftable_35@NetWorkPeerToPeer_XBL@@UAEXXZ");
    virtual void NetWorkPeerToPeer_Z_vftable_35() override;
    ADDRESSSYMBOL(0x005A6850, "?NetWorkPeerToPeer_Z_vftable_36@NetWorkPeerToPeer_XBL@@UAEDXZ");
    virtual char NetWorkPeerToPeer_Z_vftable_36() override;
    ADDRESSSYMBOL(0x005A6880, "?NetWorkPeerToPeer_Z_vftable_37@NetWorkPeerToPeer_XBL@@UAEXH@Z");
    virtual void NetWorkPeerToPeer_Z_vftable_37(int) override;
    ADDRESSVF(0x00825180, NetWorkPeerToPeer_XBL, NetWorkPeerToPeer_Z_vftable_38);
    virtual void NetWorkPeerToPeer_Z_vftable_38() override;
    ADDRESSVF(0x00825190, NetWorkPeerToPeer_XBL, NetWorkPeerToPeer_Z_vftable_39);
    virtual void NetWorkPeerToPeer_Z_vftable_39() override;
    virtual int NetWorkPeerToPeer_XBL_vftable_40();
    virtual int NetWorkPeerToPeer_XBL_vftable_41();
    virtual int NetWorkPeerToPeer_XBL_vftable_42(int);
    virtual int NetWorkPeerToPeer_XBL_vftable_43(int);
    virtual int NetWorkPeerToPeer_XBL_vftable_44();
    ADDRESSVF(0x00822A60, NetWorkPeerToPeer_XBL, NetWorkPeerToPeer_XBL_vftable_45);
    virtual void NetWorkPeerToPeer_XBL_vftable_45();
    virtual int NetWorkPeerToPeer_XBL_vftable_46(int);
    virtual int NetWorkPeerToPeer_XBL_vftable_47(int);
};

ADDRESSVFTABLE(0x009AE2AC, IT_Dyn_VehicleMove_G);
class __declspec(dllexport) IT_Dyn_VehicleMove_G : public PhysicObj_G
{
public:
    ADDRESSSYMBOL(0x005215D0, "?BaseObject_Z_vftable_0@IT_Dyn_VehicleMove_G@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x004D1AA0, IT_Dyn_VehicleMove_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x00521600, "?Manipulator_Z_vftable_14@IT_Dyn_VehicleMove_G@@UAEXXZ");
    virtual void Manipulator_Z_vftable_14() override;
    ADDRESSVF(0x0052ED50, IT_Dyn_VehicleMove_G, PhysicObj_Z_vftable_105);
    virtual void PhysicObj_Z_vftable_105() override;
    ADDRESSSYMBOL(0x0052F200, "?PhysicObj_Z_vftable_106@IT_Dyn_VehicleMove_G@@UAEXXZ");
    virtual void PhysicObj_Z_vftable_106() override;
    ADDRESSSYMBOL(0x0052F210, "?PhysicObj_Z_vftable_112@IT_Dyn_VehicleMove_G@@UAEDHH@Z");
    virtual char PhysicObj_Z_vftable_112(int, int) override;
    ADDRESSVF(0x0052F2C0, IT_Dyn_VehicleMove_G, PhysicObj_Z_vftable_113);
    virtual void PhysicObj_Z_vftable_113() override;
    virtual void PhysicObj_Z_vftable_115(int, int) override;
    ADDRESSSYMBOL(0x00522830, "?PhysicObj_Z_vftable_129@IT_Dyn_VehicleMove_G@@UAEXXZ");
    virtual void PhysicObj_Z_vftable_129() override;
    ADDRESSSYMBOL(0x005211E0, "?PhysicObj_Z_vftable_130@IT_Dyn_VehicleMove_G@@UAEXXZ");
    virtual void PhysicObj_Z_vftable_130() override;
    ADDRESSSYMBOL(0x005212D0, "?PhysicObj_Z_vftable_131@IT_Dyn_VehicleMove_G@@UAEXXZ");
    virtual void PhysicObj_Z_vftable_131() override;
    ADDRESSSYMBOL(0x00521570, "?PhysicObj_Z_vftable_132@IT_Dyn_VehicleMove_G@@UAEXXZ");
    virtual void PhysicObj_Z_vftable_132() override;
    ADDRESSSYMBOL(0x004D1990, "?PhysicObj_Z_vftable_136@IT_Dyn_VehicleMove_G@@UAEXXZ");
    virtual void PhysicObj_Z_vftable_136() override;
    ADDRESSSYMBOL(0x00526BD0, "?PhysicObj_Z_vftable_138@IT_Dyn_VehicleMove_G@@UAEXHH@Z");
    virtual void PhysicObj_Z_vftable_138(int, int) override;
    ADDRESSSYMBOL(0x00529CE0, "?PhysicObj_Z_vftable_139@IT_Dyn_VehicleMove_G@@UAEXHH@Z");
    virtual void PhysicObj_Z_vftable_139(int, int) override;
    ADDRESSSYMBOL(0x0051F6C0, "?PhysicObj_Z_vftable_141@IT_Dyn_VehicleMove_G@@UAEDHH@Z");
    virtual char PhysicObj_Z_vftable_141(int, int) override;
    ADDRESSSYMBOL(0x0051F1E0, "?PhysicObj_Z_vftable_142@IT_Dyn_VehicleMove_G@@UAEXHH@Z");
    virtual void PhysicObj_Z_vftable_142(int, int) override;
    char data[1344];
};

ADDRESSVFTABLE(0x009AE0EC, PlayerMove_G);
class __declspec(dllexport) PlayerMove_G : public CreaturesMove_G
{
public:
    ADDRESSSYMBOL(0x0042DA90, "?BaseObject_Z_vftable_0@PlayerMove_G@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x004D3670, PlayerMove_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x0042DB50, "?Manipulator_Z_vftable_14@PlayerMove_G@@UAEXXZ");
    virtual void Manipulator_Z_vftable_14() override;
    virtual void Manipulator_Z_vftable_15() override;
    virtual void Manipulator_Z_vftable_16() override;
    ADDRESSSYMBOL(0x0042DC40, "?Manipulator_Z_vftable_17@PlayerMove_G@@UAEXH@Z");
    virtual void Manipulator_Z_vftable_17(int) override;
    ADDRESSSYMBOL(0x0042E130, "?ObjectMove_Z_vftable_18@PlayerMove_G@@UAEXHHHHHH@Z");
    virtual void ObjectMove_Z_vftable_18(int, int, int, int, int, int) override;
    ADDRESSSYMBOL(0x0042F4D0, "?ObjectMove_Z_vftable_28@PlayerMove_G@@UAEXHH@Z");
    virtual void ObjectMove_Z_vftable_28(int, int) override;
    virtual void ObjectMove_Z_vftable_43() override;
    ADDRESSVF(0x0042F120, PlayerMove_G, CreaturesMove_G_vftable_103);
    virtual void CreaturesMove_G_vftable_103() override;
    ADDRESSVF(0x004D35A0, PlayerMove_G, CreaturesMove_G_vftable_106);
    virtual void CreaturesMove_G_vftable_106() override;
    ADDRESSVF(0x0042F4F0, PlayerMove_G, CreaturesMove_G_vftable_107);
    virtual void CreaturesMove_G_vftable_107() override;
    char data[10100];
};

ADDRESSVFTABLE(0x009C67F4, CameraZone_Z);
class __declspec(dllexport) CameraZone_Z : public SplineZone_Z
{
public:
    ADDRESSVF(0x0065CE60, CameraZone_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x007ADD20, "?BaseObject_Z_vftable_3@CameraZone_Z@@UAEXH@Z");
    virtual void BaseObject_Z_vftable_3(int) override;
    ADDRESSSYMBOL(0x0065CFE0, "?BaseObject_Z_vftable_12@CameraZone_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_12() override;
    virtual void Object_Z_vftable_16(int, int) override;
    ADDRESSVF(0x0065D080, CameraZone_Z, SplineZone_Z_vftable_43);
    virtual void SplineZone_Z_vftable_43() override;
    char data[24];
};

ADDRESSVFTABLE(0x009AF3FC, IT_DYNOBJMove_G);
class __declspec(dllexport) IT_DYNOBJMove_G : public PhysicObj_G
{
public:
    ADDRESSSYMBOL(0x005313B0, "?BaseObject_Z_vftable_0@IT_DYNOBJMove_G@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x004D51E0, IT_DYNOBJMove_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x00531490, "?Manipulator_Z_vftable_14@IT_DYNOBJMove_G@@UAEXXZ");
    virtual void Manipulator_Z_vftable_14() override;
    ADDRESSVF(0x00531560, IT_DYNOBJMove_G, PhysicObj_Z_vftable_104);
    virtual void PhysicObj_Z_vftable_104() override;
    ADDRESSSYMBOL(0x00531A80, "?PhysicObj_Z_vftable_123@IT_DYNOBJMove_G@@UAEXXZ");
    virtual void PhysicObj_Z_vftable_123() override;
    ADDRESSSYMBOL(0x005315D0, "?PhysicObj_Z_vftable_129@IT_DYNOBJMove_G@@UAEXXZ");
    virtual void PhysicObj_Z_vftable_129() override;
    ADDRESSSYMBOL(0x004D5100, "?PhysicObj_Z_vftable_136@IT_DYNOBJMove_G@@UAEXXZ");
    virtual void PhysicObj_Z_vftable_136() override;
    ADDRESSSYMBOL(0x005316F0, "?PhysicObj_Z_vftable_138@IT_DYNOBJMove_G@@UAEXHH@Z");
    virtual void PhysicObj_Z_vftable_138(int, int) override;
    ADDRESSSYMBOL(0x00531710, "?PhysicObj_Z_vftable_139@IT_DYNOBJMove_G@@UAEXHH@Z");
    virtual void PhysicObj_Z_vftable_139(int, int) override;
    ADDRESSSYMBOL(0x00531660, "?PhysicObj_Z_vftable_140@IT_DYNOBJMove_G@@UAEXH@Z");
    virtual void PhysicObj_Z_vftable_140(int) override;
    ADDRESSSYMBOL(0x00531C00, "?PhysicObj_Z_vftable_141@IT_DYNOBJMove_G@@UAEDHH@Z");
    virtual char PhysicObj_Z_vftable_141(int, int) override;
    char data[12];
};

ADDRESSVFTABLE(0x009A3734, CHECKPOINT_FLAG_LEFT);
class __declspec(dllexport) CHECKPOINT_FLAG_LEFT : public BaseSharingPlayAnimAgent_G
{
public:
    ADDRESSVF(0x00434DC0, CHECKPOINT_FLAG_LEFT, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSVF(0x00434D20, CHECKPOINT_FLAG_LEFT, BaseObject_Z_vftable_13);
    virtual void BaseObject_Z_vftable_13() override;
    ADDRESSSYMBOL(0x00434C30, "?ABC_Agent_vftable_14@CHECKPOINT_FLAG_LEFT@@UAEHXZ");
    virtual int ABC_Agent_vftable_14() override;
    ADDRESSVF(0x00434C40, CHECKPOINT_FLAG_LEFT, ABC_Agent_vftable_15);
    virtual void ABC_Agent_vftable_15() override;
    ADDRESSSYMBOL(0x00434C50, "?ABC_Agent_vftable_16@CHECKPOINT_FLAG_LEFT@@UAEXH@Z");
    virtual void ABC_Agent_vftable_16(int) override;
    ADDRESSVF(0x00434C80, CHECKPOINT_FLAG_LEFT, ABC_Agent_vftable_17);
    virtual void ABC_Agent_vftable_17() override;
    ADDRESSVF(0x00434C90, CHECKPOINT_FLAG_LEFT, Agent_Z_vftable_24);
    virtual void Agent_Z_vftable_24() override;
    ADDRESSVF(0x00434CF0, CHECKPOINT_FLAG_LEFT, Agent_Z_vftable_25);
    virtual void Agent_Z_vftable_25() override;
    char data[96];
};

ADDRESSVFTABLE(0x009C97CC, Light_Z);
class __declspec(dllexport) Light_Z : public Object_Z
{
public:
    ADDRESSVF(0x00690E80, Light_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x007CAB90, "?BaseObject_Z_vftable_3@Light_Z@@UAEXH@Z");
    virtual void BaseObject_Z_vftable_3(int) override;
    ADDRESSSYMBOL(0x00690EF0, "?BaseObject_Z_vftable_12@Light_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_12() override;
    virtual void Object_Z_vftable_16(int, int) override;
    ADDRESSVF(0x00690F00, Light_Z, Object_Z_vftable_26);
    virtual void Object_Z_vftable_26() override;
    char data[76];
};

ADDRESSVFTABLE(0x009D5674, SurfaceDatas_Z);
class __declspec(dllexport) SurfaceDatas_Z : public PointsDatas_Z
{
public:
    ADDRESSVF(0x008201F0, SurfaceDatas_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSVF(0x007BB5B0, SurfaceDatas_Z, ObjectDatas_Z_vftable_18);
    virtual void ObjectDatas_Z_vftable_18() override;
    char data[12];
};

ADDRESSVFTABLE(0x009C3290, GameMissionsStartServer_G);
class __declspec(dllexport) GameMissionsStartServer_G : public GameMissionsStart_G
{
public:
    ADDRESSVF(0x005B5910, GameMissionsStartServer_G, ComObj_Z_vftable_0);
    virtual void ComObj_Z_vftable_0() override;
    ADDRESSSYMBOL(0x005B5600, "?ComObj_Z_vftable_1@GameMissionsStartServer_G@@UAEXXZ");
    virtual void ComObj_Z_vftable_1() override;
    ADDRESSSYMBOL(0x005B1FD0, "?ComObj_Z_vftable_3@GameMissionsStartServer_G@@UAEXH@Z");
    virtual void ComObj_Z_vftable_3(int) override;
};

ADDRESSVFTABLE(0x009D009C, WorldRef_Z);
class __declspec(dllexport) WorldRef_Z : public Object_Z
{
public:
    ADDRESSVF(0x00740320, WorldRef_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x00740910, "?BaseObject_Z_vftable_3@WorldRef_Z@@UAEXH@Z");
    virtual void BaseObject_Z_vftable_3(int) override;
    ADDRESSSYMBOL(0x007409C0, "?BaseObject_Z_vftable_4@WorldRef_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_4() override;
    ADDRESSSYMBOL(0x007409F0, "?BaseObject_Z_vftable_5@WorldRef_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_5() override;
    ADDRESSSYMBOL(0x00740A30, "?BaseObject_Z_vftable_6@WorldRef_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_6() override;
    ADDRESSVF(0x00740400, WorldRef_Z, BaseObject_Z_vftable_13);
    virtual void BaseObject_Z_vftable_13() override;
    char data[352];
};

ADDRESSVFTABLE(0x009D5264, HFieldPc_Z);
class __declspec(dllexport) HFieldPc_Z : public HField_Z
{
public:
    ADDRESSSYMBOL(0x008333B0, "?BaseObject_Z_vftable_0@HFieldPc_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x0081C4F0, HFieldPc_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x00833530, "?BaseObject_Z_vftable_5@HFieldPc_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_5() override;
    virtual void Object_Z_vftable_16(int, int) override;
};

ADDRESSVFTABLE(0x009A35C4, MenuLogicAgent_G);
class __declspec(dllexport) MenuLogicAgent_G : public LogicAgent_G
{
public:
    ADDRESSSYMBOL(0x00433BC0, "?BaseObject_Z_vftable_0@MenuLogicAgent_G@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x00433AA0, MenuLogicAgent_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSVF(0x00433C80, MenuLogicAgent_G, BaseObject_Z_vftable_13);
    virtual void BaseObject_Z_vftable_13() override;
    ADDRESSSYMBOL(0x004339E0, "?ABC_Agent_vftable_14@MenuLogicAgent_G@@UAEHXZ");
    virtual int ABC_Agent_vftable_14() override;
    ADDRESSVF(0x004339F0, MenuLogicAgent_G, ABC_Agent_vftable_15);
    virtual void ABC_Agent_vftable_15() override;
    ADDRESSSYMBOL(0x00433A00, "?ABC_Agent_vftable_16@MenuLogicAgent_G@@UAEXH@Z");
    virtual void ABC_Agent_vftable_16(int) override;
    ADDRESSVF(0x00433A30, MenuLogicAgent_G, ABC_Agent_vftable_17);
    virtual void ABC_Agent_vftable_17() override;
    ADDRESSSYMBOL(0x00433C40, "?Agent_Z_vftable_20@MenuLogicAgent_G@@UAEXXZ");
    virtual void Agent_Z_vftable_20() override;
    virtual int LogicAgent_G_vftable_40() override;
    virtual char LogicAgent_G_vftable_41(int, int, int) override;
    virtual char LogicAgent_G_vftable_42() override;
    ADDRESSVF(0x00433F00, MenuLogicAgent_G, LogicAgent_G_vftable_45);
    virtual void LogicAgent_G_vftable_45() override;
    ADDRESSVF(0x00434230, MenuLogicAgent_G, MenuLogicAgent_G_vftable_47);
    virtual void MenuLogicAgent_G_vftable_47();
    char data[4];
};

ADDRESSVFTABLE(0x009AFBCC, SmallTornadoManipulator_G);
class __declspec(dllexport) SmallTornadoManipulator_G : public TornadoManipulator_G
{
public:
    ADDRESSSYMBOL(0x005BF4A0, "?BaseObject_Z_vftable_0@SmallTornadoManipulator_G@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x004D5510, SmallTornadoManipulator_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x005BF530, "?Manipulator_Z_vftable_14@SmallTornadoManipulator_G@@UAEXXZ");
    virtual void Manipulator_Z_vftable_14() override;
    ADDRESSSYMBOL(0x005BF5F0, "?ObjectMove_Z_vftable_18@SmallTornadoManipulator_G@@UAEXHHHHHH@Z");
    virtual void ObjectMove_Z_vftable_18(int, int, int, int, int, int) override;
    ADDRESSSYMBOL(0x005BFC00, "?TornadoManipulator_G_vftable_103@SmallTornadoManipulator_G@@UAEXXZ");
    virtual void TornadoManipulator_G_vftable_103() override;
    ADDRESSVF(0x004D54D0, SmallTornadoManipulator_G, TornadoManipulator_G_vftable_105);
    virtual void TornadoManipulator_G_vftable_105() override;
    ADDRESSSYMBOL(0x005BF480, "?TornadoManipulator_G_vftable_106@SmallTornadoManipulator_G@@UAEXXZ");
    virtual void TornadoManipulator_G_vftable_106() override;
    char data[4];
};

ADDRESSVFTABLE(0x009B764C, SaveVolumeAgent_G);
class __declspec(dllexport) SaveVolumeAgent_G : public VolumeDelayedStart_G
{
public:
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x00541840, SaveVolumeAgent_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x00541790, "?ABC_Agent_vftable_14@SaveVolumeAgent_G@@UAEHXZ");
    virtual int ABC_Agent_vftable_14() override;
    ADDRESSVF(0x005417A0, SaveVolumeAgent_G, ABC_Agent_vftable_15);
    virtual void ABC_Agent_vftable_15() override;
    ADDRESSSYMBOL(0x005417D0, "?ABC_Agent_vftable_16@SaveVolumeAgent_G@@UAEXH@Z");
    virtual void ABC_Agent_vftable_16(int) override;
    ADDRESSVF(0x00541810, SaveVolumeAgent_G, ABC_Agent_vftable_17);
    virtual void ABC_Agent_vftable_17() override;
    ADDRESSSYMBOL(0x00572350, "?Agent_Z_vftable_20@SaveVolumeAgent_G@@UAEXXZ");
    virtual void Agent_Z_vftable_20() override;
    virtual void Agent_Z_vftable_24() override;
    ADDRESSSYMBOL(0x005723A0, "?VolumeDelayedStart_G_vftable_46@SaveVolumeAgent_G@@UAEXH@Z");
    virtual void VolumeDelayedStart_G_vftable_46(int) override;
};

ADDRESSVFTABLE(0x009B5FD4, RtcScriptAgent_G);
class __declspec(dllexport) RtcScriptAgent_G : public RtcAgent_Z
{
public:
    ADDRESSSYMBOL(0x00534F70, "?BaseObject_Z_vftable_0@RtcScriptAgent_G@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x00534DB0, RtcScriptAgent_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSVF(0x00536A30, RtcScriptAgent_G, BaseObject_Z_vftable_13);
    virtual void BaseObject_Z_vftable_13() override;
    ADDRESSSYMBOL(0x00534880, "?ABC_Agent_vftable_14@RtcScriptAgent_G@@UAEHXZ");
    virtual int ABC_Agent_vftable_14() override;
    ADDRESSVF(0x00534890, RtcScriptAgent_G, ABC_Agent_vftable_15);
    virtual void ABC_Agent_vftable_15() override;
    ADDRESSSYMBOL(0x005348A0, "?ABC_Agent_vftable_16@RtcScriptAgent_G@@UAEXH@Z");
    virtual void ABC_Agent_vftable_16(int) override;
    ADDRESSVF(0x005348E0, RtcScriptAgent_G, ABC_Agent_vftable_17);
    virtual void ABC_Agent_vftable_17() override;
    ADDRESSVF(0x00534EB0, RtcScriptAgent_G, Agent_Z_vftable_24);
    virtual void Agent_Z_vftable_24() override;
    ADDRESSVF(0x005369F0, RtcScriptAgent_G, Agent_Z_vftable_25);
    virtual void Agent_Z_vftable_25() override;
    ADDRESSVF(0x00535000, RtcScriptAgent_G, RtcAgent_Z_vftable_40);
    virtual void RtcAgent_Z_vftable_40() override;
    ADDRESSVF(0x00536210, RtcScriptAgent_G, RtcAgent_Z_vftable_41);
    virtual void RtcAgent_Z_vftable_41() override;
    ADDRESSVF(0x00536980, RtcScriptAgent_G, RtcAgent_Z_vftable_42);
    virtual void RtcAgent_Z_vftable_42() override;
    ADDRESSSYMBOL(0x00536D40, "?RtcAgent_Z_vftable_43@RtcScriptAgent_G@@UAEXHH@Z");
    virtual void RtcAgent_Z_vftable_43(int, int) override;
    ADDRESSSYMBOL(0x005389D0, "?RtcAgent_Z_vftable_44@RtcScriptAgent_G@@UAEXHH@Z");
    virtual void RtcAgent_Z_vftable_44(int, int) override;
    ADDRESSVF(0x00539E40, RtcScriptAgent_G, RtcScriptAgent_G_vftable_45);
    virtual void RtcScriptAgent_G_vftable_45();
    ADDRESSVF(0x0053A0D0, RtcScriptAgent_G, RtcScriptAgent_G_vftable_46);
    virtual void RtcScriptAgent_G_vftable_46();
    ADDRESSVF(0x0053A380, RtcScriptAgent_G, RtcScriptAgent_G_vftable_47);
    virtual void RtcScriptAgent_G_vftable_47();
    ADDRESSVF(0x0053A610, RtcScriptAgent_G, RtcScriptAgent_G_vftable_48);
    virtual void RtcScriptAgent_G_vftable_48();
    ADDRESSVF(0x0053A8F0, RtcScriptAgent_G, RtcScriptAgent_G_vftable_49);
    virtual void RtcScriptAgent_G_vftable_49();
    ADDRESSVF(0x0053AC10, RtcScriptAgent_G, RtcScriptAgent_G_vftable_50);
    virtual void RtcScriptAgent_G_vftable_50();
    char data[320];
};

ADDRESSVFTABLE(0x009C29A4, MgrSrvGame_G);
class __declspec(dllexport) MgrSrvGame_G : public MgrSrv_G
{
public:
    ADDRESSVF(0x005AAE30, MgrSrvGame_G, ComOwner_Z_vftable_0);
    virtual void ComOwner_Z_vftable_0() override;
    ADDRESSSYMBOL(0x005B6C90, "?ComMgrSrv_Z_vftable_36@MgrSrvGame_G@@UAEDXZ");
    virtual char ComMgrSrv_Z_vftable_36() override;
};

ADDRESSVFTABLE(0x009C4D1C, MenuItemListBoxTT_G);
class __declspec(dllexport) MenuItemListBoxTT_G : public MenuItemButtonTT_G
{
public:
    ADDRESSVF(0x006135F0, MenuItemListBoxTT_G, MenuItem_G_vftable_0);
    virtual void MenuItem_G_vftable_0() override;
    ADDRESSSYMBOL(0x00613C80, "?MenuItem_G_vftable_3@MenuItemListBoxTT_G@@UAEXH@Z");
    virtual void MenuItem_G_vftable_3(int) override;
    ADDRESSSYMBOL(0x00613680, "?MenuItem_G_vftable_4@MenuItemListBoxTT_G@@UAEXXZ");
    virtual void MenuItem_G_vftable_4() override;
    virtual int MenuItem_G_vftable_6() override;
    ADDRESSVF(0x006134E0, MenuItemListBoxTT_G, MenuItem_G_vftable_7);
    virtual void MenuItem_G_vftable_7() override;
    ADDRESSVF(0x00613500, MenuItemListBoxTT_G, MenuItem_G_vftable_8);
    virtual void MenuItem_G_vftable_8() override;
    ADDRESSVF(0x006134B0, MenuItemListBoxTT_G, MenuItem_G_vftable_9);
    virtual void MenuItem_G_vftable_9() override;
    ADDRESSVF(0x00613C40, MenuItemListBoxTT_G, MenuItemVirtualLabel_G_vftable_10);
    virtual void MenuItemVirtualLabel_G_vftable_10() override;
    ADDRESSVF(0x00613C20, MenuItemListBoxTT_G, MenuItemVirtualLabel_G_vftable_13);
    virtual void MenuItemVirtualLabel_G_vftable_13() override;
};

ADDRESSVFTABLE(0x009C8CFC, PlayBlendAnim_Z);
class __declspec(dllexport) PlayBlendAnim_Z : public BasePlayAnim_Z
{
public:
    ADDRESSSYMBOL(0x007BF400, "?BaseObject_Z_vftable_0@PlayBlendAnim_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSSYMBOL(0x007BF410, "?BaseObject_Z_vftable_1@PlayBlendAnim_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_1() override;
    ADDRESSVF(0x00688630, PlayBlendAnim_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x007BF420, "?Manipulator_Z_vftable_14@PlayBlendAnim_Z@@UAEXXZ");
    virtual void Manipulator_Z_vftable_14() override;
    ADDRESSSYMBOL(0x007BF960, "?Manipulator_Z_vftable_17@PlayBlendAnim_Z@@UAEXH@Z");
    virtual void Manipulator_Z_vftable_17(int) override;
    virtual void ManipulatorSceneDraw_Z_vftable_19(int) override;
    ADDRESSVF(0x007BF5D0, PlayBlendAnim_Z, BasePlayAnim_Z_vftable_20);
    virtual void BasePlayAnim_Z_vftable_20() override;
    ADDRESSSYMBOL(0x007BF780, "?BasePlayAnim_Z_vftable_22@PlayBlendAnim_Z@@UAEXHH@Z");
    virtual void BasePlayAnim_Z_vftable_22(int, int) override;
    ADDRESSSYMBOL(0x007BF710, "?BasePlayAnim_Z_vftable_23@PlayBlendAnim_Z@@UAEXHHHH@Z");
    virtual void BasePlayAnim_Z_vftable_23(int, int, int, int) override;
    virtual void BasePlayAnim_Z_vftable_24(int) override;
    ADDRESSVF(0x006884E0, PlayBlendAnim_Z, BasePlayAnim_Z_vftable_26);
    virtual void BasePlayAnim_Z_vftable_26() override;
    ADDRESSVF(0x007BF8E0, PlayBlendAnim_Z, BasePlayAnim_Z_vftable_27);
    virtual void BasePlayAnim_Z_vftable_27() override;
    ADDRESSSYMBOL(0x007BF900, "?BasePlayAnim_Z_vftable_28@PlayBlendAnim_Z@@UAEXHH@Z");
    virtual void BasePlayAnim_Z_vftable_28(int, int) override;
    ADDRESSVF(0x007BF920, PlayBlendAnim_Z, BasePlayAnim_Z_vftable_29);
    virtual void BasePlayAnim_Z_vftable_29() override;
    virtual void BasePlayAnim_Z_vftable_30(int) override;
    virtual void BasePlayAnim_Z_vftable_31(int, int) override;
    ADDRESSVF(0x00688500, PlayBlendAnim_Z, BasePlayAnim_Z_vftable_32);
    virtual void BasePlayAnim_Z_vftable_32() override;
    ADDRESSSYMBOL(0x00688520, "?BasePlayAnim_Z_vftable_33@PlayBlendAnim_Z@@UAEXHH@Z");
    virtual void BasePlayAnim_Z_vftable_33(int, int) override;
    ADDRESSSYMBOL(0x00688540, "?BasePlayAnim_Z_vftable_34@PlayBlendAnim_Z@@UAEXHH@Z");
    virtual void BasePlayAnim_Z_vftable_34(int, int) override;
    ADDRESSVF(0x00688560, PlayBlendAnim_Z, BasePlayAnim_Z_vftable_35);
    virtual void BasePlayAnim_Z_vftable_35() override;
    ADDRESSSYMBOL(0x00688570, "?BasePlayAnim_Z_vftable_36@PlayBlendAnim_Z@@UAEXH@Z");
    virtual void BasePlayAnim_Z_vftable_36(int) override;
    ADDRESSSYMBOL(0x007C01F0, "?BasePlayAnim_Z_vftable_37@PlayBlendAnim_Z@@UAEDHHHHH@Z");
    virtual char BasePlayAnim_Z_vftable_37(int, int, int, int, int) override;
    char data[388];
};

ADDRESSVFTABLE(0x009C1464, CVScrollBar_G);
class __declspec(dllexport) CVScrollBar_G : public CScrollBar_G
{
public:
    ADDRESSVF(0x005A0EA0, CVScrollBar_G, CWindowHierarchy_G_vftable_0);
    virtual void CWindowHierarchy_G_vftable_0() override;
    ADDRESSVF(0x005A0EE0, CVScrollBar_G, CWindow_G_vftable_15);
    virtual void CWindow_G_vftable_15() override;
    virtual void CWindow_G_vftable_16() override;
    ADDRESSVF(0x005A10A0, CVScrollBar_G, CScrollBar_G_vftable_31);
    virtual void CScrollBar_G_vftable_31() override;
};

ADDRESSVFTABLE(0x009B845C, OfflineMissionVolumeAgent_G);
class __declspec(dllexport) OfflineMissionVolumeAgent_G : public VolumeDelayedStart_G
{
public:
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x005457D0, OfflineMissionVolumeAgent_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSVF(0x00574530, OfflineMissionVolumeAgent_G, BaseObject_Z_vftable_13);
    virtual void BaseObject_Z_vftable_13() override;
    ADDRESSSYMBOL(0x00545850, "?ABC_Agent_vftable_14@OfflineMissionVolumeAgent_G@@UAEHXZ");
    virtual int ABC_Agent_vftable_14() override;
    ADDRESSVF(0x00545860, OfflineMissionVolumeAgent_G, ABC_Agent_vftable_15);
    virtual void ABC_Agent_vftable_15() override;
    ADDRESSSYMBOL(0x00545870, "?ABC_Agent_vftable_16@OfflineMissionVolumeAgent_G@@UAEXH@Z");
    virtual void ABC_Agent_vftable_16(int) override;
    ADDRESSVF(0x005458B0, OfflineMissionVolumeAgent_G, ABC_Agent_vftable_17);
    virtual void ABC_Agent_vftable_17() override;
    ADDRESSSYMBOL(0x005744F0, "?Agent_Z_vftable_20@OfflineMissionVolumeAgent_G@@UAEXXZ");
    virtual void Agent_Z_vftable_20() override;
    ADDRESSVF(0x005746F0, OfflineMissionVolumeAgent_G, Agent_Z_vftable_24);
    virtual void Agent_Z_vftable_24() override;
    ADDRESSSYMBOL(0x005745A0, "?VolumeAgent_Z_vftable_42@OfflineMissionVolumeAgent_G@@UAEXH@Z");
    virtual void VolumeAgent_Z_vftable_42(int) override;
    ADDRESSSYMBOL(0x00574690, "?VolumeAgent_Z_vftable_44@OfflineMissionVolumeAgent_G@@UAEXH@Z");
    virtual void VolumeAgent_Z_vftable_44(int) override;
    ADDRESSSYMBOL(0x00574610, "?VolumeDelayedStart_G_vftable_46@OfflineMissionVolumeAgent_G@@UAEXH@Z");
    virtual void VolumeDelayedStart_G_vftable_46(int) override;
    ADDRESSVF(0x00574540, OfflineMissionVolumeAgent_G, OfflineMissionVolumeAgent_G_vftable_47);
    virtual void OfflineMissionVolumeAgent_G_vftable_47();
    char data[8];
};

ADDRESSVFTABLE(0x009D2ADC, Surface_Z);
class __declspec(dllexport) Surface_Z : public Points_Z
{
public:
    ADDRESSVF(0x007BA320, Surface_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x0080F220, "?BaseObject_Z_vftable_3@Surface_Z@@UAEXH@Z");
    virtual void BaseObject_Z_vftable_3(int) override;
    ADDRESSSYMBOL(0x0080F610, "?BaseObject_Z_vftable_4@Surface_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_4() override;
    ADDRESSSYMBOL(0x0080F6D0, "?BaseObject_Z_vftable_5@Surface_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_5() override;
    ADDRESSSYMBOL(0x007BA4F0, "?BaseObject_Z_vftable_12@Surface_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_12() override;
    ADDRESSVF(0x007BA470, Surface_Z, BaseObject_Z_vftable_13);
    virtual void BaseObject_Z_vftable_13() override;
    ADDRESSSYMBOL(0x0080F840, "?Object_Z_vftable_29@Surface_Z@@UAEDHHHHHHHH@Z");
    virtual char Object_Z_vftable_29(int, int, int, int, int, int, int, int) override;
    ADDRESSSYMBOL(0x00810940, "?Object_Z_vftable_30@Surface_Z@@UAEDHHHHHHHH@Z");
    virtual char Object_Z_vftable_30(int, int, int, int, int, int, int, int) override;
    ADDRESSSYMBOL(0x00812400, "?Object_Z_vftable_31@Surface_Z@@UAEDHHHHHHHH@Z");
    virtual char Object_Z_vftable_31(int, int, int, int, int, int, int, int) override;
    ADDRESSSYMBOL(0x00812F20, "?Object_Z_vftable_32@Surface_Z@@UAEDHHHHHHHH@Z");
    virtual char Object_Z_vftable_32(int, int, int, int, int, int, int, int) override;
    ADDRESSSYMBOL(0x00812120, "?Object_Z_vftable_34@Surface_Z@@UAEHHHHHHHHH@Z");
    virtual int Object_Z_vftable_34(int, int, int, int, int, int, int, int) override;
    ADDRESSSYMBOL(0x0080FF70, "?Object_Z_vftable_37@Surface_Z@@UAEDHHHH@Z");
    virtual char Object_Z_vftable_37(int, int, int, int) override;
    ADDRESSVF(0x008135A0, Surface_Z, Object_Z_vftable_38);
    virtual void Object_Z_vftable_38() override;
    ADDRESSVF(0x00813060, Surface_Z, Object_Z_vftable_39);
    virtual void Object_Z_vftable_39() override;
    ADDRESSSYMBOL(0x007BBD00, "?Object_Z_vftable_40@Surface_Z@@UAEPAXH@Z");
    virtual void *Object_Z_vftable_40(int) override;
    ADDRESSSYMBOL(0x007BBCF0, "?Object_Z_vftable_42@Surface_Z@@UAEPAXXZ");
    virtual void *Object_Z_vftable_42() override;
    ADDRESSSYMBOL(0x007BBCE0, "?Points_Z_vftable_43@Surface_Z@@UAEHXZ");
    virtual int Points_Z_vftable_43() override;
    ADDRESSVF(0x007BBCD0, Surface_Z, Surface_Z_vftable_44);
    virtual void Surface_Z_vftable_44();
    char data[84];
};

ADDRESSVFTABLE(0x009B0FB4, IT_PANORAMAPOINTManipulator_G);
class __declspec(dllexport) IT_PANORAMAPOINTManipulator_G : public IT_SPINCOLLECTManipulator_G
{
public:
    ADDRESSVF(0x004D5E20, IT_PANORAMAPOINTManipulator_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
};

ADDRESSVFTABLE(0x009A4A7C, BackGlobalInGameData_G);
class __declspec(dllexport) BackGlobalInGameData_G : public BaseInGameDatas_G
{
public:
    ADDRESSSYMBOL(0x0043FC30, "?BaseObject_Z_vftable_0@BackGlobalInGameData_G@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x0043FBE0, BackGlobalInGameData_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x0043FDA0, "?Manipulator_Z_vftable_17@BackGlobalInGameData_G@@UAEXH@Z");
    virtual void Manipulator_Z_vftable_17(int) override;
    ADDRESSSYMBOL(0x0043FC50, "?ManipulatorDraw_Z_vftable_19@BackGlobalInGameData_G@@UAEXH@Z");
    virtual void ManipulatorDraw_Z_vftable_19(int) override;
    ADDRESSSYMBOL(0x0043FC70, "?BaseInGameDatas_G_vftable_24@BackGlobalInGameData_G@@UAEXXZ");
    virtual void BaseInGameDatas_G_vftable_24() override;
    virtual void *BaseInGameDatas_G_vftable_25() override;
    virtual void *BaseInGameDatas_G_vftable_28() override;
    virtual int BaseInGameDatas_G_vftable_29() override;
    virtual void *BaseInGameDatas_G_vftable_30() override;
    virtual int BaseInGameDatas_G_vftable_31() override;
    ADDRESSVF(0x0043FD50, BackGlobalInGameData_G, BaseInGameDatas_G_vftable_35);
    virtual void BaseInGameDatas_G_vftable_35() override;
    char data[5032];
};

ADDRESSVFTABLE(0x009AFD7C, MotherTornadoManipulator_G);
class __declspec(dllexport) MotherTornadoManipulator_G : public TornadoManipulator_G
{
public:
    ADDRESSVF(0x004D56B0, MotherTornadoManipulator_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x004D55D0, "?Manipulator_Z_vftable_17@MotherTornadoManipulator_G@@UAEXH@Z");
    virtual void Manipulator_Z_vftable_17(int) override;
    ADDRESSSYMBOL(0x004D5630, "?TornadoManipulator_G_vftable_103@MotherTornadoManipulator_G@@UAEXXZ");
    virtual void TornadoManipulator_G_vftable_103() override;
    ADDRESSVF(0x004D5670, MotherTornadoManipulator_G, TornadoManipulator_G_vftable_105);
    virtual void TornadoManipulator_G_vftable_105() override;
};

ADDRESSVFTABLE(0x009D27EC, Mesh_Z);
class __declspec(dllexport) Mesh_Z : public Points_Z
{
public:
    ADDRESSVF(0x007B3040, Mesh_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x00808D80, "?BaseObject_Z_vftable_3@Mesh_Z@@UAEXH@Z");
    virtual void BaseObject_Z_vftable_3(int) override;
    ADDRESSSYMBOL(0x00809330, "?BaseObject_Z_vftable_4@Mesh_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_4() override;
    ADDRESSSYMBOL(0x008093F0, "?BaseObject_Z_vftable_5@Mesh_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_5() override;
    ADDRESSVF(0x00808CB0, Mesh_Z, BaseObject_Z_vftable_7);
    virtual void BaseObject_Z_vftable_7() override;
    ADDRESSSYMBOL(0x00809460, "?BaseObject_Z_vftable_8@Mesh_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_8() override;
    ADDRESSSYMBOL(0x00808D40, "?BaseObject_Z_vftable_9@Mesh_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_9() override;
    ADDRESSSYMBOL(0x00809200, "?BaseObject_Z_vftable_12@Mesh_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_12() override;
    ADDRESSVF(0x007B33E0, Mesh_Z, BaseObject_Z_vftable_13);
    virtual void BaseObject_Z_vftable_13() override;
    ADDRESSSYMBOL(0x007B2E50, "?ResourceObject_Z_vftable_15@Mesh_Z@@UAEXH@Z");
    virtual void ResourceObject_Z_vftable_15(int) override;
    ADDRESSSYMBOL(0x0080A280, "?Object_Z_vftable_16@Mesh_Z@@UAEXHH@Z");
    virtual void Object_Z_vftable_16(int, int) override;
    ADDRESSSYMBOL(0x007B34B0, "?Object_Z_vftable_20@Mesh_Z@@UAEHHHH@Z");
    virtual int Object_Z_vftable_20(int, int, int) override;
    ADDRESSSYMBOL(0x007B3460, "?Object_Z_vftable_21@Mesh_Z@@UAEHHH@Z");
    virtual int Object_Z_vftable_21(int, int) override;
    ADDRESSSYMBOL(0x007B35C0, "?Object_Z_vftable_22@Mesh_Z@@UAEHHH@Z");
    virtual int Object_Z_vftable_22(int, int) override;
    ADDRESSSYMBOL(0x007B3560, "?Object_Z_vftable_23@Mesh_Z@@UAEHHHH@Z");
    virtual int Object_Z_vftable_23(int, int, int) override;
    ADDRESSSYMBOL(0x007B3510, "?Object_Z_vftable_24@Mesh_Z@@UAEHHH@Z");
    virtual int Object_Z_vftable_24(int, int) override;
    ADDRESSSYMBOL(0x007B3600, "?Object_Z_vftable_25@Mesh_Z@@UAEHHH@Z");
    virtual int Object_Z_vftable_25(int, int) override;
    ADDRESSSYMBOL(0x0080A3C0, "?Object_Z_vftable_29@Mesh_Z@@UAEDHHHHHHHH@Z");
    virtual char Object_Z_vftable_29(int, int, int, int, int, int, int, int) override;
    ADDRESSSYMBOL(0x0080ABE0, "?Object_Z_vftable_30@Mesh_Z@@UAEDHHHHHHHH@Z");
    virtual char Object_Z_vftable_30(int, int, int, int, int, int, int, int) override;
    ADDRESSSYMBOL(0x0080B280, "?Object_Z_vftable_31@Mesh_Z@@UAEDHHHHHHHH@Z");
    virtual char Object_Z_vftable_31(int, int, int, int, int, int, int, int) override;
    virtual char Object_Z_vftable_32(int, int, int, int, int, int, int, int) override;
    ADDRESSSYMBOL(0x0080AF40, "?Object_Z_vftable_33@Mesh_Z@@UAEHHHHHHHHH@Z");
    virtual int Object_Z_vftable_33(int, int, int, int, int, int, int, int) override;
    ADDRESSSYMBOL(0x0080B1D0, "?Object_Z_vftable_34@Mesh_Z@@UAEHHHHHHHHH@Z");
    virtual int Object_Z_vftable_34(int, int, int, int, int, int, int, int) override;
    ADDRESSSYMBOL(0x0080B070, "?Object_Z_vftable_35@Mesh_Z@@UAEHHHHHHHHH@Z");
    virtual int Object_Z_vftable_35(int, int, int, int, int, int, int, int) override;
    ADDRESSSYMBOL(0x0080A6A0, "?Object_Z_vftable_37@Mesh_Z@@UAEDHHHH@Z");
    virtual char Object_Z_vftable_37(int, int, int, int) override;
    ADDRESSVF(0x007B3640, Mesh_Z, Object_Z_vftable_38);
    virtual void Object_Z_vftable_38() override;
    ADDRESSVF(0x007B3800, Mesh_Z, Object_Z_vftable_39);
    virtual void Object_Z_vftable_39() override;
    ADDRESSSYMBOL(0x007B2E80, "?Object_Z_vftable_40@Mesh_Z@@UAEPAXH@Z");
    virtual void *Object_Z_vftable_40(int) override;
    ADDRESSSYMBOL(0x007B2E90, "?Object_Z_vftable_41@Mesh_Z@@UAEHXZ");
    virtual int Object_Z_vftable_41() override;
    ADDRESSSYMBOL(0x007B2EA0, "?Object_Z_vftable_42@Mesh_Z@@UAEPAXXZ");
    virtual void *Object_Z_vftable_42() override;
    ADDRESSSYMBOL(0x007B2E70, "?Points_Z_vftable_43@Mesh_Z@@UAEHXZ");
    virtual int Points_Z_vftable_43() override;
    char data[228];
};

ADDRESSVFTABLE(0x009A3424, GameLogicAgent_G);
class __declspec(dllexport) GameLogicAgent_G : public LogicAgent_G
{
public:
    ADDRESSSYMBOL(0x00431B70, "?BaseObject_Z_vftable_0@GameLogicAgent_G@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x004318D0, GameLogicAgent_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSVF(0x00431CA0, GameLogicAgent_G, BaseObject_Z_vftable_13);
    virtual void BaseObject_Z_vftable_13() override;
    ADDRESSSYMBOL(0x00431830, "?ABC_Agent_vftable_14@GameLogicAgent_G@@UAEHXZ");
    virtual int ABC_Agent_vftable_14() override;
    ADDRESSVF(0x00431840, GameLogicAgent_G, ABC_Agent_vftable_15);
    virtual void ABC_Agent_vftable_15() override;
    ADDRESSSYMBOL(0x00431850, "?ABC_Agent_vftable_16@GameLogicAgent_G@@UAEXH@Z");
    virtual void ABC_Agent_vftable_16(int) override;
    ADDRESSVF(0x00431880, GameLogicAgent_G, ABC_Agent_vftable_17);
    virtual void ABC_Agent_vftable_17() override;
    ADDRESSSYMBOL(0x00431C60, "?Agent_Z_vftable_20@GameLogicAgent_G@@UAEXXZ");
    virtual void Agent_Z_vftable_20() override;
    virtual void LogicAgent_G_vftable_39() override;
    virtual int LogicAgent_G_vftable_40() override;
    ADDRESSSYMBOL(0x00431CC0, "?LogicAgent_G_vftable_41@GameLogicAgent_G@@UAEDHHH@Z");
    virtual char LogicAgent_G_vftable_41(int, int, int) override;
    ADDRESSSYMBOL(0x00431DA0, "?LogicAgent_G_vftable_42@GameLogicAgent_G@@UAEDXZ");
    virtual char LogicAgent_G_vftable_42() override;
    ADDRESSSYMBOL(0x00431C90, "?LogicAgent_G_vftable_43@GameLogicAgent_G@@UAEXXZ");
    virtual void LogicAgent_G_vftable_43() override;
    ADDRESSSYMBOL(0x00431FD0, "?LogicAgent_G_vftable_44@GameLogicAgent_G@@UAEXH@Z");
    virtual void LogicAgent_G_vftable_44(int) override;
    ADDRESSVF(0x004320B0, GameLogicAgent_G, LogicAgent_G_vftable_45);
    virtual void LogicAgent_G_vftable_45() override;
    ADDRESSVF(0x00432B50, GameLogicAgent_G, GameLogicAgent_G_vftable_47);
    virtual void GameLogicAgent_G_vftable_47();
    ADDRESSVF(0x004328C0, GameLogicAgent_G, GameLogicAgent_G_vftable_48);
    virtual void GameLogicAgent_G_vftable_48();
    char data[4];
};

ADDRESSVFTABLE(0x009C2F40, GameCar_G);
class __declspec(dllexport) GameCar_G : public GameMoving3DObject_G
{
public:
    ADDRESSVF(0x005B3820, GameCar_G, ComObj_Z_vftable_0);
    virtual void ComObj_Z_vftable_0() override;
    ADDRESSSYMBOL(0x005AB330, "?ComObj_Z_vftable_1@GameCar_G@@UAEXXZ");
    virtual void ComObj_Z_vftable_1() override;
    virtual void ComObj_Z_vftable_2() override;
    virtual void ComObj_Z_vftable_3(int) override = 0;
    virtual void ComObj_Z_vftable_4(int) override = 0;
    ADDRESSVF(0x005B3780, GameCar_G, ComObj_Z_vftable_9);
    virtual void ComObj_Z_vftable_9() override;
};

ADDRESSVFTABLE(0x009C0D8C, CMovie_G);
class __declspec(dllexport) CMovie_G : public CBitmap_G
{
public:
    ADDRESSVF(0x0059D410, CMovie_G, CWindowHierarchy_G_vftable_0);
    virtual void CWindowHierarchy_G_vftable_0() override;
    ADDRESSVF(0x0059D4F0, CMovie_G, CWindow_G_vftable_17);
    virtual void CWindow_G_vftable_17() override;
    virtual void CWindow_G_vftable_23() override;
    ADDRESSSYMBOL(0x0059D680, "?CWindow_G_vftable_24@CMovie_G@@UAEXXZ");
    virtual void CWindow_G_vftable_24() override;
};

ADDRESSVFTABLE(0x009BD27C, HubVolumeAgent_G);
class __declspec(dllexport) HubVolumeAgent_G : public VolumeDelayedStart_G
{
public:
    ADDRESSSYMBOL(0x005770D0, "?BaseObject_Z_vftable_0@HubVolumeAgent_G@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x00577080, HubVolumeAgent_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x00576F80, "?ABC_Agent_vftable_14@HubVolumeAgent_G@@UAEHXZ");
    virtual int ABC_Agent_vftable_14() override;
    ADDRESSVF(0x00576F90, HubVolumeAgent_G, ABC_Agent_vftable_15);
    virtual void ABC_Agent_vftable_15() override;
    ADDRESSSYMBOL(0x00576FA0, "?ABC_Agent_vftable_16@HubVolumeAgent_G@@UAEXH@Z");
    virtual void ABC_Agent_vftable_16(int) override;
    ADDRESSVF(0x00576FE0, HubVolumeAgent_G, ABC_Agent_vftable_17);
    virtual void ABC_Agent_vftable_17() override;
    ADDRESSSYMBOL(0x00577130, "?Agent_Z_vftable_20@HubVolumeAgent_G@@UAEXXZ");
    virtual void Agent_Z_vftable_20() override;
    ADDRESSVF(0x00577190, HubVolumeAgent_G, Agent_Z_vftable_24);
    virtual void Agent_Z_vftable_24() override;
    ADDRESSVF(0x005771B0, HubVolumeAgent_G, Agent_Z_vftable_25);
    virtual void Agent_Z_vftable_25() override;
    ADDRESSSYMBOL(0x00577C90, "?VolumeAgent_Z_vftable_44@HubVolumeAgent_G@@UAEXH@Z");
    virtual void VolumeAgent_Z_vftable_44(int) override;
    ADDRESSSYMBOL(0x00577BF0, "?VolumeDelayedStart_G_vftable_46@HubVolumeAgent_G@@UAEXH@Z");
    virtual void VolumeDelayedStart_G_vftable_46(int) override;
};

ADDRESSVFTABLE(0x009C076C, CCheckbox_G);
class __declspec(dllexport) CCheckbox_G : public CButtonBase_G
{
public:
    ADDRESSVF(0x00599E40, CCheckbox_G, CWindowHierarchy_G_vftable_0);
    virtual void CWindowHierarchy_G_vftable_0() override;
    ADDRESSVF(0x0059A160, CCheckbox_G, CWindow_G_vftable_25);
    virtual void CWindow_G_vftable_25() override;
    ADDRESSVF(0x0059A100, CCheckbox_G, CWindow_G_vftable_26);
    virtual void CWindow_G_vftable_26() override;
    ADDRESSVF(0x0059A0C0, CCheckbox_G, CWindow_G_vftable_27);
    virtual void CWindow_G_vftable_27() override;
    ADDRESSSYMBOL(0x0059A210, "?CButtonBase_G_vftable_31@CCheckbox_G@@UAEXXZ");
    virtual void CButtonBase_G_vftable_31() override;
    ADDRESSVF(0x0059A060, CCheckbox_G, CButtonBase_G_vftable_32);
    virtual void CButtonBase_G_vftable_32() override;
    ADDRESSVF(0x0059A090, CCheckbox_G, CButtonBase_G_vftable_33);
    virtual void CButtonBase_G_vftable_33() override;
    ADDRESSVF(0x00599FA0, CCheckbox_G, CCheckbox_G_vftable_35);
    virtual void CCheckbox_G_vftable_35();
    ADDRESSVF(0x0059A000, CCheckbox_G, CCheckbox_G_vftable_36);
    virtual void CCheckbox_G_vftable_36();
};

ADDRESSVFTABLE(0x009B00CC, IT_DynPilotMove_G);
class __declspec(dllexport) IT_DynPilotMove_G : public PhysicObj_G
{
public:
    ADDRESSSYMBOL(0x00601E50, "?BaseObject_Z_vftable_0@IT_DynPilotMove_G@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x004D57E0, IT_DynPilotMove_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x00601EA0, "?Manipulator_Z_vftable_14@IT_DynPilotMove_G@@UAEXXZ");
    virtual void Manipulator_Z_vftable_14() override;
    ADDRESSSYMBOL(0x00601E00, "?PhysicObj_Z_vftable_129@IT_DynPilotMove_G@@UAEXXZ");
    virtual void PhysicObj_Z_vftable_129() override;
    ADDRESSSYMBOL(0x00601F50, "?PhysicObj_Z_vftable_139@IT_DynPilotMove_G@@UAEXHH@Z");
    virtual void PhysicObj_Z_vftable_139(int, int) override;
    ADDRESSVF(0x00601EE0, IT_DynPilotMove_G, IT_DynPilotMove_G_vftable_143);
    virtual void IT_DynPilotMove_G_vftable_143();
    char data[24];
};

ADDRESSVFTABLE(0x009D5134, ParticlesDataPC_Z);
class __declspec(dllexport) ParticlesDataPC_Z : public ParticlesData_Z
{
public:
    ADDRESSVF(0x0081C330, ParticlesDataPC_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x00841660, "?ObjectDatas_Z_vftable_22@ParticlesDataPC_Z@@UAEXH@Z");
    virtual void ObjectDatas_Z_vftable_22(int) override;
};

ADDRESSVFTABLE(0x009DB5B4, RotShapeData_Z);
class __declspec(dllexport) RotShapeData_Z : public PointsDatas_Z
{
public:
    ADDRESSVF(0x0087D4F0, RotShapeData_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x0087CB40, "?BaseObject_Z_vftable_3@RotShapeData_Z@@UAEXH@Z");
    virtual void BaseObject_Z_vftable_3(int) override;
    ADDRESSVF(0x0087D590, RotShapeData_Z, ObjectDatas_Z_vftable_18);
    virtual void ObjectDatas_Z_vftable_18() override;
    virtual void RotShapeData_Z_vftable_26(int, int, int, int);
    char data[28];
};

ADDRESSVFTABLE(0x009C4A2C, MenuItemButton_G);
class __declspec(dllexport) MenuItemButton_G : public MenuItemButtonTT_G
{
public:
    ADDRESSVF(0x006109F0, MenuItemButton_G, MenuItem_G_vftable_0);
    virtual void MenuItem_G_vftable_0() override;
    virtual int MenuItem_G_vftable_6() override;
    ADDRESSVF(0x00610980, MenuItemButton_G, MenuItem_G_vftable_7);
    virtual void MenuItem_G_vftable_7() override;
    ADDRESSVF(0x006109A0, MenuItemButton_G, MenuItem_G_vftable_8);
    virtual void MenuItem_G_vftable_8() override;
    ADDRESSVF(0x00610930, MenuItemButton_G, MenuItem_G_vftable_9);
    virtual void MenuItem_G_vftable_9() override;
    ADDRESSVF(0x00610A30, MenuItemButton_G, MenuItemVirtualLabel_G_vftable_10);
    virtual void MenuItemVirtualLabel_G_vftable_10() override;
    ADDRESSVF(0x00610A40, MenuItemButton_G, MenuItemLabelTT_G_vftable_14);
    virtual void MenuItemLabelTT_G_vftable_14() override;
};

ADDRESSVFTABLE(0x009C6C94, AnimatedAgent_Z);
class __declspec(dllexport) AnimatedAgent_Z : public AnimatedMsgAgent_Z
{
public:
    ADDRESSSYMBOL(0x00667170, "?BaseObject_Z_vftable_0@AnimatedAgent_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x00667130, AnimatedAgent_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSVF(0x00667690, AnimatedAgent_Z, BaseObject_Z_vftable_13);
    virtual void BaseObject_Z_vftable_13() override;
    ADDRESSSYMBOL(0x0041A790, "?ABC_Agent_vftable_14@AnimatedAgent_Z@@UAEHXZ");
    virtual int ABC_Agent_vftable_14() override;
    ADDRESSVF(0x00667070, AnimatedAgent_Z, ABC_Agent_vftable_15);
    virtual void ABC_Agent_vftable_15() override;
    ADDRESSSYMBOL(0x0041A890, "?ABC_Agent_vftable_16@AnimatedAgent_Z@@UAEXH@Z");
    virtual void ABC_Agent_vftable_16(int) override;
    ADDRESSVF(0x0041A780, AnimatedAgent_Z, ABC_Agent_vftable_17);
    virtual void ABC_Agent_vftable_17() override;
    ADDRESSSYMBOL(0x00668190, "?ABC_Agent_vftable_18@AnimatedAgent_Z@@UAEXXZ");
    virtual void ABC_Agent_vftable_18() override;
    ADDRESSSYMBOL(0x006681F0, "?ABC_Agent_vftable_19@AnimatedAgent_Z@@UAEXXZ");
    virtual void ABC_Agent_vftable_19() override;
    ADDRESSSYMBOL(0x00667190, "?Agent_Z_vftable_20@AnimatedAgent_Z@@UAEXXZ");
    virtual void Agent_Z_vftable_20() override;
    ADDRESSVF(0x00667220, AnimatedAgent_Z, Agent_Z_vftable_22);
    virtual void Agent_Z_vftable_22() override;
    ADDRESSVF(0x00667430, AnimatedAgent_Z, Agent_Z_vftable_24);
    virtual void Agent_Z_vftable_24() override;
    ADDRESSVF(0x00667590, AnimatedAgent_Z, Agent_Z_vftable_25);
    virtual void Agent_Z_vftable_25() override;
    ADDRESSVF(0x00667650, AnimatedAgent_Z, Agent_Z_vftable_26);
    virtual void Agent_Z_vftable_26() override;
    ADDRESSSYMBOL(0x00667720, "?Agent_Z_vftable_34@AnimatedAgent_Z@@UAEDH@Z");
    virtual char Agent_Z_vftable_34(int) override;
    ADDRESSSYMBOL(0x00667740, "?Agent_Z_vftable_35@AnimatedAgent_Z@@UAEXH@Z");
    virtual void Agent_Z_vftable_35(int) override;
    virtual void AnimatedAgent_Z_vftable_39();
    char data[16];
};

ADDRESSVFTABLE(0x009C2A5C, ServerPublicGame_G);
class __declspec(dllexport) ServerPublicGame_G : public Server_G
{
public:
    ADDRESSVF(0x005AAFD0, ServerPublicGame_G, NetObject_Z_vftable_0);
    virtual void NetObject_Z_vftable_0() override;
    ADDRESSSYMBOL(0x005B6FC0, "?ComObject_Z_vftable_3@ServerPublicGame_G@@UAEXH@Z");
    virtual void ComObject_Z_vftable_3(int) override;
    ADDRESSVF(0x005AAF70, ServerPublicGame_G, ComObject_Z_vftable_6);
    virtual void ComObject_Z_vftable_6() override;
    ADDRESSVF(0x005AAF90, ServerPublicGame_G, ComObject_Z_vftable_8);
    virtual void ComObject_Z_vftable_8() override;
    virtual void ComServer_Z_vftable_17(int) override;
    ADDRESSVF(0x005B7140, ServerPublicGame_G, ServerPublicGame_G_vftable_18);
    virtual void ServerPublicGame_G_vftable_18();
    ADDRESSVF(0x005B7120, ServerPublicGame_G, ServerPublicGame_G_vftable_19);
    virtual void ServerPublicGame_G_vftable_19();
    ADDRESSVF(0x005B7030, ServerPublicGame_G, ServerPublicGame_G_vftable_20);
    virtual void ServerPublicGame_G_vftable_20();
    virtual void ServerPublicGame_G_vftable_21(int);
};

ADDRESSVFTABLE(0x009B0E14, IT_FUELManipulator_G);
class __declspec(dllexport) IT_FUELManipulator_G : public IT_SPINCOLLECTManipulator_G
{
public:
    ADDRESSVF(0x004D5DA0, IT_FUELManipulator_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
};

ADDRESSVFTABLE(0x009D50C4, RotShapePcData_Z);
class __declspec(dllexport) RotShapePcData_Z : public RotShapeData_Z
{
public:
    ADDRESSVF(0x0081C0F0, RotShapePcData_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
};

ADDRESSVFTABLE(0x009C1174, CRotatingList_G);
class __declspec(dllexport) CRotatingList_G : public CListBox_G
{
public:
    ADDRESSVF(0x0059EC40, CRotatingList_G, CWindowHierarchy_G_vftable_0);
    virtual void CWindowHierarchy_G_vftable_0() override;
    ADDRESSVF(0x0059ECB0, CRotatingList_G, CWindow_G_vftable_15);
    virtual void CWindow_G_vftable_15() override;
    ADDRESSVF(0x0059F0A0, CRotatingList_G, CWindow_G_vftable_16);
    virtual void CWindow_G_vftable_16() override;
    ADDRESSVF(0x0059F1E0, CRotatingList_G, CWindow_G_vftable_17);
    virtual void CWindow_G_vftable_17() override;
    virtual void CWindow_G_vftable_18() override;
    ADDRESSSYMBOL(0x0059F140, "?CWindow_G_vftable_21@CRotatingList_G@@UAEDXZ");
    virtual char CWindow_G_vftable_21() override;
    ADDRESSVF(0x0059F820, CRotatingList_G, CWindow_G_vftable_25);
    virtual void CWindow_G_vftable_25() override;
    ADDRESSVF(0x0059F720, CRotatingList_G, CPreviewList_G_vftable_32);
    virtual void CPreviewList_G_vftable_32() override;
    ADDRESSVF(0x0059F250, CRotatingList_G, CPreviewList_G_vftable_38);
    virtual void CPreviewList_G_vftable_38() override;
    ADDRESSVF(0x0059F290, CRotatingList_G, CPreviewList_G_vftable_39);
    virtual void CPreviewList_G_vftable_39() override;
    ADDRESSVF(0x0059F280, CRotatingList_G, CListBox_G_vftable_40);
    virtual void CListBox_G_vftable_40() override;
    virtual char CListBox_G_vftable_41() override;
    virtual char CListBox_G_vftable_42() override;
    virtual void CRotatingList_G_vftable_43();
    virtual void CRotatingList_G_vftable_44();
};

ADDRESSVFTABLE(0x009D7A5C, SkelPc_Z);
class __declspec(dllexport) SkelPc_Z : public Skel_Z
{
public:
    ADDRESSVF(0x008406C0, SkelPc_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x008407C0, "?BaseObject_Z_vftable_5@SkelPc_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_5() override;
    ADDRESSVF(0x008407D0, SkelPc_Z, ObjectDatas_Z_vftable_18);
    virtual void ObjectDatas_Z_vftable_18() override;
    ADDRESSSYMBOL(0x008409B0, "?ObjectDatas_Z_vftable_22@SkelPc_Z@@UAEXH@Z");
    virtual void ObjectDatas_Z_vftable_22(int) override;
};

ADDRESSVFTABLE(0x009D370C, SkinAgent_Z);
class __declspec(dllexport) SkinAgent_Z : public AnimatedAgent_Z
{
public:
    ADDRESSVF(0x007CB0A0, SkinAgent_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x007CAC10, "?ABC_Agent_vftable_14@SkinAgent_Z@@UAEHXZ");
    virtual int ABC_Agent_vftable_14() override;
    ADDRESSVF(0x007CAC20, SkinAgent_Z, ABC_Agent_vftable_15);
    virtual void ABC_Agent_vftable_15() override;
    ADDRESSSYMBOL(0x007CAC30, "?ABC_Agent_vftable_16@SkinAgent_Z@@UAEXH@Z");
    virtual void ABC_Agent_vftable_16(int) override;
    ADDRESSVF(0x007CAC70, SkinAgent_Z, ABC_Agent_vftable_17);
    virtual void ABC_Agent_vftable_17() override;
    ADDRESSVF(0x007CAD30, SkinAgent_Z, SkinAgent_Z_vftable_40);
    virtual void SkinAgent_Z_vftable_40();
};

ADDRESSVFTABLE(0x009CC940, ComPipeCRCMessage_Z);
class __declspec(dllexport) ComPipeCRCMessage_Z : public ComPipeStatisticsMessage_Z
{
public:
    ADDRESSVF(0x0072D3A0, ComPipeCRCMessage_Z, ComPipeMessage_Z_vftable_7);
    virtual void ComPipeMessage_Z_vftable_7() override;
    ADDRESSVF(0x0072D440, ComPipeCRCMessage_Z, ComPipeMessage_Z_vftable_8);
    virtual void ComPipeMessage_Z_vftable_8() override;
};

ADDRESSVFTABLE(0x009B06F4, RollingBushMove_G);
class __declspec(dllexport) RollingBushMove_G : public IT_DYNOBJMove_G
{
public:
    ADDRESSVF(0x004D5B90, RollingBushMove_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x005158C0, "?PhysicObj_Z_vftable_129@RollingBushMove_G@@UAEXXZ");
    virtual void PhysicObj_Z_vftable_129() override;
};

ADDRESSVFTABLE(0x009C25C4, FuelNetworkPeerToPeer_XBL);
class __declspec(dllexport) FuelNetworkPeerToPeer_XBL : public NetWorkPeerToPeer_XBL
{
public:
    ADDRESSVF(0x005A70C0, FuelNetworkPeerToPeer_XBL, NetObject_Z_vftable_0);
    virtual void NetObject_Z_vftable_0() override;
    ADDRESSSYMBOL(0x005A6940, "?NetWorkPeerToPeer_Z_vftable_32@FuelNetworkPeerToPeer_XBL@@UAEHXZ");
    virtual int NetWorkPeerToPeer_Z_vftable_32() override;
    virtual int NetWorkPeerToPeer_XBL_vftable_40() override;
    virtual int NetWorkPeerToPeer_XBL_vftable_41() override;
    ADDRESSSYMBOL(0x005A6960, "?NetWorkPeerToPeer_XBL_vftable_42@FuelNetworkPeerToPeer_XBL@@UAEHH@Z");
    virtual int NetWorkPeerToPeer_XBL_vftable_42(int) override;
    ADDRESSSYMBOL(0x005A69E0, "?NetWorkPeerToPeer_XBL_vftable_43@FuelNetworkPeerToPeer_XBL@@UAEHH@Z");
    virtual int NetWorkPeerToPeer_XBL_vftable_43(int) override;
    virtual int NetWorkPeerToPeer_XBL_vftable_44() override;
    ADDRESSVF(0x005A6AA0, FuelNetworkPeerToPeer_XBL, NetWorkPeerToPeer_XBL_vftable_45);
    virtual void NetWorkPeerToPeer_XBL_vftable_45() override;
    ADDRESSSYMBOL(0x005A6B70, "?NetWorkPeerToPeer_XBL_vftable_46@FuelNetworkPeerToPeer_XBL@@UAEHH@Z");
    virtual int NetWorkPeerToPeer_XBL_vftable_46(int) override;
    ADDRESSSYMBOL(0x005A6BD0, "?NetWorkPeerToPeer_XBL_vftable_47@FuelNetworkPeerToPeer_XBL@@UAEHH@Z");
    virtual int NetWorkPeerToPeer_XBL_vftable_47(int) override;
};

ADDRESSVFTABLE(0x009D28A4, MeshData_Z);
class __declspec(dllexport) MeshData_Z : public PointsDatas_Z
{
public:
    ADDRESSVF(0x007B3CE0, MeshData_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x00809720, "?BaseObject_Z_vftable_3@MeshData_Z@@UAEXH@Z");
    virtual void BaseObject_Z_vftable_3(int) override;
    ADDRESSVF(0x007B4040, MeshData_Z, BaseObject_Z_vftable_10);
    virtual void BaseObject_Z_vftable_10() override;
    ADDRESSVF(0x007B40B0, MeshData_Z, BaseObject_Z_vftable_11);
    virtual void BaseObject_Z_vftable_11() override;
    ADDRESSVF(0x007B3DD0, MeshData_Z, BaseObject_Z_vftable_13);
    virtual void BaseObject_Z_vftable_13() override;
    ADDRESSVF(0x007B3DE0, MeshData_Z, ObjectDatas_Z_vftable_18);
    virtual void ObjectDatas_Z_vftable_18() override;
    ADDRESSSYMBOL(0x007B3E90, "?ObjectDatas_Z_vftable_23@MeshData_Z@@UAEHHHH@Z");
    virtual int ObjectDatas_Z_vftable_23(int, int, int) override;
    virtual char MeshData_Z_vftable_26(int, int, int);
    char data[88];
};

ADDRESSVFTABLE(0x009ADB7C, LinkedThrownMove_G);
class __declspec(dllexport) LinkedThrownMove_G : public ThrownMove_G
{
public:
    ADDRESSSYMBOL(0x00533010, "?BaseObject_Z_vftable_0@LinkedThrownMove_G@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x004D43B0, LinkedThrownMove_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x00533050, "?Manipulator_Z_vftable_14@LinkedThrownMove_G@@UAEXXZ");
    virtual void Manipulator_Z_vftable_14() override;
    ADDRESSSYMBOL(0x00533130, "?PhysicObj_Z_vftable_129@LinkedThrownMove_G@@UAEXXZ");
    virtual void PhysicObj_Z_vftable_129() override;
    ADDRESSSYMBOL(0x005330C0, "?PhysicObj_Z_vftable_140@LinkedThrownMove_G@@UAEXH@Z");
    virtual void PhysicObj_Z_vftable_140(int) override;
    char data[16];
};

ADDRESSVFTABLE(0x009CC96C, ComPipeCompressedCRCMessage_Z);
class __declspec(dllexport) ComPipeCompressedCRCMessage_Z : public ComPipeCRCMessage_Z
{
public:
    ADDRESSVF(0x0072D5E0, ComPipeCompressedCRCMessage_Z, ComPipeMessage_Z_vftable_7);
    virtual void ComPipeMessage_Z_vftable_7() override;
    ADDRESSVF(0x0072D670, ComPipeCompressedCRCMessage_Z, ComPipeMessage_Z_vftable_8);
    virtual void ComPipeMessage_Z_vftable_8() override;
};

ADDRESSVFTABLE(0x009C0C1C, CLockButton_G);
class __declspec(dllexport) CLockButton_G : public CPushButton_G
{
public:
    ADDRESSVF(0x0059CB00, CLockButton_G, CWindowHierarchy_G_vftable_0);
    virtual void CWindowHierarchy_G_vftable_0() override;
    ADDRESSSYMBOL(0x0059CB90, "?CWindow_G_vftable_22@CLockButton_G@@UAEDXZ");
    virtual char CWindow_G_vftable_22() override;
    ADDRESSVF(0x0059CBC0, CLockButton_G, CWindow_G_vftable_25);
    virtual void CWindow_G_vftable_25() override;
    ADDRESSVF(0x0059CE90, CLockButton_G, CWindow_G_vftable_26);
    virtual void CWindow_G_vftable_26() override;
    ADDRESSVF(0x0059CE60, CLockButton_G, CWindow_G_vftable_27);
    virtual void CWindow_G_vftable_27() override;
    ADDRESSSYMBOL(0x0059CEF0, "?CButtonBase_G_vftable_31@CLockButton_G@@UAEXXZ");
    virtual void CButtonBase_G_vftable_31() override;
    ADDRESSVF(0x0059CDF0, CLockButton_G, CButtonBase_G_vftable_32);
    virtual void CButtonBase_G_vftable_32() override;
    ADDRESSVF(0x0059CE30, CLockButton_G, CButtonBase_G_vftable_33);
    virtual void CButtonBase_G_vftable_33() override;
    ADDRESSVF(0x0059CD30, CLockButton_G, CLockButton_G_vftable_36);
    virtual void CLockButton_G_vftable_36();
    ADDRESSVF(0x0059CD90, CLockButton_G, CLockButton_G_vftable_37);
    virtual void CLockButton_G_vftable_37();
};

ADDRESSVFTABLE(0x009B4D2C, IT_ANIMATED);
class __declspec(dllexport) IT_ANIMATED : public AnimatedAgent_Z
{
public:
    ADDRESSSYMBOL(0x00517F40, "?BaseObject_Z_vftable_0@IT_ANIMATED@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x00517550, IT_ANIMATED, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x005174B0, "?ABC_Agent_vftable_14@IT_ANIMATED@@UAEHXZ");
    virtual int ABC_Agent_vftable_14() override;
    ADDRESSVF(0x005174C0, IT_ANIMATED, ABC_Agent_vftable_15);
    virtual void ABC_Agent_vftable_15() override;
    ADDRESSSYMBOL(0x005174D0, "?ABC_Agent_vftable_16@IT_ANIMATED@@UAEXH@Z");
    virtual void ABC_Agent_vftable_16(int) override;
    ADDRESSVF(0x00517510, IT_ANIMATED, ABC_Agent_vftable_17);
    virtual void ABC_Agent_vftable_17() override;
    ADDRESSSYMBOL(0x00517F80, "?Agent_Z_vftable_20@IT_ANIMATED@@UAEXXZ");
    virtual void Agent_Z_vftable_20() override;
    ADDRESSVF(0x00518070, IT_ANIMATED, Agent_Z_vftable_22);
    virtual void Agent_Z_vftable_22() override;
    ADDRESSVF(0x005180B0, IT_ANIMATED, Agent_Z_vftable_24);
    virtual void Agent_Z_vftable_24() override;
    ADDRESSVF(0x00518150, IT_ANIMATED, Agent_Z_vftable_25);
    virtual void Agent_Z_vftable_25() override;
    ADDRESSVF(0x00517680, IT_ANIMATED, IT_ANIMATED_vftable_40);
    virtual void IT_ANIMATED_vftable_40();
    ADDRESSVF(0x005179C0, IT_ANIMATED, IT_ANIMATED_vftable_41);
    virtual void IT_ANIMATED_vftable_41();
    ADDRESSVF(0x00517C70, IT_ANIMATED, IT_ANIMATED_vftable_42);
    virtual void IT_ANIMATED_vftable_42();
    char data[4];
};

ADDRESSVFTABLE(0x009C05BC, CBitmapPushButton_G);
class __declspec(dllexport) CBitmapPushButton_G : public CLockButton_G
{
public:
    ADDRESSVF(0x00598F80, CBitmapPushButton_G, CWindowHierarchy_G_vftable_0);
    virtual void CWindowHierarchy_G_vftable_0() override;
    ADDRESSVF(0x00598FC0, CBitmapPushButton_G, CWindow_G_vftable_15);
    virtual void CWindow_G_vftable_15() override;
    virtual void CWindow_G_vftable_16() override;
};

ADDRESSVFTABLE(0x009AF63C, IT_DYNCOLLECTMove_G);
class __declspec(dllexport) IT_DYNCOLLECTMove_G : public IT_DYNOBJMove_G
{
public:
    ADDRESSVF(0x004D5250, IT_DYNCOLLECTMove_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x00531310, "?PhysicObj_Z_vftable_141@IT_DYNCOLLECTMove_G@@UAEDHH@Z");
    virtual char PhysicObj_Z_vftable_141(int, int) override;
};

ADDRESSVFTABLE(0x009D7E14, SurfacePc_Z);
class __declspec(dllexport) SurfacePc_Z : public Surface_Z
{
public:
    ADDRESSVF(0x00846E30, SurfacePc_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x00848710, "?BaseObject_Z_vftable_3@SurfacePc_Z@@UAEXH@Z");
    virtual void BaseObject_Z_vftable_3(int) override;
    ADDRESSSYMBOL(0x00872DA0, "?BaseObject_Z_vftable_12@SurfacePc_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_12() override;
    ADDRESSSYMBOL(0x00872DF0, "?Object_Z_vftable_16@SurfacePc_Z@@UAEXHH@Z");
    virtual void Object_Z_vftable_16(int, int) override;
    virtual void Object_Z_vftable_18(int, int, int) override;
};

ADDRESSVFTABLE(0x009C31A4, GameCarServer_G);
class __declspec(dllexport) GameCarServer_G : public GameCar_G
{
public:
    ADDRESSVF(0x005B5930, GameCarServer_G, ComObj_Z_vftable_0);
    virtual void ComObj_Z_vftable_0() override;
    virtual void ComObj_Z_vftable_3(int) override;
    ADDRESSSYMBOL(0x005ADDD0, "?ComObj_Z_vftable_4@GameCarServer_G@@UAEXH@Z");
    virtual void ComObj_Z_vftable_4(int) override;
};

ADDRESSVFTABLE(0x009C4CBC, MenuItemListBox_G);
class __declspec(dllexport) MenuItemListBox_G : public MenuItemButton_G
{
public:
    ADDRESSVF(0x00612790, MenuItemListBox_G, MenuItem_G_vftable_0);
    virtual void MenuItem_G_vftable_0() override;
    ADDRESSSYMBOL(0x00612D20, "?MenuItem_G_vftable_3@MenuItemListBox_G@@UAEXH@Z");
    virtual void MenuItem_G_vftable_3(int) override;
    ADDRESSSYMBOL(0x00612820, "?MenuItem_G_vftable_4@MenuItemListBox_G@@UAEXXZ");
    virtual void MenuItem_G_vftable_4() override;
    virtual int MenuItem_G_vftable_6() override;
    ADDRESSVF(0x00612530, MenuItemListBox_G, MenuItem_G_vftable_7);
    virtual void MenuItem_G_vftable_7() override;
    ADDRESSVF(0x00612550, MenuItemListBox_G, MenuItem_G_vftable_8);
    virtual void MenuItem_G_vftable_8() override;
    ADDRESSVF(0x00612500, MenuItemListBox_G, MenuItem_G_vftable_9);
    virtual void MenuItem_G_vftable_9() override;
};

ADDRESSVFTABLE(0x009C268C, NetWorkPeerToPeer_G);
class __declspec(dllexport) NetWorkPeerToPeer_G : public FuelNetworkPeerToPeer_XBL
{
public:
    ADDRESSVF(0x005A7070, NetWorkPeerToPeer_G, NetObject_Z_vftable_0);
    virtual void NetObject_Z_vftable_0() override;
    ADDRESSVF(0x005AB080, NetWorkPeerToPeer_G, NetWorkServerClient_Z_vftable_9);
    virtual void NetWorkServerClient_Z_vftable_9() override;
    ADDRESSVF(0x005AB0A0, NetWorkPeerToPeer_G, NetWorkServerClient_Z_vftable_10);
    virtual void NetWorkServerClient_Z_vftable_10() override;
    ADDRESSSYMBOL(0x005AB0F0, "?NetWorkPeerToPeer_Z_vftable_31@NetWorkPeerToPeer_G@@UAEPAXH@Z");
    virtual void *NetWorkPeerToPeer_Z_vftable_31(int) override;
};

ADDRESSVFTABLE(0x009D37B4, LodDynAgent_Z);
class __declspec(dllexport) LodDynAgent_Z : public AnimatedAgent_Z
{
public:
    ADDRESSVF(0x007CB2E0, LodDynAgent_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x007CB1B0, "?ABC_Agent_vftable_14@LodDynAgent_Z@@UAEHXZ");
    virtual int ABC_Agent_vftable_14() override;
    ADDRESSVF(0x007CB1C0, LodDynAgent_Z, ABC_Agent_vftable_15);
    virtual void ABC_Agent_vftable_15() override;
    ADDRESSSYMBOL(0x007CB1D0, "?ABC_Agent_vftable_16@LodDynAgent_Z@@UAEXH@Z");
    virtual void ABC_Agent_vftable_16(int) override;
    ADDRESSVF(0x007CB210, LodDynAgent_Z, ABC_Agent_vftable_17);
    virtual void ABC_Agent_vftable_17() override;
};

ADDRESSVFTABLE(0x009D4F2C, MeshPcData_Z);
class __declspec(dllexport) MeshPcData_Z : public MeshData_Z
{
public:
    ADDRESSVF(0x0081BE80, MeshPcData_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
};

ADDRESSVFTABLE(0x009C6DEC, MovingAgent_Z);
class __declspec(dllexport) MovingAgent_Z : public AnimatedAgent_Z
{
public:
    ADDRESSSYMBOL(0x00669380, "?BaseObject_Z_vftable_0@MovingAgent_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x00669340, MovingAgent_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSVF(0x00669790, MovingAgent_Z, BaseObject_Z_vftable_13);
    virtual void BaseObject_Z_vftable_13() override;
    ADDRESSSYMBOL(0x0041A770, "?ABC_Agent_vftable_14@MovingAgent_Z@@UAEHXZ");
    virtual int ABC_Agent_vftable_14() override;
    ADDRESSVF(0x00669280, MovingAgent_Z, ABC_Agent_vftable_15);
    virtual void ABC_Agent_vftable_15() override;
    ADDRESSSYMBOL(0x0041A850, "?ABC_Agent_vftable_16@MovingAgent_Z@@UAEXH@Z");
    virtual void ABC_Agent_vftable_16(int) override;
    ADDRESSVF(0x0041A760, MovingAgent_Z, ABC_Agent_vftable_17);
    virtual void ABC_Agent_vftable_17() override;
    ADDRESSSYMBOL(0x00669510, "?ABC_Agent_vftable_18@MovingAgent_Z@@UAEXXZ");
    virtual void ABC_Agent_vftable_18() override;
    ADDRESSSYMBOL(0x00669570, "?ABC_Agent_vftable_19@MovingAgent_Z@@UAEXXZ");
    virtual void ABC_Agent_vftable_19() override;
    ADDRESSVF(0x00669410, MovingAgent_Z, Agent_Z_vftable_22);
    virtual void Agent_Z_vftable_22() override;
    ADDRESSSYMBOL(0x006694A0, "?Agent_Z_vftable_23@MovingAgent_Z@@UAEXXZ");
    virtual void Agent_Z_vftable_23() override;
    ADDRESSVF(0x006695F0, MovingAgent_Z, Agent_Z_vftable_24);
    virtual void Agent_Z_vftable_24() override;
    ADDRESSVF(0x00669690, MovingAgent_Z, Agent_Z_vftable_25);
    virtual void Agent_Z_vftable_25() override;
    ADDRESSVF(0x00669740, MovingAgent_Z, Agent_Z_vftable_26);
    virtual void Agent_Z_vftable_26() override;
    char data[4];
};

ADDRESSVFTABLE(0x009C2F6C, GameCarClient_G);
class __declspec(dllexport) GameCarClient_G : public GameCar_G
{
public:
    ADDRESSVF(0x005B5210, GameCarClient_G, ComObj_Z_vftable_0);
    virtual void ComObj_Z_vftable_0() override;
    ADDRESSSYMBOL(0x005ABEC0, "?ComObj_Z_vftable_2@GameCarClient_G@@UAEXXZ");
    virtual void ComObj_Z_vftable_2() override;
    ADDRESSSYMBOL(0x005ABF40, "?ComObj_Z_vftable_3@GameCarClient_G@@UAEXH@Z");
    virtual void ComObj_Z_vftable_3(int) override;
    ADDRESSSYMBOL(0x005AC3A0, "?ComObj_Z_vftable_4@GameCarClient_G@@UAEXH@Z");
    virtual void ComObj_Z_vftable_4(int) override;
    ADDRESSVF(0x005ACF70, GameCarClient_G, GameCarClient_G_vftable_10);
    virtual void GameCarClient_G_vftable_10();
};

ADDRESSVFTABLE(0x009C0CBC, CLockCheckbox_G);
class __declspec(dllexport) CLockCheckbox_G : public CCheckbox_G
{
public:
    ADDRESSVF(0x0059CF70, CLockCheckbox_G, CWindowHierarchy_G_vftable_0);
    virtual void CWindowHierarchy_G_vftable_0() override;
    ADDRESSSYMBOL(0x0059CFE0, "?CWindow_G_vftable_22@CLockCheckbox_G@@UAEDXZ");
    virtual char CWindow_G_vftable_22() override;
    ADDRESSVF(0x0059D110, CLockCheckbox_G, CWindow_G_vftable_25);
    virtual void CWindow_G_vftable_25() override;
    ADDRESSVF(0x0059D330, CLockCheckbox_G, CWindow_G_vftable_26);
    virtual void CWindow_G_vftable_26() override;
    ADDRESSVF(0x0059D2F0, CLockCheckbox_G, CWindow_G_vftable_27);
    virtual void CWindow_G_vftable_27() override;
    virtual void CButtonBase_G_vftable_31() override;
    ADDRESSVF(0x0059D270, CLockCheckbox_G, CButtonBase_G_vftable_32);
    virtual void CButtonBase_G_vftable_32() override;
    ADDRESSVF(0x0059D2A0, CLockCheckbox_G, CButtonBase_G_vftable_33);
    virtual void CButtonBase_G_vftable_33() override;
    virtual void CCheckbox_G_vftable_35() override;
    virtual void CCheckbox_G_vftable_36() override;
    ADDRESSVF(0x0059D1B0, CLockCheckbox_G, CLockCheckbox_G_vftable_37);
    virtual void CLockCheckbox_G_vftable_37();
    ADDRESSVF(0x0059D210, CLockCheckbox_G, CLockCheckbox_G_vftable_38);
    virtual void CLockCheckbox_G_vftable_38();
};

ADDRESSVFTABLE(0x009D4E74, MeshPc_Z);
class __declspec(dllexport) MeshPc_Z : public Mesh_Z
{
public:
    ADDRESSVF(0x0081BD90, MeshPc_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x00848880, "?Object_Z_vftable_16@MeshPc_Z@@UAEXHH@Z");
    virtual void Object_Z_vftable_16(int, int) override;
    virtual void Object_Z_vftable_18(int, int, int) override;
    ADDRESSSYMBOL(0x00848FE0, "?Object_Z_vftable_19@MeshPc_Z@@UAEXHH@Z");
    virtual void Object_Z_vftable_19(int, int) override;
};

ADDRESSVFTABLE(0x009C4AF4, MenuItemCounter_G);
class __declspec(dllexport) MenuItemCounter_G : public MenuItemListBox_G
{
public:
    ADDRESSVF(0x00610FB0, MenuItemCounter_G, MenuItem_G_vftable_0);
    virtual void MenuItem_G_vftable_0() override;
    ADDRESSSYMBOL(0x00611290, "?MenuItem_G_vftable_3@MenuItemCounter_G@@UAEXH@Z");
    virtual void MenuItem_G_vftable_3(int) override;
};

ADDRESSVFTABLE(0x009C6EC4, Throwable_Z);
class __declspec(dllexport) Throwable_Z : public MovingAgent_Z
{
public:
    ADDRESSSYMBOL(0x00669EA0, "?BaseObject_Z_vftable_0@Throwable_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x00669E60, Throwable_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x0041A750, "?ABC_Agent_vftable_14@Throwable_Z@@UAEHXZ");
    virtual int ABC_Agent_vftable_14() override;
    ADDRESSVF(0x00669D30, Throwable_Z, ABC_Agent_vftable_15);
    virtual void ABC_Agent_vftable_15() override;
    ADDRESSSYMBOL(0x0041A810, "?ABC_Agent_vftable_16@Throwable_Z@@UAEXH@Z");
    virtual void ABC_Agent_vftable_16(int) override;
    ADDRESSVF(0x0041A740, Throwable_Z, ABC_Agent_vftable_17);
    virtual void ABC_Agent_vftable_17() override;
    ADDRESSSYMBOL(0x00669F10, "?Agent_Z_vftable_20@Throwable_Z@@UAEXXZ");
    virtual void Agent_Z_vftable_20() override;
    ADDRESSSYMBOL(0x00669F50, "?Agent_Z_vftable_30@Throwable_Z@@UAEDH@Z");
    virtual char Agent_Z_vftable_30(int) override;
    ADDRESSSYMBOL(0x00669F70, "?Agent_Z_vftable_31@Throwable_Z@@UAEDH@Z");
    virtual char Agent_Z_vftable_31(int) override;
    ADDRESSSYMBOL(0x0041A1D0, "?Agent_Z_vftable_32@Throwable_Z@@UAEXH@Z");
    virtual void Agent_Z_vftable_32(int) override;
    ADDRESSSYMBOL(0x0041A1C0, "?Agent_Z_vftable_33@Throwable_Z@@UAEXH@Z");
    virtual void Agent_Z_vftable_33(int) override;
    ADDRESSVF(0x00669FD0, Throwable_Z, Throwable_Z_vftable_40);
    virtual void Throwable_Z_vftable_40();
    ADDRESSVF(0x00669F30, Throwable_Z, Throwable_Z_vftable_41);
    virtual void Throwable_Z_vftable_41();
    virtual void Throwable_Z_vftable_42();
    virtual void Throwable_Z_vftable_43();
    virtual void Throwable_Z_vftable_44();
    ADDRESSVF(0x00669F90, Throwable_Z, Throwable_Z_vftable_45);
    virtual void Throwable_Z_vftable_45();
    char data[8];
};

ADDRESSVFTABLE(0x009CC998, ComPipeStampedCompressedCRCMessage_Z);
class __declspec(dllexport) ComPipeStampedCompressedCRCMessage_Z : public ComPipeCompressedCRCMessage_Z
{
public:
    ADDRESSVF(0x0072D730, ComPipeStampedCompressedCRCMessage_Z, ComPipeMessage_Z_vftable_7);
    virtual void ComPipeMessage_Z_vftable_7() override;
    ADDRESSVF(0x0072D790, ComPipeStampedCompressedCRCMessage_Z, ComPipeMessage_Z_vftable_8);
    virtual void ComPipeMessage_Z_vftable_8() override;
};

ADDRESSVFTABLE(0x009CC9C4, ComPipeGroupedCompressedCRCMessage_Z);
class __declspec(dllexport) ComPipeGroupedCompressedCRCMessage_Z : public ComPipeStampedCompressedCRCMessage_Z
{
public:
    ADDRESSSYMBOL(0x0072D8E0, "?ComPipe_Z_vftable_0@ComPipeGroupedCompressedCRCMessage_Z@@UAEXH@Z");
    virtual void ComPipe_Z_vftable_0(int) override;
    ADDRESSSYMBOL(0x0072D870, "?ComPipe_Z_vftable_1@ComPipeGroupedCompressedCRCMessage_Z@@UAEXHH@Z");
    virtual void ComPipe_Z_vftable_1(int, int) override;
    ADDRESSSYMBOL(0x0072D8B0, "?ComPipe_Z_vftable_2@ComPipeGroupedCompressedCRCMessage_Z@@UAEXXZ");
    virtual void ComPipe_Z_vftable_2() override;
    ADDRESSVF(0x0072D930, ComPipeGroupedCompressedCRCMessage_Z, ComPipeMessage_Z_vftable_7);
    virtual void ComPipeMessage_Z_vftable_7() override;
    ADDRESSVF(0x0072D9A0, ComPipeGroupedCompressedCRCMessage_Z, ComPipeMessage_Z_vftable_8);
    virtual void ComPipeMessage_Z_vftable_8() override;
    ADDRESSSYMBOL(0x0072D920, "?ComPipeMessage_Z_vftable_9@ComPipeGroupedCompressedCRCMessage_Z@@UAEDXZ");
    virtual char ComPipeMessage_Z_vftable_9() override;
};

ADDRESSVFTABLE(0x009C08AC, CDynTextPushButton_G);
class __declspec(dllexport) CDynTextPushButton_G : public CLockButton_G
{
public:
    ADDRESSVF(0x0059A800, CDynTextPushButton_G, CWindowHierarchy_G_vftable_0);
    virtual void CWindowHierarchy_G_vftable_0() override;
    ADDRESSVF(0x0059A840, CDynTextPushButton_G, CWindow_G_vftable_15);
    virtual void CWindow_G_vftable_15() override;
    virtual void CWindow_G_vftable_16() override;
};

ADDRESSVFTABLE(0x009C6F94, LodAgent_Z);
class __declspec(dllexport) LodAgent_Z : public Throwable_Z
{
public:
    ADDRESSSYMBOL(0x0066A460, "?BaseObject_Z_vftable_0@LodAgent_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x0066A420, LodAgent_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x0041A730, "?ABC_Agent_vftable_14@LodAgent_Z@@UAEHXZ");
    virtual int ABC_Agent_vftable_14() override;
    ADDRESSVF(0x0066A350, LodAgent_Z, ABC_Agent_vftable_15);
    virtual void ABC_Agent_vftable_15() override;
    ADDRESSSYMBOL(0x0041A7C0, "?ABC_Agent_vftable_16@LodAgent_Z@@UAEXH@Z");
    virtual void ABC_Agent_vftable_16(int) override;
    ADDRESSVF(0x0041A720, LodAgent_Z, ABC_Agent_vftable_17);
    virtual void ABC_Agent_vftable_17() override;
    virtual void LodAgent_Z_vftable_46(int);
    virtual void LodAgent_Z_vftable_47(int);
    virtual void LodAgent_Z_vftable_48(int);
    virtual int LodAgent_Z_vftable_49();
    virtual void LodAgent_Z_vftable_50(int);
    virtual int LodAgent_Z_vftable_51();
};

ADDRESSVFTABLE(0x009CC9F0, ComComputeStatsMessage_Z);
class __declspec(dllexport) ComComputeStatsMessage_Z : public ComPipeGroupedCompressedCRCMessage_Z
{
public:
};

ADDRESSVFTABLE(0x009B48CC, IT_Helico);
class __declspec(dllexport) IT_Helico : public LodAgent_Z
{
public:
    ADDRESSSYMBOL(0x00515280, "?BaseObject_Z_vftable_0@IT_Helico@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x00515240, IT_Helico, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x00515110, "?ABC_Agent_vftable_14@IT_Helico@@UAEHXZ");
    virtual int ABC_Agent_vftable_14() override;
    ADDRESSVF(0x00515120, IT_Helico, ABC_Agent_vftable_15);
    virtual void ABC_Agent_vftable_15() override;
    ADDRESSSYMBOL(0x00515130, "?ABC_Agent_vftable_16@IT_Helico@@UAEXH@Z");
    virtual void ABC_Agent_vftable_16(int) override;
    ADDRESSVF(0x00515150, IT_Helico, ABC_Agent_vftable_17);
    virtual void ABC_Agent_vftable_17() override;
    ADDRESSVF(0x00515310, IT_Helico, Agent_Z_vftable_22);
    virtual void Agent_Z_vftable_22() override;
};

ADDRESSVFTABLE(0x009B5534, PhysAgent_Z);
class __declspec(dllexport) PhysAgent_Z : public LodAgent_Z
{
public:
    ADDRESSSYMBOL(0x00740D90, "?BaseObject_Z_vftable_0@PhysAgent_Z@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x0051CE00, PhysAgent_Z, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x00515860, "?ABC_Agent_vftable_14@PhysAgent_Z@@UAEHXZ");
    virtual int ABC_Agent_vftable_14() override;
    ADDRESSVF(0x0051CE40, PhysAgent_Z, ABC_Agent_vftable_15);
    virtual void ABC_Agent_vftable_15() override;
    ADDRESSSYMBOL(0x005158A0, "?ABC_Agent_vftable_16@PhysAgent_Z@@UAEXH@Z");
    virtual void ABC_Agent_vftable_16(int) override;
    ADDRESSVF(0x00515850, PhysAgent_Z, ABC_Agent_vftable_17);
    virtual void ABC_Agent_vftable_17() override;
    ADDRESSSYMBOL(0x00740DD0, "?Agent_Z_vftable_20@PhysAgent_Z@@UAEXXZ");
    virtual void Agent_Z_vftable_20() override;
    ADDRESSVF(0x007412F0, PhysAgent_Z, Agent_Z_vftable_24);
    virtual void Agent_Z_vftable_24() override;
    ADDRESSVF(0x00741370, PhysAgent_Z, Agent_Z_vftable_25);
    virtual void Agent_Z_vftable_25() override;
};

ADDRESSVFTABLE(0x009A3274, BaseAgent_G);
class __declspec(dllexport) BaseAgent_G : public LodAgent_Z
{
public:
    ADDRESSSYMBOL(0x00431430, "?BaseObject_Z_vftable_0@BaseAgent_G@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x004313F0, BaseAgent_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x0041A710, "?ABC_Agent_vftable_14@BaseAgent_G@@UAEHXZ");
    virtual int ABC_Agent_vftable_14() override;
    ADDRESSVF(0x00431750, BaseAgent_G, ABC_Agent_vftable_15);
    virtual void ABC_Agent_vftable_15() override;
    ADDRESSSYMBOL(0x0041A7A0, "?ABC_Agent_vftable_16@BaseAgent_G@@UAEXH@Z");
    virtual void ABC_Agent_vftable_16(int) override;
    ADDRESSVF(0x0041A700, BaseAgent_G, ABC_Agent_vftable_17);
    virtual void ABC_Agent_vftable_17() override;
    virtual char BaseAgent_G_vftable_52();
    virtual void BaseAgent_G_vftable_53();
    virtual void BaseAgent_G_vftable_54();
    ADDRESSVF(0x00431480, BaseAgent_G, BaseAgent_G_vftable_55);
    virtual void BaseAgent_G_vftable_55();
    char data[4];
};

ADDRESSVFTABLE(0x009A176C, Creatures_G);
class __declspec(dllexport) Creatures_G : public BaseAgent_G
{
public:
    ADDRESSSYMBOL(0x00417250, "?BaseObject_Z_vftable_0@Creatures_G@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x004171D0, Creatures_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSVF(0x00417350, Creatures_G, BaseObject_Z_vftable_13);
    virtual void BaseObject_Z_vftable_13() override;
    ADDRESSSYMBOL(0x0041A200, "?ABC_Agent_vftable_14@Creatures_G@@UAEHXZ");
    virtual int ABC_Agent_vftable_14() override;
    ADDRESSVF(0x0041A1F0, Creatures_G, ABC_Agent_vftable_15);
    virtual void ABC_Agent_vftable_15() override;
    ADDRESSSYMBOL(0x0041A5E0, "?ABC_Agent_vftable_16@Creatures_G@@UAEXH@Z");
    virtual void ABC_Agent_vftable_16(int) override;
    ADDRESSVF(0x0041A5D0, Creatures_G, ABC_Agent_vftable_17);
    virtual void ABC_Agent_vftable_17() override;
    virtual void ABC_Agent_vftable_18() override;
    virtual void ABC_Agent_vftable_19() override;
    ADDRESSSYMBOL(0x00417760, "?Agent_Z_vftable_20@Creatures_G@@UAEXXZ");
    virtual void Agent_Z_vftable_20() override;
    virtual void Agent_Z_vftable_22() override;
    ADDRESSVF(0x004178A0, Creatures_G, Agent_Z_vftable_24);
    virtual void Agent_Z_vftable_24() override;
    ADDRESSVF(0x00417A50, Creatures_G, Agent_Z_vftable_25);
    virtual void Agent_Z_vftable_25() override;
    ADDRESSVF(0x0041A1E0, Creatures_G, Agent_Z_vftable_27);
    virtual void Agent_Z_vftable_27() override;
    virtual char BaseAgent_G_vftable_52() override;
    ADDRESSSYMBOL(0x00419BC0, "?BaseAgent_G_vftable_53@Creatures_G@@UAEXXZ");
    virtual void BaseAgent_G_vftable_53() override;
    ADDRESSSYMBOL(0x00419C10, "?BaseAgent_G_vftable_54@Creatures_G@@UAEXXZ");
    virtual void BaseAgent_G_vftable_54() override;
    virtual char Creatures_G_vftable_56();
    ADDRESSVF(0x0041A0F0, Creatures_G, Creatures_G_vftable_57);
    virtual void Creatures_G_vftable_57();
    ADDRESSVF(0x0041A0E0, Creatures_G, Creatures_G_vftable_58);
    virtual void Creatures_G_vftable_58();
    ADDRESSVF(0x0041A0D0, Creatures_G, Creatures_G_vftable_59);
    virtual void Creatures_G_vftable_59();
    ADDRESSVF(0x0041A0C0, Creatures_G, Creatures_G_vftable_60);
    virtual void Creatures_G_vftable_60();
    virtual int Creatures_G_vftable_61();
    ADDRESSVF(0x0041A0A0, Creatures_G, Creatures_G_vftable_62);
    virtual void Creatures_G_vftable_62();
    ADDRESSVF(0x0041A090, Creatures_G, Creatures_G_vftable_63);
    virtual void Creatures_G_vftable_63();
    ADDRESSVF(0x00417470, Creatures_G, Creatures_G_vftable_64);
    virtual void Creatures_G_vftable_64();
    ADDRESSVF(0x00417540, Creatures_G, Creatures_G_vftable_65);
    virtual void Creatures_G_vftable_65();
    virtual int Creatures_G_vftable_66();
    virtual char Creatures_G_vftable_67();
    ADDRESSVF(0x0041A050, Creatures_G, Creatures_G_vftable_68);
    virtual void Creatures_G_vftable_68();
    virtual char Creatures_G_vftable_69();
    ADDRESSVF(0x0041A020, Creatures_G, Creatures_G_vftable_70);
    virtual void Creatures_G_vftable_70();
    virtual int Creatures_G_vftable_71();
    virtual void Creatures_G_vftable_72();
    virtual void Creatures_G_vftable_73();
    virtual char Creatures_G_vftable_74();
    virtual char Creatures_G_vftable_75();
    virtual char Creatures_G_vftable_76();
    virtual char Creatures_G_vftable_77();
    virtual char Creatures_G_vftable_78();
    virtual char Creatures_G_vftable_79();
    virtual char Creatures_G_vftable_80();
    virtual char Creatures_G_vftable_81();
    virtual char Creatures_G_vftable_82();
    virtual char Creatures_G_vftable_83();
    ADDRESSVF(0x00419F40, Creatures_G, Creatures_G_vftable_84);
    virtual void Creatures_G_vftable_84();
    virtual char Creatures_G_vftable_85();
    virtual void Creatures_G_vftable_86();
    ADDRESSVF(0x00416EC0, Creatures_G, Creatures_G_vftable_87);
    virtual void Creatures_G_vftable_87();
    ADDRESSVF(0x00417FB0, Creatures_G, Creatures_G_vftable_88);
    virtual void Creatures_G_vftable_88();
    ADDRESSVF(0x004181E0, Creatures_G, Creatures_G_vftable_89);
    virtual void Creatures_G_vftable_89();
    ADDRESSVF(0x00418410, Creatures_G, Creatures_G_vftable_90);
    virtual void Creatures_G_vftable_90();
    ADDRESSVF(0x00418990, Creatures_G, Creatures_G_vftable_91);
    virtual void Creatures_G_vftable_91();
    ADDRESSVF(0x00418690, Creatures_G, Creatures_G_vftable_92);
    virtual void Creatures_G_vftable_92();
    ADDRESSVF(0x00418D00, Creatures_G, Creatures_G_vftable_93);
    virtual void Creatures_G_vftable_93();
    ADDRESSVF(0x00419100, Creatures_G, Creatures_G_vftable_94);
    virtual void Creatures_G_vftable_94();
    ADDRESSVF(0x00419730, Creatures_G, Creatures_G_vftable_95);
    virtual void Creatures_G_vftable_95();
    ADDRESSVF(0x00416620, Creatures_G, Creatures_G_vftable_96);
    virtual void Creatures_G_vftable_96();
    ADDRESSVF(0x00416960, Creatures_G, Creatures_G_vftable_97);
    virtual void Creatures_G_vftable_97();
    ADDRESSVF(0x00416C10, Creatures_G, Creatures_G_vftable_98);
    virtual void Creatures_G_vftable_98();
    char data[156];
};

ADDRESSVFTABLE(0x009B4DEC, IT_TornadoPath);
class __declspec(dllexport) IT_TornadoPath : public BaseAgent_G
{
public:
    ADDRESSSYMBOL(0x00518620, "?BaseObject_Z_vftable_0@IT_TornadoPath@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x00518560, IT_TornadoPath, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x00518490, "?ABC_Agent_vftable_14@IT_TornadoPath@@UAEHXZ");
    virtual int ABC_Agent_vftable_14() override;
    ADDRESSVF(0x005184A0, IT_TornadoPath, ABC_Agent_vftable_15);
    virtual void ABC_Agent_vftable_15() override;
    ADDRESSSYMBOL(0x005184B0, "?ABC_Agent_vftable_16@IT_TornadoPath@@UAEXH@Z");
    virtual void ABC_Agent_vftable_16(int) override;
    ADDRESSVF(0x005184E0, IT_TornadoPath, ABC_Agent_vftable_17);
    virtual void ABC_Agent_vftable_17() override;
    ADDRESSVF(0x00518760, IT_TornadoPath, Agent_Z_vftable_24);
    virtual void Agent_Z_vftable_24() override;
    ADDRESSVF(0x00518880, IT_TornadoPath, Agent_Z_vftable_25);
    virtual void Agent_Z_vftable_25() override;
    char data[8];
};

ADDRESSVFTABLE(0x009B4EE4, IT_SPINCOLLECT);
class __declspec(dllexport) IT_SPINCOLLECT : public BaseAgent_G
{
public:
    ADDRESSSYMBOL(0x00519400, "?BaseObject_Z_vftable_0@IT_SPINCOLLECT@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x00519350, IT_SPINCOLLECT, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x005192E0, "?ABC_Agent_vftable_14@IT_SPINCOLLECT@@UAEHXZ");
    virtual int ABC_Agent_vftable_14() override;
    ADDRESSVF(0x005192F0, IT_SPINCOLLECT, ABC_Agent_vftable_15);
    virtual void ABC_Agent_vftable_15() override;
    ADDRESSSYMBOL(0x00519300, "?ABC_Agent_vftable_16@IT_SPINCOLLECT@@UAEXH@Z");
    virtual void ABC_Agent_vftable_16(int) override;
    ADDRESSVF(0x00519330, IT_SPINCOLLECT, ABC_Agent_vftable_17);
    virtual void ABC_Agent_vftable_17() override;
    ADDRESSSYMBOL(0x00519460, "?Agent_Z_vftable_20@IT_SPINCOLLECT@@UAEXXZ");
    virtual void Agent_Z_vftable_20() override;
};

ADDRESSVFTABLE(0x009B4384, ObjectAgent_G);
class __declspec(dllexport) ObjectAgent_G : public BaseAgent_G
{
public:
    ADDRESSSYMBOL(0x0050F0B0, "?BaseObject_Z_vftable_0@ObjectAgent_G@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x0050F070, ObjectAgent_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x0050D870, "?ABC_Agent_vftable_14@ObjectAgent_G@@UAEHXZ");
    virtual int ABC_Agent_vftable_14() override;
    ADDRESSVF(0x00510410, ObjectAgent_G, ABC_Agent_vftable_15);
    virtual void ABC_Agent_vftable_15() override;
    ADDRESSSYMBOL(0x0050D8C0, "?ABC_Agent_vftable_16@ObjectAgent_G@@UAEXH@Z");
    virtual void ABC_Agent_vftable_16(int) override;
    ADDRESSVF(0x0050D860, ObjectAgent_G, ABC_Agent_vftable_17);
    virtual void ABC_Agent_vftable_17() override;
    ADDRESSVF(0x0050F110, ObjectAgent_G, Agent_Z_vftable_24);
    virtual void Agent_Z_vftable_24() override;
    ADDRESSVF(0x0050F1A0, ObjectAgent_G, ObjectAgent_G_vftable_56);
    virtual void ObjectAgent_G_vftable_56();
    char data[16];
};

ADDRESSVFTABLE(0x009B543C, IT_DYNBASE_G);
class __declspec(dllexport) IT_DYNBASE_G : public PhysAgent_Z
{
public:
    ADDRESSSYMBOL(0x0051B8C0, "?BaseObject_Z_vftable_0@IT_DYNBASE_G@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x0051B730, IT_DYNBASE_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x00515840, "?ABC_Agent_vftable_14@IT_DYNBASE_G@@UAEHXZ");
    virtual int ABC_Agent_vftable_14() override;
    ADDRESSVF(0x0051CD20, IT_DYNBASE_G, ABC_Agent_vftable_15);
    virtual void ABC_Agent_vftable_15() override;
    ADDRESSSYMBOL(0x00515870, "?ABC_Agent_vftable_16@IT_DYNBASE_G@@UAEXH@Z");
    virtual void ABC_Agent_vftable_16(int) override;
    ADDRESSVF(0x00515830, IT_DYNBASE_G, ABC_Agent_vftable_17);
    virtual void ABC_Agent_vftable_17() override;
    ADDRESSSYMBOL(0x0051B930, "?Agent_Z_vftable_20@IT_DYNBASE_G@@UAEXXZ");
    virtual void Agent_Z_vftable_20() override;
    ADDRESSVF(0x0051C240, IT_DYNBASE_G, Agent_Z_vftable_24);
    virtual void Agent_Z_vftable_24() override;
    ADDRESSVF(0x0051C320, IT_DYNBASE_G, Agent_Z_vftable_25);
    virtual void Agent_Z_vftable_25() override;
    ADDRESSVF(0x0051BAF0, IT_DYNBASE_G, IT_DYNBASE_G_vftable_52);
    virtual void IT_DYNBASE_G_vftable_52();
    ADDRESSVF(0x0051BC30, IT_DYNBASE_G, IT_DYNBASE_G_vftable_53);
    virtual void IT_DYNBASE_G_vftable_53();
    virtual void IT_DYNBASE_G_vftable_54();
    ADDRESSVF(0x005157B0, IT_DYNBASE_G, IT_DYNBASE_G_vftable_55);
    virtual void IT_DYNBASE_G_vftable_55();
    ADDRESSVF(0x005157A0, IT_DYNBASE_G, IT_DYNBASE_G_vftable_56);
    virtual void IT_DYNBASE_G_vftable_56();
    virtual int IT_DYNBASE_G_vftable_57();
    ADDRESSVF(0x00515750, IT_DYNBASE_G, IT_DYNBASE_G_vftable_58);
    virtual void IT_DYNBASE_G_vftable_58();
    ADDRESSVF(0x0051C880, IT_DYNBASE_G, IT_DYNBASE_G_vftable_59);
    virtual void IT_DYNBASE_G_vftable_59();
    ADDRESSVF(0x0051C8F0, IT_DYNBASE_G, IT_DYNBASE_G_vftable_60);
    virtual void IT_DYNBASE_G_vftable_60();
    char data[32];
};

ADDRESSVFTABLE(0x009B4254, IT_COLLECT_G);
class __declspec(dllexport) IT_COLLECT_G : public ObjectAgent_G
{
public:
    ADDRESSVF(0x0050C460, IT_COLLECT_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x0050D900, "?ABC_Agent_vftable_14@IT_COLLECT_G@@UAEHXZ");
    virtual int ABC_Agent_vftable_14() override;
    ADDRESSVF(0x0050D8F0, IT_COLLECT_G, ABC_Agent_vftable_15);
    virtual void ABC_Agent_vftable_15() override;
    ADDRESSSYMBOL(0x0050D880, "?ABC_Agent_vftable_16@IT_COLLECT_G@@UAEXH@Z");
    virtual void ABC_Agent_vftable_16(int) override;
    ADDRESSVF(0x0050D850, IT_COLLECT_G, ABC_Agent_vftable_17);
    virtual void ABC_Agent_vftable_17() override;
    ADDRESSSYMBOL(0x0050C850, "?Agent_Z_vftable_20@IT_COLLECT_G@@UAEXXZ");
    virtual void Agent_Z_vftable_20() override;
    ADDRESSVF(0x0050C560, IT_COLLECT_G, Agent_Z_vftable_24);
    virtual void Agent_Z_vftable_24() override;
    ADDRESSVF(0x0050C830, IT_COLLECT_G, Agent_Z_vftable_25);
    virtual void Agent_Z_vftable_25() override;
    ADDRESSSYMBOL(0x0050CEA0, "?BaseAgent_G_vftable_53@IT_COLLECT_G@@UAEXXZ");
    virtual void BaseAgent_G_vftable_53() override;
    ADDRESSSYMBOL(0x0050CEB0, "?BaseAgent_G_vftable_54@IT_COLLECT_G@@UAEXXZ");
    virtual void BaseAgent_G_vftable_54() override;
    ADDRESSVF(0x0050C920, IT_COLLECT_G, ObjectAgent_G_vftable_56);
    virtual void ObjectAgent_G_vftable_56() override;
    char data[32];
};

ADDRESSVFTABLE(0x009B47E4, IT_POWERJOB_G);
class __declspec(dllexport) IT_POWERJOB_G : public BaseAgent_G
{
public:
    ADDRESSSYMBOL(0x00514E70, "?BaseObject_Z_vftable_0@IT_POWERJOB_G@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x00514DC0, IT_POWERJOB_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x00514D50, "?ABC_Agent_vftable_14@IT_POWERJOB_G@@UAEHXZ");
    virtual int ABC_Agent_vftable_14() override;
    ADDRESSVF(0x00514D60, IT_POWERJOB_G, ABC_Agent_vftable_15);
    virtual void ABC_Agent_vftable_15() override;
    ADDRESSSYMBOL(0x00514D70, "?ABC_Agent_vftable_16@IT_POWERJOB_G@@UAEXH@Z");
    virtual void ABC_Agent_vftable_16(int) override;
    ADDRESSVF(0x00514DA0, IT_POWERJOB_G, ABC_Agent_vftable_17);
    virtual void ABC_Agent_vftable_17() override;
    ADDRESSSYMBOL(0x00514ED0, "?Agent_Z_vftable_20@IT_POWERJOB_G@@UAEXXZ");
    virtual void Agent_Z_vftable_20() override;
};

ADDRESSVFTABLE(0x009B5CE4, IT_Debris);
class __declspec(dllexport) IT_Debris : public IT_DYNBASE_G
{
public:
    ADDRESSSYMBOL(0x00533A00, "?BaseObject_Z_vftable_0@IT_Debris@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x005339B0, IT_Debris, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x005338A0, "?ABC_Agent_vftable_14@IT_Debris@@UAEHXZ");
    virtual int ABC_Agent_vftable_14() override;
    ADDRESSVF(0x005338B0, IT_Debris, ABC_Agent_vftable_15);
    virtual void ABC_Agent_vftable_15() override;
    ADDRESSSYMBOL(0x005338C0, "?ABC_Agent_vftable_16@IT_Debris@@UAEXH@Z");
    virtual void ABC_Agent_vftable_16(int) override;
    ADDRESSVF(0x00533900, IT_Debris, ABC_Agent_vftable_17);
    virtual void ABC_Agent_vftable_17() override;
    ADDRESSSYMBOL(0x00533A60, "?Agent_Z_vftable_20@IT_Debris@@UAEXXZ");
    virtual void Agent_Z_vftable_20() override;
    ADDRESSVF(0x00533A80, IT_Debris, Agent_Z_vftable_24);
    virtual void Agent_Z_vftable_24() override;
    ADDRESSVF(0x00533B30, IT_Debris, Agent_Z_vftable_25);
    virtual void Agent_Z_vftable_25() override;
    ADDRESSVF(0x00533AA0, IT_Debris, IT_DYNBASE_G_vftable_59);
    virtual void IT_DYNBASE_G_vftable_59() override;
    ADDRESSVF(0x00533AD0, IT_Debris, IT_DYNBASE_G_vftable_60);
    virtual void IT_DYNBASE_G_vftable_60() override;
    char data[8];
};

ADDRESSVFTABLE(0x009B50B4, IT_PANORAMAPOINT);
class __declspec(dllexport) IT_PANORAMAPOINT : public IT_SPINCOLLECT
{
public:
    ADDRESSSYMBOL(0x005199D0, "?BaseObject_Z_vftable_0@IT_PANORAMAPOINT@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x00519920, IT_PANORAMAPOINT, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x005198A0, "?ABC_Agent_vftable_14@IT_PANORAMAPOINT@@UAEHXZ");
    virtual int ABC_Agent_vftable_14() override;
    ADDRESSVF(0x005198B0, IT_PANORAMAPOINT, ABC_Agent_vftable_15);
    virtual void ABC_Agent_vftable_15() override;
    ADDRESSSYMBOL(0x005198C0, "?ABC_Agent_vftable_16@IT_PANORAMAPOINT@@UAEXH@Z");
    virtual void ABC_Agent_vftable_16(int) override;
    ADDRESSVF(0x00519900, IT_PANORAMAPOINT, ABC_Agent_vftable_17);
    virtual void ABC_Agent_vftable_17() override;
};

ADDRESSVFTABLE(0x009B6D94, TornadoAgent_G);
class __declspec(dllexport) TornadoAgent_G : public BaseAgent_G
{
public:
    ADDRESSSYMBOL(0x005BC7A0, "?BaseObject_Z_vftable_0@TornadoAgent_G@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x005406B0, TornadoAgent_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x00540620, "?ABC_Agent_vftable_14@TornadoAgent_G@@UAEHXZ");
    virtual int ABC_Agent_vftable_14() override;
    ADDRESSVF(0x00540630, TornadoAgent_G, ABC_Agent_vftable_15);
    virtual void ABC_Agent_vftable_15() override;
    ADDRESSSYMBOL(0x00540660, "?ABC_Agent_vftable_16@TornadoAgent_G@@UAEXH@Z");
    virtual void ABC_Agent_vftable_16(int) override;
    ADDRESSVF(0x00540690, TornadoAgent_G, ABC_Agent_vftable_17);
    virtual void ABC_Agent_vftable_17() override;
    ADDRESSVF(0x005BC800, TornadoAgent_G, Agent_Z_vftable_24);
    virtual void Agent_Z_vftable_24() override;
    ADDRESSVF(0x005BC840, TornadoAgent_G, Agent_Z_vftable_25);
    virtual void Agent_Z_vftable_25() override;
};

ADDRESSVFTABLE(0x009C4744, IT_DynPilot_G);
class __declspec(dllexport) IT_DynPilot_G : public IT_DYNBASE_G
{
public:
    ADDRESSSYMBOL(0x00601DA0, "?BaseObject_Z_vftable_0@IT_DynPilot_G@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x00601D50, IT_DynPilot_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x00601C40, "?ABC_Agent_vftable_14@IT_DynPilot_G@@UAEHXZ");
    virtual int ABC_Agent_vftable_14() override;
    ADDRESSVF(0x00601C50, IT_DynPilot_G, ABC_Agent_vftable_15);
    virtual void ABC_Agent_vftable_15() override;
    ADDRESSSYMBOL(0x00601C60, "?ABC_Agent_vftable_16@IT_DynPilot_G@@UAEXH@Z");
    virtual void ABC_Agent_vftable_16(int) override;
    ADDRESSVF(0x00601CA0, IT_DynPilot_G, ABC_Agent_vftable_17);
    virtual void ABC_Agent_vftable_17() override;
};

ADDRESSVFTABLE(0x009A2D2C, Player_G);
class __declspec(dllexport) Player_G : public Creatures_G
{
public:
    ADDRESSSYMBOL(0x00429EA0, "?BaseObject_Z_vftable_0@Player_G@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x00429DB0, Player_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSVF(0x0042B9D0, Player_G, BaseObject_Z_vftable_13);
    virtual void BaseObject_Z_vftable_13() override;
    ADDRESSSYMBOL(0x004285C0, "?ABC_Agent_vftable_14@Player_G@@UAEHXZ");
    virtual int ABC_Agent_vftable_14() override;
    ADDRESSVF(0x00429B30, Player_G, ABC_Agent_vftable_15);
    virtual void ABC_Agent_vftable_15() override;
    ADDRESSSYMBOL(0x004285D0, "?ABC_Agent_vftable_16@Player_G@@UAEXH@Z");
    virtual void ABC_Agent_vftable_16(int) override;
    ADDRESSVF(0x00428610, Player_G, ABC_Agent_vftable_17);
    virtual void ABC_Agent_vftable_17() override;
    ADDRESSSYMBOL(0x0042BA90, "?ABC_Agent_vftable_18@Player_G@@UAEXXZ");
    virtual void ABC_Agent_vftable_18() override;
    ADDRESSSYMBOL(0x0042BB00, "?ABC_Agent_vftable_19@Player_G@@UAEXXZ");
    virtual void ABC_Agent_vftable_19() override;
    ADDRESSSYMBOL(0x0042B890, "?Agent_Z_vftable_20@Player_G@@UAEXXZ");
    virtual void Agent_Z_vftable_20() override;
    ADDRESSVF(0x0042BEF0, Player_G, Agent_Z_vftable_24);
    virtual void Agent_Z_vftable_24() override;
    ADDRESSVF(0x0042C620, Player_G, Agent_Z_vftable_25);
    virtual void Agent_Z_vftable_25() override;
    ADDRESSSYMBOL(0x00428BD0, "?Agent_Z_vftable_28@Player_G@@UAEDH@Z");
    virtual char Agent_Z_vftable_28(int) override;
    ADDRESSSYMBOL(0x00428BE0, "?Agent_Z_vftable_29@Player_G@@UAEDH@Z");
    virtual char Agent_Z_vftable_29(int) override;
    ADDRESSVF(0x0042C970, Player_G, Throwable_Z_vftable_41);
    virtual void Throwable_Z_vftable_41() override;
    ADDRESSSYMBOL(0x00428B70, "?LodAgent_Z_vftable_46@Player_G@@UAEXH@Z");
    virtual void LodAgent_Z_vftable_46(int) override;
    virtual void LodAgent_Z_vftable_47(int) override;
    ADDRESSSYMBOL(0x00428B90, "?LodAgent_Z_vftable_48@Player_G@@UAEXH@Z");
    virtual void LodAgent_Z_vftable_48(int) override;
    ADDRESSSYMBOL(0x00428BA0, "?LodAgent_Z_vftable_49@Player_G@@UAEHXZ");
    virtual int LodAgent_Z_vftable_49() override;
    ADDRESSVF(0x00428AE0, Player_G, Creatures_G_vftable_57);
    virtual void Creatures_G_vftable_57() override;
    ADDRESSVF(0x0042BEB0, Player_G, Creatures_G_vftable_59);
    virtual void Creatures_G_vftable_59() override;
    ADDRESSVF(0x00428B40, Player_G, Creatures_G_vftable_60);
    virtual void Creatures_G_vftable_60() override;
    ADDRESSVF(0x00428AC0, Player_G, Creatures_G_vftable_62);
    virtual void Creatures_G_vftable_62() override;
    virtual int Creatures_G_vftable_66() override;
    virtual char Creatures_G_vftable_67() override;
    ADDRESSVF(0x00428B00, Player_G, Creatures_G_vftable_84);
    virtual void Creatures_G_vftable_84() override;
    virtual char Creatures_G_vftable_85() override;
    ADDRESSVF(0x00428620, Player_G, Player_G_vftable_99);
    virtual void Player_G_vftable_99();
    ADDRESSVF(0x00428680, Player_G, Player_G_vftable_100);
    virtual void Player_G_vftable_100();
    ADDRESSVF(0x004286A0, Player_G, Player_G_vftable_101);
    virtual void Player_G_vftable_101();
    ADDRESSVF(0x004286C0, Player_G, Player_G_vftable_102);
    virtual void Player_G_vftable_102();
    ADDRESSVF(0x004286E0, Player_G, Player_G_vftable_103);
    virtual void Player_G_vftable_103();
    ADDRESSVF(0x00428700, Player_G, Player_G_vftable_104);
    virtual void Player_G_vftable_104();
    ADDRESSVF(0x00428720, Player_G, Player_G_vftable_105);
    virtual void Player_G_vftable_105();
    ADDRESSVF(0x00428740, Player_G, Player_G_vftable_106);
    virtual void Player_G_vftable_106();
    ADDRESSVF(0x00428760, Player_G, Player_G_vftable_107);
    virtual void Player_G_vftable_107();
    ADDRESSVF(0x00428780, Player_G, Player_G_vftable_108);
    virtual void Player_G_vftable_108();
    ADDRESSVF(0x004287A0, Player_G, Player_G_vftable_109);
    virtual void Player_G_vftable_109();
    ADDRESSVF(0x004287C0, Player_G, Player_G_vftable_110);
    virtual void Player_G_vftable_110();
    ADDRESSVF(0x004287E0, Player_G, Player_G_vftable_111);
    virtual void Player_G_vftable_111();
    ADDRESSVF(0x00428800, Player_G, Player_G_vftable_112);
    virtual void Player_G_vftable_112();
    ADDRESSVF(0x00428820, Player_G, Player_G_vftable_113);
    virtual void Player_G_vftable_113();
    ADDRESSVF(0x00428840, Player_G, Player_G_vftable_114);
    virtual void Player_G_vftable_114();
    ADDRESSVF(0x00428860, Player_G, Player_G_vftable_115);
    virtual void Player_G_vftable_115();
    ADDRESSVF(0x00428880, Player_G, Player_G_vftable_116);
    virtual void Player_G_vftable_116();
    ADDRESSVF(0x004288A0, Player_G, Player_G_vftable_117);
    virtual void Player_G_vftable_117();
    ADDRESSVF(0x004288C0, Player_G, Player_G_vftable_118);
    virtual void Player_G_vftable_118();
    ADDRESSVF(0x004288E0, Player_G, Player_G_vftable_119);
    virtual void Player_G_vftable_119();
    ADDRESSVF(0x00428900, Player_G, Player_G_vftable_120);
    virtual void Player_G_vftable_120();
    ADDRESSVF(0x00428920, Player_G, Player_G_vftable_121);
    virtual void Player_G_vftable_121();
    ADDRESSVF(0x00428940, Player_G, Player_G_vftable_122);
    virtual void Player_G_vftable_122();
    ADDRESSVF(0x00428960, Player_G, Player_G_vftable_123);
    virtual void Player_G_vftable_123();
    ADDRESSVF(0x00428980, Player_G, Player_G_vftable_124);
    virtual void Player_G_vftable_124();
    ADDRESSVF(0x004289A0, Player_G, Player_G_vftable_125);
    virtual void Player_G_vftable_125();
    ADDRESSVF(0x004289C0, Player_G, Player_G_vftable_126);
    virtual void Player_G_vftable_126();
    ADDRESSVF(0x004289E0, Player_G, Player_G_vftable_127);
    virtual void Player_G_vftable_127();
    ADDRESSVF(0x00428A00, Player_G, Player_G_vftable_128);
    virtual void Player_G_vftable_128();
    ADDRESSVF(0x00428A20, Player_G, Player_G_vftable_129);
    virtual void Player_G_vftable_129();
    ADDRESSVF(0x00428A40, Player_G, Player_G_vftable_130);
    virtual void Player_G_vftable_130();
    ADDRESSVF(0x00428A60, Player_G, Player_G_vftable_131);
    virtual void Player_G_vftable_131();
    ADDRESSVF(0x00428A80, Player_G, Player_G_vftable_132);
    virtual void Player_G_vftable_132();
    ADDRESSVF(0x00428AA0, Player_G, Player_G_vftable_133);
    virtual void Player_G_vftable_133();
    virtual void *Player_G_vftable_134();
    ADDRESSSYMBOL(0x00429B50, "?Player_G_vftable_135@Player_G@@UAEHXZ");
    virtual int Player_G_vftable_135();
    ADDRESSVF(0x0042BC90, Player_G, Player_G_vftable_136);
    virtual void Player_G_vftable_136();
    ADDRESSVF(0x0042BD30, Player_G, Player_G_vftable_137);
    virtual void Player_G_vftable_137();
    ADDRESSVF(0x0042BE50, Player_G, Player_G_vftable_138);
    virtual void Player_G_vftable_138();
    ADDRESSVF(0x00428B50, Player_G, Player_G_vftable_139);
    virtual void Player_G_vftable_139();
    ADDRESSVF(0x00428B60, Player_G, Player_G_vftable_140);
    virtual void Player_G_vftable_140();
    virtual char Player_G_vftable_141();
    ADDRESSVF(0x00429E40, Player_G, Player_G_vftable_142);
    virtual void Player_G_vftable_142();
    ADDRESSVF(0x0042CC00, Player_G, Player_G_vftable_143);
    virtual void Player_G_vftable_143();
    ADDRESSVF(0x0042CEB0, Player_G, Player_G_vftable_144);
    virtual void Player_G_vftable_144();
    char data[68];
};

ADDRESSVFTABLE(0x009A285C, P_SUV);
class __declspec(dllexport) P_SUV : public Player_G
{
public:
    ADDRESSVF(0x004292E0, P_SUV, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x00429200, "?ABC_Agent_vftable_14@P_SUV@@UAEHXZ");
    virtual int ABC_Agent_vftable_14() override;
    ADDRESSVF(0x00429210, P_SUV, ABC_Agent_vftable_15);
    virtual void ABC_Agent_vftable_15() override;
    ADDRESSSYMBOL(0x00429220, "?ABC_Agent_vftable_16@P_SUV@@UAEXH@Z");
    virtual void ABC_Agent_vftable_16(int) override;
    ADDRESSVF(0x00429260, P_SUV, ABC_Agent_vftable_17);
    virtual void ABC_Agent_vftable_17() override;
    virtual int Creatures_G_vftable_71() override;
    ADDRESSSYMBOL(0x00429270, "?Player_G_vftable_134@P_SUV@@UAEPAXXZ");
    virtual void *Player_G_vftable_134() override;
    virtual int Player_G_vftable_135() override;
};

ADDRESSVFTABLE(0x009B6CAC, MVehicle_G);
class __declspec(dllexport) MVehicle_G : public BaseAgent_G
{
public:
    ADDRESSSYMBOL(0x005C7230, "?BaseObject_Z_vftable_0@MVehicle_G@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x00540520, MVehicle_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSVF(0x005CC290, MVehicle_G, BaseObject_Z_vftable_13);
    virtual void BaseObject_Z_vftable_13() override;
    ADDRESSSYMBOL(0x0053FE90, "?ABC_Agent_vftable_14@MVehicle_G@@UAEHXZ");
    virtual int ABC_Agent_vftable_14() override;
    ADDRESSVF(0x0053FEA0, MVehicle_G, ABC_Agent_vftable_15);
    virtual void ABC_Agent_vftable_15() override;
    ADDRESSSYMBOL(0x0053FED0, "?ABC_Agent_vftable_16@MVehicle_G@@UAEXH@Z");
    virtual void ABC_Agent_vftable_16(int) override;
    ADDRESSVF(0x0053FF00, MVehicle_G, ABC_Agent_vftable_17);
    virtual void ABC_Agent_vftable_17() override;
    ADDRESSSYMBOL(0x005404F0, "?Agent_Z_vftable_20@MVehicle_G@@UAEXXZ");
    virtual void Agent_Z_vftable_20() override;
    ADDRESSVF(0x005C7250, MVehicle_G, Agent_Z_vftable_22);
    virtual void Agent_Z_vftable_22() override;
    ADDRESSVF(0x005CC200, MVehicle_G, Agent_Z_vftable_24);
    virtual void Agent_Z_vftable_24() override;
    ADDRESSVF(0x005CC270, MVehicle_G, Agent_Z_vftable_25);
    virtual void Agent_Z_vftable_25() override;
    ADDRESSSYMBOL(0x005C8F00, "?BaseAgent_G_vftable_53@MVehicle_G@@UAEXXZ");
    virtual void BaseAgent_G_vftable_53() override;
    ADDRESSSYMBOL(0x00540510, "?BaseAgent_G_vftable_54@MVehicle_G@@UAEXXZ");
    virtual void BaseAgent_G_vftable_54() override;
    char data[16984];
};

ADDRESSVFTABLE(0x009B5B24, IT_Stone_G);
class __declspec(dllexport) IT_Stone_G : public IT_DYNBASE_G
{
public:
    ADDRESSSYMBOL(0x0051E560, "?BaseObject_Z_vftable_0@IT_Stone_G@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x0051E510, IT_Stone_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x0051E3B0, "?ABC_Agent_vftable_14@IT_Stone_G@@UAEHXZ");
    virtual int ABC_Agent_vftable_14() override;
    ADDRESSVF(0x0051E3C0, IT_Stone_G, ABC_Agent_vftable_15);
    virtual void ABC_Agent_vftable_15() override;
    ADDRESSSYMBOL(0x0051E3D0, "?ABC_Agent_vftable_16@IT_Stone_G@@UAEXH@Z");
    virtual void ABC_Agent_vftable_16(int) override;
    ADDRESSVF(0x0051E410, IT_Stone_G, ABC_Agent_vftable_17);
    virtual void ABC_Agent_vftable_17() override;
    ADDRESSSYMBOL(0x0051E5C0, "?Agent_Z_vftable_20@IT_Stone_G@@UAEXXZ");
    virtual void Agent_Z_vftable_20() override;
    ADDRESSVF(0x0051E5E0, IT_Stone_G, Agent_Z_vftable_24);
    virtual void Agent_Z_vftable_24() override;
    ADDRESSVF(0x0051E600, IT_Stone_G, IT_DYNBASE_G_vftable_59);
    virtual void IT_DYNBASE_G_vftable_59() override;
    ADDRESSVF(0x0051E630, IT_Stone_G, IT_DYNBASE_G_vftable_60);
    virtual void IT_DYNBASE_G_vftable_60() override;
    ADDRESSVF(0x0051E690, IT_Stone_G, IT_Stone_G_vftable_61);
    virtual void IT_Stone_G_vftable_61();
    ADDRESSVF(0x0051E8A0, IT_Stone_G, IT_Stone_G_vftable_62);
    virtual void IT_Stone_G_vftable_62();
    ADDRESSVF(0x0051E420, IT_Stone_G, IT_Stone_G_vftable_63);
    virtual void IT_Stone_G_vftable_63();
    ADDRESSVF(0x0051E430, IT_Stone_G, IT_Stone_G_vftable_64);
    virtual void IT_Stone_G_vftable_64();
    ADDRESSVF(0x0051E440, IT_Stone_G, IT_Stone_G_vftable_65);
    virtual void IT_Stone_G_vftable_65();
    ADDRESSVF(0x0051E450, IT_Stone_G, IT_Stone_G_vftable_66);
    virtual void IT_Stone_G_vftable_66();
    char data[8];
};

ADDRESSVFTABLE(0x009B7D34, IT_TornadoDebrisAgent);
class __declspec(dllexport) IT_TornadoDebrisAgent : public BaseAgent_G
{
public:
    ADDRESSSYMBOL(0x005E9D00, "?BaseObject_Z_vftable_0@IT_TornadoDebrisAgent@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x00542ED0, IT_TornadoDebrisAgent, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x00542E40, "?ABC_Agent_vftable_14@IT_TornadoDebrisAgent@@UAEHXZ");
    virtual int ABC_Agent_vftable_14() override;
    ADDRESSVF(0x00542E50, IT_TornadoDebrisAgent, ABC_Agent_vftable_15);
    virtual void ABC_Agent_vftable_15() override;
    ADDRESSSYMBOL(0x00542E80, "?ABC_Agent_vftable_16@IT_TornadoDebrisAgent@@UAEXH@Z");
    virtual void ABC_Agent_vftable_16(int) override;
    ADDRESSVF(0x00542EB0, IT_TornadoDebrisAgent, ABC_Agent_vftable_17);
    virtual void ABC_Agent_vftable_17() override;
    ADDRESSVF(0x005E9E20, IT_TornadoDebrisAgent, Agent_Z_vftable_24);
    virtual void Agent_Z_vftable_24() override;
    ADDRESSVF(0x005E9E90, IT_TornadoDebrisAgent, Agent_Z_vftable_25);
    virtual void Agent_Z_vftable_25() override;
};

ADDRESSVFTABLE(0x009B519C, IT_FUEL);
class __declspec(dllexport) IT_FUEL : public IT_SPINCOLLECT
{
public:
    ADDRESSSYMBOL(0x00519B70, "?BaseObject_Z_vftable_0@IT_FUEL@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x00519AC0, IT_FUEL, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x00519A40, "?ABC_Agent_vftable_14@IT_FUEL@@UAEHXZ");
    virtual int ABC_Agent_vftable_14() override;
    ADDRESSVF(0x00519A50, IT_FUEL, ABC_Agent_vftable_15);
    virtual void ABC_Agent_vftable_15() override;
    ADDRESSSYMBOL(0x00519A60, "?ABC_Agent_vftable_16@IT_FUEL@@UAEXH@Z");
    virtual void ABC_Agent_vftable_16(int) override;
    ADDRESSVF(0x00519AA0, IT_FUEL, ABC_Agent_vftable_17);
    virtual void ABC_Agent_vftable_17() override;
};

ADDRESSVFTABLE(0x009A2184, P_QUAD);
class __declspec(dllexport) P_QUAD : public Player_G
{
public:
    ADDRESSVF(0x00428E60, P_QUAD, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x00428D80, "?ABC_Agent_vftable_14@P_QUAD@@UAEHXZ");
    virtual int ABC_Agent_vftable_14() override;
    ADDRESSVF(0x00428D90, P_QUAD, ABC_Agent_vftable_15);
    virtual void ABC_Agent_vftable_15() override;
    ADDRESSSYMBOL(0x00428DA0, "?ABC_Agent_vftable_16@P_QUAD@@UAEXH@Z");
    virtual void ABC_Agent_vftable_16(int) override;
    ADDRESSVF(0x00428DE0, P_QUAD, ABC_Agent_vftable_17);
    virtual void ABC_Agent_vftable_17() override;
    virtual int Creatures_G_vftable_71() override;
    ADDRESSSYMBOL(0x00428DF0, "?Player_G_vftable_134@P_QUAD@@UAEPAXXZ");
    virtual void *Player_G_vftable_134() override;
    virtual int Player_G_vftable_135() override;
};

ADDRESSVFTABLE(0x009C4854, IT_Pilot);
class __declspec(dllexport) IT_Pilot : public BaseAgent_G
{
public:
    ADDRESSSYMBOL(0x006020E0, "?BaseObject_Z_vftable_0@IT_Pilot@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x006020A0, IT_Pilot, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x00601FC0, "?ABC_Agent_vftable_14@IT_Pilot@@UAEHXZ");
    virtual int ABC_Agent_vftable_14() override;
    ADDRESSVF(0x00601FD0, IT_Pilot, ABC_Agent_vftable_15);
    virtual void ABC_Agent_vftable_15() override;
    ADDRESSSYMBOL(0x00601FE0, "?ABC_Agent_vftable_16@IT_Pilot@@UAEXH@Z");
    virtual void ABC_Agent_vftable_16(int) override;
    ADDRESSVF(0x00602010, IT_Pilot, ABC_Agent_vftable_17);
    virtual void ABC_Agent_vftable_17() override;
    ADDRESSSYMBOL(0x00602150, "?Agent_Z_vftable_20@IT_Pilot@@UAEXXZ");
    virtual void Agent_Z_vftable_20() override;
};

ADDRESSVFTABLE(0x009C363C, SandTornadoAgent_G);
class __declspec(dllexport) SandTornadoAgent_G : public TornadoAgent_G
{
public:
    ADDRESSSYMBOL(0x005BFF00, "?BaseObject_Z_vftable_0@SandTornadoAgent_G@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x005BFE80, SandTornadoAgent_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x005BFE00, "?ABC_Agent_vftable_14@SandTornadoAgent_G@@UAEHXZ");
    virtual int ABC_Agent_vftable_14() override;
    ADDRESSVF(0x005BFE10, SandTornadoAgent_G, ABC_Agent_vftable_15);
    virtual void ABC_Agent_vftable_15() override;
    ADDRESSSYMBOL(0x005BFE20, "?ABC_Agent_vftable_16@SandTornadoAgent_G@@UAEXH@Z");
    virtual void ABC_Agent_vftable_16(int) override;
    ADDRESSVF(0x005BFE60, SandTornadoAgent_G, ABC_Agent_vftable_17);
    virtual void ABC_Agent_vftable_17() override;
};

ADDRESSVFTABLE(0x009B6E7C, MotherTornadoAgent_G);
class __declspec(dllexport) MotherTornadoAgent_G : public TornadoAgent_G
{
public:
    ADDRESSSYMBOL(0x005BFC60, "?BaseObject_Z_vftable_0@MotherTornadoAgent_G@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x005407F0, MotherTornadoAgent_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x00540750, "?ABC_Agent_vftable_14@MotherTornadoAgent_G@@UAEHXZ");
    virtual int ABC_Agent_vftable_14() override;
    ADDRESSVF(0x00540760, MotherTornadoAgent_G, ABC_Agent_vftable_15);
    virtual void ABC_Agent_vftable_15() override;
    ADDRESSSYMBOL(0x00540790, "?ABC_Agent_vftable_16@MotherTornadoAgent_G@@UAEXH@Z");
    virtual void ABC_Agent_vftable_16(int) override;
    ADDRESSVF(0x005407D0, MotherTornadoAgent_G, ABC_Agent_vftable_17);
    virtual void ABC_Agent_vftable_17() override;
    ADDRESSVF(0x005BFCC0, MotherTornadoAgent_G, Agent_Z_vftable_24);
    virtual void Agent_Z_vftable_24() override;
};

ADDRESSVFTABLE(0x009B6F64, Tornade);
class __declspec(dllexport) Tornade : public MotherTornadoAgent_G
{
public:
    ADDRESSVF(0x00540960, Tornade, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x005408C0, "?ABC_Agent_vftable_14@Tornade@@UAEHXZ");
    virtual int ABC_Agent_vftable_14() override;
    ADDRESSVF(0x005408D0, Tornade, ABC_Agent_vftable_15);
    virtual void ABC_Agent_vftable_15() override;
    ADDRESSSYMBOL(0x00540900, "?ABC_Agent_vftable_16@Tornade@@UAEXH@Z");
    virtual void ABC_Agent_vftable_16(int) override;
    ADDRESSVF(0x00540940, Tornade, ABC_Agent_vftable_17);
    virtual void ABC_Agent_vftable_17() override;
};

ADDRESSVFTABLE(0x009A2614, P_MUSCLE);
class __declspec(dllexport) P_MUSCLE : public Player_G
{
public:
    ADDRESSVF(0x00429160, P_MUSCLE, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x00429080, "?ABC_Agent_vftable_14@P_MUSCLE@@UAEHXZ");
    virtual int ABC_Agent_vftable_14() override;
    ADDRESSVF(0x00429090, P_MUSCLE, ABC_Agent_vftable_15);
    virtual void ABC_Agent_vftable_15() override;
    ADDRESSSYMBOL(0x004290A0, "?ABC_Agent_vftable_16@P_MUSCLE@@UAEXH@Z");
    virtual void ABC_Agent_vftable_16(int) override;
    ADDRESSVF(0x004290E0, P_MUSCLE, ABC_Agent_vftable_17);
    virtual void ABC_Agent_vftable_17() override;
    virtual int Creatures_G_vftable_71() override;
    ADDRESSSYMBOL(0x004290F0, "?Player_G_vftable_134@P_MUSCLE@@UAEPAXXZ");
    virtual void *Player_G_vftable_134() override;
    virtual int Player_G_vftable_135() override;
};

ADDRESSVFTABLE(0x009A3084, Enemies_G);
class __declspec(dllexport) Enemies_G : public Creatures_G
{
public:
    ADDRESSSYMBOL(0x0042F860, "?BaseObject_Z_vftable_0@Enemies_G@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x0042F7D0, Enemies_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSVF(0x0042F820, Enemies_G, BaseObject_Z_vftable_13);
    virtual void BaseObject_Z_vftable_13() override;
    ADDRESSSYMBOL(0x00430790, "?ABC_Agent_vftable_14@Enemies_G@@UAEHXZ");
    virtual int ABC_Agent_vftable_14() override;
    ADDRESSVF(0x00430780, Enemies_G, ABC_Agent_vftable_15);
    virtual void ABC_Agent_vftable_15() override;
    ADDRESSSYMBOL(0x00430740, "?ABC_Agent_vftable_16@Enemies_G@@UAEXH@Z");
    virtual void ABC_Agent_vftable_16(int) override;
    ADDRESSVF(0x00430730, Enemies_G, ABC_Agent_vftable_17);
    virtual void ABC_Agent_vftable_17() override;
    ADDRESSSYMBOL(0x0042F8C0, "?Agent_Z_vftable_20@Enemies_G@@UAEXXZ");
    virtual void Agent_Z_vftable_20() override;
    virtual void Agent_Z_vftable_24() override;
    ADDRESSVF(0x0042F9B0, Enemies_G, Agent_Z_vftable_25);
    virtual void Agent_Z_vftable_25() override;
    ADDRESSVF(0x00430720, Enemies_G, Agent_Z_vftable_27);
    virtual void Agent_Z_vftable_27() override;
    virtual char Creatures_G_vftable_56() override;
    ADDRESSVF(0x00430700, Enemies_G, Creatures_G_vftable_57);
    virtual void Creatures_G_vftable_57() override;
    ADDRESSVF(0x004306F0, Enemies_G, Creatures_G_vftable_58);
    virtual void Creatures_G_vftable_58() override;
    ADDRESSVF(0x004306E0, Enemies_G, Creatures_G_vftable_62);
    virtual void Creatures_G_vftable_62() override;
    ADDRESSVF(0x004306D0, Enemies_G, Creatures_G_vftable_68);
    virtual void Creatures_G_vftable_68() override;
    ADDRESSVF(0x004306C0, Enemies_G, Creatures_G_vftable_84);
    virtual void Creatures_G_vftable_84() override;
    ADDRESSSYMBOL(0x004301C0, "?Creatures_G_vftable_86@Enemies_G@@UAEXXZ");
    virtual void Creatures_G_vftable_86() override;
    ADDRESSVF(0x00430020, Enemies_G, Enemies_G_vftable_99);
    virtual void Enemies_G_vftable_99();
    ADDRESSVF(0x004306B0, Enemies_G, Enemies_G_vftable_100);
    virtual void Enemies_G_vftable_100();
    ADDRESSVF(0x00430220, Enemies_G, Enemies_G_vftable_101);
    virtual void Enemies_G_vftable_101();
    ADDRESSVF(0x00430270, Enemies_G, Enemies_G_vftable_102);
    virtual void Enemies_G_vftable_102();
    char data[140];
};

ADDRESSVFTABLE(0x009A1F3C, P_BUGGY);
class __declspec(dllexport) P_BUGGY : public Player_G
{
public:
    ADDRESSVF(0x00428CE0, P_BUGGY, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x00428C00, "?ABC_Agent_vftable_14@P_BUGGY@@UAEHXZ");
    virtual int ABC_Agent_vftable_14() override;
    ADDRESSVF(0x00428C10, P_BUGGY, ABC_Agent_vftable_15);
    virtual void ABC_Agent_vftable_15() override;
    ADDRESSSYMBOL(0x00428C20, "?ABC_Agent_vftable_16@P_BUGGY@@UAEXH@Z");
    virtual void ABC_Agent_vftable_16(int) override;
    ADDRESSVF(0x00428C60, P_BUGGY, ABC_Agent_vftable_17);
    virtual void ABC_Agent_vftable_17() override;
    virtual int Creatures_G_vftable_71() override;
    ADDRESSSYMBOL(0x00428C70, "?Player_G_vftable_134@P_BUGGY@@UAEPAXXZ");
    virtual void *Player_G_vftable_134() override;
    virtual int Player_G_vftable_135() override;
};

ADDRESSVFTABLE(0x009B5A04, IT_DYNOBJ_G);
class __declspec(dllexport) IT_DYNOBJ_G : public IT_DYNBASE_G
{
public:
    ADDRESSSYMBOL(0x0051E080, "?BaseObject_Z_vftable_0@IT_DYNOBJ_G@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x0051E030, IT_DYNOBJ_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x005157E0, "?ABC_Agent_vftable_14@IT_DYNOBJ_G@@UAEHXZ");
    virtual int ABC_Agent_vftable_14() override;
    ADDRESSVF(0x0051E380, IT_DYNOBJ_G, ABC_Agent_vftable_15);
    virtual void ABC_Agent_vftable_15() override;
    ADDRESSSYMBOL(0x005157F0, "?ABC_Agent_vftable_16@IT_DYNOBJ_G@@UAEXH@Z");
    virtual void ABC_Agent_vftable_16(int) override;
    ADDRESSVF(0x005157D0, IT_DYNOBJ_G, ABC_Agent_vftable_17);
    virtual void ABC_Agent_vftable_17() override;
    ADDRESSVF(0x0051E150, IT_DYNOBJ_G, Agent_Z_vftable_24);
    virtual void Agent_Z_vftable_24() override;
    ADDRESSVF(0x0051E0E0, IT_DYNOBJ_G, Agent_Z_vftable_25);
    virtual void Agent_Z_vftable_25() override;
};

ADDRESSVFTABLE(0x009B560C, IT_Dyn_Vehicle_G);
class __declspec(dllexport) IT_Dyn_Vehicle_G : public IT_DYNBASE_G
{
public:
    ADDRESSSYMBOL(0x0051D020, "?BaseObject_Z_vftable_0@IT_Dyn_Vehicle_G@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x0051CFD0, IT_Dyn_Vehicle_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x0051CEB0, "?ABC_Agent_vftable_14@IT_Dyn_Vehicle_G@@UAEHXZ");
    virtual int ABC_Agent_vftable_14() override;
    ADDRESSVF(0x0051CEC0, IT_Dyn_Vehicle_G, ABC_Agent_vftable_15);
    virtual void ABC_Agent_vftable_15() override;
    ADDRESSSYMBOL(0x0051CED0, "?ABC_Agent_vftable_16@IT_Dyn_Vehicle_G@@UAEXH@Z");
    virtual void ABC_Agent_vftable_16(int) override;
    ADDRESSVF(0x0051CF10, IT_Dyn_Vehicle_G, ABC_Agent_vftable_17);
    virtual void ABC_Agent_vftable_17() override;
    virtual void Agent_Z_vftable_20() override;
    ADDRESSVF(0x0051D090, IT_Dyn_Vehicle_G, IT_DYNBASE_G_vftable_59);
    virtual void IT_DYNBASE_G_vftable_59() override;
    ADDRESSVF(0x0051D110, IT_Dyn_Vehicle_G, IT_DYNBASE_G_vftable_60);
    virtual void IT_DYNBASE_G_vftable_60() override;
};

ADDRESSVFTABLE(0x009B4FCC, IT_LIVERY);
class __declspec(dllexport) IT_LIVERY : public IT_SPINCOLLECT
{
public:
    ADDRESSSYMBOL(0x00519810, "?BaseObject_Z_vftable_0@IT_LIVERY@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x005197D0, IT_LIVERY, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x005196E0, "?ABC_Agent_vftable_14@IT_LIVERY@@UAEHXZ");
    virtual int ABC_Agent_vftable_14() override;
    ADDRESSVF(0x005196F0, IT_LIVERY, ABC_Agent_vftable_15);
    virtual void ABC_Agent_vftable_15() override;
    ADDRESSSYMBOL(0x00519700, "?ABC_Agent_vftable_16@IT_LIVERY@@UAEXH@Z");
    virtual void ABC_Agent_vftable_16(int) override;
    ADDRESSVF(0x00519740, IT_LIVERY, ABC_Agent_vftable_17);
    virtual void ABC_Agent_vftable_17() override;
};

ADDRESSVFTABLE(0x009B49A4, ROLLING_BUSH_G);
class __declspec(dllexport) ROLLING_BUSH_G : public IT_DYNOBJ_G
{
public:
    ADDRESSSYMBOL(0x005156E0, "?BaseObject_Z_vftable_0@ROLLING_BUSH_G@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x005155C0, ROLLING_BUSH_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x00515520, "?ABC_Agent_vftable_14@ROLLING_BUSH_G@@UAEHXZ");
    virtual int ABC_Agent_vftable_14() override;
    ADDRESSVF(0x00515530, ROLLING_BUSH_G, ABC_Agent_vftable_15);
    virtual void ABC_Agent_vftable_15() override;
    ADDRESSSYMBOL(0x00515540, "?ABC_Agent_vftable_16@ROLLING_BUSH_G@@UAEXH@Z");
    virtual void ABC_Agent_vftable_16(int) override;
    ADDRESSVF(0x00515580, ROLLING_BUSH_G, ABC_Agent_vftable_17);
    virtual void ABC_Agent_vftable_17() override;
    ADDRESSSYMBOL(0x00515700, "?Agent_Z_vftable_20@ROLLING_BUSH_G@@UAEXXZ");
    virtual void Agent_Z_vftable_20() override;
};

ADDRESSVFTABLE(0x009B5DFC, IT_SmallDebris);
class __declspec(dllexport) IT_SmallDebris : public IT_Debris
{
public:
    ADDRESSSYMBOL(0x005344C0, "?BaseObject_Z_vftable_0@IT_SmallDebris@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x00534470, IT_SmallDebris, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x00534360, "?ABC_Agent_vftable_14@IT_SmallDebris@@UAEHXZ");
    virtual int ABC_Agent_vftable_14() override;
    ADDRESSVF(0x00534370, IT_SmallDebris, ABC_Agent_vftable_15);
    virtual void ABC_Agent_vftable_15() override;
    ADDRESSSYMBOL(0x00534380, "?ABC_Agent_vftable_16@IT_SmallDebris@@UAEXH@Z");
    virtual void ABC_Agent_vftable_16(int) override;
    ADDRESSVF(0x005343C0, IT_SmallDebris, ABC_Agent_vftable_17);
    virtual void ABC_Agent_vftable_17() override;
    ADDRESSSYMBOL(0x00534520, "?Agent_Z_vftable_20@IT_SmallDebris@@UAEXXZ");
    virtual void Agent_Z_vftable_20() override;
    ADDRESSVF(0x00534540, IT_SmallDebris, Agent_Z_vftable_24);
    virtual void Agent_Z_vftable_24() override;
    ADDRESSVF(0x00534560, IT_SmallDebris, IT_DYNBASE_G_vftable_59);
    virtual void IT_DYNBASE_G_vftable_59() override;
    ADDRESSVF(0x00534590, IT_SmallDebris, IT_DYNBASE_G_vftable_60);
    virtual void IT_DYNBASE_G_vftable_60() override;
    char data[8];
};

ADDRESSVFTABLE(0x009B7C4C, SmallTornadoAgent_G);
class __declspec(dllexport) SmallTornadoAgent_G : public TornadoAgent_G
{
public:
    ADDRESSSYMBOL(0x005BF350, "?BaseObject_Z_vftable_0@SmallTornadoAgent_G@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x005428D0, SmallTornadoAgent_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x00542830, "?ABC_Agent_vftable_14@SmallTornadoAgent_G@@UAEHXZ");
    virtual int ABC_Agent_vftable_14() override;
    ADDRESSVF(0x00542840, SmallTornadoAgent_G, ABC_Agent_vftable_15);
    virtual void ABC_Agent_vftable_15() override;
    ADDRESSSYMBOL(0x00542870, "?ABC_Agent_vftable_16@SmallTornadoAgent_G@@UAEXH@Z");
    virtual void ABC_Agent_vftable_16(int) override;
    ADDRESSVF(0x005428B0, SmallTornadoAgent_G, ABC_Agent_vftable_17);
    virtual void ABC_Agent_vftable_17() override;
    ADDRESSVF(0x005BF3B0, SmallTornadoAgent_G, Agent_Z_vftable_24);
    virtual void Agent_Z_vftable_24() override;
};

ADDRESSVFTABLE(0x009A23CC, P_MOTO);
class __declspec(dllexport) P_MOTO : public Player_G
{
public:
    ADDRESSVF(0x00428FE0, P_MOTO, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x00428F00, "?ABC_Agent_vftable_14@P_MOTO@@UAEHXZ");
    virtual int ABC_Agent_vftable_14() override;
    ADDRESSVF(0x00428F10, P_MOTO, ABC_Agent_vftable_15);
    virtual void ABC_Agent_vftable_15() override;
    ADDRESSSYMBOL(0x00428F20, "?ABC_Agent_vftable_16@P_MOTO@@UAEXH@Z");
    virtual void ABC_Agent_vftable_16(int) override;
    ADDRESSVF(0x00428F60, P_MOTO, ABC_Agent_vftable_17);
    virtual void ABC_Agent_vftable_17() override;
    virtual int Creatures_G_vftable_71() override;
    ADDRESSSYMBOL(0x00428F70, "?Player_G_vftable_134@P_MOTO@@UAEPAXXZ");
    virtual void *Player_G_vftable_134() override;
    virtual int Player_G_vftable_135() override;
};

ADDRESSVFTABLE(0x009B5704, IT_DYNCOLLECT_G);
class __declspec(dllexport) IT_DYNCOLLECT_G : public IT_DYNOBJ_G
{
public:
    ADDRESSSYMBOL(0x0051D460, "?BaseObject_Z_vftable_0@IT_DYNCOLLECT_G@@UAEXXZ");
    virtual void BaseObject_Z_vftable_0() override;
    ADDRESSVF(0x0051D3D0, IT_DYNCOLLECT_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x0051D160, "?ABC_Agent_vftable_14@IT_DYNCOLLECT_G@@UAEHXZ");
    virtual int ABC_Agent_vftable_14() override;
    ADDRESSVF(0x0051D170, IT_DYNCOLLECT_G, ABC_Agent_vftable_15);
    virtual void ABC_Agent_vftable_15() override;
    ADDRESSSYMBOL(0x0051D180, "?ABC_Agent_vftable_16@IT_DYNCOLLECT_G@@UAEXH@Z");
    virtual void ABC_Agent_vftable_16(int) override;
    ADDRESSVF(0x0051D1C0, IT_DYNCOLLECT_G, ABC_Agent_vftable_17);
    virtual void ABC_Agent_vftable_17() override;
    ADDRESSVF(0x0051D540, IT_DYNCOLLECT_G, Agent_Z_vftable_24);
    virtual void Agent_Z_vftable_24() override;
    ADDRESSVF(0x0051D5B0, IT_DYNCOLLECT_G, Agent_Z_vftable_25);
    virtual void Agent_Z_vftable_25() override;
    char data[8];
};

ADDRESSVFTABLE(0x009A2AA4, P_TRUCK);
class __declspec(dllexport) P_TRUCK : public Player_G
{
public:
    ADDRESSVF(0x00429460, P_TRUCK, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x00429380, "?ABC_Agent_vftable_14@P_TRUCK@@UAEHXZ");
    virtual int ABC_Agent_vftable_14() override;
    ADDRESSVF(0x00429390, P_TRUCK, ABC_Agent_vftable_15);
    virtual void ABC_Agent_vftable_15() override;
    ADDRESSSYMBOL(0x004293A0, "?ABC_Agent_vftable_16@P_TRUCK@@UAEXH@Z");
    virtual void ABC_Agent_vftable_16(int) override;
    ADDRESSVF(0x004293E0, P_TRUCK, ABC_Agent_vftable_17);
    virtual void ABC_Agent_vftable_17() override;
    virtual int Creatures_G_vftable_71() override;
    ADDRESSSYMBOL(0x004293F0, "?Player_G_vftable_134@P_TRUCK@@UAEPAXXZ");
    virtual void *Player_G_vftable_134() override;
    virtual int Player_G_vftable_135() override;
};

ADDRESSVFTABLE(0x009B57FC, IT_DYNCOLLECT1_G);
class __declspec(dllexport) IT_DYNCOLLECT1_G : public IT_DYNCOLLECT_G
{
public:
    ADDRESSVF(0x0051D9E0, IT_DYNCOLLECT1_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x0051D1E0, "?ABC_Agent_vftable_14@IT_DYNCOLLECT1_G@@UAEHXZ");
    virtual int ABC_Agent_vftable_14() override;
    ADDRESSVF(0x0051D1F0, IT_DYNCOLLECT1_G, ABC_Agent_vftable_15);
    virtual void ABC_Agent_vftable_15() override;
    ADDRESSSYMBOL(0x0051D200, "?ABC_Agent_vftable_16@IT_DYNCOLLECT1_G@@UAEXH@Z");
    virtual void ABC_Agent_vftable_16(int) override;
    ADDRESSVF(0x0051D250, IT_DYNCOLLECT1_G, ABC_Agent_vftable_17);
    virtual void ABC_Agent_vftable_17() override;
};

ADDRESSVFTABLE(0x009B58F4, IT_DYNCOLLECT2_G);
class __declspec(dllexport) IT_DYNCOLLECT2_G : public IT_DYNCOLLECT_G
{
public:
    ADDRESSVF(0x0051DBB0, IT_DYNCOLLECT2_G, BaseObject_Z_vftable_2);
    virtual void BaseObject_Z_vftable_2() override;
    ADDRESSSYMBOL(0x0051D270, "?ABC_Agent_vftable_14@IT_DYNCOLLECT2_G@@UAEHXZ");
    virtual int ABC_Agent_vftable_14() override;
    ADDRESSVF(0x0051D280, IT_DYNCOLLECT2_G, ABC_Agent_vftable_15);
    virtual void ABC_Agent_vftable_15() override;
    ADDRESSSYMBOL(0x0051D290, "?ABC_Agent_vftable_16@IT_DYNCOLLECT2_G@@UAEXH@Z");
    virtual void ABC_Agent_vftable_16(int) override;
    ADDRESSVF(0x0051D2E0, IT_DYNCOLLECT2_G, ABC_Agent_vftable_17);
    virtual void ABC_Agent_vftable_17() override;
};

#endif // _VFTABLES_H_
