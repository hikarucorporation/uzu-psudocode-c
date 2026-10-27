// Function : jpeg_idct_8x16
// Namespace: juce:jpeglibNamespace
// Entry    : 003829f0
// Prototype: undefined jpeg_idct_8x16(long param_1, long param_2, long param_3, long param_4, uint param_5)
// Body     : 003829f0 - 00382f5e


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::jpeg_idct_8x16(juce::jpeglibNamespace::jpeg_decompress_struct*,
   juce::jpeglibNamespace::jpeg_component_info*, short*, unsigned char**, unsigned int) */

void __cdecl
juce::jpeglibNamespace::jpeg_idct_8x16
          (long param_1,long param_2,long param_3,long param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  int iVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  int iVar24;
  long lVar25;
  int iVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  int iVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  int aiStack_238 [130];
  
  lVar3 = *(long *)(param_1 + 0x198);
  lVar29 = *(long *)(param_2 + 0x58);
  lVar27 = 0;
  do {
    lVar11 = (long)*(int *)(lVar29 + lVar27 * 4) * (long)*(short *)(param_3 + lVar27 * 2) * 0x2000;
    lVar15 = (long)*(int *)(lVar29 + 0x80 + lVar27 * 4) *
             (long)*(short *)(param_3 + 0x40 + lVar27 * 2);
    lVar31 = lVar15 * 0x29cf + lVar11 + 0x400;
    lVar39 = lVar11 + 0x400 + lVar15 * -0x29cf;
    lVar34 = lVar15 * 0x1151 + lVar11 + 0x400;
    lVar37 = lVar11 + 0x400 + lVar15 * -0x1151;
    lVar11 = (long)*(int *)(lVar29 + 0x40 + lVar27 * 4) *
             (long)*(short *)(param_3 + 0x20 + lVar27 * 2);
    lVar15 = (long)*(int *)(lVar29 + 0xc0 + lVar27 * 4) *
             (long)*(short *)(param_3 + 0x60 + lVar27 * 2);
    lVar20 = (lVar11 - lVar15) * 0x8d4;
    lVar12 = (lVar11 - lVar15) * 0x2c63;
    lVar17 = lVar15 * 0x5203 + lVar12;
    lVar7 = lVar11 * 0x1ccd + lVar20;
    lVar12 = lVar11 * -0x133e + lVar12;
    lVar20 = lVar15 * -0x1050 + lVar20;
    lVar11 = lVar17 + lVar31;
    lVar31 = lVar31 - lVar17;
    lVar15 = lVar7 + lVar34;
    lVar34 = lVar34 - lVar7;
    lVar7 = lVar12 + lVar37;
    lVar37 = lVar37 - lVar12;
    lVar12 = lVar20 + lVar39;
    lVar39 = lVar39 - lVar20;
    lVar25 = (long)*(int *)(lVar29 + 0x20 + lVar27 * 4) *
             (long)*(short *)(param_3 + 0x10 + lVar27 * 2);
    lVar20 = (long)*(int *)(lVar29 + 0x60 + lVar27 * 4) *
             (long)*(short *)(param_3 + 0x30 + lVar27 * 2);
    lVar32 = (long)*(int *)(lVar29 + 0xa0 + lVar27 * 4) *
             (long)*(short *)(param_3 + 0x50 + lVar27 * 2);
    lVar16 = (long)*(int *)(lVar29 + 0xe0 + lVar27 * 4) *
             (long)*(short *)(param_3 + 0x70 + lVar27 * 2);
    lVar28 = (lVar20 + lVar25) * 0x2b4e;
    lVar18 = (lVar32 + lVar25) * 0x27e9;
    lVar21 = (lVar32 + lVar20) * 0x470;
    lVar17 = (lVar32 + lVar25) * 0x1555;
    lVar36 = (lVar25 - lVar20) * 0xd23;
    lVar35 = (lVar32 - lVar20) * 0x2d09;
    lVar22 = (lVar20 + lVar16) * -0x1555;
    lVar13 = lVar20 * 0x24d + lVar28 + lVar21 + lVar22;
    lVar23 = (lVar16 + lVar25) * 0x22fc;
    lVar30 = lVar25 * -0x492a + lVar28 + lVar18 + lVar23;
    lVar28 = (lVar25 - lVar16) * 0x1cb6;
    lVar40 = lVar25 * -0x3abe + lVar36 + lVar17 + lVar28;
    lVar25 = (lVar20 + lVar16) * -0x27e9;
    lVar38 = lVar20 * 0x3f1a + lVar36 + lVar35 + lVar25;
    lVar36 = (lVar16 + lVar32) * -0x2b4e;
    lVar21 = lVar32 * -0x2406 + lVar21 + lVar18 + lVar36;
    lVar36 = lVar16 * 0x2218 + lVar22 + lVar23 + lVar36;
    lVar18 = (lVar16 - lVar32) * 0xd23;
    lVar20 = lVar16 * 0x6485 + lVar25 + lVar28 + lVar18;
    lVar18 = lVar32 * -0x1886 + lVar35 + lVar17 + lVar18;
    aiStack_238[lVar27] = (int)((ulong)(lVar30 + lVar11) >> 0xb);
    aiStack_238[lVar27 + 0x78] = (int)((ulong)(lVar11 - lVar30) >> 0xb);
    aiStack_238[lVar27 + 8] = (int)((ulong)(lVar13 + lVar15) >> 0xb);
    aiStack_238[lVar27 + 0x70] = (int)((ulong)(lVar15 - lVar13) >> 0xb);
    aiStack_238[lVar27 + 0x10] = (int)((ulong)(lVar21 + lVar7) >> 0xb);
    aiStack_238[lVar27 + 0x68] = (int)((ulong)(lVar7 - lVar21) >> 0xb);
    aiStack_238[lVar27 + 0x18] = (int)((ulong)(lVar36 + lVar12) >> 0xb);
    aiStack_238[lVar27 + 0x60] = (int)((ulong)(lVar12 - lVar36) >> 0xb);
    aiStack_238[lVar27 + 0x20] = (int)((ulong)(lVar20 + lVar39) >> 0xb);
    aiStack_238[lVar27 + 0x58] = (int)((ulong)(lVar39 - lVar20) >> 0xb);
    aiStack_238[lVar27 + 0x28] = (int)((ulong)(lVar18 + lVar37) >> 0xb);
    aiStack_238[lVar27 + 0x50] = (int)((ulong)(lVar37 - lVar18) >> 0xb);
    aiStack_238[lVar27 + 0x30] = (int)((ulong)(lVar38 + lVar34) >> 0xb);
    aiStack_238[lVar27 + 0x48] = (int)((ulong)(lVar34 - lVar38) >> 0xb);
    aiStack_238[lVar27 + 0x38] = (int)((ulong)(lVar40 + lVar31) >> 0xb);
    aiStack_238[lVar27 + 0x40] = (int)((ulong)(lVar31 - lVar40) >> 0xb);
    lVar27 = lVar27 + 1;
  } while ((int)lVar27 != 8);
  uVar8 = (ulong)param_5;
  lVar29 = 0;
  do {
    iVar6 = aiStack_238[lVar29 + 1];
    iVar9 = (aiStack_238[lVar29 + 6] + aiStack_238[lVar29 + 2]) * 0x1151;
    iVar4 = aiStack_238[lVar29 + 2] * 0x187e + iVar9;
    iVar9 = aiStack_238[lVar29 + 6] * -0x3b21 + iVar9;
    iVar26 = (aiStack_238[lVar29] + 0x4010 + aiStack_238[lVar29 + 4]) * 0x2000;
    iVar1 = iVar4 + iVar26;
    iVar24 = ((aiStack_238[lVar29] + 0x4010) - aiStack_238[lVar29 + 4]) * 0x2000;
    iVar26 = iVar26 - iVar4;
    iVar4 = iVar9 + iVar24;
    iVar33 = aiStack_238[lVar29 + 7];
    iVar2 = aiStack_238[lVar29 + 5];
    iVar24 = iVar24 - iVar9;
    iVar9 = aiStack_238[lVar29 + 3];
    iVar5 = (iVar6 + iVar33) * -0x1ccd;
    iVar14 = (iVar6 + iVar2 + iVar9 + iVar33) * 0x25a1;
    iVar19 = (iVar6 + iVar2) * -0xc7c + iVar14;
    iVar10 = iVar6 * 0x300b + iVar5 + iVar19;
    iVar14 = (iVar9 + iVar33) * -0x3ec5 + iVar14;
    iVar6 = (iVar2 + iVar9) * -0x5203;
    iVar19 = iVar2 * 0x41b3 + iVar6 + iVar19;
    iVar33 = iVar33 * 0x98e + iVar5 + iVar14;
    iVar14 = iVar9 * 0x6254 + iVar6 + iVar14;
    lVar27 = *(long *)(param_4 + lVar29);
    *(undefined1 *)(lVar27 + uVar8) =
         *(undefined1 *)(lVar3 + -0x180 + (ulong)((uint)(iVar10 + iVar1) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar27 + 7 + uVar8) =
         *(undefined1 *)(lVar3 + -0x180 + (ulong)((uint)(iVar1 - iVar10) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar27 + 1 + uVar8) =
         *(undefined1 *)(lVar3 + -0x180 + (ulong)((uint)(iVar4 + iVar14) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar27 + 6 + uVar8) =
         *(undefined1 *)(lVar3 + -0x180 + (ulong)((uint)(iVar4 - iVar14) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar27 + 2 + uVar8) =
         *(undefined1 *)(lVar3 + -0x180 + (ulong)((uint)(iVar19 + iVar24) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar27 + 5 + uVar8) =
         *(undefined1 *)(lVar3 + -0x180 + (ulong)((uint)(iVar24 - iVar19) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar27 + 3 + uVar8) =
         *(undefined1 *)(lVar3 + -0x180 + (ulong)((uint)(iVar33 + iVar26) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar27 + 4 + uVar8) =
         *(undefined1 *)(lVar3 + -0x180 + (ulong)((uint)(iVar26 - iVar33) >> 0x12 & 0x3ff));
    lVar29 = lVar29 + 8;
  } while (lVar29 != 0x80);
  return;
}


