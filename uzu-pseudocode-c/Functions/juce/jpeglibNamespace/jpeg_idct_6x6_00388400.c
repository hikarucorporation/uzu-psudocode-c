// Function : jpeg_idct_6x6
// Namespace: juce:jpeglibNamespace
// Entry    : 00388400
// Prototype: undefined jpeg_idct_6x6(long param_1, long param_2, long param_3, long param_4, uint param_5)
// Body     : 00388400 - 00388674


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::jpeg_idct_6x6(juce::jpeglibNamespace::jpeg_decompress_struct*,
   juce::jpeglibNamespace::jpeg_component_info*, short*, unsigned char**, unsigned int) */

void __cdecl
juce::jpeglibNamespace::jpeg_idct_6x6
          (long param_1,long param_2,long param_3,long param_4,uint param_5)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  long lVar16;
  int iVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  int *piVar21;
  long lVar22;
  int local_c8 [6];
  int aiStack_b0 [6];
  undefined4 auStack_98 [6];
  undefined4 auStack_80 [6];
  int aiStack_68 [6];
  undefined4 auStack_50 [8];
  
  lVar4 = *(long *)(param_1 + 0x198);
  lVar18 = *(long *)(param_2 + 0x58);
  lVar16 = 0;
  do {
    lVar12 = (long)*(int *)(lVar18 + lVar16 * 4) * (long)*(short *)(param_3 + lVar16 * 2) * 0x2000;
    lVar7 = (long)*(int *)(lVar18 + 0x80 + lVar16 * 4) *
            (long)*(short *)(param_3 + 0x40 + lVar16 * 2);
    lVar22 = lVar7 * 0x16a1 + lVar12 + 0x400;
    lVar13 = (long)*(int *)(lVar18 + 0x40 + lVar16 * 4) *
             (long)*(short *)(param_3 + 0x20 + lVar16 * 2);
    lVar1 = lVar13 * 0x2731 + lVar22;
    lVar22 = lVar22 + lVar13 * -0x2731;
    lVar14 = (long)*(int *)(lVar18 + 0x20 + lVar16 * 4) *
             (long)*(short *)(param_3 + 0x10 + lVar16 * 2);
    lVar8 = (long)*(int *)(lVar18 + 0x60 + lVar16 * 4) *
            (long)*(short *)(param_3 + 0x30 + lVar16 * 2);
    lVar19 = (long)*(int *)(lVar18 + 0xa0 + lVar16 * 4) *
             (long)*(short *)(param_3 + 0x50 + lVar16 * 2);
    lVar13 = (lVar19 + lVar14) * 0xbb6;
    lVar9 = (lVar8 + lVar14) * 0x2000 + lVar13;
    lVar13 = (lVar19 - lVar8) * 0x2000 + lVar13;
    iVar10 = (int)lVar14 - ((int)lVar8 + (int)lVar19);
    local_c8[lVar16] = (int)((ulong)(lVar1 + lVar9) >> 0xb);
    auStack_50[lVar16] = (int)((ulong)(lVar1 - lVar9) >> 0xb);
    iVar5 = (int)(lVar7 * -0x2d42 + lVar12 + 0x400U >> 0xb);
    aiStack_b0[lVar16] = iVar5 + iVar10 * 4;
    aiStack_68[lVar16] = iVar5 + iVar10 * -4;
    auStack_98[lVar16] = (int)((ulong)(lVar13 + lVar22) >> 0xb);
    auStack_80[lVar16] = (int)((ulong)(lVar22 - lVar13) >> 0xb);
    lVar16 = lVar16 + 1;
  } while ((int)lVar16 != 6);
  piVar21 = local_c8;
  uVar20 = (ulong)param_5;
  lVar18 = 0;
  do {
    lVar16 = *(long *)(param_4 + lVar18 * 8);
    iVar10 = piVar21[1];
    iVar2 = piVar21[3];
    iVar3 = piVar21[5];
    iVar15 = piVar21[4] * 0x16a1 + *piVar21 * 0x2000 + 0x8020000;
    iVar17 = (iVar3 + iVar10) * 0xbb6;
    iVar11 = iVar10 - (iVar2 + iVar3);
    iVar5 = iVar15 + piVar21[2] * 0x2731;
    iVar10 = (iVar10 + iVar2) * 0x2000 + iVar17;
    iVar6 = piVar21[4] * -0x2d42 + *piVar21 * 0x2000 + 0x8020000;
    iVar15 = iVar15 + piVar21[2] * -0x2731;
    *(undefined1 *)(lVar16 + uVar20) =
         *(undefined1 *)(lVar4 + -0x180 + (ulong)((uint)(iVar10 + iVar5) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar16 + 5 + uVar20) =
         *(undefined1 *)(lVar4 + -0x180 + (ulong)((uint)(iVar5 - iVar10) >> 0x12 & 0x3ff));
    iVar17 = (iVar3 - iVar2) * 0x2000 + iVar17;
    *(undefined1 *)(lVar16 + 1 + uVar20) =
         *(undefined1 *)(lVar4 + -0x180 + (ulong)((uint)(iVar11 * 0x2000 + iVar6) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar16 + 4 + uVar20) =
         *(undefined1 *)(lVar4 + -0x180 + (ulong)((uint)(iVar6 + iVar11 * -0x2000) >> 0x12 & 0x3ff))
    ;
    *(undefined1 *)(lVar16 + 2 + uVar20) =
         *(undefined1 *)(lVar4 + -0x180 + (ulong)((uint)(iVar17 + iVar15) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar16 + 3 + uVar20) =
         *(undefined1 *)(lVar4 + -0x180 + (ulong)((uint)(iVar15 - iVar17) >> 0x12 & 0x3ff));
    lVar18 = lVar18 + 1;
    piVar21 = piVar21 + 6;
  } while (lVar18 != 6);
  return;
}


