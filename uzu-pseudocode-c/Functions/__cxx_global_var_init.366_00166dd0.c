// Function : __cxx_global_var_init.366
// Namespace: 
// Entry    : 00166dd0
// Prototype: undefined8 __cxx_global_var_init.366(void)
// Body     : 00166dd0 - 00166df9


undefined8 __cxx_global_var_init_366(void)

{
  int iVar1;
  undefined8 in_RAX;
  undefined8 uVar2;
  
  if (juce::FTTypefaceList::singletonHolder == '\0') {
    iVar1 = __cxa_guard_acquire(&juce::FTTypefaceList::singletonHolder);
    if (iVar1 != 0) {
      uVar2 = __cxa_guard_release(&juce::FTTypefaceList::singletonHolder);
      return uVar2;
    }
  }
  return in_RAX;
}


