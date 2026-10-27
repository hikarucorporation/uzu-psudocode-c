// Function : toBehind
// Namespace: juce:LinuxComponentPeer
// Entry    : 002d4c50
// Prototype: undefined toBehind(LinuxComponentPeer * this, long param_1)
// Body     : 002d4c50 - 002d4dc1


/* juce::LinuxComponentPeer::toBehind(juce::ComponentPeer*) */

void __thiscall juce::LinuxComponentPeer::toBehind(LinuxComponentPeer *this,long param_1)

{
  undefined8 uVar1;
  long lVar2;
  XWindowSystem *pXVar3;
  long lVar4;
  long lVar5;
  long local_38;
  long local_30;
  
  if (param_1 != 0) {
    lVar2 = __dynamic_cast(param_1,&ComponentPeer::typeinfo,&typeinfo,0);
    if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0x10) & 2) == 0)) {
      pXVar3 = SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
                         ((SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> *)
                          XWindowSystem::singletonHolder);
      uVar1 = *(undefined8 *)(this + 0x120);
      if ((XWindowSystem::singletonHolder._40_8_ != 0) &&
         (lVar5 = *(long *)(XWindowSystem::singletonHolder._40_8_ + 0x148), lVar5 != 0)) {
        lVar4 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
        (**(code **)(lVar4 + 0x210))(lVar5);
      }
                    /* try { // try from 002d4cd6 to 002d4ceb has its CatchHandler @ 002d4e05 */
      lVar5 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
      (**(code **)(lVar5 + 0x228))(*(undefined8 *)(pXVar3 + 0x148),uVar1);
      if ((XWindowSystem::singletonHolder._40_8_ != 0) &&
         (lVar5 = *(long *)(XWindowSystem::singletonHolder._40_8_ + 0x148), lVar5 != 0)) {
                    /* try { // try from 002d4d04 to 002d4d11 has its CatchHandler @ 002d4dca */
        lVar4 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
        (**(code **)(lVar4 + 0x360))(lVar5);
      }
      pXVar3 = SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
                         ((SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> *)
                          XWindowSystem::singletonHolder);
      lVar2 = *(long *)(lVar2 + 0x120);
      lVar5 = XWindowSystem::findTopLevelWindowOf(pXVar3,*(long *)(this + 0x120));
      local_30 = XWindowSystem::findTopLevelWindowOf(pXVar3,lVar2);
      local_38 = lVar5;
      if ((XWindowSystem::singletonHolder._40_8_ != 0) &&
         (lVar2 = *(long *)(XWindowSystem::singletonHolder._40_8_ + 0x148), lVar2 != 0)) {
        lVar5 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
        (**(code **)(lVar5 + 0x210))(lVar2);
      }
                    /* try { // try from 002d4d74 to 002d4d8d has its CatchHandler @ 002d4dd2 */
      lVar2 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
      (**(code **)(lVar2 + 0x2a0))(*(undefined8 *)(pXVar3 + 0x148),&local_38,2);
      if ((XWindowSystem::singletonHolder._40_8_ != 0) &&
         (lVar2 = *(long *)(XWindowSystem::singletonHolder._40_8_ + 0x148), lVar2 != 0)) {
                    /* try { // try from 002d4da6 to 002d4db3 has its CatchHandler @ 002d4dc2 */
        lVar5 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
        (**(code **)(lVar5 + 0x360))(lVar2);
      }
    }
  }
  return;
}


