// Function : jpeg_idct_1x1
// Namespace: juce:jpeglibNamespace
// Entry    : 00389980
// Prototype: undefined jpeg_idct_1x1(long param_1, long param_2, ushort * param_3, long * param_4, uint param_5)
// Body     : 00389980 - 003899b0


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::jpeg_idct_1x1(juce::jpeglibNamespace::jpeg_decompress_struct*,
   juce::jpeglibNamespace::jpeg_component_info*, short*, unsigned char**, unsigned int) */

void __cdecl
juce::jpeglibNamespace::jpeg_idct_1x1
          (long param_1,long param_2,ushort *param_3,long *param_4,uint param_5)

{
  *(undefined1 *)(*param_4 + (ulong)param_5) =
       *(undefined1 *)
        (*(long *)(param_1 + 0x198) + -0x180 +
        (ulong)((uint)*param_3 * **(int **)(param_2 + 0x58) + 0x1004 >> 3 & 0x3ff));
  return;
}


