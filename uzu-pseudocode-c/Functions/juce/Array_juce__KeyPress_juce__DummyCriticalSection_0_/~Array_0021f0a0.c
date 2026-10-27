// Function : ~Array
// Namespace: juce:Array_juce__KeyPress_juce__DummyCriticalSection_0_
// Entry    : 0021f0a0
// Prototype: undefined ~Array(Array<juce::KeyPress,juce::DummyCriticalSection,0> * this)
// Body     : 0021f0a0 - 0021f0ae


/* juce::Array<juce::KeyPress, juce::DummyCriticalSection, 0>::~Array() */

void __thiscall
juce::Array<juce::KeyPress,juce::DummyCriticalSection,0>::~Array
          (Array<juce::KeyPress,juce::DummyCriticalSection,0> *this)

{
  *(undefined4 *)(this + 0xc) = 0;
  free(*(void **)this);
  return;
}


