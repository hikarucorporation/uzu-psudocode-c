// Function : ~ArrayBase
// Namespace: juce:ArrayBase_juce__var_juce__DummyCriticalSection_
// Entry    : 002e9aa0
// Prototype: undefined ~ArrayBase(ArrayBase<juce::var,juce::DummyCriticalSection> * this)
// Body     : 002e9aa0 - 002e9af3


/* juce::ArrayBase<juce::var, juce::DummyCriticalSection>::~ArrayBase() */

void __thiscall
juce::ArrayBase<juce::var,juce::DummyCriticalSection>::~ArrayBase
          (ArrayBase<juce::var,juce::DummyCriticalSection> *this)

{
  long lVar1;
  long lVar2;
  
  if (0 < *(int *)(this + 0xc)) {
    lVar1 = 8;
    lVar2 = 0;
    do {
                    /* try { // try from 002e9acb to 002e9acd has its CatchHandler @ 002e9af4 */
      (**(code **)(*(long *)(*(long *)this + -8 + lVar1) + 0x58))(*(long *)this + lVar1);
      lVar2 = lVar2 + 1;
      lVar1 = lVar1 + 0x10;
    } while (lVar2 < *(int *)(this + 0xc));
  }
  *(undefined4 *)(this + 0xc) = 0;
  free(*(void **)this);
  return;
}


