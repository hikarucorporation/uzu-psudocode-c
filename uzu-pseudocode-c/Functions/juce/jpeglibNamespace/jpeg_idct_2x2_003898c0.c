// Function : jpeg_idct_2x2
// Namespace: juce:jpeglibNamespace
// Entry    : 003898c0
// Prototype: undefined jpeg_idct_2x2(long param_1, long param_2, ushort * param_3, long * param_4, uint param_5)
// Body     : 003898c0 - 00389976


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::jpeg_idct_2x2(juce::jpeglibNamespace::jpeg_decompress_struct*,
   juce::jpeglibNamespace::jpeg_component_info*, short*, unsigned char**, unsigned int) */

void __cdecl
juce::jpeglibNamespace::jpeg_idct_2x2
          (long param_1,long param_2,ushort *param_3,long *param_4,uint param_5)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  
  lVar2 = *(long *)(param_1 + 0x198);
  piVar3 = *(int **)(param_2 + 0x58);
  iVar5 = (uint)param_3[8] * piVar3[8] + (uint)*param_3 * *piVar3 + 0x1004;
  iVar7 = ((uint)*param_3 * *piVar3 + 0x1004) - (uint)param_3[8] * piVar3[8];
  iVar1 = (uint)param_3[9] * piVar3[9] + (uint)param_3[1] * piVar3[1];
  iVar8 = (uint)param_3[1] * piVar3[1] - (uint)param_3[9] * piVar3[9];
  lVar4 = *param_4;
  uVar6 = (ulong)param_5;
  *(undefined1 *)(lVar4 + uVar6) =
       *(undefined1 *)(lVar2 + -0x180 + (ulong)((uint)(iVar1 + iVar5) >> 3 & 0x3ff));
  *(undefined1 *)(lVar4 + 1 + uVar6) =
       *(undefined1 *)(lVar2 + -0x180 + (ulong)((uint)(iVar5 - iVar1) >> 3 & 0x3ff));
  lVar4 = param_4[1];
  *(undefined1 *)(lVar4 + uVar6) =
       *(undefined1 *)(lVar2 + -0x180 + (ulong)((uint)(iVar8 + iVar7) >> 3 & 0x3ff));
  *(undefined1 *)(lVar4 + 1 + uVar6) =
       *(undefined1 *)(lVar2 + -0x180 + (ulong)((uint)(iVar7 - iVar8) >> 3 & 0x3ff));
  return;
}


