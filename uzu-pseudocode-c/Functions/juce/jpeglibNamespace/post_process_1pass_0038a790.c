// Function : post_process_1pass
// Namespace: juce:jpeglibNamespace
// Entry    : 0038a790
// Prototype: undefined post_process_1pass(long param_1)
// Body     : 0038a790 - 0038a80e


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::post_process_1pass(juce::jpeglibNamespace::jpeg_decompress_struct*,
   unsigned char***, unsigned int*, unsigned int, unsigned char**, unsigned int*, unsigned int) */

void __cdecl juce::jpeglibNamespace::post_process_1pass(long param_1)

{
  long lVar1;
  long in_R8;
  uint *in_R9;
  
  lVar1 = *(long *)(param_1 + 0x238);
  (**(code **)(*(long *)(param_1 + 0x260) + 8))(param_1);
  (**(code **)(*(long *)(param_1 + 0x270) + 8))
            (param_1,*(undefined8 *)(lVar1 + 0x18),in_R8 + (ulong)*in_R9 * 8,0);
  *in_R9 = *in_R9;
  return;
}


