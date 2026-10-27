// Function : ~SingletonHolder
// Namespace: juce:SingletonHolder_juce__InternalRunLoop_juce__CriticalSection_false_
// Entry    : 0047e830
// Prototype: undefined ~SingletonHolder(SingletonHolder<juce::InternalRunLoop,juce::CriticalSection,false> * this)
// Body     : 0047e830 - 0047e834


/* juce::SingletonHolder<juce::InternalRunLoop, juce::CriticalSection, false>::~SingletonHolder() */

void __thiscall
juce::SingletonHolder<juce::InternalRunLoop,juce::CriticalSection,false>::~SingletonHolder
          (SingletonHolder<juce::InternalRunLoop,juce::CriticalSection,false> *this)

{
  (*(code *)PTR_pthread_mutex_destroy_007162d8)();
  return;
}


