// Function : toFront
// Namespace: juce:LinuxComponentPeer
// Entry    : 002ce5a0
// Prototype: undefined toFront(LinuxComponentPeer * this, int param_1)
// Body     : 002ce5a0 - 002ce839


/* juce::LinuxComponentPeer::toFront(bool) */

void __thiscall juce::LinuxComponentPeer::toFront(LinuxComponentPeer *this,int param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  code *pcVar3;
  int iVar4;
  undefined4 uVar5;
  XWindowSystem *pXVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined1 local_100 [8];
  undefined4 local_f8 [2];
  undefined4 local_f0 [2];
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  
  if (param_1 != 0) {
    pXVar6 = SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
                       ((SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> *)
                        XWindowSystem::singletonHolder);
    uVar11 = *(undefined8 *)(this + 0x120);
    if ((XWindowSystem::singletonHolder._40_8_ != 0) &&
       (lVar8 = *(long *)(XWindowSystem::singletonHolder._40_8_ + 0x148), lVar8 != 0)) {
      lVar7 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
      (**(code **)(lVar7 + 0x210))(lVar8);
    }
                    /* try { // try from 002ce5f8 to 002ce60d has its CatchHandler @ 002ce84a */
    lVar8 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    (**(code **)(lVar8 + 0x228))(*(undefined8 *)(pXVar6 + 0x148),uVar11);
    if ((XWindowSystem::singletonHolder._40_8_ != 0) &&
       (lVar8 = *(long *)(XWindowSystem::singletonHolder._40_8_ + 0x148), lVar8 != 0)) {
                    /* try { // try from 002ce626 to 002ce633 has its CatchHandler @ 002ce83a */
      lVar7 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
      (**(code **)(lVar7 + 0x360))(lVar8);
    }
    pXVar6 = SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
                       ((SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> *)
                        XWindowSystem::singletonHolder);
    uVar9 = XWindowSystem::grabFocus(pXVar6,*(long *)(this + 0x120));
    if ((char)uVar9 != '\0') {
      isActiveApplication = 1;
    }
  }
  pXVar6 = SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
                     ((SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> *)
                      XWindowSystem::singletonHolder);
  uVar11 = *(undefined8 *)(this + 0x120);
  if ((XWindowSystem::singletonHolder._40_8_ != 0) &&
     (lVar8 = *(long *)(XWindowSystem::singletonHolder._40_8_ + 0x148), lVar8 != 0)) {
    lVar7 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    (**(code **)(lVar7 + 0x210))(lVar8);
  }
  local_f0[0] = 0x21;
  local_e8 = 0;
  local_e0 = 1;
  local_c8 = *(undefined8 *)(pXVar6 + 0x48);
  local_c0 = 0x20;
  local_b8 = 2;
  uVar10 = *(undefined8 *)(pXVar6 + 0x40);
  uVar1 = *(undefined8 *)(pXVar6 + 0x148);
  local_118 = (undefined8 *)0x0;
  uStack_110 = 0;
  local_108 = 0;
  local_f8[0] = 0xffffffff;
  local_d0 = uVar11;
                    /* try { // try from 002ce6f7 to 002ce73e has its CatchHandler @ 002ce885 */
  lVar8 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
  iVar4 = (**(code **)(lVar8 + 0x1b8))
                    (uVar1,uVar11,uVar10,0,0x10000,0,6,local_100,local_f8,&uStack_110,&local_108,
                     &local_118);
  if (local_118 == (undefined8 *)0x0 || iVar4 != 0) {
    uVar11 = 0;
    if (local_118 == (undefined8 *)0x0) goto LAB_002ce776;
  }
  else {
    uVar11 = *local_118;
  }
                    /* try { // try from 002ce766 to 002ce775 has its CatchHandler @ 002ce87d */
  lVar8 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
  (**(code **)(lVar8 + 0x128))(local_118);
LAB_002ce776:
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_b0 = uVar11;
                    /* try { // try from 002ce792 to 002ce7f9 has its CatchHandler @ 002ce885 */
  lVar8 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
  pcVar2 = *(code **)(lVar8 + 0x2d0);
  uVar11 = *(undefined8 *)(pXVar6 + 0x148);
  lVar8 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
  pcVar3 = *(code **)(lVar8 + 0x2a8);
  uVar10 = *(undefined8 *)(pXVar6 + 0x148);
  lVar8 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
  uVar5 = (**(code **)(lVar8 + 0xb0))(*(undefined8 *)(pXVar6 + 0x148));
  uVar10 = (*pcVar3)(uVar10,uVar5);
  (*pcVar2)(uVar11,uVar10,0,0x180000,local_f0);
  lVar8 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
  (**(code **)(lVar8 + 0x330))(*(undefined8 *)(pXVar6 + 0x148),0);
  if ((XWindowSystem::singletonHolder._40_8_ != 0) &&
     (lVar8 = *(long *)(XWindowSystem::singletonHolder._40_8_ + 0x148), lVar8 != 0)) {
                    /* try { // try from 002ce812 to 002ce81f has its CatchHandler @ 002ce842 */
    lVar7 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    (**(code **)(lVar7 + 0x360))(lVar8);
  }
  Component::internalBroughtToFront(*(Component **)(this + 8));
  return;
}


