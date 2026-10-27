// Function : ~Array
// Namespace: juce:Array_juce__UnicodeEntry_juce__DummyCriticalSection_0_
// Entry    : 002eb590
// Prototype: undefined ~Array(Array<juce::UnicodeEntry,juce::DummyCriticalSection,0> * this)
// Body     : 002eb590 - 002eb59e


/* juce::Array<juce::UnicodeEntry, juce::DummyCriticalSection, 0>::~Array() */

void __thiscall
juce::Array<juce::UnicodeEntry,juce::DummyCriticalSection,0>::~Array
          (Array<juce::UnicodeEntry,juce::DummyCriticalSection,0> *this)

{
  *(undefined4 *)(this + 0xc) = 0;
  free(*(void **)this);
  return;
}


