// Function : __cxx_global_var_init.148
// Namespace: 
// Entry    : 001638a0
// Prototype: undefined __cxx_global_var_init.148(void)
// Body     : 001638a0 - 00163938


void __cxx_global_var_init_148(void)

{
  int iVar1;
  pthread_mutexattr_t apStack_18 [2];
  
  if (juce::X11Symbols::singletonHolder == '\0') {
    iVar1 = __cxa_guard_acquire(&juce::X11Symbols::singletonHolder);
    if (iVar1 != 0) {
      pthread_mutexattr_init(apStack_18);
      pthread_mutexattr_settype(apStack_18,1);
      pthread_mutexattr_setprotocol(apStack_18,1);
      pthread_mutex_init((pthread_mutex_t *)juce::X11Symbols::singletonHolder,apStack_18);
      pthread_mutexattr_destroy(apStack_18);
      juce::X11Symbols::singletonHolder._40_8_ = 0;
      __cxa_atexit(juce::SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::
                   ~SingletonHolder,juce::X11Symbols::singletonHolder,&__dso_handle);
      __cxa_guard_release(&juce::X11Symbols::singletonHolder);
      return;
    }
  }
  return;
}


