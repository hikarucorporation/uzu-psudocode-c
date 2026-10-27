// Function : setValue
// Namespace: juce:LegacyAudioParameter
// Entry    : 001abbb0
// Prototype: undefined setValue(long param_1, undefined8 param_2, undefined8 param_3)
// Body     : 001abbb0 - 001abbc5


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::LegacyAudioParameter::setValue(float) */

void __cdecl
juce::LegacyAudioParameter::setValue(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(**(long **)(param_1 + 0x60) + 0x210);
                    /* WARNING: Could not recover jumptable at 0x001abbc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (*(long **)(param_1 + 0x60),*(undefined4 *)(param_1 + 8),param_3,UNRECOVERED_JUMPTABLE);
  return;
}


