// Function : ~Array
// Namespace: juce:Array_juce__var_juce__DummyCriticalSection_0_
// Entry    : 002d8d20
// Prototype: undefined ~Array(Array<juce::var,juce::DummyCriticalSection,0> * this)
// Body     : 002d8d20 - 002d8d73


/* juce::Array<juce::var, juce::DummyCriticalSection, 0>::~Array() */

void __thiscall
juce::Array<juce::var,juce::DummyCriticalSection,0>::~Array
          (Array<juce::var,juce::DummyCriticalSection,0> *this)

{
  long lVar1;
  long lVar2;
  
  if (0 < *(int *)(this + 0xc)) {
    lVar1 = 8;
    lVar2 = 0;
    do {
                    /* try { // try from 002d8d4b to 002d8d4d has its CatchHandler @ 002d8d74 */
      (**(code **)(*(long *)(*(long *)this + -8 + lVar1) + 0x58))(*(long *)this + lVar1);
      lVar2 = lVar2 + 1;
      lVar1 = lVar1 + 0x10;
    } while (lVar2 < *(int *)(this + 0xc));
  }
  *(undefined4 *)(this + 0xc) = 0;
  free(*(void **)this);
  return;
}


