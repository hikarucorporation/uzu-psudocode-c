// Function : __cxx_global_var_init.146
// Namespace: 
// Entry    : 0015fd10
// Prototype: undefined8 __cxx_global_var_init.146(void)
// Body     : 0015fd10 - 0015fd39


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


