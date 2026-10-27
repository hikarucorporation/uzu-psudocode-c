// Function : canUseARGBImages
// Namespace: juce:XWindowSystem
// Entry    : 001d9410
// Prototype: undefined1 canUseARGBImages(XWindowSystem * this)
// Body     : 001d9410 - 001d9538


/* juce::XWindowSystem::canUseARGBImages() const */

undefined1 __thiscall juce::XWindowSystem::canUseARGBImages(XWindowSystem *this)

{
  code *pcVar1;
  undefined8 uVar2;
  code *pcVar3;
  char cVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 auStack_48 [32];
  
  if (canUseARGBImages()::checked == '\0') {
    cVar4 = XSHMHelpers::isShmAvailable(*(long *)(this + 0x148));
    if (cVar4 == '\0') {
      canUseARGBImages()::canUseARGB = 0;
    }
    else {
      if ((singletonHolder._40_8_ != 0) &&
         (lVar7 = *(long *)(singletonHolder._40_8_ + 0x148), lVar7 != 0)) {
        lVar6 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
        (**(code **)(lVar6 + 0x210))(lVar7);
      }
                    /* try { // try from 001d9467 to 001d94f7 has its CatchHandler @ 001d9541 */
      lVar7 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
      pcVar1 = *(code **)(lVar7 + 0x3e0);
      uVar2 = *(undefined8 *)(this + 0x148);
      lVar7 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
      pcVar3 = *(code **)(lVar7 + 0xc0);
      uVar8 = *(undefined8 *)(this + 0x148);
      lVar7 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
      uVar5 = (**(code **)(lVar7 + 0xb0))(*(undefined8 *)(this + 0x148));
      uVar8 = (*pcVar3)(uVar8,uVar5);
      lVar7 = (*pcVar1)(uVar2,uVar8,0x18,2,0,auStack_48,0x40,0x40);
      if (lVar7 == 0) {
        canUseARGBImages()::canUseARGB = false;
      }
      else {
        canUseARGBImages()::canUseARGB = *(int *)(lVar7 + 0x30) == 0x20;
      }
      lVar6 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
      (**(code **)(lVar6 + 0xe0))(lVar7);
      if ((singletonHolder._40_8_ != 0) &&
         (lVar7 = *(long *)(singletonHolder._40_8_ + 0x148), lVar7 != 0)) {
                    /* try { // try from 001d9510 to 001d951d has its CatchHandler @ 001d9539 */
        lVar6 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
        (**(code **)(lVar6 + 0x360))(lVar7);
      }
    }
    canUseARGBImages()::checked = '\x01';
  }
  return canUseARGBImages()::canUseARGB;
}


