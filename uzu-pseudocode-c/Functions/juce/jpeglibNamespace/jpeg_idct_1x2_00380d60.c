// Function : jpeg_idct_1x2
// Namespace: juce:jpeglibNamespace
// Entry    : 00380d60
// Prototype: undefined jpeg_idct_1x2(long param_1, long param_2, ushort * param_3, long * param_4, uint param_5)
// Body     : 00380d60 - 00380dbd


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::jpeg_idct_1x2(juce::jpeglibNamespace::jpeg_decompress_struct*,
   juce::jpeglibNamespace::jpeg_component_info*, short*, unsigned char**, unsigned int) */

void __cdecl
juce::jpeglibNamespace::jpeg_idct_1x2
          (long param_1,long param_2,ushort *param_3,long *param_4,uint param_5)

{
  long lVar1;
  int iVar2;
  int iVar3;
  
  lVar1 = *(long *)(param_1 + 0x198);
  iVar3 = (uint)*param_3 * **(int **)(param_2 + 0x58);
  iVar2 = (uint)param_3[8] * (*(int **)(param_2 + 0x58))[8];
  *(undefined1 *)(*param_4 + (ulong)param_5) =
       *(undefined1 *)(lVar1 + -0x180 + (ulong)(iVar2 + iVar3 + 0x1004U >> 3 & 0x3ff));
  *(undefined1 *)(param_4[1] + (ulong)param_5) =
       *(undefined1 *)(lVar1 + -0x180 + (ulong)((uint)((iVar3 + 0x1004) - iVar2) >> 3 & 0x3ff));
  return;
}


