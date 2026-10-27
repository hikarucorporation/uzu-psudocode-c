// Function : __cxx_global_var_init.149.2
// Namespace: 
// Entry    : 00166c30
// Prototype: undefined8 __cxx_global_var_init.149.2(void)
// Body     : 00166c30 - 00166c59


undefined8 __cxx_global_var_init_149_2(void)

{
  int iVar1;
  undefined8 in_RAX;
  undefined8 uVar2;
  
  if (juce::detail::TopLevelWindowManager::singletonHolder == '\0') {
    iVar1 = __cxa_guard_acquire(&juce::detail::TopLevelWindowManager::singletonHolder);
    if (iVar1 != 0) {
      uVar2 = __cxa_guard_release(&juce::detail::TopLevelWindowManager::singletonHolder);
      return uVar2;
    }
  }
  return in_RAX;
}


