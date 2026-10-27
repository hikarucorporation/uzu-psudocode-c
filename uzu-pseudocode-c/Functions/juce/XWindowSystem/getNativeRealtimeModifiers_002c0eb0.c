// Function : getNativeRealtimeModifiers
// Namespace: juce:XWindowSystem
// Entry    : 002c0eb0
// Prototype: uint getNativeRealtimeModifiers(XWindowSystem * this)
// Body     : 002c0eb0 - 002c1011


/* juce::XWindowSystem::getNativeRealtimeModifiers() const */

uint __thiscall juce::XWindowSystem::getNativeRealtimeModifiers(XWindowSystem *this)

{
  code *pcVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  uint uVar9;
  uint *puVar10;
  uint local_54;
  uint local_50;
  uint local_4c;
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  undefined1 local_38 [8];
  undefined1 local_30 [8];
  
  local_50 = 0;
  local_54 = 0;
  if ((singletonHolder._40_8_ != 0) &&
     (lVar7 = *(long *)(singletonHolder._40_8_ + 0x148), lVar7 != 0)) {
    lVar6 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    (**(code **)(lVar6 + 0x210))(lVar7);
  }
                    /* try { // try from 002c0ef6 to 002c0f6e has its CatchHandler @ 002c101a */
  lVar7 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
  pcVar1 = *(code **)(lVar7 + 0x278);
  uVar2 = *(undefined8 *)(this + 0x148);
  lVar7 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
  pcVar3 = *(code **)(lVar7 + 0x2a8);
  uVar8 = *(undefined8 *)(this + 0x148);
  lVar7 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
  uVar4 = (**(code **)(lVar7 + 0xb0))(*(undefined8 *)(this + 0x148));
  uVar8 = (*pcVar3)(uVar8,uVar4);
  iVar5 = (*pcVar1)(uVar2,uVar8,local_30,local_38,local_3c,local_40,local_44,local_48,&local_4c);
  if (iVar5 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = local_4c >> 5 & 0x20 | local_4c >> 3 & 0x40 | local_4c >> 4 & 0x10;
    puVar10 = &local_50;
    if ((local_4c & 1) == 0) {
      puVar10 = &local_54;
    }
    *puVar10 = *puVar10 | 1;
    puVar10 = &local_50;
    if ((local_4c & 4) == 0) {
      puVar10 = &local_54;
    }
    *(byte *)puVar10 = (byte)*puVar10 | 2;
  }
  uVar9 = ~local_54 & (ModifierKeys::currentModifiers & 0xfffffe0f | uVar9) | local_50;
  Keys::modifierKeysAreStale = 1;
  ModifierKeys::currentModifiers = uVar9;
  if ((singletonHolder._40_8_ != 0) &&
     (lVar7 = *(long *)(singletonHolder._40_8_ + 0x148), lVar7 != 0)) {
                    /* try { // try from 002c0ff4 to 002c1001 has its CatchHandler @ 002c1012 */
    lVar6 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    (**(code **)(lVar6 + 0x360))(lVar7);
  }
  return uVar9;
}


