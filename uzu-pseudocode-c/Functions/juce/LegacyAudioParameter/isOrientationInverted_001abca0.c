// Function : isOrientationInverted
// Namespace: juce:LegacyAudioParameter
// Entry    : 001abca0
// Prototype: undefined isOrientationInverted(long param_1, undefined8 param_2, undefined8 param_3)
// Body     : 001abca0 - 001abcb5


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::LegacyAudioParameter::isOrientationInverted() const */

void __cdecl
juce::LegacyAudioParameter::isOrientationInverted
          (long param_1,undefined8 param_2,undefined8 param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(**(long **)(param_1 + 0x60) + 0x208);
                    /* WARNING: Could not recover jumptable at 0x001abcb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (*(long **)(param_1 + 0x60),*(undefined4 *)(param_1 + 8),param_3,UNRECOVERED_JUMPTABLE);
  return;
}


