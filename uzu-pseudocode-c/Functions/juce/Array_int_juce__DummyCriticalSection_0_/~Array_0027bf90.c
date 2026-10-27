// Function : ~Array
// Namespace: juce:Array_int_juce__DummyCriticalSection_0_
// Entry    : 0027bf90
// Prototype: undefined ~Array(Array<int,juce::DummyCriticalSection,0> * this)
// Body     : 0027bf90 - 0027bf9e


/* juce::Array<int, juce::DummyCriticalSection, 0>::~Array() */

void __thiscall
juce::Array<int,juce::DummyCriticalSection,0>::~Array(Array<int,juce::DummyCriticalSection,0> *this)

{
  *(undefined4 *)(this + 0xc) = 0;
  free(*(void **)this);
  return;
}


