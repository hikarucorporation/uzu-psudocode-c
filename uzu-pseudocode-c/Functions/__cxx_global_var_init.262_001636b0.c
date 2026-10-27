// Function : __cxx_global_var_init.262
// Namespace: 
// Entry    : 001636b0
// Prototype: undefined8 __cxx_global_var_init.262(void)
// Body     : 001636b0 - 001636f5


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 __cxx_global_var_init_262(void)

{
  int iVar1;
  undefined8 in_RAX;
  undefined8 uVar2;
  
  if (juce::JuceAudioProcessor::iid == '\0') {
    iVar1 = __cxa_guard_acquire(&juce::JuceAudioProcessor::iid);
    if (iVar1 != 0) {
      juce::JuceAudioProcessor::iid._0_8_ = &PTR__FUID_00704de0;
      juce::JuceAudioProcessor::iid._8_4_ = _DAT_005d9a60;
      juce::JuceAudioProcessor::iid._12_4_ = _UNK_005d9a64;
      juce::JuceAudioProcessor::iid._16_4_ = _UNK_005d9a68;
      juce::JuceAudioProcessor::iid._20_4_ = _UNK_005d9a6c;
      uVar2 = __cxa_guard_release(&juce::JuceAudioProcessor::iid);
      return uVar2;
    }
  }
  return in_RAX;
}


