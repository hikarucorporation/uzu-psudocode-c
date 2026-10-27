// Function : isDiscrete
// Namespace: juce:LegacyAudioParameter
// Entry    : 001abc50
// Prototype: undefined isDiscrete(long param_1, undefined8 param_2, undefined8 param_3)
// Body     : 001abc50 - 001abc65


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::LegacyAudioParameter::isDiscrete() const */

void __cdecl
juce::LegacyAudioParameter::isDiscrete(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(**(long **)(param_1 + 0x60) + 0x1f0);
                    /* WARNING: Could not recover jumptable at 0x001abc64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (*(long **)(param_1 + 0x60),*(undefined4 *)(param_1 + 8),param_3,UNRECOVERED_JUMPTABLE);
  return;
}


