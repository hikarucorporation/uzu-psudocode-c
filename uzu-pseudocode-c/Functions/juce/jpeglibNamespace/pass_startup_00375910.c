// Function : pass_startup
// Namespace: juce:jpeglibNamespace
// Entry    : 00375910
// Prototype: undefined pass_startup(long param_1)
// Body     : 00375910 - 00375936


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::pass_startup(juce::jpeglibNamespace::jpeg_compress_struct*) */

void __cdecl juce::jpeglibNamespace::pass_startup(long param_1)

{
  *(undefined1 *)(*(long *)(param_1 + 0x1e0) + 0x18) = 0;
  (**(code **)(*(long *)(param_1 + 0x200) + 8))();
                    /* WARNING: Could not recover jumptable at 0x00375934. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x200) + 0x10))(param_1);
  return;
}


