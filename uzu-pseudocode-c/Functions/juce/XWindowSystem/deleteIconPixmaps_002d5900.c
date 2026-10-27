// Function : deleteIconPixmaps
// Namespace: juce:XWindowSystem
// Entry    : 002d5900
// Prototype: undefined deleteIconPixmaps(XWindowSystem * this, undefined8 param_1)
// Body     : 002d5900 - 002d59f4


/* juce::XWindowSystem::deleteIconPixmaps(unsigned long) const */

void __thiscall juce::XWindowSystem::deleteIconPixmaps(XWindowSystem *this,undefined8 param_1)

{
  long lVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  
  if ((singletonHolder._40_8_ != 0) &&
     (lVar2 = *(long *)(singletonHolder._40_8_ + 0x148), lVar2 != 0)) {
    lVar1 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    (**(code **)(lVar1 + 0x210))(lVar2);
  }
                    /* try { // try from 002d5935 to 002d5949 has its CatchHandler @ 002d5a05 */
  lVar2 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
  puVar3 = (ulong *)(**(code **)(lVar2 + 0x1a8))(*(undefined8 *)(this + 0x148),param_1);
  if (puVar3 != (ulong *)0x0) {
    uVar4 = *puVar3;
    if ((uVar4 & 4) != 0) {
      *puVar3 = uVar4 & 0xfffffffffffffffb;
                    /* try { // try from 002d5965 to 002d59b6 has its CatchHandler @ 002d5a0a */
      lVar2 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
      (**(code **)(lVar2 + 0x150))(*(undefined8 *)(this + 0x148),puVar3[2]);
      uVar4 = *puVar3;
    }
    if ((uVar4 & 0x20) != 0) {
      *puVar3 = uVar4 & 0xffffffffffffffdf;
      lVar2 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
      (**(code **)(lVar2 + 0x150))(*(undefined8 *)(this + 0x148),puVar3[5]);
    }
    lVar2 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    (**(code **)(lVar2 + 0x300))(*(undefined8 *)(this + 0x148),param_1,puVar3);
                    /* try { // try from 002d59b7 to 002d59c4 has its CatchHandler @ 002d59fd */
    lVar2 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    (**(code **)(lVar2 + 0x128))(puVar3);
  }
  if ((singletonHolder._40_8_ != 0) &&
     (lVar2 = *(long *)(singletonHolder._40_8_ + 0x148), lVar2 != 0)) {
                    /* try { // try from 002d59dd to 002d59ea has its CatchHandler @ 002d59f5 */
    lVar1 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    (**(code **)(lVar1 + 0x360))(lVar2);
  }
  return;
}


