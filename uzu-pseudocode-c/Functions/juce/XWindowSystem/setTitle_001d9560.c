// Function : setTitle
// Namespace: juce:XWindowSystem
// Entry    : 001d9560
// Prototype: undefined setTitle(XWindowSystem * this, undefined8 param_1, undefined8 param_2)
// Body     : 001d9560 - 001d9644


/* juce::XWindowSystem::setTitle(unsigned long, juce::String const&) const */

void __thiscall
juce::XWindowSystem::setTitle(XWindowSystem *this,undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  local_28 = 0;
  uStack_20 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_40 = param_2;
  if ((singletonHolder._40_8_ != 0) &&
     (lVar3 = *(long *)(singletonHolder._40_8_ + 0x148), lVar3 != 0)) {
    lVar2 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    (**(code **)(lVar2 + 0x210))(lVar3);
  }
                    /* try { // try from 001d95a7 to 001d9614 has its CatchHandler @ 001d964d */
  lVar3 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
  iVar1 = (**(code **)(lVar3 + 0x328))(*(undefined8 *)(this + 0x148),&local_40,1,4,&local_38);
  if (-1 < iVar1) {
    lVar3 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    (**(code **)(lVar3 + 0x310))(*(undefined8 *)(this + 0x148),param_1,&local_38);
    lVar3 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    (**(code **)(lVar3 + 0x308))(*(undefined8 *)(this + 0x148),param_1,&local_38);
    lVar3 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    (**(code **)(lVar3 + 0x128))(local_38);
  }
  if ((singletonHolder._40_8_ != 0) &&
     (lVar3 = *(long *)(singletonHolder._40_8_ + 0x148), lVar3 != 0)) {
                    /* try { // try from 001d962d to 001d963a has its CatchHandler @ 001d9645 */
    lVar2 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    (**(code **)(lVar2 + 0x360))(lVar3);
  }
  return;
}


