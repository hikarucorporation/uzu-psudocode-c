// Function : getParameterID
// Namespace: juce:LegacyAudioParameter
// Entry    : 001abd40
// Prototype: undefined8 getParameterID(undefined8 param_1, long param_2)
// Body     : 001abd40 - 001abd5b


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::LegacyAudioParameter::getParameterID() const */

undefined8 __cdecl juce::LegacyAudioParameter::getParameterID(undefined8 param_1,long param_2)

{
  (**(code **)(**(long **)(param_2 + 0x60) + 0x1c0))
            (param_1,*(long **)(param_2 + 0x60),*(undefined4 *)(param_2 + 8));
  return param_1;
}


