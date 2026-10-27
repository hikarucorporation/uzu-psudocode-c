// Function : __cxx_global_var_init.147
// Namespace: 
// Entry    : 00163800
// Prototype: undefined __cxx_global_var_init.147(void)
// Body     : 00163800 - 00163898


void __cxx_global_var_init_147(void)

{
  int iVar1;
  pthread_mutexattr_t apStack_18 [2];
  
  if (juce::XWindowSystem::singletonHolder == '\0') {
    iVar1 = __cxa_guard_acquire(&juce::XWindowSystem::singletonHolder);
    if (iVar1 != 0) {
      pthread_mutexattr_init(apStack_18);
      pthread_mutexattr_settype(apStack_18,1);
      pthread_mutexattr_setprotocol(apStack_18,1);
      pthread_mutex_init((pthread_mutex_t *)juce::XWindowSystem::singletonHolder,apStack_18);
      pthread_mutexattr_destroy(apStack_18);
      juce::XWindowSystem::singletonHolder._40_8_ = 0;
      __cxa_atexit(juce::SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::
                   ~SingletonHolder,juce::XWindowSystem::singletonHolder,&__dso_handle);
      __cxa_guard_release(&juce::XWindowSystem::singletonHolder);
      return;
    }
  }
  return;
}


