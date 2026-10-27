// Function : merged_1v_upsample
// Namespace: juce:jpeglibNamespace
// Entry    : 0038be70
// Prototype: undefined merged_1v_upsample(long param_1, undefined8 param_2, int * param_3, undefined8 param_4, long param_5, uint * param_6)
// Body     : 0038be70 - 0038be9b


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::merged_1v_upsample(juce::jpeglibNamespace::jpeg_decompress_struct*,
   unsigned char***, unsigned int*, unsigned int, unsigned char**, unsigned int*, unsigned int) */

void __cdecl
juce::jpeglibNamespace::merged_1v_upsample
          (long param_1,undefined8 param_2,int *param_3,undefined8 param_4,long param_5,
          uint *param_6)

{
  (**(code **)(*(long *)(param_1 + 0x260) + 0x18))
            (param_1,param_2,*param_3,param_5 + (ulong)*param_6 * 8);
  *param_6 = *param_6 + 1;
  *param_3 = *param_3 + 1;
  return;
}


