// Function : __cxx_global_var_init.146
// Namespace: 
// Entry    : 001637d0
// Prototype: undefined8 __cxx_global_var_init.146(void)
// Body     : 001637d0 - 001637f9


undefined8 __cxx_global_var_init_146(void)

{
  int iVar1;
  undefined8 in_RAX;
  undefined8 uVar2;
  
  if (juce::ModalComponentManager::singletonHolder == '\0') {
    iVar1 = __cxa_guard_acquire(&juce::ModalComponentManager::singletonHolder);
    if (iVar1 != 0) {
      uVar2 = __cxa_guard_release(&juce::ModalComponentManager::singletonHolder);
      return uVar2;
    }
  }
  return in_RAX;
}


