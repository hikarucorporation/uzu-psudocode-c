// Function : ~SortedSet
// Namespace: juce:SortedSet_juce__ValueTree__juce__DummyCriticalSection_
// Entry    : 004c04c0
// Prototype: undefined ~SortedSet(SortedSet<juce::ValueTree*,juce::DummyCriticalSection> * this)
// Body     : 004c04c0 - 004c04ce


/* juce::SortedSet<juce::ValueTree*, juce::DummyCriticalSection>::~SortedSet() */

void __thiscall
juce::SortedSet<juce::ValueTree*,juce::DummyCriticalSection>::~SortedSet
          (SortedSet<juce::ValueTree*,juce::DummyCriticalSection> *this)

{
  *(undefined4 *)(this + 0xc) = 0;
  free(*(void **)this);
  return;
}


