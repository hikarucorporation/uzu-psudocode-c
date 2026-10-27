// Function : jpeg_idct_16x8
// Namespace: juce:jpeglibNamespace
// Entry    : 00384ae0
// Prototype: undefined jpeg_idct_16x8(long param_1, long param_2, long param_3, long param_4, uint param_5)
// Body     : 00384ae0 - 00385198


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::jpeg_idct_16x8(juce::jpeglibNamespace::jpeg_decompress_struct*,
   juce::jpeglibNamespace::jpeg_component_info*, short*, unsigned char**, unsigned int) */

void __cdecl
juce::jpeglibNamespace::jpeg_idct_16x8
          (long param_1,long param_2,long param_3,long param_4,uint param_5)

{
  short sVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
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
  ulong uVar21;
  long lVar22;
  uint uVar23;
  int iVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  int iVar28;
  long lVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  short sVar36;
  int iVar37;
  long lVar38;
  int iVar39;
  long lVar40;
  long lVar41;
  int iVar42;
  int iVar43;
  long lVar44;
  int aiStack_138 [66];
  
  lVar4 = *(long *)(param_1 + 0x198);
  lVar12 = *(long *)(param_2 + 0x58);
  uVar23 = 9;
  lVar29 = 0;
  do {
    sVar1 = *(short *)(param_3 + 0x10 + lVar29);
    sVar5 = *(short *)(param_3 + 0x20 + lVar29);
    sVar36 = *(short *)(param_3 + 0x30 + lVar29);
    if (sVar1 == 0 && sVar5 == 0) {
      if (sVar36 != 0) {
LAB_00384b6a:
        sVar5 = 0;
        goto LAB_00384b6c;
      }
      if ((((*(short *)(param_3 + 0x40 + lVar29) != 0) || (*(short *)(param_3 + 0x50 + lVar29) != 0)
           ) || (*(short *)(param_3 + 0x60 + lVar29) != 0)) ||
         (*(short *)(param_3 + 0x70 + lVar29) != 0)) {
        sVar36 = 0;
        goto LAB_00384b6a;
      }
      iVar43 = (int)*(short *)(param_3 + lVar29) * *(int *)(lVar12 + lVar29 * 2) * 4;
      *(int *)((long)aiStack_138 + lVar29 * 2) = iVar43;
      *(int *)((long)aiStack_138 + lVar29 * 2 + 0x20) = iVar43;
      *(int *)((long)aiStack_138 + lVar29 * 2 + 0x40) = iVar43;
      *(int *)((long)aiStack_138 + lVar29 * 2 + 0x60) = iVar43;
      *(int *)((long)aiStack_138 + lVar29 * 2 + 0x80) = iVar43;
      *(int *)((long)aiStack_138 + lVar29 * 2 + 0xa0) = iVar43;
      *(int *)((long)aiStack_138 + lVar29 * 2 + 0xc0) = iVar43;
      lVar25 = 0x38;
    }
    else {
LAB_00384b6c:
      lVar25 = (long)*(int *)(lVar12 + 0x80 + lVar29 * 2) *
               (long)*(short *)(param_3 + 0x40 + lVar29);
      uVar21 = (long)*(int *)(lVar12 + lVar29 * 2) * (long)*(short *)(param_3 + lVar29) * 0x2000;
      lVar44 = lVar25 * 0x2000 + uVar21 + 0x400;
      lVar22 = (uVar21 | 0x400) + lVar25 * -0x2000;
      lVar25 = (long)sVar5 * (long)*(int *)(lVar12 + 0x40 + lVar29 * 2);
      lVar26 = (long)*(int *)(lVar12 + 0xc0 + lVar29 * 2) *
               (long)*(short *)(param_3 + 0x60 + lVar29);
      lVar15 = (lVar26 + lVar25) * 0x1151;
      lVar11 = lVar25 * 0x187e + lVar15;
      lVar15 = lVar26 * -0x3b21 + lVar15;
      lVar25 = lVar11 + lVar44;
      lVar44 = lVar44 - lVar11;
      lVar11 = lVar15 + lVar22;
      lVar22 = lVar22 - lVar15;
      lVar15 = (long)*(int *)(lVar12 + 0xe0 + lVar29 * 2) *
               (long)*(short *)(param_3 + 0x70 + lVar29);
      lVar18 = (long)*(int *)(lVar12 + 0xa0 + lVar29 * 2) *
               (long)*(short *)(param_3 + 0x50 + lVar29);
      lVar38 = (long)sVar36 * (long)*(int *)(lVar12 + 0x60 + lVar29 * 2);
      lVar16 = (long)*(int *)(lVar12 + 0x20 + lVar29 * 2) * (long)sVar1;
      lVar40 = (lVar38 + lVar15 + lVar16 + lVar18) * 0x25a1;
      lVar26 = (lVar38 + lVar15) * -0x3ec5 + lVar40;
      lVar40 = (lVar16 + lVar18) * -0xc7c + lVar40;
      lVar27 = (lVar16 + lVar15) * -0x1ccd;
      lVar41 = lVar15 * 0x98e + lVar27 + lVar26;
      lVar15 = lVar16 * 0x300b + lVar27 + lVar40;
      lVar16 = (lVar38 + lVar18) * -0x5203;
      lVar40 = lVar18 * 0x41b3 + lVar16 + lVar40;
      lVar26 = lVar38 * 0x6254 + lVar16 + lVar26;
      *(int *)((long)aiStack_138 + lVar29 * 2) = (int)((ulong)(lVar15 + lVar25) >> 0xb);
      *(int *)((long)aiStack_138 + lVar29 * 2 + 0xe0) = (int)((ulong)(lVar25 - lVar15) >> 0xb);
      *(int *)((long)aiStack_138 + lVar29 * 2 + 0x20) = (int)((ulong)(lVar26 + lVar11) >> 0xb);
      *(int *)((long)aiStack_138 + lVar29 * 2 + 0xc0) = (int)((ulong)(lVar11 - lVar26) >> 0xb);
      *(int *)((long)aiStack_138 + lVar29 * 2 + 0x40) = (int)((ulong)(lVar40 + lVar22) >> 0xb);
      *(int *)((long)aiStack_138 + lVar29 * 2 + 0xa0) = (int)((ulong)(lVar22 - lVar40) >> 0xb);
      *(int *)((long)aiStack_138 + lVar29 * 2 + 0x60) = (int)((ulong)(lVar41 + lVar44) >> 0xb);
      iVar43 = (int)((ulong)(lVar44 - lVar41) >> 0xb);
      lVar25 = 0x20;
    }
    *(int *)((long)aiStack_138 + lVar29 * 2 + lVar25 * 4) = iVar43;
    uVar23 = uVar23 - 1;
    lVar29 = lVar29 + 2;
    if (uVar23 < 2) {
      uVar21 = (ulong)param_5;
      lVar12 = 0;
      do {
        iVar43 = aiStack_138[lVar12 + 4];
        iVar28 = aiStack_138[lVar12] * 0x2000 + 0x8020000;
        iVar31 = iVar28 + iVar43 * 0x29cf;
        iVar6 = iVar28 + iVar43 * -0x29cf;
        iVar42 = aiStack_138[lVar12 + 1];
        iVar2 = aiStack_138[lVar12 + 2];
        iVar3 = aiStack_138[lVar12 + 6];
        iVar37 = iVar28 + iVar43 * 0x1151;
        iVar28 = iVar28 + iVar43 * -0x1151;
        iVar7 = (iVar2 - iVar3) * 0x8d4;
        iVar13 = (iVar2 - iVar3) * 0x2c63;
        iVar17 = iVar3 * 0x5203 + iVar13;
        iVar19 = iVar2 * 0x1ccd + iVar7;
        iVar13 = iVar2 * -0x133e + iVar13;
        iVar7 = iVar3 * -0x1050 + iVar7;
        iVar43 = iVar17 + iVar31;
        iVar31 = iVar31 - iVar17;
        iVar2 = iVar37 + iVar19;
        iVar37 = iVar37 - iVar19;
        iVar3 = iVar13 + iVar28;
        iVar28 = iVar28 - iVar13;
        iVar17 = aiStack_138[lVar12 + 3];
        iVar13 = iVar7 + iVar6;
        iVar19 = aiStack_138[lVar12 + 5];
        iVar6 = iVar6 - iVar7;
        iVar8 = (iVar42 + iVar17) * 0x2b4e;
        iVar14 = (iVar19 + iVar42) * 0x27e9;
        iVar9 = (iVar19 + iVar17) * 0x470;
        iVar7 = aiStack_138[lVar12 + 7];
        iVar32 = (iVar19 + iVar42) * 0x1555;
        iVar10 = (iVar42 - iVar17) * 0xd23;
        iVar39 = (iVar19 - iVar17) * 0x2d09;
        iVar33 = (iVar7 + iVar17) * -0x1555;
        iVar24 = iVar17 * 0x24d + iVar8 + iVar9 + iVar33;
        iVar34 = (iVar7 + iVar42) * 0x22fc;
        iVar20 = iVar42 * -0x492a + iVar8 + iVar14 + iVar34;
        iVar30 = (iVar42 - iVar7) * 0x1cb6;
        iVar8 = iVar42 * -0x3abe + iVar10 + iVar32 + iVar30;
        iVar42 = (iVar7 + iVar17) * -0x27e9;
        iVar35 = iVar17 * 0x3f1a + iVar10 + iVar39 + iVar42;
        iVar10 = (iVar7 + iVar19) * -0x2b4e;
        iVar9 = iVar19 * -0x2406 + iVar9 + iVar14 + iVar10;
        iVar10 = iVar7 * 0x2218 + iVar33 + iVar34 + iVar10;
        iVar17 = (iVar7 - iVar19) * 0xd23;
        iVar42 = iVar7 * 0x6485 + iVar42 + iVar30 + iVar17;
        iVar17 = iVar19 * -0x1886 + iVar39 + iVar32 + iVar17;
        lVar29 = *(long *)(param_4 + lVar12);
        *(undefined1 *)(lVar29 + uVar21) =
             *(undefined1 *)(lVar4 + -0x180 + (ulong)((uint)(iVar43 + iVar20) >> 0x12 & 0x3ff));
        *(undefined1 *)(lVar29 + 0xf + uVar21) =
             *(undefined1 *)(lVar4 + -0x180 + (ulong)((uint)(iVar43 - iVar20) >> 0x12 & 0x3ff));
        *(undefined1 *)(lVar29 + 1 + uVar21) =
             *(undefined1 *)(lVar4 + -0x180 + (ulong)((uint)(iVar24 + iVar2) >> 0x12 & 0x3ff));
        *(undefined1 *)(lVar29 + 0xe + uVar21) =
             *(undefined1 *)(lVar4 + -0x180 + (ulong)((uint)(iVar2 - iVar24) >> 0x12 & 0x3ff));
        *(undefined1 *)(lVar29 + 2 + uVar21) =
             *(undefined1 *)(lVar4 + -0x180 + (ulong)((uint)(iVar9 + iVar3) >> 0x12 & 0x3ff));
        *(undefined1 *)(lVar29 + 0xd + uVar21) =
             *(undefined1 *)(lVar4 + -0x180 + (ulong)((uint)(iVar3 - iVar9) >> 0x12 & 0x3ff));
        *(undefined1 *)(lVar29 + 3 + uVar21) =
             *(undefined1 *)(lVar4 + -0x180 + (ulong)((uint)(iVar10 + iVar13) >> 0x12 & 0x3ff));
        *(undefined1 *)(lVar29 + 0xc + uVar21) =
             *(undefined1 *)(lVar4 + -0x180 + (ulong)((uint)(iVar13 - iVar10) >> 0x12 & 0x3ff));
        *(undefined1 *)(lVar29 + 4 + uVar21) =
             *(undefined1 *)(lVar4 + -0x180 + (ulong)((uint)(iVar42 + iVar6) >> 0x12 & 0x3ff));
        *(undefined1 *)(lVar29 + 0xb + uVar21) =
             *(undefined1 *)(lVar4 + -0x180 + (ulong)((uint)(iVar6 - iVar42) >> 0x12 & 0x3ff));
        *(undefined1 *)(lVar29 + 5 + uVar21) =
             *(undefined1 *)(lVar4 + -0x180 + (ulong)((uint)(iVar17 + iVar28) >> 0x12 & 0x3ff));
        *(undefined1 *)(lVar29 + 10 + uVar21) =
             *(undefined1 *)(lVar4 + -0x180 + (ulong)((uint)(iVar28 - iVar17) >> 0x12 & 0x3ff));
        *(undefined1 *)(lVar29 + 6 + uVar21) =
             *(undefined1 *)(lVar4 + -0x180 + (ulong)((uint)(iVar35 + iVar37) >> 0x12 & 0x3ff));
        *(undefined1 *)(lVar29 + 9 + uVar21) =
             *(undefined1 *)(lVar4 + -0x180 + (ulong)((uint)(iVar37 - iVar35) >> 0x12 & 0x3ff));
        *(undefined1 *)(lVar29 + 7 + uVar21) =
             *(undefined1 *)(lVar4 + -0x180 + (ulong)((uint)(iVar8 + iVar31) >> 0x12 & 0x3ff));
        *(undefined1 *)(lVar29 + 8 + uVar21) =
             *(undefined1 *)(lVar4 + -0x180 + (ulong)((uint)(iVar31 - iVar8) >> 0x12 & 0x3ff));
        lVar12 = lVar12 + 8;
      } while (lVar12 != 0x40);
      return;
    }
  } while( true );
}


