// Function : __cxx_global_var_init.5
// Namespace: 
// Entry    : 00166e00
// Prototype: undefined __cxx_global_var_init.5(void)
// Body     : 00166e00 - 00166e98


void __cxx_global_var_init_5(void)

{
  int iVar1;
  pthread_mutexattr_t apStack_18 [2];
  
  if (juce::ShutdownDetector::singletonHolder == '\0') {
    iVar1 = __cxa_guard_acquire(&juce::ShutdownDetector::singletonHolder);
    if (iVar1 != 0) {
      pthread_mutexattr_init(apStack_18);
      pthread_mutexattr_settype(apStack_18,1);
      pthread_mutexattr_setprotocol(apStack_18,1);
      pthread_mutex_init((pthread_mutex_t *)juce::ShutdownDetector::singletonHolder,apStack_18);
      pthread_mutexattr_destroy(apStack_18);
      juce::ShutdownDetector::singletonHolder._40_8_ = 0;
      __cxa_atexit(juce::SingletonHolder<juce::ShutdownDetector,juce::CriticalSection,false>::
                   ~SingletonHolder,juce::ShutdownDetector::singletonHolder,&__dso_handle);
      __cxa_guard_release(&juce::ShutdownDetector::singletonHolder);
      return;
    }
  }
  return;
}


