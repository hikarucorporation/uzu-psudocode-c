// Function : __cxx_global_var_init.258
// Namespace: 
// Entry    : 00162460
// Prototype: undefined __cxx_global_var_init.258(void)
// Body     : 00162460 - 001624b9


void __cxx_global_var_init_258(void)

{
  int iVar1;
  
  if (juce::XWindowSystem::singletonHolder == '\0') {
    iVar1 = __cxa_guard_acquire(&juce::XWindowSystem::singletonHolder);
    if (iVar1 != 0) {
      juce::CriticalSection::CriticalSection
                ((CriticalSection *)juce::XWindowSystem::singletonHolder);
      juce::XWindowSystem::singletonHolder._40_8_ = 0;
      __cxa_atexit(juce::SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::
                   ~SingletonHolder,juce::XWindowSystem::singletonHolder,&__dso_handle);
      __cxa_guard_release(&juce::XWindowSystem::singletonHolder);
      return;
    }
  }
  return;
}


