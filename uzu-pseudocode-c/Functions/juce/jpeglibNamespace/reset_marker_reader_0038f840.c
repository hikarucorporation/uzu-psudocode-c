// Function : reset_marker_reader
// Namespace: juce:jpeglibNamespace
// Entry    : 0038f840
// Prototype: undefined reset_marker_reader(long param_1)
// Body     : 0038f840 - 0038f87e


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::reset_marker_reader(juce::jpeglibNamespace::jpeg_decompress_struct*) */

void __cdecl juce::jpeglibNamespace::reset_marker_reader(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x248);
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0x21c) = 0;
  *(undefined2 *)(lVar1 + 0x18) = 0;
  *(undefined4 *)(lVar1 + 0x20) = 0;
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  return;
}


