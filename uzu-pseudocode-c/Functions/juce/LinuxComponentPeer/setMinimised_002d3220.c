// Function : setMinimised
// Namespace: juce:LinuxComponentPeer
// Entry    : 002d3220
// Prototype: undefined setMinimised(LinuxComponentPeer * this, int param_1)
// Body     : 002d3220 - 002d3390


/* juce::LinuxComponentPeer::setMinimised(bool) */

void __thiscall juce::LinuxComponentPeer::setMinimised(LinuxComponentPeer *this,int param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  XWindowSystem *pXVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined4 local_88 [6];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  
  pXVar4 = SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
                     ((SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> *)
                      XWindowSystem::singletonHolder);
  uVar1 = *(undefined8 *)(this + 0x120);
  if (param_1 == 0) {
    if ((XWindowSystem::singletonHolder._40_8_ != 0) &&
       (lVar5 = *(long *)(XWindowSystem::singletonHolder._40_8_ + 0x148), lVar5 != 0)) {
      lVar7 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
      (**(code **)(lVar7 + 0x210))(lVar5);
    }
                    /* try { // try from 002d3348 to 002d335d has its CatchHandler @ 002d33a1 */
    lVar5 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    (**(code **)(lVar5 + 0x228))(*(undefined8 *)(pXVar4 + 0x148),uVar1);
    if ((XWindowSystem::singletonHolder._40_8_ != 0) &&
       (lVar5 = *(long *)(XWindowSystem::singletonHolder._40_8_ + 0x148), lVar5 != 0)) {
                    /* try { // try from 002d3376 to 002d3383 has its CatchHandler @ 002d3391 */
      lVar7 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
      (**(code **)(lVar7 + 0x360))(lVar5);
    }
  }
  else {
    lVar5 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    pcVar2 = *(code **)(lVar5 + 0x2a8);
    uVar6 = *(undefined8 *)(pXVar4 + 0x148);
    lVar5 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    uVar3 = (**(code **)(lVar5 + 0xb0))(*(undefined8 *)(pXVar4 + 0x148));
    uVar6 = (*pcVar2)(uVar6,uVar3);
    local_70 = *(undefined8 *)(pXVar4 + 0x148);
    local_88[0] = 0x21;
    local_58 = 0x20;
    local_60 = *(undefined8 *)(pXVar4 + 0x30);
    local_50 = 3;
    local_68 = uVar1;
    if ((XWindowSystem::singletonHolder._40_8_ != 0) &&
       (lVar5 = *(long *)(XWindowSystem::singletonHolder._40_8_ + 0x148), lVar5 != 0)) {
      lVar7 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
      (**(code **)(lVar7 + 0x210))(lVar5);
    }
                    /* try { // try from 002d32da to 002d32f9 has its CatchHandler @ 002d33d4 */
    lVar5 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    (**(code **)(lVar5 + 0x2d0))(*(undefined8 *)(pXVar4 + 0x148),uVar6,0,0x180000,local_88);
    if ((XWindowSystem::singletonHolder._40_8_ != 0) &&
       (lVar5 = *(long *)(XWindowSystem::singletonHolder._40_8_ + 0x148), lVar5 != 0)) {
                    /* try { // try from 002d3312 to 002d331f has its CatchHandler @ 002d3399 */
      lVar7 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
      (**(code **)(lVar7 + 0x360))(lVar5);
    }
  }
  return;
}


