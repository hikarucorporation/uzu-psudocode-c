// Function : jpeg_idct_12x6
// Namespace: juce:jpeglibNamespace
// Entry    : 003841c0
// Prototype: undefined jpeg_idct_12x6(long param_1, long param_2, long param_3, long param_4, uint param_5)
// Body     : 003841c0 - 003845c1


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::jpeg_idct_12x6(juce::jpeglibNamespace::jpeg_decompress_struct*,
   juce::jpeglibNamespace::jpeg_component_info*, short*, unsigned char**, unsigned int) */

void __cdecl
juce::jpeglibNamespace::jpeg_idct_12x6
          (long param_1,long param_2,long param_3,long param_4,uint param_5)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  int iVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  long lVar24;
  int iVar25;
  long lVar26;
  long lVar27;
  int iVar28;
  int aiStack_f8 [50];
  
  lVar5 = *(long *)(param_1 + 0x198);
  lVar27 = *(long *)(param_2 + 0x58);
  lVar18 = 0;
  do {
    lVar19 = (long)*(int *)(lVar27 + lVar18 * 4) * (long)*(short *)(param_3 + lVar18 * 2) * 0x2000;
    lVar14 = (long)*(int *)(lVar27 + 0x80 + lVar18 * 4) *
             (long)*(short *)(param_3 + 0x40 + lVar18 * 2);
    lVar24 = lVar14 * 0x16a1 + lVar19 + 0x400;
    lVar15 = (long)*(int *)(lVar27 + 0x40 + lVar18 * 4) *
             (long)*(short *)(param_3 + 0x20 + lVar18 * 2);
    lVar1 = lVar15 * 0x2731 + lVar24;
    lVar24 = lVar24 + lVar15 * -0x2731;
    lVar16 = (long)*(int *)(lVar27 + 0x20 + lVar18 * 4) *
             (long)*(short *)(param_3 + 0x10 + lVar18 * 2);
    lVar20 = (long)*(int *)(lVar27 + 0x60 + lVar18 * 4) *
             (long)*(short *)(param_3 + 0x30 + lVar18 * 2);
    lVar26 = (long)*(int *)(lVar27 + 0xa0 + lVar18 * 4) *
             (long)*(short *)(param_3 + 0x50 + lVar18 * 2);
    lVar15 = (lVar26 + lVar16) * 0xbb6;
    lVar12 = (lVar20 + lVar16) * 0x2000 + lVar15;
    lVar15 = (lVar26 - lVar20) * 0x2000 + lVar15;
    iVar13 = (int)lVar16 - ((int)lVar20 + (int)lVar26);
    aiStack_f8[lVar18] = (int)((ulong)(lVar12 + lVar1) >> 0xb);
    aiStack_f8[lVar18 + 0x28] = (int)((ulong)(lVar1 - lVar12) >> 0xb);
    iVar2 = (int)(lVar14 * -0x2d42 + lVar19 + 0x400U >> 0xb);
    aiStack_f8[lVar18 + 8] = iVar2 + iVar13 * 4;
    aiStack_f8[lVar18 + 0x20] = iVar2 + iVar13 * -4;
    aiStack_f8[lVar18 + 0x10] = (int)((ulong)(lVar15 + lVar24) >> 0xb);
    aiStack_f8[lVar18 + 0x18] = (int)((ulong)(lVar24 - lVar15) >> 0xb);
    lVar18 = lVar18 + 1;
  } while ((int)lVar18 != 8);
  uVar7 = (ulong)param_5;
  lVar27 = 0;
  do {
    iVar17 = aiStack_f8[lVar27 + 1];
    iVar9 = aiStack_f8[lVar27] * 0x2000;
    iVar2 = aiStack_f8[lVar27 + 2];
    iVar13 = aiStack_f8[lVar27 + 6];
    iVar8 = iVar9 + aiStack_f8[lVar27 + 4] * 0x2731 + 0x8020000;
    iVar6 = (iVar2 - iVar13) * 0x2000 + iVar9 + 0x8020000;
    iVar10 = iVar9 + 0x8020000 + aiStack_f8[lVar27 + 4] * -0x2731;
    iVar11 = iVar2 * 0x2bb6 + iVar13 * 0x2000;
    iVar28 = iVar9 + 0x8020000 + (iVar2 - iVar13) * -0x2000;
    iVar22 = iVar2 * 0xbb6 + iVar13 * -0x2000;
    iVar9 = aiStack_f8[lVar27 + 3];
    iVar3 = aiStack_f8[lVar27 + 5];
    iVar2 = iVar11 + iVar8;
    iVar4 = aiStack_f8[lVar27 + 7];
    iVar8 = iVar8 - iVar11;
    iVar13 = iVar22 + iVar10;
    iVar10 = iVar10 - iVar22;
    iVar11 = (iVar3 + iVar17 + iVar4) * 0x1b8d;
    iVar23 = (iVar3 + iVar17) * 0x85b + iVar11;
    iVar21 = iVar17 * 0x8f7 + iVar9 * 0x29cf + iVar23;
    iVar25 = (iVar4 + iVar3) * -0x2175;
    iVar23 = iVar3 * -0x2f50 + iVar9 * -0x1151 + iVar25 + iVar23;
    iVar25 = iVar4 * 0x32c6 + iVar9 * -0x29cf + iVar11 + iVar25;
    iVar11 = iVar4 * -0x3f74 + iVar17 * -0x15a4 + iVar9 * -0x1151 + iVar11;
    iVar22 = ((iVar17 - iVar4) + (iVar9 - iVar3)) * 0x1151;
    iVar17 = (iVar17 - iVar4) * 0x187e + iVar22;
    iVar22 = (iVar9 - iVar3) * -0x3b21 + iVar22;
    lVar18 = *(long *)(param_4 + lVar27);
    *(undefined1 *)(lVar18 + uVar7) =
         *(undefined1 *)(lVar5 + -0x180 + (ulong)((uint)(iVar21 + iVar2) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar18 + 0xb + uVar7) =
         *(undefined1 *)(lVar5 + -0x180 + (ulong)((uint)(iVar2 - iVar21) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar18 + 1 + uVar7) =
         *(undefined1 *)(lVar5 + -0x180 + (ulong)((uint)(iVar17 + iVar6) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar18 + 10 + uVar7) =
         *(undefined1 *)(lVar5 + -0x180 + (ulong)((uint)(iVar6 - iVar17) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar18 + 2 + uVar7) =
         *(undefined1 *)(lVar5 + -0x180 + (ulong)((uint)(iVar23 + iVar13) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar18 + 9 + uVar7) =
         *(undefined1 *)(lVar5 + -0x180 + (ulong)((uint)(iVar13 - iVar23) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar18 + 3 + uVar7) =
         *(undefined1 *)(lVar5 + -0x180 + (ulong)((uint)(iVar25 + iVar10) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar18 + 8 + uVar7) =
         *(undefined1 *)(lVar5 + -0x180 + (ulong)((uint)(iVar10 - iVar25) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar18 + 4 + uVar7) =
         *(undefined1 *)(lVar5 + -0x180 + (ulong)((uint)(iVar28 + iVar22) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar18 + 7 + uVar7) =
         *(undefined1 *)(lVar5 + -0x180 + (ulong)((uint)(iVar28 - iVar22) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar18 + 5 + uVar7) =
         *(undefined1 *)(lVar5 + -0x180 + (ulong)((uint)(iVar11 + iVar8) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar18 + 6 + uVar7) =
         *(undefined1 *)(lVar5 + -0x180 + (ulong)((uint)(iVar8 - iVar11) >> 0x12 & 0x3ff));
    lVar27 = lVar27 + 8;
  } while (lVar27 != 0x30);
  return;
}


