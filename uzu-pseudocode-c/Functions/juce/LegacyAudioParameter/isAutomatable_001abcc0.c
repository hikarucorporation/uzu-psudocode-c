// Function : isAutomatable
// Namespace: juce:LegacyAudioParameter
// Entry    : 001abcc0
// Prototype: undefined isAutomatable(long param_1, undefined8 param_2, undefined8 param_3)
// Body     : 001abcc0 - 001abcd5


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::LegacyAudioParameter::isAutomatable() const */

void __cdecl
juce::LegacyAudioParameter::isAutomatable(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(**(long **)(param_1 + 0x60) + 0x218);
                    /* WARNING: Could not recover jumptable at 0x001abcd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (*(long **)(param_1 + 0x60),*(undefined4 *)(param_1 + 8),param_3,UNRECOVERED_JUMPTABLE);
  return;
}


