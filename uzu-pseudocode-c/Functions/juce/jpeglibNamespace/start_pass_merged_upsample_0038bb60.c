// Function : start_pass_merged_upsample
// Namespace: juce:jpeglibNamespace
// Entry    : 0038bb60
// Prototype: undefined start_pass_merged_upsample(long param_1)
// Body     : 0038bb60 - 0038bb71


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::start_pass_merged_upsample(juce::jpeglibNamespace::jpeg_decompress_struct*)
    */

void __cdecl juce::jpeglibNamespace::start_pass_merged_upsample(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x260);
  *(undefined1 *)(lVar1 + 0x48) = 0;
  *(undefined4 *)(lVar1 + 0x50) = *(undefined4 *)(param_1 + 0x78);
  return;
}


