// Function : ~SingletonHolder
// Namespace: juce:SingletonHolder_juce__TypefaceCache_juce__CriticalSection_false_
// Entry    : 002e9b40
// Prototype: undefined ~SingletonHolder(SingletonHolder<juce::TypefaceCache,juce::CriticalSection,false> * this)
// Body     : 002e9b40 - 002e9b44


/* juce::SingletonHolder<juce::TypefaceCache, juce::CriticalSection, false>::~SingletonHolder() */

void __thiscall
juce::SingletonHolder<juce::TypefaceCache,juce::CriticalSection,false>::~SingletonHolder
          (SingletonHolder<juce::TypefaceCache,juce::CriticalSection,false> *this)

{
  (*(code *)PTR_pthread_mutex_destroy_007162d8)();
  return;
}


