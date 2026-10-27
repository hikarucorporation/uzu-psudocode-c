// Function : ~ScopedWindowAssociation
// Namespace: juce:ScopedWindowAssociation
// Entry    : 001d99a0
// Prototype: undefined ~ScopedWindowAssociation(ScopedWindowAssociation * this)
// Body     : 001d99a0 - 001d9a13


/* juce::ScopedWindowAssociation::~ScopedWindowAssociation() */

void __thiscall
juce::ScopedWindowAssociation::~ScopedWindowAssociation(ScopedWindowAssociation *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  XWindowSystem *pXVar4;
  long lVar5;
  undefined8 local_20;
  
  if (*(long *)this != 0) {
                    /* try { // try from 001d99b2 to 001d99bd has its CatchHandler @ 001d9a14 */
    pXVar4 = SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
                       ((SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> *)
                        XWindowSystem::singletonHolder);
    uVar1 = *(undefined8 *)(pXVar4 + 0x148);
    uVar2 = *(undefined8 *)(this + 8);
    local_20 = 0;
                    /* try { // try from 001d99d2 to 001d9a09 has its CatchHandler @ 001d9a1c */
    lVar5 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    iVar3 = (**(code **)(lVar5 + 0x118))(uVar1,uVar2,windowHandleXContext,&local_20);
    if (iVar3 == 0) {
      lVar5 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
      (**(code **)(lVar5 + 0xd0))(uVar1,*(undefined8 *)(this + 8),windowHandleXContext);
    }
  }
  return;
}


