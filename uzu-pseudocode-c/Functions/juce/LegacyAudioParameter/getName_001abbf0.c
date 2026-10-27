// Function : getName
// Namespace: juce:LegacyAudioParameter
// Entry    : 001abbf0
// Prototype: undefined8 getName(undefined8 param_1, long param_2, undefined4 param_3)
// Body     : 001abbf0 - 001abc0e


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::LegacyAudioParameter::getName(int) const */

undefined8 __cdecl
juce::LegacyAudioParameter::getName(undefined8 param_1,long param_2,undefined4 param_3)

{
  (**(code **)(**(long **)(param_2 + 0x60) + 0x1d0))
            (param_1,*(long **)(param_2 + 0x60),*(undefined4 *)(param_2 + 8),param_3);
  return param_1;
}


