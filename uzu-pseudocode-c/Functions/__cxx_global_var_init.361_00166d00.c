// Function : __cxx_global_var_init.361
// Namespace: 
// Entry    : 00166d00
// Prototype: undefined __cxx_global_var_init.361(void)
// Body     : 00166d00 - 00166d98


void __cxx_global_var_init_361(void)

{
  int iVar1;
  pthread_mutexattr_t apStack_18 [2];
  
  if (juce::TypefaceCache::singletonHolder == '\0') {
    iVar1 = __cxa_guard_acquire(&juce::TypefaceCache::singletonHolder);
    if (iVar1 != 0) {
      pthread_mutexattr_init(apStack_18);
      pthread_mutexattr_settype(apStack_18,1);
      pthread_mutexattr_setprotocol(apStack_18,1);
      pthread_mutex_init((pthread_mutex_t *)juce::TypefaceCache::singletonHolder,apStack_18);
      pthread_mutexattr_destroy(apStack_18);
      juce::TypefaceCache::singletonHolder._40_8_ = 0;
      __cxa_atexit(juce::SingletonHolder<juce::TypefaceCache,juce::CriticalSection,false>::
                   ~SingletonHolder,juce::TypefaceCache::singletonHolder,&__dso_handle);
      __cxa_guard_release(&juce::TypefaceCache::singletonHolder);
      return;
    }
  }
  return;
}


