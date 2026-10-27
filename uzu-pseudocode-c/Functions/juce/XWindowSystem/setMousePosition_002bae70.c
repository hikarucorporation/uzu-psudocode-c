// Function : setMousePosition
// Namespace: juce:XWindowSystem
// Entry    : 002bae70
// Prototype: undefined setMousePosition(undefined8 param_1, XWindowSystem * this)
// Body     : 002bae70 - 002baf65


/* juce::XWindowSystem::setMousePosition(juce::Point<float>) const */

void __thiscall juce::XWindowSystem::setMousePosition(undefined8 param_1,XWindowSystem *this)

{
  code *pcVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((singletonHolder._40_8_ != 0) &&
     (lVar4 = *(long *)(singletonHolder._40_8_ + 0x148), lVar4 != 0)) {
    lVar3 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    (**(code **)(lVar3 + 0x210))(lVar4);
  }
                    /* try { // try from 002baea7 to 002baf35 has its CatchHandler @ 002baf6e */
  lVar4 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
  pcVar1 = *(code **)(lVar4 + 0x2a8);
  uVar5 = *(undefined8 *)(this + 0x148);
  lVar4 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
  uVar2 = (**(code **)(lVar4 + 0xb0))(*(undefined8 *)(this + 0x148));
  uVar5 = (*pcVar1)(uVar5,uVar2);
  lVar4 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
  (**(code **)(lVar4 + 0x370))
            (*(undefined8 *)(this + 0x148),0,uVar5,0,0,0,0,(double)(float)param_1 + DAT_005d9098,
             (double)(float)((ulong)param_1 >> 0x20) + DAT_005d9098);
  if ((singletonHolder._40_8_ != 0) &&
     (lVar4 = *(long *)(singletonHolder._40_8_ + 0x148), lVar4 != 0)) {
                    /* try { // try from 002baf4e to 002baf5b has its CatchHandler @ 002baf66 */
    lVar3 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    (**(code **)(lVar3 + 0x360))(lVar4);
  }
  return;
}


