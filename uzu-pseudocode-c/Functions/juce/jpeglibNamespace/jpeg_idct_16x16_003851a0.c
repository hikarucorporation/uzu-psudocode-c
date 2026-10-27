// Function : jpeg_idct_16x16
// Namespace: juce:jpeglibNamespace
// Entry    : 003851a0
// Prototype: undefined jpeg_idct_16x16(long param_1, long param_2, long param_3, long param_4, uint param_5)
// Body     : 003851a0 - 00385953


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::jpeg_idct_16x16(juce::jpeglibNamespace::jpeg_decompress_struct*,
   juce::jpeglibNamespace::jpeg_component_info*, short*, unsigned char**, unsigned int) */

void __cdecl
juce::jpeglibNamespace::jpeg_idct_16x16
          (long param_1,long param_2,long param_3,long param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  int iVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  int iVar23;
  int iVar24;
  long lVar25;
  long lVar26;
  int iVar27;
  long lVar28;
  int iVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  int iVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  long lVar44;
  long lVar45;
  int iVar46;
  long lVar47;
  int iVar48;
  long lVar49;
  long lVar50;
  long lVar51;
  long lVar52;
  long lVar53;
  int local_238 [130];
  
  lVar4 = *(long *)(param_1 + 0x198);
  lVar12 = *(long *)(param_2 + 0x58);
  lVar28 = 0;
  do {
    lVar15 = (long)*(int *)(lVar12 + lVar28 * 4) * (long)*(short *)(param_3 + lVar28 * 2) * 0x2000;
    lVar19 = (long)*(int *)(lVar12 + 0x80 + lVar28 * 4) *
             (long)*(short *)(param_3 + 0x40 + lVar28 * 2);
    lVar35 = lVar19 * 0x29cf + lVar15 + 0x400;
    lVar52 = lVar15 + 0x400 + lVar19 * -0x29cf;
    lVar44 = lVar19 * 0x1151 + lVar15 + 0x400;
    lVar51 = lVar15 + 0x400 + lVar19 * -0x1151;
    lVar15 = (long)*(int *)(lVar12 + 0x40 + lVar28 * 4) *
             (long)*(short *)(param_3 + 0x20 + lVar28 * 2);
    lVar19 = (long)*(int *)(lVar12 + 0xc0 + lVar28 * 4) *
             (long)*(short *)(param_3 + 0x60 + lVar28 * 2);
    lVar25 = (lVar15 - lVar19) * 0x8d4;
    lVar16 = (lVar15 - lVar19) * 0x2c63;
    lVar21 = lVar19 * 0x5203 + lVar16;
    lVar10 = lVar15 * 0x1ccd + lVar25;
    lVar16 = lVar15 * -0x133e + lVar16;
    lVar25 = lVar19 * -0x1050 + lVar25;
    lVar15 = lVar21 + lVar35;
    lVar35 = lVar35 - lVar21;
    lVar19 = lVar10 + lVar44;
    lVar44 = lVar44 - lVar10;
    lVar10 = lVar16 + lVar51;
    lVar51 = lVar51 - lVar16;
    lVar16 = lVar25 + lVar52;
    lVar52 = lVar52 - lVar25;
    lVar36 = (long)*(int *)(lVar12 + 0x20 + lVar28 * 4) *
             (long)*(short *)(param_3 + 0x10 + lVar28 * 2);
    lVar25 = (long)*(int *)(lVar12 + 0x60 + lVar28 * 4) *
             (long)*(short *)(param_3 + 0x30 + lVar28 * 2);
    lVar45 = (long)*(int *)(lVar12 + 0xa0 + lVar28 * 4) *
             (long)*(short *)(param_3 + 0x50 + lVar28 * 2);
    lVar20 = (long)*(int *)(lVar12 + 0xe0 + lVar28 * 4) *
             (long)*(short *)(param_3 + 0x70 + lVar28 * 2);
    lVar30 = (lVar25 + lVar36) * 0x2b4e;
    lVar22 = (lVar45 + lVar36) * 0x27e9;
    lVar26 = (lVar45 + lVar25) * 0x470;
    lVar21 = (lVar45 + lVar36) * 0x1555;
    lVar50 = (lVar36 - lVar25) * 0xd23;
    lVar49 = (lVar45 - lVar25) * 0x2d09;
    lVar31 = (lVar25 + lVar20) * -0x1555;
    lVar17 = lVar25 * 0x24d + lVar30 + lVar26 + lVar31;
    lVar32 = (lVar20 + lVar36) * 0x22fc;
    lVar47 = lVar36 * -0x492a + lVar30 + lVar22 + lVar32;
    lVar33 = (lVar36 - lVar20) * 0x1cb6;
    lVar53 = lVar36 * -0x3abe + lVar50 + lVar21 + lVar33;
    lVar37 = (lVar25 + lVar20) * -0x27e9;
    lVar30 = lVar25 * 0x3f1a + lVar50 + lVar49 + lVar37;
    lVar36 = (lVar20 + lVar45) * -0x2b4e;
    lVar26 = lVar45 * -0x2406 + lVar26 + lVar22 + lVar36;
    lVar36 = lVar20 * 0x2218 + lVar31 + lVar32 + lVar36;
    lVar22 = (lVar20 - lVar45) * 0xd23;
    lVar25 = lVar20 * 0x6485 + lVar37 + lVar33 + lVar22;
    lVar22 = lVar45 * -0x1886 + lVar49 + lVar21 + lVar22;
    local_238[lVar28] = (int)((ulong)(lVar47 + lVar15) >> 0xb);
    local_238[lVar28 + 0x78] = (int)((ulong)(lVar15 - lVar47) >> 0xb);
    local_238[lVar28 + 8] = (int)((ulong)(lVar17 + lVar19) >> 0xb);
    local_238[lVar28 + 0x70] = (int)((ulong)(lVar19 - lVar17) >> 0xb);
    local_238[lVar28 + 0x10] = (int)((ulong)(lVar26 + lVar10) >> 0xb);
    local_238[lVar28 + 0x68] = (int)((ulong)(lVar10 - lVar26) >> 0xb);
    local_238[lVar28 + 0x18] = (int)((ulong)(lVar36 + lVar16) >> 0xb);
    local_238[lVar28 + 0x60] = (int)((ulong)(lVar16 - lVar36) >> 0xb);
    local_238[lVar28 + 0x20] = (int)((ulong)(lVar25 + lVar52) >> 0xb);
    local_238[lVar28 + 0x58] = (int)((ulong)(lVar52 - lVar25) >> 0xb);
    local_238[lVar28 + 0x28] = (int)((ulong)(lVar22 + lVar51) >> 0xb);
    local_238[lVar28 + 0x50] = (int)((ulong)(lVar51 - lVar22) >> 0xb);
    local_238[lVar28 + 0x30] = (int)((ulong)(lVar44 + lVar30) >> 0xb);
    local_238[lVar28 + 0x48] = (int)((ulong)(lVar44 - lVar30) >> 0xb);
    local_238[lVar28 + 0x38] = (int)((ulong)(lVar53 + lVar35) >> 0xb);
    local_238[lVar28 + 0x40] = (int)((ulong)(lVar35 - lVar53) >> 0xb);
    lVar28 = lVar28 + 1;
  } while ((int)lVar28 != 8);
  uVar11 = (ulong)param_5;
  lVar12 = 0;
  do {
    iVar1 = local_238[lVar12 + 4];
    iVar29 = local_238[lVar12] * 0x2000 + 0x8020000;
    iVar38 = iVar29 + iVar1 * 0x29cf;
    iVar5 = iVar29 + iVar1 * -0x29cf;
    iVar48 = local_238[lVar12 + 1];
    iVar2 = local_238[lVar12 + 2];
    iVar3 = local_238[lVar12 + 6];
    iVar43 = iVar29 + iVar1 * 0x1151;
    iVar29 = iVar29 + iVar1 * -0x1151;
    iVar6 = (iVar2 - iVar3) * 0x8d4;
    iVar13 = (iVar2 - iVar3) * 0x2c63;
    iVar18 = iVar3 * 0x5203 + iVar13;
    iVar23 = iVar2 * 0x1ccd + iVar6;
    iVar13 = iVar2 * -0x133e + iVar13;
    iVar6 = iVar3 * -0x1050 + iVar6;
    iVar1 = iVar18 + iVar38;
    iVar38 = iVar38 - iVar18;
    iVar2 = iVar43 + iVar23;
    iVar43 = iVar43 - iVar23;
    iVar3 = iVar13 + iVar29;
    iVar29 = iVar29 - iVar13;
    iVar18 = local_238[lVar12 + 3];
    iVar13 = iVar6 + iVar5;
    iVar23 = local_238[lVar12 + 5];
    iVar5 = iVar5 - iVar6;
    iVar7 = (iVar48 + iVar18) * 0x2b4e;
    iVar14 = (iVar23 + iVar48) * 0x27e9;
    iVar8 = (iVar23 + iVar18) * 0x470;
    iVar6 = local_238[lVar12 + 7];
    iVar39 = (iVar23 + iVar48) * 0x1555;
    iVar9 = (iVar48 - iVar18) * 0xd23;
    iVar46 = (iVar23 - iVar18) * 0x2d09;
    iVar40 = (iVar6 + iVar18) * -0x1555;
    iVar27 = iVar18 * 0x24d + iVar7 + iVar8 + iVar40;
    iVar41 = (iVar6 + iVar48) * 0x22fc;
    iVar24 = iVar48 * -0x492a + iVar7 + iVar14 + iVar41;
    iVar34 = (iVar48 - iVar6) * 0x1cb6;
    iVar7 = iVar48 * -0x3abe + iVar9 + iVar39 + iVar34;
    iVar48 = (iVar6 + iVar18) * -0x27e9;
    iVar42 = iVar18 * 0x3f1a + iVar9 + iVar46 + iVar48;
    iVar9 = (iVar6 + iVar23) * -0x2b4e;
    iVar8 = iVar23 * -0x2406 + iVar8 + iVar14 + iVar9;
    iVar9 = iVar6 * 0x2218 + iVar40 + iVar41 + iVar9;
    iVar18 = (iVar6 - iVar23) * 0xd23;
    iVar48 = iVar6 * 0x6485 + iVar48 + iVar34 + iVar18;
    iVar18 = iVar23 * -0x1886 + iVar46 + iVar39 + iVar18;
    lVar28 = *(long *)(param_4 + lVar12);
    *(undefined1 *)(lVar28 + uVar11) =
         *(undefined1 *)(lVar4 + -0x180 + (ulong)((uint)(iVar1 + iVar24) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar28 + 0xf + uVar11) =
         *(undefined1 *)(lVar4 + -0x180 + (ulong)((uint)(iVar1 - iVar24) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar28 + 1 + uVar11) =
         *(undefined1 *)(lVar4 + -0x180 + (ulong)((uint)(iVar27 + iVar2) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar28 + 0xe + uVar11) =
         *(undefined1 *)(lVar4 + -0x180 + (ulong)((uint)(iVar2 - iVar27) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar28 + 2 + uVar11) =
         *(undefined1 *)(lVar4 + -0x180 + (ulong)((uint)(iVar8 + iVar3) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar28 + 0xd + uVar11) =
         *(undefined1 *)(lVar4 + -0x180 + (ulong)((uint)(iVar3 - iVar8) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar28 + 3 + uVar11) =
         *(undefined1 *)(lVar4 + -0x180 + (ulong)((uint)(iVar9 + iVar13) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar28 + 0xc + uVar11) =
         *(undefined1 *)(lVar4 + -0x180 + (ulong)((uint)(iVar13 - iVar9) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar28 + 4 + uVar11) =
         *(undefined1 *)(lVar4 + -0x180 + (ulong)((uint)(iVar48 + iVar5) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar28 + 0xb + uVar11) =
         *(undefined1 *)(lVar4 + -0x180 + (ulong)((uint)(iVar5 - iVar48) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar28 + 5 + uVar11) =
         *(undefined1 *)(lVar4 + -0x180 + (ulong)((uint)(iVar18 + iVar29) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar28 + 10 + uVar11) =
         *(undefined1 *)(lVar4 + -0x180 + (ulong)((uint)(iVar29 - iVar18) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar28 + 6 + uVar11) =
         *(undefined1 *)(lVar4 + -0x180 + (ulong)((uint)(iVar42 + iVar43) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar28 + 9 + uVar11) =
         *(undefined1 *)(lVar4 + -0x180 + (ulong)((uint)(iVar43 - iVar42) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar28 + 7 + uVar11) =
         *(undefined1 *)(lVar4 + -0x180 + (ulong)((uint)(iVar7 + iVar38) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar28 + 8 + uVar11) =
         *(undefined1 *)(lVar4 + -0x180 + (ulong)((uint)(iVar38 - iVar7) >> 0x12 & 0x3ff));
    lVar12 = lVar12 + 8;
  } while (lVar12 != 0x80);
  return;
}


