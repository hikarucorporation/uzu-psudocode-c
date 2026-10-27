// Function : getNumSteps
// Namespace: juce:LegacyAudioParameter
// Entry    : 001abc30
// Prototype: undefined getNumSteps(long param_1, undefined8 param_2, undefined8 param_3)
// Body     : 001abc30 - 001abc45


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::LegacyAudioParameter::getNumSteps() const */

void __cdecl
juce::LegacyAudioParameter::getNumSteps(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(**(long **)(param_1 + 0x60) + 0x1e8);
                    /* WARNING: Could not recover jumptable at 0x001abc44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (*(long **)(param_1 + 0x60),*(undefined4 *)(param_1 + 8),param_3,UNRECOVERED_JUMPTABLE);
  return;
}


