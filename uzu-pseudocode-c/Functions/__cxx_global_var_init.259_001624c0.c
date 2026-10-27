// Function : __cxx_global_var_init.259
// Namespace: 
// Entry    : 001624c0
// Prototype: undefined __cxx_global_var_init.259(void)
// Body     : 001624c0 - 00162519


void __cxx_global_var_init_259(void)

{
  int iVar1;
  
  if (juce::X11Symbols::singletonHolder == '\0') {
    iVar1 = __cxa_guard_acquire(&juce::X11Symbols::singletonHolder);
    if (iVar1 != 0) {
      juce::CriticalSection::CriticalSection((CriticalSection *)juce::X11Symbols::singletonHolder);
      juce::X11Symbols::singletonHolder._40_8_ = 0;
      __cxa_atexit(juce::SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::
                   ~SingletonHolder,juce::X11Symbols::singletonHolder,&__dso_handle);
      __cxa_guard_release(&juce::X11Symbols::singletonHolder);
      return;
    }
  }
  return;
}


