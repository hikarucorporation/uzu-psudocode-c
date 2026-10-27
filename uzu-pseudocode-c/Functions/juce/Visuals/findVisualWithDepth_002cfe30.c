// Function : findVisualWithDepth
// Namespace: juce:Visuals
// Entry    : 002cfe30
// Prototype: undefined8 findVisualWithDepth(undefined8 param_1, int param_2)
// Body     : 002cfe30 - 002cff4e


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::Visuals::findVisualWithDepth(_XDisplay*, int) */

undefined8 __cdecl juce::Visuals::findVisualWithDepth(undefined8 param_1,int param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  uint local_5c;
  undefined1 local_58 [16];
  undefined4 local_48;
  int local_44;
  undefined4 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined4 local_1c;
  
  if ((XWindowSystem::singletonHolder._40_8_ != 0) &&
     (lVar2 = *(long *)(XWindowSystem::singletonHolder._40_8_ + 0x148), lVar2 != 0)) {
    lVar1 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    (**(code **)(lVar1 + 0x210))(lVar2);
  }
  local_5c = 0;
                    /* try { // try from 002cfe6b to 002cfe78 has its CatchHandler @ 002cff61 */
  lVar2 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
  local_48 = (**(code **)(lVar2 + 0xb0))(param_1);
  uVar3 = 6;
  if (param_2 == 0x20) {
    local_40 = 4;
    local_38 = _DAT_005dd2a0;
    uStack_30 = _UNK_005dd2a8;
    local_28 = 0xff;
    local_1c = 8;
    uVar3 = 0x17e;
  }
  local_44 = param_2;
                    /* try { // try from 002cfeb5 to 002cfecf has its CatchHandler @ 002cff5f */
  lVar2 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
  lVar2 = (**(code **)(lVar2 + 0x1a0))(param_1,uVar3,local_58,&local_5c);
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    if ((int)local_5c < 1) {
      uVar3 = 0;
    }
    else {
      uVar3 = 0;
      lVar1 = 0;
      do {
        if (*(int *)(lVar2 + 0x14 + lVar1) == param_2) {
          uVar3 = *(undefined8 *)(lVar2 + lVar1);
          break;
        }
        lVar1 = lVar1 + 0x40;
      } while ((ulong)local_5c * 0x40 != lVar1);
    }
                    /* try { // try from 002cff0f to 002cff1c has its CatchHandler @ 002cff57 */
    lVar1 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    (**(code **)(lVar1 + 0x128))(lVar2);
  }
  if ((XWindowSystem::singletonHolder._40_8_ != 0) &&
     (lVar2 = *(long *)(XWindowSystem::singletonHolder._40_8_ + 0x148), lVar2 != 0)) {
                    /* try { // try from 002cff35 to 002cff42 has its CatchHandler @ 002cff4f */
    lVar1 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    (**(code **)(lVar1 + 0x360))(lVar2);
  }
  return uVar3;
}


