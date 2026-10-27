// Function : isMetaParameter
// Namespace: juce:LegacyAudioParameter
// Entry    : 001abce0
// Prototype: undefined isMetaParameter(long param_1, undefined8 param_2, undefined8 param_3)
// Body     : 001abce0 - 001abcf5


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::LegacyAudioParameter::isMetaParameter() const */

void __cdecl
juce::LegacyAudioParameter::isMetaParameter(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(**(long **)(param_1 + 0x60) + 0x220);
                    /* WARNING: Could not recover jumptable at 0x001abcf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (*(long **)(param_1 + 0x60),*(undefined4 *)(param_1 + 8),param_3,UNRECOVERED_JUMPTABLE);
  return;
}


