// Function : getValueForText
// Namespace: juce:AudioParameterInt
// Entry    : 004d0ba0
// Prototype: undefined getValueForText(RangedAudioParameter * param_1)
// Body     : 004d0ba0 - 004d0bcc


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::AudioParameterInt::getValueForText(juce::String const&) const */

void __cdecl juce::AudioParameterInt::getValueForText(RangedAudioParameter *param_1)

{
  int iVar1;
  undefined4 extraout_XMM0_Db;
  
  if (*(long *)(param_1 + 0x130) == 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_bad_function_call();
  }
  iVar1 = (**(code **)(param_1 + 0x138))(param_1 + 0x120);
  RangedAudioParameter::convertTo0to1(CONCAT44(extraout_XMM0_Db,(float)iVar1),param_1);
  return;
}


