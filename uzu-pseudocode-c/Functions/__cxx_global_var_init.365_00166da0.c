// Function : __cxx_global_var_init.365
// Namespace: 
// Entry    : 00166da0
// Prototype: undefined8 __cxx_global_var_init.365(void)
// Body     : 00166da0 - 00166dc9


undefined8 __cxx_global_var_init_365(void)

{
  int iVar1;
  undefined8 in_RAX;
  undefined8 uVar2;
  
  if (juce::TypefaceFileCache::singletonHolder == '\0') {
    iVar1 = __cxa_guard_acquire(&juce::TypefaceFileCache::singletonHolder);
    if (iVar1 != 0) {
      uVar2 = __cxa_guard_release(&juce::TypefaceFileCache::singletonHolder);
      return uVar2;
    }
  }
  return in_RAX;
}


