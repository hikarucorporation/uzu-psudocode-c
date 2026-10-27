// Function : ~SingletonHolder
// Namespace: juce:SingletonHolder_juce__ShutdownDetector_juce__CriticalSection_false_
// Entry    : 0047e850
// Prototype: undefined ~SingletonHolder(SingletonHolder<juce::ShutdownDetector,juce::CriticalSection,false> * this)
// Body     : 0047e850 - 0047e854


/* juce::SingletonHolder<juce::ShutdownDetector, juce::CriticalSection, false>::~SingletonHolder()
    */

void __thiscall
juce::SingletonHolder<juce::ShutdownDetector,juce::CriticalSection,false>::~SingletonHolder
          (SingletonHolder<juce::ShutdownDetector,juce::CriticalSection,false> *this)

{
  (*(code *)PTR_pthread_mutex_destroy_007162d8)();
  return;
}


