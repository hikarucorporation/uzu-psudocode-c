// Function : __cxx_global_var_init.264
// Namespace: 
// Entry    : 00163750
// Prototype: undefined8 __cxx_global_var_init.264(void)
// Body     : 00163750 - 00163795


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 __cxx_global_var_init_264(void)

{
  int iVar1;
  undefined8 in_RAX;
  undefined8 uVar2;
  
  if (juce::JuceVST3Component::iid == '\0') {
    iVar1 = __cxa_guard_acquire(&juce::JuceVST3Component::iid);
    if (iVar1 != 0) {
      juce::JuceVST3Component::iid._0_8_ = &PTR__FUID_00704de0;
      juce::JuceVST3Component::iid._8_4_ = _DAT_005d9a80;
      juce::JuceVST3Component::iid._12_4_ = _UNK_005d9a84;
      juce::JuceVST3Component::iid._16_4_ = _UNK_005d9a88;
      juce::JuceVST3Component::iid._20_4_ = _UNK_005d9a8c;
      uVar2 = __cxa_guard_release(&juce::JuceVST3Component::iid);
      return uVar2;
    }
  }
  return in_RAX;
}


