// Function : jpeg_idct_11x11
// Namespace: juce:jpeglibNamespace
// Entry    : 00387260
// Prototype: undefined jpeg_idct_11x11(long param_1, long param_2, long param_3, long param_4, uint param_5)
// Body     : 00387260 - 00387809


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::jpeg_idct_11x11(juce::jpeglibNamespace::jpeg_decompress_struct*,
   juce::jpeglibNamespace::jpeg_component_info*, short*, unsigned char**, unsigned int) */

void __cdecl
juce::jpeglibNamespace::jpeg_idct_11x11
          (long param_1,long param_2,long param_3,long param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  int iVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  int iVar18;
  int iVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  long lVar34;
  int iVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  int iVar40;
  int iVar41;
  long lVar42;
  int aiStack_198 [90];
  
  lVar6 = *(long *)(param_1 + 0x198);
  lVar11 = *(long *)(param_2 + 0x58);
  lVar30 = 0;
  do {
    lVar36 = (long)*(int *)(lVar11 + lVar30 * 4) * (long)*(short *)(param_3 + lVar30 * 2) * 0x2000;
    lVar9 = (long)*(int *)(lVar11 + 0x40 + lVar30 * 4) *
            (long)*(short *)(param_3 + 0x20 + lVar30 * 2);
    lVar15 = (long)*(int *)(lVar11 + 0x80 + lVar30 * 4) *
             (long)*(short *)(param_3 + 0x40 + lVar30 * 2);
    lVar27 = (long)*(int *)(lVar11 + 0xc0 + lVar30 * 4) *
             (long)*(short *)(param_3 + 0x60 + lVar30 * 2);
    lVar22 = (lVar27 + lVar9) - lVar15;
    lVar38 = (lVar15 - lVar9) * 0xdc9;
    lVar13 = lVar22 * 0x2b6c + lVar36 + 0x400;
    lVar16 = (lVar15 - lVar27) * 0x517e + lVar13;
    lVar42 = lVar15 * -0x3a4c + lVar16 + lVar38;
    lVar16 = lVar27 * 0x43b5 + lVar16;
    lVar39 = lVar38 + lVar13 + lVar9 * -0x306f;
    lVar13 = (lVar27 + lVar9) * -0x24fb + lVar13;
    lVar27 = lVar27 * -0x193d + lVar13;
    lVar13 = lVar9 * -0x2c83 + lVar15 * 0x3e39 + lVar13;
    lVar20 = (long)*(int *)(lVar11 + 0x20 + lVar30 * 4) *
             (long)*(short *)(param_3 + 0x10 + lVar30 * 2);
    lVar9 = (long)*(int *)(lVar11 + 0x60 + lVar30 * 4) *
            (long)*(short *)(param_3 + 0x30 + lVar30 * 2);
    lVar23 = (long)*(int *)(lVar11 + 0xa0 + lVar30 * 4) *
             (long)*(short *)(param_3 + 0x50 + lVar30 * 2);
    lVar37 = (long)*(int *)(lVar11 + 0xe0 + lVar30 * 4) *
             (long)*(short *)(param_3 + 0x70 + lVar30 * 2);
    lVar15 = (lVar9 + lVar20 + lVar23 + lVar37) * 0xcc0;
    lVar28 = (lVar9 + lVar20) * 0x1c6a;
    lVar17 = (lVar20 + lVar23) * 0x1574;
    lVar29 = (lVar9 + lVar23) * -0x2537 + lVar15;
    lVar38 = lVar23 * -0x2626 + lVar17 + lVar29;
    lVar34 = (lVar37 + lVar9) * -0x398b;
    lVar29 = lVar9 * 0x4258 + lVar28 + lVar34 + lVar29;
    lVar21 = (lVar20 + lVar37) * 3000 + lVar15;
    lVar17 = lVar20 * -0x1d8a + lVar28 + lVar17 + lVar21;
    lVar21 = lVar37 * 0x4347 + lVar34 + lVar21;
    lVar15 = lVar37 * -0x35ea + lVar23 * 0x200b + lVar9 * -0x2ef3 + lVar15;
    aiStack_198[lVar30] = (int)((ulong)(lVar17 + lVar16) >> 0xb);
    aiStack_198[lVar30 + 0x50] = (int)((ulong)(lVar16 - lVar17) >> 0xb);
    aiStack_198[lVar30 + 8] = (int)((ulong)(lVar29 + lVar42) >> 0xb);
    aiStack_198[lVar30 + 0x48] = (int)((ulong)(lVar42 - lVar29) >> 0xb);
    aiStack_198[lVar30 + 0x10] = (int)((ulong)(lVar38 + lVar27) >> 0xb);
    aiStack_198[lVar30 + 0x40] = (int)((ulong)(lVar27 - lVar38) >> 0xb);
    aiStack_198[lVar30 + 0x18] = (int)((ulong)(lVar21 + lVar39) >> 0xb);
    aiStack_198[lVar30 + 0x38] = (int)((ulong)(lVar39 - lVar21) >> 0xb);
    aiStack_198[lVar30 + 0x20] = (int)((ulong)(lVar15 + lVar13) >> 0xb);
    aiStack_198[lVar30 + 0x30] = (int)((ulong)(lVar13 - lVar15) >> 0xb);
    aiStack_198[lVar30 + 0x28] = (int)(lVar22 * -0x2d41 + lVar36 + 0x400U >> 0xb);
    lVar30 = lVar30 + 1;
  } while ((int)lVar30 != 8);
  uVar10 = (ulong)param_5;
  lVar11 = 0;
  do {
    iVar1 = aiStack_198[lVar11];
    iVar8 = aiStack_198[lVar11 + 1];
    iVar2 = aiStack_198[lVar11 + 2];
    iVar14 = aiStack_198[lVar11 + 4];
    iVar3 = aiStack_198[lVar11 + 6];
    iVar12 = (iVar3 + iVar2) - iVar14;
    iVar4 = aiStack_198[lVar11 + 3];
    iVar5 = aiStack_198[lVar11 + 5];
    iVar24 = (iVar8 + iVar4) * 0x1c6a;
    iVar18 = iVar12 * 0x2b6c + iVar1 * 0x2000 + 0x8020000;
    iVar32 = (iVar5 + iVar8) * 0x1574;
    iVar25 = (iVar14 - iVar3) * 0x517e + iVar18;
    iVar33 = iVar3 * 0x43b5 + iVar25;
    iVar40 = (iVar3 + iVar2) * -0x24fb + iVar18;
    iVar19 = iVar3 * -0x193d + iVar40;
    iVar40 = iVar2 * -0x2c83 + iVar14 * 0x3e39 + iVar40;
    iVar3 = aiStack_198[lVar11 + 7];
    iVar35 = (iVar8 + iVar4 + iVar5 + iVar3) * 0xcc0;
    iVar26 = (iVar5 + iVar4) * -0x2537 + iVar35;
    iVar31 = iVar5 * -0x2626 + iVar32 + iVar26;
    iVar41 = (iVar3 + iVar4) * -0x398b;
    iVar26 = iVar4 * 0x4258 + iVar24 + iVar41 + iVar26;
    iVar7 = (iVar14 - iVar2) * 0xdc9;
    iVar14 = iVar14 * -0x3a4c + iVar25 + iVar7;
    iVar25 = (iVar8 + iVar3) * 3000 + iVar35;
    iVar24 = iVar8 * -0x1d8a + iVar24 + iVar32 + iVar25;
    iVar25 = iVar3 * 0x4347 + iVar41 + iVar25;
    iVar8 = iVar7 + iVar18 + iVar2 * -0x306f;
    iVar35 = iVar3 * -0x35ea + iVar5 * 0x200b + iVar4 * -0x2ef3 + iVar35;
    lVar30 = *(long *)(param_4 + lVar11);
    *(undefined1 *)(lVar30 + uVar10) =
         *(undefined1 *)(lVar6 + -0x180 + (ulong)((uint)(iVar24 + iVar33) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar30 + 10 + uVar10) =
         *(undefined1 *)(lVar6 + -0x180 + (ulong)((uint)(iVar33 - iVar24) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar30 + 1 + uVar10) =
         *(undefined1 *)(lVar6 + -0x180 + (ulong)((uint)(iVar26 + iVar14) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar30 + 9 + uVar10) =
         *(undefined1 *)(lVar6 + -0x180 + (ulong)((uint)(iVar14 - iVar26) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar30 + 2 + uVar10) =
         *(undefined1 *)(lVar6 + -0x180 + (ulong)((uint)(iVar31 + iVar19) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar30 + 8 + uVar10) =
         *(undefined1 *)(lVar6 + -0x180 + (ulong)((uint)(iVar19 - iVar31) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar30 + 3 + uVar10) =
         *(undefined1 *)(lVar6 + -0x180 + (ulong)((uint)(iVar25 + iVar8) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar30 + 7 + uVar10) =
         *(undefined1 *)(lVar6 + -0x180 + (ulong)((uint)(iVar8 - iVar25) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar30 + 4 + uVar10) =
         *(undefined1 *)(lVar6 + -0x180 + (ulong)((uint)(iVar40 + iVar35) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar30 + 6 + uVar10) =
         *(undefined1 *)(lVar6 + -0x180 + (ulong)((uint)(iVar40 - iVar35) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar30 + 5 + uVar10) =
         *(undefined1 *)
          (lVar6 + -0x180 + (ulong)(iVar12 * -0x2d41 + iVar1 * 0x2000 + 0x8020000U >> 0x12 & 0x3ff))
    ;
    lVar11 = lVar11 + 8;
  } while (lVar11 != 0x58);
  return;
}


