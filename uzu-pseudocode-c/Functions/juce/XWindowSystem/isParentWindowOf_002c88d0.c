// Function : isParentWindowOf
// Namespace: juce:XWindowSystem
// Entry    : 002c88d0
// Prototype: undefined4 isParentWindowOf(XWindowSystem * this, long param_1, long param_2)
// Body     : 002c88d0 - 002c89d8


/* juce::XWindowSystem::isParentWindowOf(unsigned long, unsigned long) const */

undefined4 __thiscall
juce::XWindowSystem::isParentWindowOf(XWindowSystem *this,long param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  undefined4 local_44;
  long local_40;
  long local_38;
  long local_30;
  long local_28;
  
  uVar2 = 0;
  if (((param_1 != 0) && (param_2 != 0)) && (uVar2 = 1, param_2 != param_1)) {
    local_40 = 0;
    local_44 = 0;
    if ((singletonHolder._40_8_ != 0) &&
       (lVar4 = *(long *)(singletonHolder._40_8_ + 0x148), lVar4 != 0)) {
      lVar3 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
      (**(code **)(lVar3 + 0x210))(lVar4);
    }
                    /* try { // try from 002c893a to 002c8962 has its CatchHandler @ 002c89f8 */
    lVar4 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    iVar1 = (**(code **)(lVar4 + 0x280))
                      (*(undefined8 *)(this + 0x148),param_2,&local_30,&local_28,&local_40,&local_44
                      );
    lVar4 = local_40;
    local_38 = local_40;
    if ((iVar1 == 0) || (local_28 == local_30)) {
      uVar2 = 0;
    }
    else {
                    /* try { // try from 002c8986 to 002c8990 has its CatchHandler @ 002c89d9 */
      uVar2 = isParentWindowOf(this,param_1,local_28);
    }
    if (lVar4 != 0) {
                    /* try { // try from 002c8998 to 002c89a5 has its CatchHandler @ 002c89f0 */
      lVar3 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
      (**(code **)(lVar3 + 0x128))(lVar4);
    }
    if ((singletonHolder._40_8_ != 0) &&
       (lVar4 = *(long *)(singletonHolder._40_8_ + 0x148), lVar4 != 0)) {
                    /* try { // try from 002c89be to 002c89cb has its CatchHandler @ 002c89e8 */
      lVar3 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
      (**(code **)(lVar3 + 0x360))(lVar4);
    }
  }
  return uVar2;
}


