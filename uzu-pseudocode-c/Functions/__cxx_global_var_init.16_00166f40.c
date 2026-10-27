// Function : __cxx_global_var_init.16
// Namespace: 
// Entry    : 00166f40
// Prototype: undefined __cxx_global_var_init.16(void)
// Body     : 00166f40 - 00166fd8


void __cxx_global_var_init_16(void)

{
  int iVar1;
  pthread_mutexattr_t apStack_18 [2];
  
  if (juce::InternalRunLoop::singletonHolder == '\0') {
    iVar1 = __cxa_guard_acquire(&juce::InternalRunLoop::singletonHolder);
    if (iVar1 != 0) {
      pthread_mutexattr_init(apStack_18);
      pthread_mutexattr_settype(apStack_18,1);
      pthread_mutexattr_setprotocol(apStack_18,1);
      pthread_mutex_init((pthread_mutex_t *)juce::InternalRunLoop::singletonHolder,apStack_18);
      pthread_mutexattr_destroy(apStack_18);
      juce::InternalRunLoop::singletonHolder._40_8_ = 0;
      __cxa_atexit(juce::SingletonHolder<juce::InternalRunLoop,juce::CriticalSection,false>::
                   ~SingletonHolder,juce::InternalRunLoop::singletonHolder,&__dso_handle);
      __cxa_guard_release(&juce::InternalRunLoop::singletonHolder);
      return;
    }
  }
  return;
}


