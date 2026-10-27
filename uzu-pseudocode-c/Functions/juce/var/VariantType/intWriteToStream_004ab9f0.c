// Function : intWriteToStream
// Namespace: juce:var:VariantType
// Entry    : 004ab9f0
// Prototype: undefined intWriteToStream(undefined4 * param_1, long * param_2)
// Body     : 004ab9f0 - 004aba2e


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::var::VariantType::intWriteToStream(juce::var::ValueUnion const&, juce::OutputStream&) */

void __cdecl juce::var::VariantType::intWriteToStream(undefined4 *param_1,long *param_2)

{
  (**(code **)(*param_2 + 0x98))(param_2,5);
  (**(code **)(*param_2 + 0x30))(param_2,1);
                    /* WARNING: Could not recover jumptable at 0x004aba2d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x50))(param_2,*param_1);
  return;
}


