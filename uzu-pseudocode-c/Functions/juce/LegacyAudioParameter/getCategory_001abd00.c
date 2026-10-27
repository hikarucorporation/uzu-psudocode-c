// Function : getCategory
// Namespace: juce:LegacyAudioParameter
// Entry    : 001abd00
// Prototype: undefined getCategory(long param_1, undefined8 param_2, undefined8 param_3)
// Body     : 001abd00 - 001abd15


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::LegacyAudioParameter::getCategory() const */

void __cdecl
juce::LegacyAudioParameter::getCategory(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(**(long **)(param_1 + 0x60) + 0x228);
                    /* WARNING: Could not recover jumptable at 0x001abd14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (*(long **)(param_1 + 0x60),*(undefined4 *)(param_1 + 8),param_3,UNRECOVERED_JUMPTABLE);
  return;
}


