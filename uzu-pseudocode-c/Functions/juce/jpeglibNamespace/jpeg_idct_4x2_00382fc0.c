// Function : jpeg_idct_4x2
// Namespace: juce:jpeglibNamespace
// Entry    : 00382fc0
// Prototype: undefined jpeg_idct_4x2(long param_1, long param_2, ushort * param_3, long * param_4, uint param_5)
// Body     : 00382fc0 - 0038316f


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::jpeg_idct_4x2(juce::jpeglibNamespace::jpeg_decompress_struct*,
   juce::jpeglibNamespace::jpeg_component_info*, short*, unsigned char**, unsigned int) */

void __cdecl
juce::jpeglibNamespace::jpeg_idct_4x2
          (long param_1,long param_2,ushort *param_3,long *param_4,uint param_5)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  ulong uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  
  lVar4 = *(long *)(param_1 + 0x198);
  piVar5 = *(int **)(param_2 + 0x58);
  uVar1 = *param_3;
  iVar12 = *piVar5;
  uVar2 = param_3[8];
  iVar3 = piVar5[8];
  iVar7 = (uint)uVar2 * iVar3 + (uint)uVar1 * iVar12 + 0x1004;
  iVar10 = (int)(short)param_3[9] * piVar5[9] + (int)(short)param_3[1] * piVar5[1];
  iVar15 = (int)(short)param_3[1] * piVar5[1] - (int)(short)param_3[9] * piVar5[9];
  iVar9 = (uint)param_3[10] * piVar5[10] + (uint)param_3[2] * piVar5[2];
  iVar17 = (uint)param_3[2] * piVar5[2] - (uint)param_3[10] * piVar5[10];
  iVar11 = (int)(short)param_3[0xb] * piVar5[0xb] + (int)(short)param_3[3] * piVar5[3];
  iVar16 = (int)(short)param_3[3] * piVar5[3] - (int)(short)param_3[0xb] * piVar5[0xb];
  uVar14 = (ulong)param_5;
  lVar6 = *param_4;
  iVar8 = (iVar10 + iVar11) * 0x1151;
  iVar13 = iVar10 * 0x187e + iVar8;
  iVar8 = iVar11 * -0x3b21 + iVar8;
  iVar10 = (iVar7 + iVar9) * 0x2000;
  *(undefined1 *)(lVar6 + uVar14) =
       *(undefined1 *)(lVar4 + -0x180 + (ulong)((uint)(iVar13 + iVar10) >> 0x10 & 0x3ff));
  *(undefined1 *)(lVar6 + 3 + uVar14) =
       *(undefined1 *)(lVar4 + -0x180 + (ulong)((uint)(iVar10 - iVar13) >> 0x10 & 0x3ff));
  iVar10 = (iVar7 - iVar9) * 0x2000;
  *(undefined1 *)(lVar6 + 1 + uVar14) =
       *(undefined1 *)(lVar4 + -0x180 + (ulong)((uint)(iVar8 + iVar10) >> 0x10 & 0x3ff));
  *(undefined1 *)(lVar6 + 2 + uVar14) =
       *(undefined1 *)(lVar4 + -0x180 + (ulong)((uint)(iVar10 - iVar8) >> 0x10 & 0x3ff));
  lVar6 = param_4[1];
  iVar12 = ((uint)uVar1 * iVar12 - (uint)uVar2 * iVar3) + 0x1004;
  iVar10 = (iVar16 + iVar15) * 0x1151;
  iVar11 = iVar15 * 0x187e + iVar10;
  iVar10 = iVar16 * -0x3b21 + iVar10;
  iVar9 = (iVar12 + iVar17) * 0x2000;
  *(undefined1 *)(lVar6 + uVar14) =
       *(undefined1 *)(lVar4 + -0x180 + (ulong)((uint)(iVar9 + iVar11) >> 0x10 & 0x3ff));
  *(undefined1 *)(lVar6 + 3 + uVar14) =
       *(undefined1 *)(lVar4 + -0x180 + (ulong)((uint)(iVar9 - iVar11) >> 0x10 & 0x3ff));
  iVar9 = (iVar12 - iVar17) * 0x2000;
  *(undefined1 *)(lVar6 + 1 + uVar14) =
       *(undefined1 *)(lVar4 + -0x180 + (ulong)((uint)(iVar10 + iVar9) >> 0x10 & 0x3ff));
  *(undefined1 *)(lVar6 + 2 + uVar14) =
       *(undefined1 *)(lVar4 + -0x180 + (ulong)((uint)(iVar9 - iVar10) >> 0x10 & 0x3ff));
  return;
}


