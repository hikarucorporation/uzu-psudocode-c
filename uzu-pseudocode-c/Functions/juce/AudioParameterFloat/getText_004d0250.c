// Function : getText
// Namespace: juce:AudioParameterFloat
// Entry    : 004d0250
// Prototype: undefined8 getText(undefined8 param_1, undefined8 param_2, RangedAudioParameter * param_3, undefined4 param_4)
// Body     : 004d0250 - 004d02a6


/* WARNING: Unknown calling convention: __cdecl */
/* juce::AudioParameterFloat::getText(float, int) const */

undefined8 __cdecl
juce::AudioParameterFloat::getText
          (undefined8 param_1,undefined8 param_2,RangedAudioParameter *param_3,undefined4 param_4)

{
  ulong uVar1;
  undefined4 local_20;
  undefined4 local_1c;
  
  uVar1 = RangedAudioParameter::convertFrom0to1(param_1,param_3);
  local_1c = (undefined4)uVar1;
  local_20 = param_4;
  if (*(long *)(param_3 + 0x110) == 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_bad_function_call();
  }
  (**(code **)(param_3 + 0x118))(param_2,param_3 + 0x100,&local_1c,&local_20);
  return param_2;
}


