// Function : grabFocus
// Namespace: juce:XWindowSystem
// Entry    : 002ce970
// Prototype: ulong grabFocus(XWindowSystem * this, long param_1)
// Body     : 002ce970 - 002ceb4a


/* juce::XWindowSystem::grabFocus(unsigned long) const */

ulong __thiscall juce::XWindowSystem::grabFocus(XWindowSystem *this,long param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  juce *this_00;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined1 uVar10;
  undefined8 *local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined1 local_c8 [8];
  undefined4 local_c0 [2];
  undefined1 local_b8 [92];
  int local_5c;
  
  if ((singletonHolder._40_8_ != 0) &&
     (lVar5 = *(long *)(singletonHolder._40_8_ + 0x148), lVar5 != 0)) {
    lVar4 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    (**(code **)(lVar4 + 0x210))(lVar5);
  }
  if (param_1 == 0) {
LAB_002ce9f3:
    uVar7 = 0;
    goto LAB_002ceb11;
  }
                    /* try { // try from 002ce9b2 to 002ceac3 has its CatchHandler @ 002ceb5b */
  lVar5 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
  iVar2 = (**(code **)(lVar5 + 0x1b0))(*(undefined8 *)(this + 0x148),param_1,local_b8);
  uVar7 = 0;
  if ((iVar2 == 0) || (local_5c != 2)) goto LAB_002ceb11;
  uVar3 = isFocused(this,param_1);
  if ((char)uVar3 != '\0') goto LAB_002ce9f3;
  lVar5 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
  pcVar9 = *(code **)(lVar5 + 0x2f0);
  uVar8 = *(undefined8 *)(this + 0x148);
  lVar5 = getPeerFor(param_1);
  if (lVar5 == 0) {
    this_00 = (juce *)0x0;
  }
  else {
    this_00 = (juce *)__dynamic_cast(lVar5,&ComponentPeer::typeinfo,&LinuxComponentPeer::typeinfo,0)
    ;
  }
  lVar5 = juce_getCurrentFocusWindow(this_00);
  if (lVar5 == 0) {
    lVar5 = param_1;
  }
  uVar6 = *(undefined8 *)(this + 0x40);
  uVar1 = *(undefined8 *)(this + 0x148);
  uVar10 = 0;
  local_e0 = (undefined8 *)0x0;
  uStack_d8 = 0;
  local_d0 = 0;
  local_c0[0] = 0xffffffff;
  lVar4 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
  iVar2 = (**(code **)(lVar4 + 0x1b8))
                    (uVar1,param_1,uVar6,0,0x10000,0,6,local_c8,local_c0,&uStack_d8,&local_d0,
                     &local_e0,uVar8,pcVar9,uVar10);
  if (local_e0 == (undefined8 *)0x0 || iVar2 != 0) {
    uVar6 = 0;
    if (local_e0 != (undefined8 *)0x0) goto LAB_002ceaeb;
  }
  else {
    uVar6 = *local_e0;
LAB_002ceaeb:
                    /* try { // try from 002ceaeb to 002ceafa has its CatchHandler @ 002ceb4b */
    lVar4 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    (**(code **)(lVar4 + 0x128))(local_e0);
  }
  uVar7 = CONCAT71((int7)((ulong)local_c0 >> 8),1);
                    /* try { // try from 002ceafe to 002ceb10 has its CatchHandler @ 002ceb5b */
  (*pcVar9)(uVar8,lVar5,2,uVar6);
LAB_002ceb11:
  if ((singletonHolder._40_8_ != 0) &&
     (lVar5 = *(long *)(singletonHolder._40_8_ + 0x148), lVar5 != 0)) {
                    /* try { // try from 002ceb29 to 002ceb36 has its CatchHandler @ 002ceb53 */
    lVar4 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    (**(code **)(lVar4 + 0x360))(lVar5);
  }
  return uVar7 & 0xffffffff;
}


