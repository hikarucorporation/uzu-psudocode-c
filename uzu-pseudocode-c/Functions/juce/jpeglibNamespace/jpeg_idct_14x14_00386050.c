// Function : jpeg_idct_14x14
// Namespace: juce:jpeglibNamespace
// Entry    : 00386050
// Prototype: undefined jpeg_idct_14x14(long param_1, long param_2, long param_3, long param_4, uint param_5)
// Body     : 00386050 - 00386698


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::jpeg_idct_14x14(juce::jpeglibNamespace::jpeg_decompress_struct*,
   juce::jpeglibNamespace::jpeg_component_info*, short*, unsigned char**, unsigned int) */

void __cdecl
juce::jpeglibNamespace::jpeg_idct_14x14
          (long param_1,long param_2,long param_3,long param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  int iVar18;
  int iVar19;
  long lVar20;
  long lVar21;
  int iVar22;
  long lVar23;
  int iVar24;
  long lVar25;
  long lVar26;
  int iVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  ulong uVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  long lVar36;
  long lVar37;
  int iVar38;
  long lVar39;
  long lVar40;
  int iVar41;
  int aiStack_1f8 [114];
  
  lVar3 = *(long *)(param_1 + 0x198);
  lVar40 = *(long *)(param_2 + 0x58);
  lVar23 = 0;
  do {
    lVar10 = (long)*(int *)(lVar40 + lVar23 * 4) * (long)*(short *)(param_3 + lVar23 * 2) * 0x2000;
    lVar16 = (long)*(int *)(lVar40 + 0x80 + lVar23 * 4) *
             (long)*(short *)(param_3 + 0x40 + lVar23 * 2);
    lVar20 = lVar16 * 0x28c6 + lVar10 + 0x400;
    lVar29 = lVar16 * 0xa12 + lVar10 + 0x400;
    lVar36 = lVar10 + lVar16 * -0x1c37 + 0x400;
    lVar11 = (long)*(int *)(lVar40 + 0x40 + lVar23 * 4) *
             (long)*(short *)(param_3 + 0x20 + lVar23 * 2);
    lVar17 = (long)*(int *)(lVar40 + 0xc0 + lVar23 * 4) *
             (long)*(short *)(param_3 + 0x60 + lVar23 * 2);
    lVar9 = (lVar17 + lVar11) * 0x2362;
    lVar25 = lVar11 * 0x8bd + lVar9;
    lVar9 = lVar17 * -0x3704 + lVar9;
    lVar12 = lVar17 * -0x2c1f + lVar11 * 0x13a3;
    lVar11 = lVar25 + lVar20;
    lVar20 = lVar20 - lVar25;
    lVar17 = lVar29 + lVar9;
    lVar29 = lVar29 - lVar9;
    lVar9 = lVar12 + lVar36;
    lVar36 = lVar36 - lVar12;
    lVar12 = (long)*(int *)(lVar40 + 0x20 + lVar23 * 4) *
             (long)*(short *)(param_3 + 0x10 + lVar23 * 2);
    lVar21 = (long)*(int *)(lVar40 + 0x60 + lVar23 * 4) *
             (long)*(short *)(param_3 + 0x30 + lVar23 * 2);
    lVar30 = (long)*(int *)(lVar40 + 0xa0 + lVar23 * 4) *
             (long)*(short *)(param_3 + 0x50 + lVar23 * 2);
    lVar37 = (long)*(int *)(lVar40 + 0xe0 + lVar23 * 4) *
             (long)*(short *)(param_3 + 0x70 + lVar23 * 2);
    lVar25 = (lVar21 + lVar12) * 0x2ab7;
    lVar13 = (lVar30 + lVar12) * 0x2652;
    lVar14 = (lVar30 + lVar21) * -0x511 + lVar37 * -0x2000;
    lVar26 = lVar21 * -0xd92 + lVar25 + lVar14;
    lVar14 = lVar30 * -0x4bf7 + lVar13 + lVar14;
    lVar39 = (lVar30 + lVar12) * 0x1814;
    lVar31 = (lVar30 - lVar21) * 0x2cf8;
    lVar28 = lVar12 * -0x2410 + lVar25 + lVar13 + lVar37 * 0x2000;
    lVar13 = (lVar12 - lVar21) * 0xef2 + lVar37 * -0x2000;
    lVar25 = lVar30 * -0x361a + lVar31 + lVar39 + lVar37 * 0x2000;
    lVar39 = lVar12 * -0x21f5 + lVar39 + lVar13;
    lVar13 = lVar21 * 0x1599 + lVar31 + lVar13;
    iVar33 = (int)lVar37 + ((int)(lVar12 - lVar21) - (int)lVar30);
    aiStack_1f8[lVar23] = (int)((ulong)(lVar28 + lVar11) >> 0xb);
    aiStack_1f8[lVar23 + 0x68] = (int)((ulong)(lVar11 - lVar28) >> 0xb);
    aiStack_1f8[lVar23 + 8] = (int)((ulong)(lVar26 + lVar17) >> 0xb);
    aiStack_1f8[lVar23 + 0x60] = (int)((ulong)(lVar17 - lVar26) >> 0xb);
    aiStack_1f8[lVar23 + 0x10] = (int)((ulong)(lVar14 + lVar9) >> 0xb);
    aiStack_1f8[lVar23 + 0x58] = (int)((ulong)(lVar9 - lVar14) >> 0xb);
    iVar1 = (int)(lVar16 * -0x2d42 + lVar10 + 0x400U >> 0xb);
    aiStack_1f8[lVar23 + 0x18] = iVar1 + iVar33 * 4;
    aiStack_1f8[lVar23 + 0x50] = iVar1 + iVar33 * -4;
    aiStack_1f8[lVar23 + 0x20] = (int)((ulong)(lVar25 + lVar36) >> 0xb);
    aiStack_1f8[lVar23 + 0x48] = (int)((ulong)(lVar36 - lVar25) >> 0xb);
    aiStack_1f8[lVar23 + 0x28] = (int)((ulong)(lVar13 + lVar29) >> 0xb);
    aiStack_1f8[lVar23 + 0x40] = (int)((ulong)(lVar29 - lVar13) >> 0xb);
    aiStack_1f8[lVar23 + 0x30] = (int)((ulong)(lVar39 + lVar20) >> 0xb);
    aiStack_1f8[lVar23 + 0x38] = (int)((ulong)(lVar20 - lVar39) >> 0xb);
    lVar23 = lVar23 + 1;
  } while ((int)lVar23 != 8);
  uVar32 = (ulong)param_5;
  lVar40 = 0;
  do {
    iVar1 = aiStack_1f8[lVar40 + 2];
    iVar4 = aiStack_1f8[lVar40] * 0x2000;
    iVar33 = aiStack_1f8[lVar40 + 4];
    iVar18 = iVar4 + iVar33 * 0x28c6 + 0x8020000;
    iVar34 = iVar4 + iVar33 * 0xa12 + 0x8020000;
    iVar27 = iVar4 + iVar33 * -0x1c37 + 0x8020000;
    iVar2 = aiStack_1f8[lVar40 + 6];
    iVar5 = iVar4 + iVar33 * -0x2d42 + 0x8020000;
    iVar6 = (iVar2 + iVar1) * 0x2362;
    iVar24 = iVar1 * 0x8bd + iVar6;
    iVar4 = iVar2 * -0x2c1f + iVar1 * 0x13a3;
    iVar6 = iVar2 * -0x3704 + iVar6;
    iVar1 = iVar24 + iVar18;
    iVar33 = iVar4 + iVar27;
    iVar27 = iVar27 - iVar4;
    iVar18 = iVar18 - iVar24;
    iVar4 = aiStack_1f8[lVar40 + 1];
    iVar24 = aiStack_1f8[lVar40 + 3];
    iVar8 = aiStack_1f8[lVar40 + 5];
    iVar2 = iVar6 + iVar34;
    iVar15 = (iVar24 + iVar4) * 0x2ab7;
    iVar34 = iVar34 - iVar6;
    iVar7 = (iVar8 + iVar4) * 0x2652;
    iVar6 = aiStack_1f8[lVar40 + 7];
    iVar19 = ((iVar4 - iVar24) - iVar8) + iVar6;
    iVar22 = iVar4 * -0x2410 + iVar15 + iVar7 + iVar6 * 0x2000;
    iVar41 = (iVar4 - iVar24) * 0xef2 + iVar6 * -0x2000;
    iVar38 = (iVar8 + iVar24) * -0x511 + iVar6 * -0x2000;
    iVar35 = iVar24 * -0xd92 + iVar15 + iVar38;
    iVar38 = iVar8 * -0x4bf7 + iVar7 + iVar38;
    iVar7 = (iVar8 - iVar24) * 0x2cf8;
    iVar15 = (iVar8 + iVar4) * 0x1814;
    iVar8 = iVar8 * -0x361a + iVar6 * 0x2000 + iVar7 + iVar15;
    iVar4 = iVar4 * -0x21f5 + iVar15 + iVar41;
    iVar41 = iVar24 * 0x1599 + iVar7 + iVar41;
    lVar23 = *(long *)(param_4 + lVar40);
    *(undefined1 *)(lVar23 + uVar32) =
         *(undefined1 *)(lVar3 + -0x180 + (ulong)((uint)(iVar1 + iVar22) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar23 + 0xd + uVar32) =
         *(undefined1 *)(lVar3 + -0x180 + (ulong)((uint)(iVar1 - iVar22) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar23 + 1 + uVar32) =
         *(undefined1 *)(lVar3 + -0x180 + (ulong)((uint)(iVar35 + iVar2) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar23 + 0xc + uVar32) =
         *(undefined1 *)(lVar3 + -0x180 + (ulong)((uint)(iVar2 - iVar35) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar23 + 2 + uVar32) =
         *(undefined1 *)(lVar3 + -0x180 + (ulong)((uint)(iVar38 + iVar33) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar23 + 0xb + uVar32) =
         *(undefined1 *)(lVar3 + -0x180 + (ulong)((uint)(iVar33 - iVar38) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar23 + 3 + uVar32) =
         *(undefined1 *)(lVar3 + -0x180 + (ulong)((uint)(iVar19 * 0x2000 + iVar5) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar23 + 10 + uVar32) =
         *(undefined1 *)(lVar3 + -0x180 + (ulong)((uint)(iVar5 + iVar19 * -0x2000) >> 0x12 & 0x3ff))
    ;
    *(undefined1 *)(lVar23 + 4 + uVar32) =
         *(undefined1 *)(lVar3 + -0x180 + (ulong)((uint)(iVar8 + iVar27) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar23 + 9 + uVar32) =
         *(undefined1 *)(lVar3 + -0x180 + (ulong)((uint)(iVar27 - iVar8) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar23 + 5 + uVar32) =
         *(undefined1 *)(lVar3 + -0x180 + (ulong)((uint)(iVar41 + iVar34) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar23 + 8 + uVar32) =
         *(undefined1 *)(lVar3 + -0x180 + (ulong)((uint)(iVar34 - iVar41) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar23 + 6 + uVar32) =
         *(undefined1 *)(lVar3 + -0x180 + (ulong)((uint)(iVar4 + iVar18) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar23 + 7 + uVar32) =
         *(undefined1 *)(lVar3 + -0x180 + (ulong)((uint)(iVar18 - iVar4) >> 0x12 & 0x3ff));
    lVar40 = lVar40 + 8;
  } while (lVar40 != 0x70);
  return;
}


