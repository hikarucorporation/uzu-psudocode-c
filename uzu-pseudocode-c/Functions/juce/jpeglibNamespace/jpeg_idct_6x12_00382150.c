// Function : jpeg_idct_6x12
// Namespace: juce:jpeglibNamespace
// Entry    : 00382150
// Prototype: undefined jpeg_idct_6x12(long param_1, long param_2, long param_3, long param_4, uint param_5)
// Body     : 00382150 - 00382522


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::jpeg_idct_6x12(juce::jpeglibNamespace::jpeg_decompress_struct*,
   juce::jpeglibNamespace::jpeg_component_info*, short*, unsigned char**, unsigned int) */

void __cdecl
juce::jpeglibNamespace::jpeg_idct_6x12
          (long param_1,long param_2,long param_3,long param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  int iVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  int *piVar26;
  long lVar27;
  long lVar28;
  int local_158 [6];
  undefined4 auStack_140 [6];
  undefined4 auStack_128 [6];
  undefined4 auStack_110 [6];
  undefined4 auStack_f8 [6];
  undefined4 auStack_e0 [6];
  undefined4 auStack_c8 [6];
  undefined4 auStack_b0 [6];
  undefined4 auStack_98 [6];
  undefined4 auStack_80 [6];
  undefined4 auStack_68 [6];
  undefined4 auStack_50 [8];
  
  lVar4 = *(long *)(param_1 + 0x198);
  lVar28 = *(long *)(param_2 + 0x58);
  lVar17 = 0;
  do {
    lVar7 = (long)*(int *)(lVar28 + lVar17 * 4) * (long)*(short *)(param_3 + lVar17 * 2) * 0x2000;
    lVar10 = (long)*(int *)(lVar28 + 0x80 + lVar17 * 4) *
             (long)*(short *)(param_3 + 0x40 + lVar17 * 2);
    lVar20 = lVar10 * 0x2731 + lVar7 + 0x400;
    lVar16 = lVar7 + 0x400 + lVar10 * -0x2731;
    lVar11 = (long)*(int *)(lVar28 + 0x40 + lVar17 * 4) *
             (long)*(short *)(param_3 + 0x20 + lVar17 * 2);
    lVar14 = (long)*(int *)(lVar28 + 0xc0 + lVar17 * 4) *
             (long)*(short *)(param_3 + 0x60 + lVar17 * 2);
    lVar25 = (lVar11 - lVar14) * 0x2000 + lVar7 + 0x400;
    lVar23 = lVar7 + 0x400 + (lVar11 - lVar14) * -0x2000;
    lVar10 = lVar11 * 0x2bb6 + lVar14 * 0x2000;
    lVar7 = lVar10 + lVar20;
    lVar20 = lVar20 - lVar10;
    lVar11 = lVar11 * 0xbb6 + lVar14 * -0x2000;
    lVar10 = lVar16 + lVar11;
    lVar16 = lVar16 - lVar11;
    lVar21 = (long)*(int *)(lVar28 + 0x20 + lVar17 * 4) *
             (long)*(short *)(param_3 + 0x10 + lVar17 * 2);
    lVar8 = (long)*(int *)(lVar28 + 0x60 + lVar17 * 4) *
            (long)*(short *)(param_3 + 0x30 + lVar17 * 2);
    lVar24 = (long)*(int *)(lVar28 + 0xa0 + lVar17 * 4) *
             (long)*(short *)(param_3 + 0x50 + lVar17 * 2);
    lVar12 = (long)*(int *)(lVar28 + 0xe0 + lVar17 * 4) *
             (long)*(short *)(param_3 + 0x70 + lVar17 * 2);
    lVar27 = (lVar12 + lVar24 + lVar21) * 0x1b8d;
    lVar15 = (lVar24 + lVar21) * 0x85b + lVar27;
    lVar18 = lVar21 * 0x8f7 + lVar8 * 0x29cf + lVar15;
    lVar11 = (lVar12 + lVar24) * -0x2175;
    lVar15 = lVar24 * -0x2f50 + lVar8 * -0x1151 + lVar11 + lVar15;
    lVar11 = lVar12 * 0x32c6 + lVar8 * -0x29cf + lVar27 + lVar11;
    lVar27 = lVar12 * -0x3f74 + lVar21 * -0x15a4 + lVar8 * -0x1151 + lVar27;
    lVar14 = ((lVar21 - lVar12) + (lVar8 - lVar24)) * 0x1151;
    lVar12 = (lVar21 - lVar12) * 0x187e + lVar14;
    lVar14 = (lVar8 - lVar24) * -0x3b21 + lVar14;
    local_158[lVar17] = (int)((ulong)(lVar18 + lVar7) >> 0xb);
    auStack_50[lVar17] = (int)((ulong)(lVar7 - lVar18) >> 0xb);
    auStack_140[lVar17] = (int)((ulong)(lVar12 + lVar25) >> 0xb);
    auStack_68[lVar17] = (int)((ulong)(lVar25 - lVar12) >> 0xb);
    auStack_128[lVar17] = (int)((ulong)(lVar10 + lVar15) >> 0xb);
    auStack_80[lVar17] = (int)((ulong)(lVar10 - lVar15) >> 0xb);
    auStack_110[lVar17] = (int)((ulong)(lVar11 + lVar16) >> 0xb);
    auStack_98[lVar17] = (int)((ulong)(lVar16 - lVar11) >> 0xb);
    auStack_f8[lVar17] = (int)((ulong)(lVar14 + lVar23) >> 0xb);
    auStack_b0[lVar17] = (int)((ulong)(lVar23 - lVar14) >> 0xb);
    auStack_e0[lVar17] = (int)((ulong)(lVar27 + lVar20) >> 0xb);
    auStack_c8[lVar17] = (int)((ulong)(lVar20 - lVar27) >> 0xb);
    lVar17 = lVar17 + 1;
  } while ((int)lVar17 != 6);
  piVar26 = local_158;
  uVar19 = (ulong)param_5;
  lVar28 = 0;
  do {
    lVar17 = *(long *)(param_4 + lVar28 * 8);
    iVar5 = piVar26[1];
    iVar2 = piVar26[3];
    iVar3 = piVar26[5];
    iVar9 = *piVar26 * 0x2000 + piVar26[4] * 0x16a1 + 0x8020000;
    iVar22 = (iVar3 + iVar5) * 0xbb6;
    iVar13 = iVar5 - (iVar2 + iVar3);
    iVar1 = iVar9 + piVar26[2] * 0x2731;
    iVar5 = (iVar2 + iVar5) * 0x2000 + iVar22;
    iVar6 = *piVar26 * 0x2000 + piVar26[4] * -0x2d42 + 0x8020000;
    iVar9 = iVar9 + piVar26[2] * -0x2731;
    *(undefined1 *)(lVar17 + uVar19) =
         *(undefined1 *)(lVar4 + -0x180 + (ulong)((uint)(iVar5 + iVar1) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar17 + 5 + uVar19) =
         *(undefined1 *)(lVar4 + -0x180 + (ulong)((uint)(iVar1 - iVar5) >> 0x12 & 0x3ff));
    iVar22 = (iVar3 - iVar2) * 0x2000 + iVar22;
    *(undefined1 *)(lVar17 + 1 + uVar19) =
         *(undefined1 *)(lVar4 + -0x180 + (ulong)((uint)(iVar13 * 0x2000 + iVar6) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar17 + 4 + uVar19) =
         *(undefined1 *)(lVar4 + -0x180 + (ulong)((uint)(iVar6 + iVar13 * -0x2000) >> 0x12 & 0x3ff))
    ;
    *(undefined1 *)(lVar17 + 2 + uVar19) =
         *(undefined1 *)(lVar4 + -0x180 + (ulong)((uint)(iVar9 + iVar22) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar17 + 3 + uVar19) =
         *(undefined1 *)(lVar4 + -0x180 + (ulong)((uint)(iVar9 - iVar22) >> 0x12 & 0x3ff));
    lVar28 = lVar28 + 1;
    piVar26 = piVar26 + 6;
  } while (lVar28 != 0xc);
  return;
}


