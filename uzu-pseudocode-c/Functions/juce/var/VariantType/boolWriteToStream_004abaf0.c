// Function : boolWriteToStream
// Namespace: juce:var:VariantType
// Entry    : 004abaf0
// Prototype: undefined boolWriteToStream(char * param_1, long * param_2)
// Body     : 004abaf0 - 004abb2a


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::var::VariantType::boolWriteToStream(juce::var::ValueUnion const&, juce::OutputStream&) */

void __cdecl juce::var::VariantType::boolWriteToStream(char *param_1,long *param_2)

{
  (**(code **)(*param_2 + 0x98))(param_2,1);
                    /* WARNING: Could not recover jumptable at 0x004abb29. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x30))(param_2,*param_1 == '\0' | 2);
  return;
}


