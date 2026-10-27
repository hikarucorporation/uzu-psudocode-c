// Function : ~SingletonHolder
// Namespace: juce:SingletonHolder_juce__PushNotifications_juce__CriticalSection_false_
// Entry    : 00167a70
// Prototype: undefined ~SingletonHolder(SingletonHolder<juce::PushNotifications,juce::CriticalSection,false> * this)
// Body     : 00167a70 - 00167a74


/* juce::SingletonHolder<juce::PushNotifications, juce::CriticalSection, false>::~SingletonHolder()
    */

void __thiscall
juce::SingletonHolder<juce::PushNotifications,juce::CriticalSection,false>::~SingletonHolder
          (SingletonHolder<juce::PushNotifications,juce::CriticalSection,false> *this)

{
  (*(code *)PTR_pthread_mutex_destroy_007162d8)();
  return;
}


