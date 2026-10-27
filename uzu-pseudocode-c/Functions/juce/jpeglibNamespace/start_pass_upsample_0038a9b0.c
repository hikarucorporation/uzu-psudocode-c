// Function : start_pass_upsample
// Namespace: juce:jpeglibNamespace
// Entry    : 0038a9b0
// Prototype: undefined start_pass_upsample(long param_1)
// Body     : 0038a9b0 - 0038a9cc


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::start_pass_upsample(juce::jpeglibNamespace::jpeg_decompress_struct*) */

void __cdecl juce::jpeglibNamespace::start_pass_upsample(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x260);
  *(undefined4 *)(lVar1 + 0xb8) = *(undefined4 *)(param_1 + 0x184);
  *(undefined4 *)(lVar1 + 0xbc) = *(undefined4 *)(param_1 + 0x78);
  return;
}


