// Function : setVisible
// Namespace: juce:XWindowSystem
// Entry    : 002ce8c0
// Prototype: undefined setVisible(XWindowSystem * this, undefined8 param_1, char param_2)
// Body     : 002ce8c0 - 002ce956


/* juce::XWindowSystem::setVisible(unsigned long, bool) const */

void __thiscall juce::XWindowSystem::setVisible(XWindowSystem *this,undefined8 param_1,char param_2)

{
  long lVar1;
  long lVar2;
  
  if ((singletonHolder._40_8_ != 0) &&
     (lVar2 = *(long *)(singletonHolder._40_8_ + 0x148), lVar2 != 0)) {
    lVar1 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    (**(code **)(lVar1 + 0x210))(lVar2);
  }
  if (param_2 == '\0') {
    lVar2 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    (**(code **)(lVar2 + 0x368))(*(undefined8 *)(this + 0x148),param_1);
  }
  else {
                    /* try { // try from 002ce8fa to 002ce925 has its CatchHandler @ 002ce95f */
    lVar2 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    (**(code **)(lVar2 + 0x228))(*(undefined8 *)(this + 0x148),param_1);
  }
  if ((singletonHolder._40_8_ != 0) &&
     (lVar2 = *(long *)(singletonHolder._40_8_ + 0x148), lVar2 != 0)) {
                    /* try { // try from 002ce93e to 002ce94b has its CatchHandler @ 002ce957 */
    lVar1 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    (**(code **)(lVar1 + 0x360))(lVar2);
  }
  return;
}


