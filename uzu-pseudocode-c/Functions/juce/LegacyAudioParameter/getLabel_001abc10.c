// Function : getLabel
// Namespace: juce:LegacyAudioParameter
// Entry    : 001abc10
// Prototype: undefined8 getLabel(undefined8 param_1, long param_2)
// Body     : 001abc10 - 001abc2b


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::LegacyAudioParameter::getLabel() const */

undefined8 __cdecl juce::LegacyAudioParameter::getLabel(undefined8 param_1,long param_2)

{
  (**(code **)(**(long **)(param_2 + 0x60) + 0x200))
            (param_1,*(long **)(param_2 + 0x60),*(undefined4 *)(param_2 + 8));
  return param_1;
}


