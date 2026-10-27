// Function : __cxx_global_var_init.263
// Namespace: 
// Entry    : 00163700
// Prototype: undefined8 __cxx_global_var_init.263(void)
// Body     : 00163700 - 00163745


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 __cxx_global_var_init_263(void)

{
  int iVar1;
  undefined8 in_RAX;
  undefined8 uVar2;
  
  if (juce::JuceVST3EditController::iid == '\0') {
    iVar1 = __cxa_guard_acquire(&juce::JuceVST3EditController::iid);
    if (iVar1 != 0) {
      juce::JuceVST3EditController::iid._0_8_ = &PTR__FUID_00704de0;
      juce::JuceVST3EditController::iid._8_4_ = _DAT_005d9a70;
      juce::JuceVST3EditController::iid._12_4_ = _UNK_005d9a74;
      juce::JuceVST3EditController::iid._16_4_ = _UNK_005d9a78;
      juce::JuceVST3EditController::iid._20_4_ = _UNK_005d9a7c;
      uVar2 = __cxa_guard_release(&juce::JuceVST3EditController::iid);
      return uVar2;
    }
  }
  return in_RAX;
}


