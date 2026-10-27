// Function : jpeg_idct_3x3
// Namespace: juce:jpeglibNamespace
// Entry    : 00389620
// Prototype: undefined jpeg_idct_3x3(long param_1, long param_2, short * param_3, long * param_4, ulong param_5)
// Body     : 00389620 - 003898b6


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::jpeg_idct_3x3(juce::jpeglibNamespace::jpeg_decompress_struct*,
   juce::jpeglibNamespace::jpeg_component_info*, short*, unsigned char**, unsigned int) */

void __cdecl
juce::jpeglibNamespace::jpeg_idct_3x3
          (long param_1,long param_2,short *param_3,long *param_4,ulong param_5)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  int *piVar10;
  long lVar11;
  ulong uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  long lVar18;
  int iVar19;
  long lVar20;
  long lVar21;
  int iVar22;
  int iVar23;
  long lVar24;
  int iVar25;
  uint uVar26;
  
  lVar9 = *(long *)(param_1 + 0x198);
  piVar10 = *(int **)(param_2 + 0x58);
  uVar26 = *piVar10 * (int)*param_3 * 0x2000;
  sVar1 = param_3[0x10];
  iVar17 = piVar10[0x10];
  iVar22 = sVar1 * iVar17 * 0x16a1 + uVar26 + 0x400;
  sVar2 = param_3[8];
  iVar19 = piVar10[8];
  lVar20 = (long)piVar10[1] * (long)param_3[1] * 0x2000;
  sVar3 = param_3[0x11];
  iVar23 = piVar10[0x11];
  lVar24 = (long)iVar23 * (long)sVar3 * 0x16a1 + lVar20 + 0x400;
  sVar4 = param_3[9];
  iVar7 = piVar10[9];
  lVar18 = (long)piVar10[2] * (long)param_3[2] * 0x2000;
  sVar5 = param_3[0x12];
  iVar16 = piVar10[0x12];
  lVar21 = (long)iVar16 * (long)sVar5 * 0x16a1 + lVar18 + 0x400;
  sVar6 = param_3[10];
  iVar8 = piVar10[10];
  uVar12 = param_5 & 0xffffffff;
  lVar11 = *param_4;
  uVar14 = (sVar2 * iVar19 * 0x2731 + iVar22) * 4 + 0x8020000U & 0xffffe000;
  iVar15 = (int)((ulong)((long)iVar8 * (long)sVar6 * 0x2731 + lVar21) >> 0xb);
  iVar13 = iVar15 * 0x16a1 + uVar14;
  iVar25 = (int)((ulong)((long)iVar7 * (long)sVar4 * 0x2731 + lVar24) >> 0xb);
  *(undefined1 *)(lVar11 + uVar12) =
       *(undefined1 *)(lVar9 + -0x180 + (ulong)((uint)(iVar13 + iVar25 * 0x2731) >> 0x12 & 0x3ff));
  *(undefined1 *)(lVar11 + 2 + uVar12) =
       *(undefined1 *)(lVar9 + -0x180 + (ulong)((uint)(iVar13 + iVar25 * -0x2731) >> 0x12 & 0x3ff));
  *(undefined1 *)(lVar11 + 1 + uVar12) =
       *(undefined1 *)(lVar9 + -0x180 + (ulong)(iVar15 * -0x2d42 + uVar14 >> 0x12 & 0x3ff));
  lVar11 = param_4[1];
  uVar14 = ((uVar26 | 0x400) + sVar1 * iVar17 * -0x2d42) * 4 + 0x8020000 & 0xffffe000;
  iVar17 = (int)((long)iVar16 * (long)sVar5 * -0x2d42 + lVar18 + 0x400U >> 0xb);
  iVar16 = iVar17 * 0x16a1 + uVar14;
  iVar23 = (int)((long)iVar23 * (long)sVar3 * -0x2d42 + lVar20 + 0x400U >> 0xb);
  *(undefined1 *)(lVar11 + uVar12) =
       *(undefined1 *)(lVar9 + -0x180 + (ulong)((uint)(iVar16 + iVar23 * 0x2731) >> 0x12 & 0x3ff));
  *(undefined1 *)(lVar11 + 2 + uVar12) =
       *(undefined1 *)(lVar9 + -0x180 + (ulong)((uint)(iVar16 + iVar23 * -0x2731) >> 0x12 & 0x3ff));
  *(undefined1 *)(lVar11 + 1 + uVar12) =
       *(undefined1 *)(lVar9 + -0x180 + (ulong)(iVar17 * -0x2d42 + uVar14 >> 0x12 & 0x3ff));
  lVar11 = param_4[2];
  uVar14 = (iVar22 + sVar2 * iVar19 * -0x2731) * 4 + 0x8020000U & 0xffffe000;
  iVar19 = (int)((ulong)(lVar21 + (long)iVar8 * (long)sVar6 * -0x2731) >> 0xb);
  iVar17 = iVar19 * 0x16a1 + uVar14;
  iVar23 = (int)((ulong)(lVar24 + (long)iVar7 * (long)sVar4 * -0x2731) >> 0xb);
  *(undefined1 *)(lVar11 + uVar12) =
       *(undefined1 *)(lVar9 + -0x180 + (ulong)((uint)(iVar17 + iVar23 * 0x2731) >> 0x12 & 0x3ff));
  *(undefined1 *)(lVar11 + 2 + uVar12) =
       *(undefined1 *)(lVar9 + -0x180 + (ulong)((uint)(iVar17 + iVar23 * -0x2731) >> 0x12 & 0x3ff));
  *(undefined1 *)(lVar11 + 1 + uVar12) =
       *(undefined1 *)(lVar9 + -0x180 + (ulong)(iVar19 * -0x2d42 + uVar14 >> 0x12 & 0x3ff));
  return;
}


