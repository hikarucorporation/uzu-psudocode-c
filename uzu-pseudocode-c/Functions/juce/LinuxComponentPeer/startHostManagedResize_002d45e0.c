// Function : startHostManagedResize
// Namespace: juce:LinuxComponentPeer
// Entry    : 002d45e0
// Prototype: undefined startHostManagedResize(LinuxComponentPeer * this, undefined8 param_1, int * param_2)
// Body     : 002d45e0 - 002d476f


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::LinuxComponentPeer::startHostManagedResize(juce::Point<int>,
   juce::ResizableBorderComponent::Zone) */

void __thiscall
juce::LinuxComponentPeer::startHostManagedResize
          (LinuxComponentPeer *this,undefined8 param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined4 uVar5;
  XWindowSystem *this_00;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined4 local_90 [6];
  undefined8 local_78;
  undefined8 local_70;
  long local_68;
  undefined4 local_60;
  long local_58;
  long local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  this_00 = SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
                      ((SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> *)
                       XWindowSystem::singletonHolder);
  uVar2 = *(undefined8 *)(this + 0x120);
  iVar1 = *param_2;
  uVar3 = *(undefined8 *)(this_00 + 0x148);
  lVar6 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
  lVar6 = (**(code **)(lVar6 + 0x1f0))(uVar3,"_NET_WM_MOVERESIZE",1);
  if (lVar6 != 0) {
    if ((XWindowSystem::singletonHolder._40_8_ != 0) &&
       (lVar8 = *(long *)(XWindowSystem::singletonHolder._40_8_ + 0x148), lVar8 != 0)) {
      lVar7 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
      (**(code **)(lVar7 + 0x210))(lVar8);
    }
                    /* try { // try from 002d4660 to 002d4674 has its CatchHandler @ 002d477c */
    lVar8 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    (**(code **)(lVar8 + 0x350))(*(undefined8 *)(this_00 + 0x148),0);
                    /* try { // try from 002d4675 to 002d46a2 has its CatchHandler @ 002d477e */
    lVar8 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    pcVar4 = *(code **)(lVar8 + 0x2a8);
    uVar3 = *(undefined8 *)(this_00 + 0x148);
    lVar8 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    uVar5 = (**(code **)(lVar8 + 0xb0))(*(undefined8 *)(this_00 + 0x148));
    uVar9 = (*pcVar4)(uVar3,uVar5);
                    /* try { // try from 002d46a6 to 002d46ad has its CatchHandler @ 002d4778 */
    uVar3 = XWindowSystem::getCurrentMousePosition(this_00);
    local_78 = *(undefined8 *)(this_00 + 0x148);
    local_90[0] = 0x21;
    local_60 = 0x20;
    local_58 = (long)(float)uVar3;
    local_50 = (long)(float)((ulong)uVar3 >> 0x20);
    local_48 = 8;
    if (iVar1 - 1U < 0xc) {
      local_48 = *(undefined8 *)(&DAT_005ea9b0 + (long)(int)(iVar1 - 1U) * 8);
    }
    local_40 = _DAT_005d99f0;
    uStack_38 = _UNK_005d99f8;
    local_70 = uVar2;
    local_68 = lVar6;
                    /* try { // try from 002d4719 to 002d473a has its CatchHandler @ 002d477a */
    lVar6 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    (**(code **)(lVar6 + 0x2d0))(*(undefined8 *)(this_00 + 0x148),uVar9,0,0x180000,local_90);
    if ((XWindowSystem::singletonHolder._40_8_ != 0) &&
       (lVar6 = *(long *)(XWindowSystem::singletonHolder._40_8_ + 0x148), lVar6 != 0)) {
                    /* try { // try from 002d4753 to 002d4760 has its CatchHandler @ 002d4770 */
      lVar8 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
      (**(code **)(lVar8 + 0x360))(lVar6);
    }
  }
  return;
}


