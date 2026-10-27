// Function : jpeg_idct_13x13
// Namespace: juce:jpeglibNamespace
// Entry    : 003866a0
// Prototype: undefined jpeg_idct_13x13(long param_1, long param_2, long param_3, long param_4, uint param_5)
// Body     : 003866a0 - 00386d07


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::jpeg_idct_13x13(juce::jpeglibNamespace::jpeg_decompress_struct*,
   juce::jpeglibNamespace::jpeg_component_info*, short*, unsigned char**, unsigned int) */

void __cdecl
juce::jpeglibNamespace::jpeg_idct_13x13
          (long param_1,long param_2,long param_3,long param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  long lVar21;
  long lVar22;
  int iVar23;
  int iVar24;
  long lVar25;
  int iVar26;
  long lVar27;
  long lVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  long lVar33;
  int iVar34;
  int iVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  int iVar39;
  int iVar40;
  long lVar41;
  int iVar42;
  long lVar43;
  long lVar44;
  int aiStack_1d8 [106];
  
  lVar4 = *(long *)(param_1 + 0x198);
  lVar38 = *(long *)(param_2 + 0x58);
  lVar25 = 0;
  do {
    lVar10 = (long)*(int *)(lVar38 + lVar25 * 4) * (long)*(short *)(param_3 + lVar25 * 2) * 0x2000;
    lVar13 = (long)*(int *)(lVar38 + 0x40 + lVar25 * 4) *
             (long)*(short *)(param_3 + 0x20 + lVar25 * 2);
    lVar27 = (long)*(int *)(lVar38 + 0x80 + lVar25 * 4) *
             (long)*(short *)(param_3 + 0x40 + lVar25 * 2);
    lVar21 = (long)*(int *)(lVar38 + 0xc0 + lVar25 * 4) *
             (long)*(short *)(param_3 + 0x60 + lVar25 * 2);
    lVar6 = lVar27 + lVar21;
    lVar27 = lVar27 - lVar21;
    lVar22 = lVar27 * 0x319 + lVar10 + 0x400;
    lVar41 = lVar13 * 0x2bf1 + lVar6 * 0x24f9 + lVar22;
    lVar22 = lVar13 * 0x100c + lVar6 * -0x24f9 + lVar22;
    lVar21 = lVar27 * 0xf95 + lVar10 + 0x400;
    lVar43 = lVar13 * 0x21e0 + lVar6 * -0xa20 + lVar21;
    lVar21 = lVar13 * -0x2812 + lVar6 * 0xa20 + lVar21;
    lVar16 = lVar27 * -0x1dfe + lVar10 + 0x400;
    lVar44 = lVar13 * -0x574 + lVar6 * -0xdf2 + lVar16;
    lVar16 = lVar13 * -0x19b5 + lVar6 * 0xdf2 + lVar16;
    lVar17 = (long)*(int *)(lVar38 + 0x20 + lVar25 * 4) *
             (long)*(short *)(param_3 + 0x10 + lVar25 * 2);
    lVar37 = (long)*(int *)(lVar38 + 0x60 + lVar25 * 4) *
             (long)*(short *)(param_3 + 0x30 + lVar25 * 2);
    lVar11 = (long)*(int *)(lVar38 + 0xa0 + lVar25 * 4) *
             (long)*(short *)(param_3 + 0x50 + lVar25 * 2);
    lVar36 = (long)*(int *)(lVar38 + 0xe0 + lVar25 * 4) *
             (long)*(short *)(param_3 + 0x70 + lVar25 * 2);
    lVar28 = (lVar37 + lVar17) * 0x2a50;
    lVar14 = (lVar11 + lVar17) * 0x253e;
    lVar6 = (lVar11 + lVar37) * -0xad5;
    lVar7 = (lVar36 + lVar37) * -0x253e;
    lVar15 = lVar37 * 0x1acb + lVar28 + lVar6 + lVar7;
    lVar8 = (lVar36 + lVar17) * 0x1e02;
    lVar33 = lVar17 * -0x40a5 + lVar28 + lVar14 + lVar8;
    lVar28 = (lVar36 + lVar11) * -0x1508;
    lVar14 = lVar11 * -0x324f + lVar6 + lVar14 + lVar28;
    lVar28 = lVar36 * 0x4694 + lVar7 + lVar8 + lVar28;
    lVar6 = (lVar11 - lVar37) * 0x1e02 + (lVar36 + lVar17) * 0xad5;
    lVar7 = lVar17 * 0xa33 + lVar6 + lVar37 * -0xeea;
    lVar6 = lVar6 + lVar11 * 0xc4e + lVar36 * -0x37c1;
    aiStack_1d8[lVar25] = (int)((ulong)(lVar33 + lVar41) >> 0xb);
    aiStack_1d8[lVar25 + 0x60] = (int)((ulong)(lVar41 - lVar33) >> 0xb);
    aiStack_1d8[lVar25 + 8] = (int)((ulong)(lVar15 + lVar43) >> 0xb);
    aiStack_1d8[lVar25 + 0x58] = (int)((ulong)(lVar43 - lVar15) >> 0xb);
    aiStack_1d8[lVar25 + 0x10] = (int)((ulong)(lVar22 + lVar14) >> 0xb);
    aiStack_1d8[lVar25 + 0x50] = (int)((ulong)(lVar22 - lVar14) >> 0xb);
    aiStack_1d8[lVar25 + 0x18] = (int)((ulong)(lVar28 + lVar44) >> 0xb);
    aiStack_1d8[lVar25 + 0x48] = (int)((ulong)(lVar44 - lVar28) >> 0xb);
    aiStack_1d8[lVar25 + 0x20] = (int)((ulong)(lVar7 + lVar16) >> 0xb);
    aiStack_1d8[lVar25 + 0x40] = (int)((ulong)(lVar16 - lVar7) >> 0xb);
    aiStack_1d8[lVar25 + 0x28] = (int)((ulong)(lVar6 + lVar21) >> 0xb);
    aiStack_1d8[lVar25 + 0x38] = (int)((ulong)(lVar21 - lVar6) >> 0xb);
    aiStack_1d8[lVar25 + 0x30] = (int)((lVar27 - lVar13) * 0x2d41 + lVar10 + 0x400U >> 0xb);
    lVar25 = lVar25 + 1;
  } while ((int)lVar25 != 8);
  uVar9 = (ulong)param_5;
  lVar38 = 0;
  do {
    iVar20 = aiStack_1d8[lVar38 + 1];
    iVar1 = aiStack_1d8[lVar38 + 2];
    iVar42 = aiStack_1d8[lVar38] * 0x2000;
    iVar12 = aiStack_1d8[lVar38 + 6] + aiStack_1d8[lVar38 + 4];
    iVar23 = aiStack_1d8[lVar38 + 4] - aiStack_1d8[lVar38 + 6];
    iVar29 = iVar23 * 0x319 + iVar42 + 0x8020000;
    iVar34 = iVar23 * 0xf95 + iVar42 + 0x8020000;
    iVar39 = iVar1 * 0x2bf1 + iVar12 * 0x24f9 + iVar29;
    iVar29 = iVar1 * 0x100c + iVar12 * -0x24f9 + iVar29;
    iVar30 = iVar23 * -0x1dfe + iVar42 + 0x8020000;
    iVar35 = iVar1 * 0x21e0 + iVar12 * -0xa20 + iVar34;
    iVar34 = iVar1 * -0x2812 + iVar12 * 0xa20 + iVar34;
    iVar5 = iVar1 * -0x574 + iVar12 * -0xdf2 + iVar30;
    iVar2 = aiStack_1d8[lVar38 + 3];
    iVar3 = aiStack_1d8[lVar38 + 5];
    iVar30 = iVar1 * -0x19b5 + iVar12 * 0xdf2 + iVar30;
    iVar24 = (iVar2 + iVar20) * 0x2a50;
    iVar31 = (iVar3 + iVar20) * 0x253e;
    iVar18 = (iVar3 + iVar2) * -0xad5;
    iVar12 = aiStack_1d8[lVar38 + 7];
    iVar19 = (iVar12 + iVar2) * -0x253e;
    iVar32 = iVar2 * 0x1acb + iVar24 + iVar18 + iVar19;
    iVar40 = (iVar20 + iVar12) * 0x1e02;
    iVar24 = iVar20 * -0x40a5 + iVar24 + iVar31 + iVar40;
    iVar26 = (iVar12 + iVar3) * -0x1508;
    iVar31 = iVar3 * -0x324f + iVar18 + iVar31 + iVar26;
    iVar26 = iVar12 * 0x4694 + iVar19 + iVar40 + iVar26;
    iVar18 = (iVar3 - iVar2) * 0x1e02 + (iVar20 + iVar12) * 0xad5;
    iVar20 = iVar20 * 0xa33 + iVar18 + iVar2 * -0xeea;
    iVar12 = iVar18 + iVar3 * 0xc4e + iVar12 * -0x37c1;
    lVar25 = *(long *)(param_4 + lVar38);
    *(undefined1 *)(lVar25 + uVar9) =
         *(undefined1 *)(lVar4 + -0x180 + (ulong)((uint)(iVar24 + iVar39) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar25 + 0xc + uVar9) =
         *(undefined1 *)(lVar4 + -0x180 + (ulong)((uint)(iVar39 - iVar24) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar25 + 1 + uVar9) =
         *(undefined1 *)(lVar4 + -0x180 + (ulong)((uint)(iVar32 + iVar35) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar25 + 0xb + uVar9) =
         *(undefined1 *)(lVar4 + -0x180 + (ulong)((uint)(iVar35 - iVar32) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar25 + 2 + uVar9) =
         *(undefined1 *)(lVar4 + -0x180 + (ulong)((uint)(iVar31 + iVar29) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar25 + 10 + uVar9) =
         *(undefined1 *)(lVar4 + -0x180 + (ulong)((uint)(iVar29 - iVar31) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar25 + 3 + uVar9) =
         *(undefined1 *)(lVar4 + -0x180 + (ulong)((uint)(iVar26 + iVar5) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar25 + 9 + uVar9) =
         *(undefined1 *)(lVar4 + -0x180 + (ulong)((uint)(iVar5 - iVar26) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar25 + 4 + uVar9) =
         *(undefined1 *)(lVar4 + -0x180 + (ulong)((uint)(iVar30 + iVar20) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar25 + 8 + uVar9) =
         *(undefined1 *)(lVar4 + -0x180 + (ulong)((uint)(iVar30 - iVar20) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar25 + 5 + uVar9) =
         *(undefined1 *)(lVar4 + -0x180 + (ulong)((uint)(iVar12 + iVar34) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar25 + 7 + uVar9) =
         *(undefined1 *)(lVar4 + -0x180 + (ulong)((uint)(iVar34 - iVar12) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar25 + 6 + uVar9) =
         *(undefined1 *)
          (lVar4 + -0x180 + (ulong)((iVar23 - iVar1) * 0x2d41 + iVar42 + 0x8020000U >> 0x12 & 0x3ff)
          );
    lVar38 = lVar38 + 8;
  } while (lVar38 != 0x68);
  return;
}


