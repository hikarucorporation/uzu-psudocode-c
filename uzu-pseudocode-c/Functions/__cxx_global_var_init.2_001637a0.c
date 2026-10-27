// Function : __cxx_global_var_init.2
// Namespace: 
// Entry    : 001637a0
// Prototype: undefined8 __cxx_global_var_init.2(void)
// Body     : 001637a0 - 001637c9


undefined8 __cxx_global_var_init_2(void)

{
  int iVar1;
  undefined8 in_RAX;
  undefined8 uVar2;
  
  if (juce::ChildProcessManager::singletonHolder == '\0') {
    iVar1 = __cxa_guard_acquire(&juce::ChildProcessManager::singletonHolder);
    if (iVar1 != 0) {
      uVar2 = __cxa_guard_release(&juce::ChildProcessManager::singletonHolder);
      return uVar2;
    }
  }
  return in_RAX;
}


