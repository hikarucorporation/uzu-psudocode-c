// Function : getValueForText
// Namespace: juce:AudioParameterFloat
// Entry    : 004d02b0
// Prototype: undefined getValueForText(RangedAudioParameter * param_1)
// Body     : 004d02b0 - 004d02d8


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::AudioParameterFloat::getValueForText(juce::String const&) const */

void __cdecl juce::AudioParameterFloat::getValueForText(RangedAudioParameter *param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x130) == 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_bad_function_call();
  }
  uVar1 = (**(code **)(param_1 + 0x138))(param_1 + 0x120);
  RangedAudioParameter::convertTo0to1(uVar1,param_1);
  return;
}


