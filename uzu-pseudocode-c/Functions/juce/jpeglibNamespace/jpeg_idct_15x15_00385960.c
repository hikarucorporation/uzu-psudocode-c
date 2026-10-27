// Function : jpeg_idct_15x15
// Namespace: juce:jpeglibNamespace
// Entry    : 00385960
// Prototype: undefined jpeg_idct_15x15(long param_1, long param_2, long param_3, long param_4, uint param_5)
// Body     : 00385960 - 0038604a


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::jpeg_idct_15x15(juce::jpeglibNamespace::jpeg_decompress_struct*,
   juce::jpeglibNamespace::jpeg_component_info*, short*, unsigned char**, unsigned int) */

void __cdecl
juce::jpeglibNamespace::jpeg_idct_15x15
          (long param_1,long param_2,long param_3,long param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  long lVar16;
  int iVar17;
  long lVar18;
  int iVar19;
  int iVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  int iVar31;
  int iVar32;
  long lVar33;
  int iVar34;
  long lVar35;
  long lVar36;
  int iVar37;
  int iVar38;
  long lVar39;
  long lVar40;
  int iVar41;
  long lVar42;
  int aiStack_218 [122];
  
  lVar3 = *(long *)(param_1 + 0x198);
  lVar7 = *(long *)(param_2 + 0x58);
  lVar18 = 0;
  do {
    lVar10 = (long)*(int *)(lVar7 + lVar18 * 4) * (long)*(short *)(param_3 + lVar18 * 2) * 0x2000;
    lVar21 = (long)*(int *)(lVar7 + 0x40 + lVar18 * 4) *
             (long)*(short *)(param_3 + 0x20 + lVar18 * 2);
    lVar8 = (long)*(int *)(lVar7 + 0x80 + lVar18 * 4) *
            (long)*(short *)(param_3 + 0x40 + lVar18 * 2);
    lVar15 = (long)*(int *)(lVar7 + 0xc0 + lVar18 * 4) *
             (long)*(short *)(param_3 + 0x60 + lVar18 * 2);
    lVar39 = lVar15 * -0xdfc + lVar10 + 0x400;
    lVar35 = lVar15 * 0x249d + lVar10 + 0x400;
    lVar28 = lVar10 + lVar15 * -0x2d42 + 0x400;
    lVar11 = lVar21 - lVar8;
    lVar8 = lVar8 + lVar21;
    lVar42 = lVar11 * 0x176 + lVar8 * 0x2ace + lVar35;
    lVar16 = lVar21 * 0x2e13 + lVar8 * -0x2ace + lVar11 * 0x176 + lVar39;
    lVar22 = lVar11 * -0xcc7 + lVar8 * -0x1182 + lVar35;
    lVar33 = lVar8 * 0x1182 + lVar21 * -0x2e13 + lVar11 * -0xcc7 + lVar39;
    lVar39 = lVar11 * 0xb50 + lVar8 * 0x194c + lVar39;
    lVar36 = lVar35 + lVar8 * -0x194c + lVar11 * 0xb50;
    lVar40 = lVar11 * 0x16a0 + lVar28;
    lVar29 = (long)*(int *)(lVar7 + 0x20 + lVar18 * 4) *
             (long)*(short *)(param_3 + 0x10 + lVar18 * 2);
    lVar35 = (long)*(int *)(lVar7 + 0x60 + lVar18 * 4) *
             (long)*(short *)(param_3 + 0x30 + lVar18 * 2);
    lVar30 = (long)*(int *)(lVar7 + 0xa0 + lVar18 * 4) *
             (long)*(short *)(param_3 + 0x50 + lVar18 * 2);
    lVar15 = (long)*(int *)(lVar7 + 0xe0 + lVar18 * 4) *
             (long)*(short *)(param_3 + 0x70 + lVar18 * 2);
    lVar8 = ((lVar35 - lVar15) + lVar29) * 0x1a9a;
    lVar23 = lVar29 * 0x1071 + lVar8;
    lVar8 = (lVar35 - lVar15) * -0x45a4 + lVar8;
    lVar12 = (lVar29 - lVar15) * 0x2d02 + lVar30 * 0x2731;
    lVar10 = lVar15 * 0x4ea3 + lVar35 * 0x2b0a + lVar12;
    lVar12 = lVar29 * -0x2399 + lVar35 * -0x1a9a + lVar12;
    lVar24 = (lVar29 - lVar15) * 0x2731 + lVar30 * -0x2731;
    lVar21 = (lVar29 + lVar15) * 0x1268;
    lVar29 = lVar29 * 0xf39 + lVar35 * -0x1a9a + lVar30 * -0x2731 + lVar21;
    lVar21 = lVar30 * 0x2731 + lVar35 * -0x2b0a + lVar15 * -0x1bd1 + lVar21;
    aiStack_218[lVar18] = (int)((ulong)(lVar10 + lVar42) >> 0xb);
    aiStack_218[lVar18 + 0x70] = (int)((ulong)(lVar42 - lVar10) >> 0xb);
    aiStack_218[lVar18 + 8] = (int)((ulong)(lVar23 + lVar39) >> 0xb);
    aiStack_218[lVar18 + 0x68] = (int)((ulong)(lVar39 - lVar23) >> 0xb);
    aiStack_218[lVar18 + 0x10] = (int)((ulong)(lVar24 + lVar40) >> 0xb);
    aiStack_218[lVar18 + 0x60] = (int)((ulong)(lVar40 - lVar24) >> 0xb);
    aiStack_218[lVar18 + 0x18] = (int)((ulong)(lVar29 + lVar16) >> 0xb);
    aiStack_218[lVar18 + 0x58] = (int)((ulong)(lVar16 - lVar29) >> 0xb);
    aiStack_218[lVar18 + 0x20] = (int)((ulong)(lVar8 + lVar36) >> 0xb);
    aiStack_218[lVar18 + 0x50] = (int)((ulong)(lVar36 - lVar8) >> 0xb);
    aiStack_218[lVar18 + 0x28] = (int)((ulong)(lVar21 + lVar22) >> 0xb);
    aiStack_218[lVar18 + 0x48] = (int)((ulong)(lVar22 - lVar21) >> 0xb);
    aiStack_218[lVar18 + 0x30] = (int)((ulong)(lVar33 + lVar12) >> 0xb);
    aiStack_218[lVar18 + 0x40] = (int)((ulong)(lVar33 - lVar12) >> 0xb);
    aiStack_218[lVar18 + 0x38] = (int)((ulong)(lVar11 * -0x2d40 + lVar28) >> 0xb);
    lVar18 = lVar18 + 1;
  } while ((int)lVar18 != 8);
  uVar6 = (ulong)param_5;
  lVar7 = 0;
  do {
    iVar27 = aiStack_218[lVar7 + 1];
    iVar1 = aiStack_218[lVar7 + 2];
    iVar2 = aiStack_218[lVar7 + 6];
    iVar4 = aiStack_218[lVar7] * 0x2000;
    iVar31 = iVar2 * -0xdfc + iVar4 + 0x8020000;
    iVar19 = iVar2 * 0x249d + iVar4 + 0x8020000;
    iVar13 = iVar1 - aiStack_218[lVar7 + 4];
    iVar25 = iVar2 * -0x2d42 + iVar4 + 0x8020000;
    iVar5 = aiStack_218[lVar7 + 4] + iVar1;
    iVar17 = iVar13 * 0x176 + iVar5 * 0x2ace + iVar19;
    iVar9 = iVar13 * -0xcc7 + iVar5 * -0x1182 + iVar19;
    iVar37 = iVar13 * 0xb50 + iVar5 * 0x194c + iVar31;
    iVar41 = iVar13 * 0x16a0 + iVar25;
    iVar2 = aiStack_218[lVar7 + 3];
    iVar20 = iVar1 * 0x2e13 + iVar5 * -0x2ace + iVar13 * 0x176 + iVar31;
    iVar4 = aiStack_218[lVar7 + 7];
    iVar31 = iVar5 * 0x1182 + iVar1 * -0x2e13 + iVar13 * -0xcc7 + iVar31;
    iVar32 = ((iVar2 - iVar4) + iVar27) * 0x1a9a;
    iVar14 = iVar27 * 0x1071 + iVar32;
    iVar32 = (iVar2 - iVar4) * -0x45a4 + iVar32;
    iVar5 = iVar19 + iVar5 * -0x194c + iVar13 * 0xb50;
    iVar1 = aiStack_218[lVar7 + 5];
    iVar26 = (iVar27 - iVar4) * 0x2d02 + iVar1 * 0x2731;
    iVar38 = iVar4 * 0x4ea3 + iVar2 * 0x2b0a + iVar26;
    iVar26 = iVar27 * -0x2399 + iVar2 * -0x1a9a + iVar26;
    iVar34 = (iVar27 - iVar4) * 0x2731 + iVar1 * -0x2731;
    iVar19 = (iVar4 + iVar27) * 0x1268;
    iVar27 = iVar27 * 0xf39 + iVar2 * -0x1a9a + iVar1 * -0x2731 + iVar19;
    iVar19 = iVar1 * 0x2731 + iVar2 * -0x2b0a + iVar4 * -0x1bd1 + iVar19;
    lVar18 = *(long *)(param_4 + lVar7);
    *(undefined1 *)(lVar18 + uVar6) =
         *(undefined1 *)(lVar3 + -0x180 + (ulong)((uint)(iVar38 + iVar17) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar18 + 0xe + uVar6) =
         *(undefined1 *)(lVar3 + -0x180 + (ulong)((uint)(iVar17 - iVar38) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar18 + 1 + uVar6) =
         *(undefined1 *)(lVar3 + -0x180 + (ulong)((uint)(iVar14 + iVar37) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar18 + 0xd + uVar6) =
         *(undefined1 *)(lVar3 + -0x180 + (ulong)((uint)(iVar37 - iVar14) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar18 + 2 + uVar6) =
         *(undefined1 *)(lVar3 + -0x180 + (ulong)((uint)(iVar34 + iVar41) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar18 + 0xc + uVar6) =
         *(undefined1 *)(lVar3 + -0x180 + (ulong)((uint)(iVar41 - iVar34) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar18 + 3 + uVar6) =
         *(undefined1 *)(lVar3 + -0x180 + (ulong)((uint)(iVar27 + iVar20) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar18 + 0xb + uVar6) =
         *(undefined1 *)(lVar3 + -0x180 + (ulong)((uint)(iVar20 - iVar27) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar18 + 4 + uVar6) =
         *(undefined1 *)(lVar3 + -0x180 + (ulong)((uint)(iVar32 + iVar5) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar18 + 10 + uVar6) =
         *(undefined1 *)(lVar3 + -0x180 + (ulong)((uint)(iVar5 - iVar32) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar18 + 5 + uVar6) =
         *(undefined1 *)(lVar3 + -0x180 + (ulong)((uint)(iVar19 + iVar9) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar18 + 9 + uVar6) =
         *(undefined1 *)(lVar3 + -0x180 + (ulong)((uint)(iVar9 - iVar19) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar18 + 6 + uVar6) =
         *(undefined1 *)(lVar3 + -0x180 + (ulong)((uint)(iVar26 + iVar31) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar18 + 8 + uVar6) =
         *(undefined1 *)(lVar3 + -0x180 + (ulong)((uint)(iVar31 - iVar26) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar18 + 7 + uVar6) =
         *(undefined1 *)
          (lVar3 + -0x180 + (ulong)((uint)(iVar13 * -0x2d40 + iVar25) >> 0x12 & 0x3ff));
    lVar7 = lVar7 + 8;
  } while (lVar7 != 0x78);
  return;
}


