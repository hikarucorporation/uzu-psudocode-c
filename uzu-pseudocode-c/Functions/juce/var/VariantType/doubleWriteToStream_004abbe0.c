// Function : doubleWriteToStream
// Namespace: juce:var:VariantType
// Entry    : 004abbe0
// Prototype: undefined doubleWriteToStream(undefined8 * param_1, long * param_2)
// Body     : 004abbe0 - 004abc23


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::var::VariantType::doubleWriteToStream(juce::var::ValueUnion const&, juce::OutputStream&) */

void __cdecl juce::var::VariantType::doubleWriteToStream(undefined8 *param_1,long *param_2)

{
  (**(code **)(*param_2 + 0x98))(param_2,9);
  (**(code **)(*param_2 + 0x30))(param_2,4);
                    /* WARNING: Could not recover jumptable at 0x004abc22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x80))(*param_1,param_2);
  return;
}


