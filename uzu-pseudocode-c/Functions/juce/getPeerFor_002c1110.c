// Function : getPeerFor
// Namespace: juce
// Entry    : 002c1110
// Prototype: undefined8 getPeerFor(long param_1)
// Body     : 002c1110 - 002c11c7


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::getPeerFor(unsigned long) */

undefined8 __cdecl juce::getPeerFor(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  XWindowSystem *pXVar4;
  long lVar5;
  long lVar6;
  undefined8 local_20;
  
  if (param_1 != 0) {
    pXVar4 = SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
                       ((SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> *)
                        XWindowSystem::singletonHolder);
    lVar1 = *(long *)(pXVar4 + 0x148);
    if (lVar1 != 0) {
      if ((XWindowSystem::singletonHolder._40_8_ != 0) &&
         (lVar6 = *(long *)(XWindowSystem::singletonHolder._40_8_ + 0x148), lVar6 != 0)) {
        lVar5 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
        (**(code **)(lVar5 + 0x210))(lVar6);
      }
      local_20 = 0;
                    /* try { // try from 002c116b to 002c1186 has its CatchHandler @ 002c11d0 */
      lVar6 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
      iVar3 = (**(code **)(lVar6 + 0x118))(lVar1,param_1,windowHandleXContext,&local_20);
      uVar2 = local_20;
      if ((XWindowSystem::singletonHolder._40_8_ != 0) &&
         (lVar1 = *(long *)(XWindowSystem::singletonHolder._40_8_ + 0x148), lVar1 != 0)) {
                    /* try { // try from 002c11a7 to 002c11b4 has its CatchHandler @ 002c11c8 */
        lVar6 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
        (**(code **)(lVar6 + 0x360))(lVar1);
      }
      if (iVar3 == 0) {
        return uVar2;
      }
    }
  }
  return 0;
}


