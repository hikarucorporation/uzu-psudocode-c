// Function : jpeg_idct_12x12
// Namespace: juce:jpeglibNamespace
// Entry    : 00386d10
// Prototype: undefined jpeg_idct_12x12(long param_1, long param_2, long param_3, long param_4, uint param_5)
// Body     : 00386d10 - 00387259


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::jpeg_idct_12x12(juce::jpeglibNamespace::jpeg_decompress_struct*,
   juce::jpeglibNamespace::jpeg_component_info*, short*, unsigned char**, unsigned int) */

void __cdecl
juce::jpeglibNamespace::jpeg_idct_12x12
          (long param_1,long param_2,long param_3,long param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  int iVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  int iVar22;
  long lVar23;
  int iVar24;
  int iVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  int iVar31;
  int iVar32;
  long lVar33;
  long lVar34;
  int aiStack_1b8 [98];
  
  lVar5 = *(long *)(param_1 + 0x198);
  lVar29 = *(long *)(param_2 + 0x58);
  lVar19 = 0;
  do {
    lVar9 = (long)*(int *)(lVar29 + lVar19 * 4) * (long)*(short *)(param_3 + lVar19 * 2) * 0x2000;
    lVar13 = (long)*(int *)(lVar29 + 0x80 + lVar19 * 4) *
             (long)*(short *)(param_3 + 0x40 + lVar19 * 2);
    lVar26 = lVar13 * 0x2731 + lVar9 + 0x400;
    lVar33 = lVar9 + 0x400 + lVar13 * -0x2731;
    lVar20 = (long)*(int *)(lVar29 + 0x40 + lVar19 * 4) *
             (long)*(short *)(param_3 + 0x20 + lVar19 * 2);
    lVar16 = (long)*(int *)(lVar29 + 0xc0 + lVar19 * 4) *
             (long)*(short *)(param_3 + 0x60 + lVar19 * 2);
    lVar34 = (lVar20 - lVar16) * 0x2000 + lVar9 + 0x400;
    lVar27 = lVar9 + 0x400 + (lVar20 - lVar16) * -0x2000;
    lVar13 = lVar20 * 0x2bb6 + lVar16 * 0x2000;
    lVar9 = lVar13 + lVar26;
    lVar26 = lVar26 - lVar13;
    lVar16 = lVar20 * 0xbb6 + lVar16 * -0x2000;
    lVar13 = lVar33 + lVar16;
    lVar33 = lVar33 - lVar16;
    lVar17 = (long)*(int *)(lVar29 + 0x20 + lVar19 * 4) *
             (long)*(short *)(param_3 + 0x10 + lVar19 * 2);
    lVar21 = (long)*(int *)(lVar29 + 0x60 + lVar19 * 4) *
             (long)*(short *)(param_3 + 0x30 + lVar19 * 2);
    lVar28 = (long)*(int *)(lVar29 + 0xa0 + lVar19 * 4) *
             (long)*(short *)(param_3 + 0x50 + lVar19 * 2);
    lVar14 = (long)*(int *)(lVar29 + 0xe0 + lVar19 * 4) *
             (long)*(short *)(param_3 + 0x70 + lVar19 * 2);
    lVar30 = (lVar28 + lVar17 + lVar14) * 0x1b8d;
    lVar10 = (lVar28 + lVar17) * 0x85b + lVar30;
    lVar23 = lVar17 * 0x8f7 + lVar21 * 0x29cf + lVar10;
    lVar16 = (lVar14 + lVar28) * -0x2175;
    lVar10 = lVar28 * -0x2f50 + lVar21 * -0x1151 + lVar16 + lVar10;
    lVar16 = lVar14 * 0x32c6 + lVar21 * -0x29cf + lVar30 + lVar16;
    lVar30 = lVar14 * -0x3f74 + lVar17 * -0x15a4 + lVar21 * -0x1151 + lVar30;
    lVar20 = ((lVar21 - lVar28) + (lVar17 - lVar14)) * 0x1151;
    lVar14 = (lVar17 - lVar14) * 0x187e + lVar20;
    lVar20 = (lVar21 - lVar28) * -0x3b21 + lVar20;
    aiStack_1b8[lVar19] = (int)((ulong)(lVar23 + lVar9) >> 0xb);
    aiStack_1b8[lVar19 + 0x58] = (int)((ulong)(lVar9 - lVar23) >> 0xb);
    aiStack_1b8[lVar19 + 8] = (int)((ulong)(lVar14 + lVar34) >> 0xb);
    aiStack_1b8[lVar19 + 0x50] = (int)((ulong)(lVar34 - lVar14) >> 0xb);
    aiStack_1b8[lVar19 + 0x10] = (int)((ulong)(lVar10 + lVar13) >> 0xb);
    aiStack_1b8[lVar19 + 0x48] = (int)((ulong)(lVar13 - lVar10) >> 0xb);
    aiStack_1b8[lVar19 + 0x18] = (int)((ulong)(lVar16 + lVar33) >> 0xb);
    aiStack_1b8[lVar19 + 0x40] = (int)((ulong)(lVar33 - lVar16) >> 0xb);
    aiStack_1b8[lVar19 + 0x20] = (int)((ulong)(lVar20 + lVar27) >> 0xb);
    aiStack_1b8[lVar19 + 0x38] = (int)((ulong)(lVar27 - lVar20) >> 0xb);
    aiStack_1b8[lVar19 + 0x28] = (int)((ulong)(lVar26 + lVar30) >> 0xb);
    aiStack_1b8[lVar19 + 0x30] = (int)((ulong)(lVar26 - lVar30) >> 0xb);
    lVar19 = lVar19 + 1;
  } while ((int)lVar19 != 8);
  uVar7 = (ulong)param_5;
  lVar29 = 0;
  do {
    iVar18 = aiStack_1b8[lVar29 + 1];
    iVar11 = aiStack_1b8[lVar29] * 0x2000;
    iVar1 = aiStack_1b8[lVar29 + 2];
    iVar2 = aiStack_1b8[lVar29 + 6];
    iVar15 = iVar11 + aiStack_1b8[lVar29 + 4] * 0x2731 + 0x8020000;
    iVar6 = (iVar1 - iVar2) * 0x2000 + iVar11 + 0x8020000;
    iVar12 = iVar11 + 0x8020000 + aiStack_1b8[lVar29 + 4] * -0x2731;
    iVar8 = iVar1 * 0x2bb6 + iVar2 * 0x2000;
    iVar32 = iVar11 + 0x8020000 + (iVar1 - iVar2) * -0x2000;
    iVar24 = iVar1 * 0xbb6 + iVar2 * -0x2000;
    iVar11 = aiStack_1b8[lVar29 + 3];
    iVar3 = aiStack_1b8[lVar29 + 5];
    iVar1 = iVar8 + iVar15;
    iVar4 = aiStack_1b8[lVar29 + 7];
    iVar15 = iVar15 - iVar8;
    iVar2 = iVar24 + iVar12;
    iVar12 = iVar12 - iVar24;
    iVar8 = (iVar3 + iVar18 + iVar4) * 0x1b8d;
    iVar25 = (iVar3 + iVar18) * 0x85b + iVar8;
    iVar22 = iVar18 * 0x8f7 + iVar11 * 0x29cf + iVar25;
    iVar31 = (iVar4 + iVar3) * -0x2175;
    iVar25 = iVar3 * -0x2f50 + iVar11 * -0x1151 + iVar31 + iVar25;
    iVar31 = iVar4 * 0x32c6 + iVar11 * -0x29cf + iVar8 + iVar31;
    iVar8 = iVar4 * -0x3f74 + iVar18 * -0x15a4 + iVar11 * -0x1151 + iVar8;
    iVar24 = ((iVar18 - iVar4) + (iVar11 - iVar3)) * 0x1151;
    iVar18 = (iVar18 - iVar4) * 0x187e + iVar24;
    iVar24 = (iVar11 - iVar3) * -0x3b21 + iVar24;
    lVar19 = *(long *)(param_4 + lVar29);
    *(undefined1 *)(lVar19 + uVar7) =
         *(undefined1 *)(lVar5 + -0x180 + (ulong)((uint)(iVar22 + iVar1) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar19 + 0xb + uVar7) =
         *(undefined1 *)(lVar5 + -0x180 + (ulong)((uint)(iVar1 - iVar22) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar19 + 1 + uVar7) =
         *(undefined1 *)(lVar5 + -0x180 + (ulong)((uint)(iVar18 + iVar6) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar19 + 10 + uVar7) =
         *(undefined1 *)(lVar5 + -0x180 + (ulong)((uint)(iVar6 - iVar18) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar19 + 2 + uVar7) =
         *(undefined1 *)(lVar5 + -0x180 + (ulong)((uint)(iVar25 + iVar2) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar19 + 9 + uVar7) =
         *(undefined1 *)(lVar5 + -0x180 + (ulong)((uint)(iVar2 - iVar25) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar19 + 3 + uVar7) =
         *(undefined1 *)(lVar5 + -0x180 + (ulong)((uint)(iVar31 + iVar12) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar19 + 8 + uVar7) =
         *(undefined1 *)(lVar5 + -0x180 + (ulong)((uint)(iVar12 - iVar31) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar19 + 4 + uVar7) =
         *(undefined1 *)(lVar5 + -0x180 + (ulong)((uint)(iVar32 + iVar24) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar19 + 7 + uVar7) =
         *(undefined1 *)(lVar5 + -0x180 + (ulong)((uint)(iVar32 - iVar24) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar19 + 5 + uVar7) =
         *(undefined1 *)(lVar5 + -0x180 + (ulong)((uint)(iVar8 + iVar15) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar19 + 6 + uVar7) =
         *(undefined1 *)(lVar5 + -0x180 + (ulong)((uint)(iVar15 - iVar8) >> 0x12 & 0x3ff));
    lVar29 = lVar29 + 8;
  } while (lVar29 != 0x60);
  return;
}


