// Function : __cxx_global_var_init.15
// Namespace: 
// Entry    : 00166ea0
// Prototype: undefined __cxx_global_var_init.15(void)
// Body     : 00166ea0 - 00166f38


void __cxx_global_var_init_15(void)

{
  int iVar1;
  pthread_mutexattr_t apStack_18 [2];
  
  if (juce::InternalMessageQueue::singletonHolder == '\0') {
    iVar1 = __cxa_guard_acquire(&juce::InternalMessageQueue::singletonHolder);
    if (iVar1 != 0) {
      pthread_mutexattr_init(apStack_18);
      pthread_mutexattr_settype(apStack_18,1);
      pthread_mutexattr_setprotocol(apStack_18,1);
      pthread_mutex_init((pthread_mutex_t *)juce::InternalMessageQueue::singletonHolder,apStack_18);
      pthread_mutexattr_destroy(apStack_18);
      juce::InternalMessageQueue::singletonHolder._40_8_ = 0;
      __cxa_atexit(juce::SingletonHolder<juce::InternalMessageQueue,juce::CriticalSection,false>::
                   ~SingletonHolder,juce::InternalMessageQueue::singletonHolder,&__dso_handle);
      __cxa_guard_release(&juce::InternalMessageQueue::singletonHolder);
      return;
    }
  }
  return;
}


