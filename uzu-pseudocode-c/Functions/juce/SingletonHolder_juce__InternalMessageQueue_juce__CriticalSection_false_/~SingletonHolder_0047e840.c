// Function : ~SingletonHolder
// Namespace: juce:SingletonHolder_juce__InternalMessageQueue_juce__CriticalSection_false_
// Entry    : 0047e840
// Prototype: undefined ~SingletonHolder(SingletonHolder<juce::InternalMessageQueue,juce::CriticalSection,false> * this)
// Body     : 0047e840 - 0047e844


/* juce::SingletonHolder<juce::InternalMessageQueue, juce::CriticalSection,
   false>::~SingletonHolder() */

void __thiscall
juce::SingletonHolder<juce::InternalMessageQueue,juce::CriticalSection,false>::~SingletonHolder
          (SingletonHolder<juce::InternalMessageQueue,juce::CriticalSection,false> *this)

{
  (*(code *)PTR_pthread_mutex_destroy_007162d8)();
  return;
}


