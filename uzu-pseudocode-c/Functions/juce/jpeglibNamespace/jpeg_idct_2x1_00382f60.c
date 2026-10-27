// Function : jpeg_idct_2x1
// Namespace: juce:jpeglibNamespace
// Entry    : 00382f60
// Prototype: undefined jpeg_idct_2x1(long param_1, long param_2, ushort * param_3, long * param_4, uint param_5)
// Body     : 00382f60 - 00382fb7


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::jpeg_idct_2x1(juce::jpeglibNamespace::jpeg_decompress_struct*,
   juce::jpeglibNamespace::jpeg_component_info*, short*, unsigned char**, unsigned int) */

void __cdecl
juce::jpeglibNamespace::jpeg_idct_2x1
          (long param_1,long param_2,ushort *param_3,long *param_4,uint param_5)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  
  lVar1 = *(long *)(param_1 + 0x198);
  iVar4 = (uint)*param_3 * **(int **)(param_2 + 0x58);
  lVar2 = *param_4;
  iVar3 = (uint)param_3[1] * (*(int **)(param_2 + 0x58))[1];
  *(undefined1 *)(lVar2 + (ulong)param_5) =
       *(undefined1 *)(lVar1 + -0x180 + (ulong)(iVar3 + iVar4 + 0x1004U >> 3 & 0x3ff));
  *(undefined1 *)(lVar2 + 1 + (ulong)param_5) =
       *(undefined1 *)(lVar1 + -0x180 + (ulong)((uint)((iVar4 + 0x1004) - iVar3) >> 3 & 0x3ff));
  return;
}


