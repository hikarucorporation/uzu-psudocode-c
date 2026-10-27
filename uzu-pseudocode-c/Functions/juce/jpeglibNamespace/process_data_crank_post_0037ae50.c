// Function : process_data_crank_post
// Namespace: juce:jpeglibNamespace
// Entry    : 0037ae50
// Prototype: undefined4 process_data_crank_post(long param_1, undefined8 param_2, undefined8 param_3, undefined4 param_4)
// Body     : 0037ae50 - 0037ae6b


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::process_data_crank_post(juce::jpeglibNamespace::jpeg_decompress_struct*,
   unsigned char**, unsigned int*, unsigned int) */

undefined4 __cdecl
juce::jpeglibNamespace::process_data_crank_post
          (long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  (**(code **)(*(long *)(param_1 + 0x238) + 8))(param_1,0,0,0,param_2,param_3);
  return param_4;
}


