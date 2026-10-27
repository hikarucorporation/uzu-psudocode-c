// Function : binaryWriteToStream
// Namespace: juce:var:VariantType
// Entry    : 00489ff0
// Prototype: undefined binaryWriteToStream(long * param_1, long * param_2)
// Body     : 00489ff0 - 0048a046


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::var::VariantType::binaryWriteToStream(juce::var::ValueUnion const&, juce::OutputStream&) */

void __cdecl juce::var::VariantType::binaryWriteToStream(long *param_1,long *param_2)

{
  (**(code **)(*param_2 + 0x98))(param_2,*(int *)(*param_1 + 8) + 1);
  (**(code **)(*param_2 + 0x30))(param_2,8);
  if (((undefined8 *)*param_1)[1] == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0048a03d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x28))(param_2,*(undefined8 *)*param_1);
  return;
}


