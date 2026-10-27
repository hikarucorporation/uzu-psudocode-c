// Function : isKeyCurrentlyDown
// Namespace: juce:XWindowSystem
// Entry    : 00233160
// Prototype: bool isKeyCurrentlyDown(XWindowSystem * this, uint param_1)
// Body     : 00233160 - 0023322b


/* juce::XWindowSystem::isKeyCurrentlyDown(int) const */

bool __thiscall juce::XWindowSystem::isKeyCurrentlyDown(XWindowSystem *this,uint param_1)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  
  if ((param_1 & 0x10000000) == 0) {
    if ((param_1 < 0x1c) && ((0x8002300U >> (param_1 & 0x1f) & 1) != 0)) {
      param_1 = param_1 | 0xff00;
    }
  }
  else {
    param_1 = param_1 & 0xff | 0xff00;
  }
  if ((singletonHolder._40_8_ != 0) &&
     (lVar3 = *(long *)(singletonHolder._40_8_ + 0x148), lVar3 != 0)) {
    lVar4 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    (**(code **)(lVar4 + 0x210))(lVar3);
  }
                    /* try { // try from 002331c6 to 002331da has its CatchHandler @ 00233234 */
  lVar3 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
  bVar2 = (**(code **)(lVar3 + 0x200))(*(undefined8 *)(this + 0x148),(long)(int)param_1);
  bVar1 = Keys::keyStates[bVar2 >> 3];
  if ((singletonHolder._40_8_ != 0) &&
     (lVar3 = *(long *)(singletonHolder._40_8_ + 0x148), lVar3 != 0)) {
                    /* try { // try from 00233207 to 00233214 has its CatchHandler @ 0023322c */
    lVar4 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    (**(code **)(lVar4 + 0x360))(lVar3);
  }
  return (bVar1 >> (bVar2 & 7) & 1) != 0;
}


