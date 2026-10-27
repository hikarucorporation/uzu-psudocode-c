// Function : ~Array
// Namespace: juce:Array_juce__DeletedAtShutdown__juce__DummyCriticalSection_0_
// Entry    : 0047e860
// Prototype: undefined ~Array(Array<juce::DeletedAtShutdown*,juce::DummyCriticalSection,0> * this)
// Body     : 0047e860 - 0047e86e


/* juce::Array<juce::DeletedAtShutdown*, juce::DummyCriticalSection, 0>::~Array() */

void __thiscall
juce::Array<juce::DeletedAtShutdown*,juce::DummyCriticalSection,0>::~Array
          (Array<juce::DeletedAtShutdown*,juce::DummyCriticalSection,0> *this)

{
  *(undefined4 *)(this + 0xc) = 0;
  free(*(void **)this);
  return;
}


