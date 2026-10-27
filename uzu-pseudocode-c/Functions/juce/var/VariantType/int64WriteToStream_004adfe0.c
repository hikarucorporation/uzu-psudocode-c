// Function : int64WriteToStream
// Namespace: juce:var:VariantType
// Entry    : 004adfe0
// Prototype: undefined int64WriteToStream(undefined8 * param_1, long * param_2)
// Body     : 004adfe0 - 004ae01e


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::var::VariantType::int64WriteToStream(juce::var::ValueUnion const&, juce::OutputStream&) */

void __cdecl juce::var::VariantType::int64WriteToStream(undefined8 *param_1,long *param_2)

{
  (**(code **)(*param_2 + 0x98))(param_2,9);
  (**(code **)(*param_2 + 0x30))(param_2,6);
                    /* WARNING: Could not recover jumptable at 0x004ae01d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x60))(param_2,*param_1);
  return;
}


