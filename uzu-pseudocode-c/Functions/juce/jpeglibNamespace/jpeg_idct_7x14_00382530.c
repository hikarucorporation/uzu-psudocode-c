// Function : jpeg_idct_7x14
// Namespace: juce:jpeglibNamespace
// Entry    : 00382530
// Prototype: undefined jpeg_idct_7x14(long param_1, long param_2, long param_3, long param_4, uint param_5)
// Body     : 00382530 - 003829e6


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::jpeg_idct_7x14(juce::jpeglibNamespace::jpeg_decompress_struct*,
   juce::jpeglibNamespace::jpeg_component_info*, short*, unsigned char**, unsigned int) */

void __cdecl
juce::jpeglibNamespace::jpeg_idct_7x14
          (long param_1,long param_2,long param_3,long param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  int iVar16;
  int iVar17;
  long lVar18;
  int iVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  int iVar30;
  long lVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  long lVar35;
  int *piVar36;
  int iVar37;
  long lVar38;
  int local_1b8 [7];
  undefined4 auStack_19c [7];
  undefined4 auStack_180 [7];
  int aiStack_164 [7];
  undefined4 auStack_148 [7];
  undefined4 auStack_12c [7];
  undefined4 auStack_110 [7];
  undefined4 auStack_f4 [7];
  undefined4 auStack_d8 [7];
  undefined4 auStack_bc [7];
  int aiStack_a0 [7];
  undefined4 auStack_84 [7];
  undefined4 auStack_68 [7];
  undefined4 auStack_4c [7];
  
  lVar4 = *(long *)(param_1 + 0x198);
  lVar26 = *(long *)(param_2 + 0x58);
  lVar22 = 0;
  do {
    lVar10 = (long)*(int *)(lVar26 + lVar22 * 4) * (long)*(short *)(param_3 + lVar22 * 2) * 0x2000;
    lVar13 = (long)*(int *)(lVar26 + 0x80 + lVar22 * 4) *
             (long)*(short *)(param_3 + 0x40 + lVar22 * 2);
    lVar24 = lVar13 * 0x28c6 + lVar10 + 0x400;
    lVar27 = lVar13 * 0xa12 + lVar10 + 0x400;
    lVar31 = lVar10 + lVar13 * -0x1c37 + 0x400;
    lVar11 = (long)*(int *)(lVar26 + 0x40 + lVar22 * 4) *
             (long)*(short *)(param_3 + 0x20 + lVar22 * 2);
    lVar14 = (long)*(int *)(lVar26 + 0xc0 + lVar22 * 4) *
             (long)*(short *)(param_3 + 0x60 + lVar22 * 2);
    lVar6 = (lVar14 + lVar11) * 0x2362;
    lVar20 = lVar11 * 0x8bd + lVar6;
    lVar6 = lVar14 * -0x3704 + lVar6;
    lVar12 = lVar14 * -0x2c1f + lVar11 * 0x13a3;
    lVar11 = lVar20 + lVar24;
    lVar24 = lVar24 - lVar20;
    lVar14 = lVar27 + lVar6;
    lVar27 = lVar27 - lVar6;
    lVar6 = lVar12 + lVar31;
    lVar31 = lVar31 - lVar12;
    lVar25 = (long)*(int *)(lVar26 + 0x20 + lVar22 * 4) *
             (long)*(short *)(param_3 + 0x10 + lVar22 * 2);
    lVar21 = (long)*(int *)(lVar26 + 0x60 + lVar22 * 4) *
             (long)*(short *)(param_3 + 0x30 + lVar22 * 2);
    lVar28 = (long)*(int *)(lVar26 + 0xa0 + lVar22 * 4) *
             (long)*(short *)(param_3 + 0x50 + lVar22 * 2);
    lVar35 = (long)*(int *)(lVar26 + 0xe0 + lVar22 * 4) *
             (long)*(short *)(param_3 + 0x70 + lVar22 * 2);
    lVar12 = (lVar21 + lVar25) * 0x2ab7;
    lVar20 = (lVar28 + lVar25) * 0x2652;
    lVar18 = (lVar28 + lVar21) * -0x511 + lVar35 * -0x2000;
    lVar15 = lVar21 * -0xd92 + lVar12 + lVar18;
    lVar18 = lVar28 * -0x4bf7 + lVar20 + lVar18;
    lVar38 = (lVar28 + lVar25) * 0x1814;
    lVar29 = (lVar28 - lVar21) * 0x2cf8;
    lVar23 = lVar25 * -0x2410 + lVar12 + lVar20 + lVar35 * 0x2000;
    lVar20 = (lVar25 - lVar21) * 0xef2 + lVar35 * -0x2000;
    lVar12 = lVar28 * -0x361a + lVar29 + lVar38 + lVar35 * 0x2000;
    lVar38 = lVar25 * -0x21f5 + lVar38 + lVar20;
    lVar20 = lVar21 * 0x1599 + lVar29 + lVar20;
    iVar34 = (int)lVar35 + ((int)(lVar25 - lVar21) - (int)lVar28);
    local_1b8[lVar22] = (int)((ulong)(lVar23 + lVar11) >> 0xb);
    auStack_4c[lVar22] = (int)((ulong)(lVar11 - lVar23) >> 0xb);
    auStack_19c[lVar22] = (int)((ulong)(lVar15 + lVar14) >> 0xb);
    auStack_68[lVar22] = (int)((ulong)(lVar14 - lVar15) >> 0xb);
    auStack_180[lVar22] = (int)((ulong)(lVar18 + lVar6) >> 0xb);
    auStack_84[lVar22] = (int)((ulong)(lVar6 - lVar18) >> 0xb);
    iVar33 = (int)(lVar13 * -0x2d42 + lVar10 + 0x400U >> 0xb);
    aiStack_164[lVar22] = iVar33 + iVar34 * 4;
    aiStack_a0[lVar22] = iVar33 + iVar34 * -4;
    auStack_148[lVar22] = (int)((ulong)(lVar12 + lVar31) >> 0xb);
    auStack_bc[lVar22] = (int)((ulong)(lVar31 - lVar12) >> 0xb);
    auStack_12c[lVar22] = (int)((ulong)(lVar20 + lVar27) >> 0xb);
    auStack_d8[lVar22] = (int)((ulong)(lVar27 - lVar20) >> 0xb);
    auStack_110[lVar22] = (int)((ulong)(lVar24 + lVar38) >> 0xb);
    auStack_f4[lVar22] = (int)((ulong)(lVar24 - lVar38) >> 0xb);
    lVar22 = lVar22 + 1;
  } while ((int)lVar22 != 7);
  piVar36 = local_1b8;
  uVar7 = (ulong)param_5;
  lVar26 = 0;
  do {
    iVar33 = piVar36[1];
    iVar34 = piVar36[2];
    iVar1 = piVar36[4];
    iVar30 = *piVar36 * 0x2000;
    iVar2 = piVar36[6];
    iVar37 = (iVar1 - iVar2) * 0x1c37;
    iVar5 = (iVar34 - iVar1) * 0xa12;
    iVar8 = (iVar2 + iVar34) * 0x28c6 + iVar30 + 0x8020000;
    iVar16 = iVar1 * -0x3aeb + iVar30 + 0x8020000 + iVar5 + iVar37;
    iVar3 = piVar36[3];
    iVar17 = iVar2 * -0x27d + iVar37 + iVar8;
    iVar37 = piVar36[5];
    iVar32 = (iVar3 + iVar33) * 0x1def;
    iVar8 = iVar34 * -0x4f0f + iVar5 + iVar8;
    iVar9 = (iVar37 + iVar33) * 0x13a3;
    iVar19 = iVar32 + (iVar33 - iVar3) * -0x573 + iVar9;
    iVar5 = (iVar3 + iVar37) * -0x2c1f;
    iVar33 = iVar32 + (iVar33 - iVar3) * 0x573 + iVar5;
    iVar5 = iVar37 * 0x3bde + iVar9 + iVar5;
    lVar22 = *(long *)(param_4 + lVar26 * 8);
    *(undefined1 *)(lVar22 + uVar7) =
         *(undefined1 *)(lVar4 + -0x180 + (ulong)((uint)(iVar19 + iVar17) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar22 + 6 + uVar7) =
         *(undefined1 *)(lVar4 + -0x180 + (ulong)((uint)(iVar17 - iVar19) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar22 + 1 + uVar7) =
         *(undefined1 *)(lVar4 + -0x180 + (ulong)((uint)(iVar16 + iVar33) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar22 + 5 + uVar7) =
         *(undefined1 *)(lVar4 + -0x180 + (ulong)((uint)(iVar16 - iVar33) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar22 + 2 + uVar7) =
         *(undefined1 *)(lVar4 + -0x180 + (ulong)((uint)(iVar5 + iVar8) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar22 + 4 + uVar7) =
         *(undefined1 *)(lVar4 + -0x180 + (ulong)((uint)(iVar8 - iVar5) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar22 + 3 + uVar7) =
         *(undefined1 *)
          (lVar4 + -0x180 +
          (ulong)(iVar30 + (iVar1 - (iVar2 + iVar34)) * 0x2d41 + 0x8020000U >> 0x12 & 0x3ff));
    lVar26 = lVar26 + 1;
    piVar36 = piVar36 + 7;
  } while (lVar26 != 0xe);
  return;
}


