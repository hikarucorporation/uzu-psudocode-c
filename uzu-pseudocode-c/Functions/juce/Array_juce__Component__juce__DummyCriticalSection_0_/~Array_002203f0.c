// Function : ~Array
// Namespace: juce:Array_juce__Component__juce__DummyCriticalSection_0_
// Entry    : 002203f0
// Prototype: undefined ~Array(Array<juce::Component*,juce::DummyCriticalSection,0> * this)
// Body     : 002203f0 - 002203fe


/* juce::Array<juce::Component*, juce::DummyCriticalSection, 0>::~Array() */

void __thiscall
juce::Array<juce::Component*,juce::DummyCriticalSection,0>::~Array
          (Array<juce::Component*,juce::DummyCriticalSection,0> *this)

{
  *(undefined4 *)(this + 0xc) = 0;
  free(*(void **)this);
  return;
}


