// Function : ~SingletonHolder
// Namespace: juce:SingletonHolder_juce__XWindowSystem_juce__CriticalSection_false_
// Entry    : 0019f8f0
// Prototype: undefined ~SingletonHolder(SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> * this)
// Body     : 0019f8f0 - 0019f8f4


/* juce::SingletonHolder<juce::XWindowSystem, juce::CriticalSection, false>::~SingletonHolder() */

void __thiscall
juce::SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::~SingletonHolder
          (SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> *this)

{
  (*(code *)PTR_pthread_mutex_destroy_007162d8)();
  return;
}


