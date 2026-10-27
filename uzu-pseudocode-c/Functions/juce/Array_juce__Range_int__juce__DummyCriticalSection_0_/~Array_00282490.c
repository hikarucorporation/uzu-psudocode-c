// Function : ~Array
// Namespace: juce:Array_juce__Range_int__juce__DummyCriticalSection_0_
// Entry    : 00282490
// Prototype: undefined ~Array(Array<juce::Range<int>,juce::DummyCriticalSection,0> * this)
// Body     : 00282490 - 0028249e


/* juce::Array<juce::Range<int>, juce::DummyCriticalSection, 0>::~Array() */

void __thiscall
juce::Array<juce::Range<int>,juce::DummyCriticalSection,0>::~Array
          (Array<juce::Range<int>,juce::DummyCriticalSection,0> *this)

{
  *(undefined4 *)(this + 0xc) = 0;
  free(*(void **)this);
  return;
}


