// Function : jpeg_fdct_16x16
// Namespace: juce:jpeglibNamespace
// Entry    : 0036ac40
// Prototype: undefined jpeg_fdct_16x16(int * param_1, long param_2, ulong param_3)
// Body     : 0036ac40 - 0036b36f


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::jpeg_fdct_16x16(int*, unsigned char**, unsigned int) */

void __cdecl juce::jpeglibNamespace::jpeg_fdct_16x16(int *param_1,long param_2,ulong param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  int *piVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  ulong uVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  ulong uVar32;
  long lVar33;
  long lVar34;
  ulong uVar35;
  long lVar36;
  ulong uVar37;
  long lVar38;
  long lVar39;
  ulong uVar40;
  ulong uVar41;
  ulong uVar42;
  long lVar43;
  int *local_168;
  int local_138 [8];
  int aiStack_118 [8];
  int aiStack_f8 [8];
  int aiStack_d8 [8];
  int aiStack_b8 [8];
  int aiStack_98 [8];
  int aiStack_78 [8];
  int aiStack_58 [10];
  
  uVar10 = param_3 & 0xffffffff;
  lVar17 = 0;
  local_168 = param_1;
  do {
    lVar16 = *(long *)(param_2 + lVar17 * 8);
    uVar18 = (ulong)*(byte *)(lVar16 + 0xf + uVar10);
    lVar28 = uVar18 + *(byte *)(lVar16 + uVar10);
    uVar12 = (ulong)*(byte *)(lVar16 + 1 + uVar10);
    uVar19 = (ulong)*(byte *)(lVar16 + 0xe + uVar10);
    lVar34 = uVar19 + uVar12;
    uVar20 = (ulong)*(byte *)(lVar16 + 2 + uVar10);
    uVar25 = (ulong)*(byte *)(lVar16 + 6 + uVar10);
    uVar13 = (ulong)*(byte *)(lVar16 + 9 + uVar10);
    lVar29 = uVar13 + uVar25;
    uVar42 = (ulong)*(byte *)(lVar16 + 7 + uVar10);
    uVar14 = (ulong)*(byte *)(lVar16 + 8 + uVar10);
    lVar31 = uVar14 + uVar42;
    lVar38 = lVar31 + lVar28;
    lVar28 = lVar28 - lVar31;
    lVar31 = lVar29 + lVar34;
    lVar34 = lVar34 - lVar29;
    uVar35 = (ulong)*(byte *)(lVar16 + 0xd + uVar10);
    lVar29 = uVar35 + uVar20;
    uVar26 = (ulong)*(byte *)(lVar16 + 5 + uVar10);
    uVar37 = (ulong)*(byte *)(lVar16 + 10 + uVar10);
    lVar30 = uVar37 + uVar26;
    lVar22 = lVar30 + lVar29;
    lVar29 = lVar29 - lVar30;
    uVar32 = (ulong)*(byte *)(lVar16 + 3 + uVar10);
    uVar41 = (ulong)*(byte *)(lVar16 + 0xc + uVar10);
    uVar15 = (ulong)*(byte *)(lVar16 + 4 + uVar10);
    uVar40 = (ulong)*(byte *)(lVar16 + 0xb + uVar10);
    lVar30 = uVar41 + uVar32;
    lVar23 = uVar15 + uVar40;
    lVar24 = lVar23 + lVar30;
    lVar30 = lVar30 - lVar23;
    lVar23 = *(byte *)(lVar16 + uVar10) - uVar18;
    lVar39 = uVar12 - uVar19;
    lVar21 = uVar20 - uVar35;
    lVar33 = uVar32 - uVar41;
    lVar16 = uVar15 - uVar40;
    lVar27 = uVar26 - uVar37;
    lVar36 = uVar25 - uVar13;
    lVar43 = uVar42 - uVar14;
    *local_168 = ((int)lVar22 + (int)lVar24 + (int)lVar31 + (int)lVar38) * 4 + -0x2000;
    local_168[4] = (int)((ulong)((lVar31 - lVar22) * 0x1151 + (lVar38 - lVar24) * 0x29cf) >> 0xb);
    lVar31 = (lVar28 - lVar29) * 0x2c63 + (lVar30 - lVar34) * 0x8d4;
    local_168[2] = (int)((ulong)(lVar29 * 0x4587 + lVar34 * 0x2e75 + lVar31) >> 0xb);
    local_168[6] = (int)((ulong)(lVar30 * -0x21f9 + lVar28 * -0x6c2 + lVar31) >> 0xb);
    lVar29 = (lVar36 - lVar43) * 0xd23 + (lVar39 + lVar23) * 0x2b4e;
    lVar30 = (lVar43 + lVar27) * 0x1555 + (lVar21 + lVar23) * 0x27e9;
    lVar38 = (lVar16 - lVar43) * 0x1cb6 + (lVar33 + lVar23) * 0x22fc;
    lVar34 = (lVar36 - lVar27) * 0x2d09 + (lVar21 + lVar39) * 0x470;
    lVar28 = (lVar36 + lVar16) * -0x27e9 + (lVar33 + lVar39) * -0x1555;
    lVar31 = (lVar27 - lVar16) * 0xd23 + (lVar21 + lVar33) * -0x2b4e;
    local_168[1] = (int)((ulong)(lVar43 * 0x18f3 + lVar23 * -0x492a + lVar30 + lVar29 + lVar38) >>
                        0xb);
    local_168[3] = (int)((ulong)(lVar36 * -0x353f + lVar39 * 0x24d + lVar28 + lVar34 + lVar29) >>
                        0xb);
    local_168[5] = (int)((ulong)(lVar27 * 0x2747 + lVar21 * -0x2406 + lVar31 + lVar34 + lVar30) >>
                        0xb);
    local_168[7] = (int)((ulong)(lVar16 * 0x4560 + lVar33 * 0x2218 + lVar31 + lVar28 + lVar38) >>
                        0xb);
    piVar11 = local_138;
    if ((int)lVar17 != 7) {
      if ((int)lVar17 == 0xf) {
        lVar17 = 0;
        do {
          iVar1 = aiStack_58[lVar17];
          iVar2 = param_1[lVar17];
          lVar36 = (long)(iVar1 + iVar2);
          iVar3 = aiStack_78[lVar17];
          lVar33 = (long)(iVar3 + param_1[lVar17 + 8]);
          iVar4 = aiStack_98[lVar17];
          iVar5 = local_138[lVar17];
          iVar6 = aiStack_118[lVar17];
          lVar29 = (long)(iVar6 + param_1[lVar17 + 0x30]);
          lVar34 = (long)(iVar5 + param_1[lVar17 + 0x38]);
          lVar28 = lVar34 + lVar36;
          lVar36 = lVar36 - lVar34;
          lVar34 = lVar29 + lVar33;
          lVar33 = lVar33 - lVar29;
          lVar38 = (long)(iVar4 + param_1[lVar17 + 0x10]);
          iVar7 = aiStack_f8[lVar17];
          lVar31 = (long)(iVar7 + param_1[lVar17 + 0x28]);
          lVar29 = lVar31 + lVar38;
          lVar38 = lVar38 - lVar31;
          iVar8 = aiStack_b8[lVar17];
          lVar27 = (long)(iVar8 + param_1[lVar17 + 0x18]);
          iVar9 = aiStack_d8[lVar17];
          lVar30 = (long)(iVar9 + param_1[lVar17 + 0x20]);
          lVar31 = lVar30 + lVar27;
          lVar27 = lVar27 - lVar30;
          param_1[lVar17] = (int)((ulong)(lVar29 + lVar31 + lVar34 + lVar28) >> 4);
          lVar22 = (long)(iVar2 - iVar1);
          lVar39 = (long)(param_1[lVar17 + 8] - iVar3);
          lVar23 = (long)(param_1[lVar17 + 0x10] - iVar4);
          lVar24 = (long)(param_1[lVar17 + 0x18] - iVar8);
          lVar16 = (long)(param_1[lVar17 + 0x20] - iVar9);
          lVar21 = (long)(param_1[lVar17 + 0x28] - iVar7);
          lVar43 = (long)(param_1[lVar17 + 0x30] - iVar6);
          lVar30 = (long)(param_1[lVar17 + 0x38] - iVar5);
          param_1[lVar17 + 0x20] =
               (int)((ulong)((lVar34 - lVar29) * 0x1151 + (lVar28 - lVar31) * 0x29cf) >> 0x11);
          lVar28 = (lVar36 - lVar38) * 0x2c63 + (lVar27 - lVar33) * 0x8d4;
          param_1[lVar17 + 0x10] =
               (int)((ulong)(lVar38 * 0x4587 + lVar33 * 0x2e75 + lVar28) >> 0x11);
          param_1[lVar17 + 0x30] =
               (int)((ulong)(lVar27 * -0x21f9 + lVar36 * -0x6c2 + lVar28) >> 0x11);
          lVar34 = (lVar43 - lVar30) * 0xd23 + (lVar39 + lVar22) * 0x2b4e;
          lVar27 = (lVar30 + lVar21) * 0x1555 + (lVar23 + lVar22) * 0x27e9;
          lVar38 = (lVar16 - lVar30) * 0x1cb6 + (lVar24 + lVar22) * 0x22fc;
          lVar28 = (lVar43 - lVar21) * 0x2d09 + (lVar23 + lVar39) * 0x470;
          lVar31 = (lVar43 + lVar16) * -0x27e9 + (lVar24 + lVar39) * -0x1555;
          lVar29 = (lVar21 - lVar16) * 0xd23 + (lVar24 + lVar23) * -0x2b4e;
          param_1[lVar17 + 8] =
               (int)((ulong)(lVar30 * 0x18f3 + lVar22 * -0x492a + lVar27 + lVar34 + lVar38) >> 0x11)
          ;
          param_1[lVar17 + 0x18] =
               (int)((ulong)(lVar43 * -0x353f + lVar39 * 0x24d + lVar31 + lVar28 + lVar34) >> 0x11);
          param_1[lVar17 + 0x28] =
               (int)((ulong)(lVar21 * 0x2747 + lVar23 * -0x2406 + lVar29 + lVar28 + lVar27) >> 0x11)
          ;
          param_1[lVar17 + 0x38] =
               (int)((ulong)(lVar16 * 0x4560 + lVar24 * 0x2218 + lVar29 + lVar31 + lVar38) >> 0x11);
          lVar17 = lVar17 + 1;
        } while ((int)lVar17 != 8);
        return;
      }
      piVar11 = local_168 + 8;
    }
    lVar17 = lVar17 + 1;
    local_168 = piVar11;
  } while( true );
}


