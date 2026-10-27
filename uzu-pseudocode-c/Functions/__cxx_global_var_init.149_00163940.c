// Function : __cxx_global_var_init.149
// Namespace: 
// Entry    : 00163940
// Prototype: undefined __cxx_global_var_init.149(void)
// Body     : 00163940 - 001639d8


void __cxx_global_var_init_149(void)

{
  int iVar1;
  pthread_mutexattr_t apStack_18 [2];
  
  if (juce::PushNotifications::singletonHolder == '\0') {
    iVar1 = __cxa_guard_acquire(&juce::PushNotifications::singletonHolder);
    if (iVar1 != 0) {
      pthread_mutexattr_init(apStack_18);
      pthread_mutexattr_settype(apStack_18,1);
      pthread_mutexattr_setprotocol(apStack_18,1);
      pthread_mutex_init((pthread_mutex_t *)juce::PushNotifications::singletonHolder,apStack_18);
      pthread_mutexattr_destroy(apStack_18);
      juce::PushNotifications::singletonHolder._40_8_ = 0;
      __cxa_atexit(juce::SingletonHolder<juce::PushNotifications,juce::CriticalSection,false>::
                   ~SingletonHolder,juce::PushNotifications::singletonHolder,&__dso_handle);
      __cxa_guard_release(&juce::PushNotifications::singletonHolder);
      return;
    }
  }
  return;
}


