// Function : externalFindDragTargetWindow
// Namespace: juce:X11DragState
// Entry    : 002cd080
// Prototype: long externalFindDragTargetWindow(long param_1)
// Body     : 002cd080 - 002cd1ae


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::X11DragState::externalFindDragTargetWindow(unsigned long) */

long __cdecl juce::X11DragState::externalFindDragTargetWindow(long param_1)

{
  code *pcVar1;
  long lVar2;
  bool bVar3;
  long lVar4;
  XWindowSystem *pXVar5;
  long lVar6;
  int local_50;
  undefined4 uStack_4c;
  long local_48;
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  undefined1 local_38 [8];
  
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    local_50 = 0;
    lVar4 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    pcVar1 = *(code **)(lVar4 + 0x208);
                    /* try { // try from 002cd0ae to 002cd0b9 has its CatchHandler @ 002cd1b7 */
    pXVar5 = SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
                       ((SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> *)
                        XWindowSystem::singletonHolder);
    lVar4 = (*pcVar1)(*(undefined8 *)(pXVar5 + 0x148),param_1,&local_50);
    if (local_50 < 1) {
      if (lVar4 != 0) {
        lVar6 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
        (**(code **)(lVar6 + 0x128))(lVar4);
      }
    }
    else {
      lVar6 = 0;
      bVar3 = false;
      local_48 = param_1;
      do {
        lVar2 = *(long *)(lVar4 + lVar6 * 8);
                    /* try { // try from 002cd0f4 to 002cd0fb has its CatchHandler @ 002cd1bf */
        pXVar5 = SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
                           ((SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> *)
                            XWindowSystem::singletonHolder);
        if (lVar2 == *(long *)(pXVar5 + 0x70)) {
          bVar3 = true;
        }
        lVar6 = lVar6 + 1;
      } while (lVar6 < local_50);
      lVar6 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
      (**(code **)(lVar6 + 0x128))(lVar4);
      param_1 = local_48;
      if (bVar3) {
        return local_48;
      }
    }
    lVar4 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    pcVar1 = *(code **)(lVar4 + 0x278);
                    /* try { // try from 002cd154 to 002cd15f has its CatchHandler @ 002cd1af */
    pXVar5 = SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
                       ((SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> *)
                        XWindowSystem::singletonHolder);
    (*pcVar1)(*(undefined8 *)(pXVar5 + 0x148),param_1,local_38,&local_50,local_3c,local_3c,local_3c,
              local_3c,local_40);
    lVar4 = externalFindDragTargetWindow(CONCAT44(uStack_4c,local_50));
  }
  return lVar4;
}


