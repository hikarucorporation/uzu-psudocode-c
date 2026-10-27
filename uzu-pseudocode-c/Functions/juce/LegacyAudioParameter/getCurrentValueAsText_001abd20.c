// Function : getCurrentValueAsText
// Namespace: juce:LegacyAudioParameter
// Entry    : 001abd20
// Prototype: undefined8 getCurrentValueAsText(undefined8 param_1, long param_2)
// Body     : 001abd20 - 001abd3b


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::LegacyAudioParameter::getCurrentValueAsText() const */

undefined8 __cdecl
juce::LegacyAudioParameter::getCurrentValueAsText(undefined8 param_1,long param_2)

{
  (**(code **)(**(long **)(param_2 + 0x60) + 0x1d8))
            (param_1,*(long **)(param_2 + 0x60),*(undefined4 *)(param_2 + 8));
  return param_1;
}


