// Function : isFocused
// Namespace: juce:XWindowSystem
// Entry    : 002c8bd0
// Prototype: undefined4 isFocused(XWindowSystem * this, long param_1)
// Body     : 002c8bd0 - 002c8c89


/* juce::XWindowSystem::isFocused(unsigned long) const */

undefined4 __thiscall juce::XWindowSystem::isFocused(XWindowSystem *this,long param_1)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  undefined4 local_24;
  long local_20;
  
  local_24 = 0;
  local_20 = 0;
  if ((singletonHolder._40_8_ != 0) &&
     (lVar3 = *(long *)(singletonHolder._40_8_ + 0x148), lVar3 != 0)) {
    lVar2 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    (**(code **)(lVar2 + 0x210))(lVar3);
  }
                    /* try { // try from 002c8c15 to 002c8c56 has its CatchHandler @ 002c8c92 */
  lVar3 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
  (**(code **)(lVar3 + 0x180))(*(undefined8 *)(this + 0x148),&local_20,&local_24);
  if (local_20 == 1) {
    uVar1 = 0;
  }
  else {
    uVar1 = isParentWindowOf(this,param_1,local_20);
  }
  if ((singletonHolder._40_8_ != 0) &&
     (lVar3 = *(long *)(singletonHolder._40_8_ + 0x148), lVar3 != 0)) {
                    /* try { // try from 002c8c71 to 002c8c7e has its CatchHandler @ 002c8c8a */
    lVar2 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    (**(code **)(lVar2 + 0x360))(lVar3);
  }
  return uVar1;
}


