// Function : isShmAvailable
// Namespace: juce:XSHMHelpers
// Entry    : 002c11e0
// Prototype: undefined1 isShmAvailable(long param_1)
// Body     : 002c11e0 - 002c13f6


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::XSHMHelpers::isShmAvailable(_XDisplay*) */

undefined1 __cdecl juce::XSHMHelpers::isShmAvailable(long param_1)

{
  code *pcVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 local_58;
  undefined8 uStack_50;
  void *local_48;
  ulong uStack_40;
  undefined1 local_2c [4];
  undefined1 local_28 [4];
  undefined1 local_24 [4];
  
  if ((isShmAvailable(_XDisplay*)::isChecked == '\0') &&
     (isShmAvailable(_XDisplay*)::isChecked = '\x01', param_1 != 0)) {
    if ((XWindowSystem::singletonHolder._40_8_ != 0) &&
       (lVar6 = *(long *)(XWindowSystem::singletonHolder._40_8_ + 0x148), lVar6 != 0)) {
      lVar5 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
      (**(code **)(lVar5 + 0x210))(lVar6);
    }
                    /* try { // try from 002c1231 to 002c124d has its CatchHandler @ 002c1401 */
    lVar6 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    iVar3 = (**(code **)(lVar6 + 0x400))(param_1,local_24,local_28,local_2c);
    if (iVar3 != 0) {
      trappedErrorCode = 0;
                    /* try { // try from 002c1260 to 002c1271 has its CatchHandler @ 002c13ff */
      lVar6 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
      uVar7 = (**(code **)(lVar6 + 0x2e0))(errorTrapHandler);
      local_48 = (void *)0x0;
      uStack_40 = 0;
      local_58 = 0;
      uStack_50 = 0;
                    /* try { // try from 002c1281 to 002c13ae has its CatchHandler @ 002c1403 */
      lVar6 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
      pcVar1 = *(code **)(lVar6 + 0x3e0);
      lVar6 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
      pcVar2 = *(code **)(lVar6 + 0xc0);
      lVar6 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
      uVar4 = (**(code **)(lVar6 + 0xb0))(param_1);
      uVar8 = (*pcVar2)(param_1,uVar4);
      lVar6 = (*pcVar1)(param_1,uVar8,0x18,2,0,&local_58,0x32,0x32);
      if (lVar6 != 0) {
        iVar3 = shmget(0,(long)*(int *)(lVar6 + 4) * (long)*(int *)(lVar6 + 0x2c),0x3ff);
        uStack_50 = CONCAT44(uStack_50._4_4_,iVar3);
        if (-1 < iVar3) {
          local_48 = shmat(iVar3,(void *)0x0,0);
          if (local_48 != (void *)0xffffffffffffffff) {
            uStack_40 = uStack_40 & 0xffffffff00000000;
            *(void **)(lVar6 + 0x10) = local_48;
            lVar5 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
            (**(code **)(lVar5 + 0x330))(param_1,0);
            lVar5 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
            iVar3 = (**(code **)(lVar5 + 0x3d8))(param_1);
            if (iVar3 != 0) {
              lVar5 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
              (**(code **)(lVar5 + 1000))(param_1);
              lVar5 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
              (**(code **)(lVar5 + 0x330))(param_1);
              isShmAvailable(_XDisplay*)::isAvailable = 1;
            }
          }
          lVar5 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
          (**(code **)(lVar5 + 0x120))(param_1);
          lVar5 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
          (**(code **)(lVar5 + 0xe0))(lVar6);
          shmdt(local_48);
          iVar3 = (int)uStack_50;
        }
        shmctl(iVar3,0,(shmid_ds *)0x0);
        lVar6 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
        (**(code **)(lVar6 + 0x2e0))(uVar7);
        if (trappedErrorCode != 0) {
          isShmAvailable(_XDisplay*)::isAvailable = 0;
        }
      }
    }
    if ((XWindowSystem::singletonHolder._40_8_ != 0) &&
       (lVar6 = *(long *)(XWindowSystem::singletonHolder._40_8_ + 0x148), lVar6 != 0)) {
                    /* try { // try from 002c13d7 to 002c13e4 has its CatchHandler @ 002c13f7 */
      lVar5 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
      (**(code **)(lVar5 + 0x360))(lVar6);
    }
  }
  return isShmAvailable(_XDisplay*)::isAvailable;
}


