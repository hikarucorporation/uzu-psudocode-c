// Function : __cxx_global_var_init.147.332
// Namespace: 
// Entry    : 00166c60
// Prototype: undefined __cxx_global_var_init.147.332(void)
// Body     : 00166c60 - 00166cf8


void __cxx_global_var_init_147_332(void)

{
  int iVar1;
  pthread_mutexattr_t apStack_18 [2];
  
  if (juce::ImageCache::Pimpl::singletonHolder == '\0') {
    iVar1 = __cxa_guard_acquire(&juce::ImageCache::Pimpl::singletonHolder);
    if (iVar1 != 0) {
      pthread_mutexattr_init(apStack_18);
      pthread_mutexattr_settype(apStack_18,1);
      pthread_mutexattr_setprotocol(apStack_18,1);
      pthread_mutex_init((pthread_mutex_t *)juce::ImageCache::Pimpl::singletonHolder,apStack_18);
      pthread_mutexattr_destroy(apStack_18);
      juce::ImageCache::Pimpl::singletonHolder._40_8_ = 0;
      __cxa_atexit(juce::SingletonHolder<juce::ImageCache::Pimpl,juce::CriticalSection,false>::
                   ~SingletonHolder,juce::ImageCache::Pimpl::singletonHolder,&__dso_handle);
      __cxa_guard_release(&juce::ImageCache::Pimpl::singletonHolder);
      return;
    }
  }
  return;
}


