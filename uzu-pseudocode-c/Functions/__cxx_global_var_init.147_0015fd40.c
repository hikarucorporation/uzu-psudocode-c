// Function : __cxx_global_var_init.147
// Namespace: 
// Entry    : 0015fd40
// Prototype: undefined __cxx_global_var_init.147(void)
// Body     : 0015fd40 - 0015fd99


void __cxx_global_var_init_147(void)

{
  int iVar1;
  
  if (juce::PushNotifications::singletonHolder == '\0') {
    iVar1 = __cxa_guard_acquire(&juce::PushNotifications::singletonHolder);
    if (iVar1 != 0) {
      juce::CriticalSection::CriticalSection
                ((CriticalSection *)juce::PushNotifications::singletonHolder);
      juce::PushNotifications::singletonHolder._40_8_ = 0;
      __cxa_atexit(juce::SingletonHolder<juce::PushNotifications,juce::CriticalSection,false>::
                   ~SingletonHolder,juce::PushNotifications::singletonHolder,&__dso_handle);
      __cxa_guard_release(&juce::PushNotifications::singletonHolder);
      return;
    }
  }
  return;
}


