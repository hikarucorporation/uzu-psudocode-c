// Function : findTopLevelWindowOf
// Namespace: juce:XWindowSystem
// Entry    : 002d57d0
// Prototype: long findTopLevelWindowOf(XWindowSystem * this, long param_1)
// Body     : 002d57d0 - 002d58c1


/* juce::XWindowSystem::findTopLevelWindowOf(unsigned long) const */

long __thiscall juce::XWindowSystem::findTopLevelWindowOf(XWindowSystem *this,long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined4 local_3c;
  long local_38;
  long local_30;
  long local_28;
  long local_20;
  
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    local_38 = 0;
    local_3c = 0;
    if ((singletonHolder._40_8_ != 0) &&
       (lVar3 = *(long *)(singletonHolder._40_8_ + 0x148), lVar3 != 0)) {
      lVar2 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
      (**(code **)(lVar2 + 0x210))(lVar3);
    }
                    /* try { // try from 002d581f to 002d5847 has its CatchHandler @ 002d58e1 */
    lVar3 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    iVar1 = (**(code **)(lVar3 + 0x280))
                      (*(undefined8 *)(this + 0x148),param_1,&local_28,&local_20,&local_38,&local_3c
                      );
    lVar3 = local_38;
    local_30 = local_38;
    if (iVar1 == 0) {
      param_1 = 0;
    }
    else if (local_20 != local_28) {
                    /* try { // try from 002d5862 to 002d5869 has its CatchHandler @ 002d58c2 */
      param_1 = findTopLevelWindowOf(this,local_20);
    }
    if (lVar3 != 0) {
                    /* try { // try from 002d5881 to 002d588e has its CatchHandler @ 002d58d9 */
      lVar2 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
      (**(code **)(lVar2 + 0x128))(lVar3);
    }
    if ((singletonHolder._40_8_ != 0) &&
       (lVar3 = *(long *)(singletonHolder._40_8_ + 0x148), lVar3 != 0)) {
                    /* try { // try from 002d58a7 to 002d58b4 has its CatchHandler @ 002d58d1 */
      lVar2 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
      (**(code **)(lVar2 + 0x360))(lVar3);
    }
  }
  return param_1;
}


