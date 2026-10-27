// Function : jpeg_fdct_8x16
// Namespace: juce:jpeglibNamespace
// Entry    : 0036f610
// Prototype: undefined jpeg_fdct_8x16(int * param_1, long param_2, ulong param_3)
// Body     : 0036f610 - 0036fb69


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::jpeg_fdct_8x16(int*, unsigned char**, unsigned int) */

void __cdecl juce::jpeglibNamespace::jpeg_fdct_8x16(int *param_1,long param_2,ulong param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  int iVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  int iVar23;
  ulong uVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  int *piVar28;
  ulong uVar29;
  long lVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  long lVar34;
  ulong uVar35;
  long lVar36;
  int local_138 [8];
  int aiStack_118 [8];
  int aiStack_f8 [8];
  int aiStack_d8 [8];
  int aiStack_b8 [8];
  int aiStack_98 [8];
  int aiStack_78 [8];
  int aiStack_58 [10];
  
  uVar8 = param_3 & 0xffffffff;
  lVar11 = 0;
  piVar28 = param_1;
  do {
    lVar17 = *(long *)(param_2 + lVar11 * 8);
    uVar35 = (ulong)*(byte *)(lVar17 + 7 + uVar8);
    lVar19 = uVar35 + *(byte *)(lVar17 + uVar8);
    uVar33 = (ulong)*(byte *)(lVar17 + 1 + uVar8);
    uVar31 = (ulong)*(byte *)(lVar17 + 6 + uVar8);
    lVar20 = uVar31 + uVar33;
    uVar29 = (ulong)*(byte *)(lVar17 + 2 + uVar8);
    uVar32 = (ulong)*(byte *)(lVar17 + 5 + uVar8);
    lVar13 = uVar32 + uVar29;
    uVar12 = (ulong)*(byte *)(lVar17 + 3 + uVar8);
    uVar24 = (ulong)*(byte *)(lVar17 + 4 + uVar8);
    lVar10 = uVar24 + uVar12;
    iVar23 = (int)lVar10 + (int)lVar19;
    lVar19 = lVar19 - lVar10;
    iVar16 = (int)lVar13 + (int)lVar20;
    lVar20 = lVar20 - lVar13;
    lVar10 = *(byte *)(lVar17 + uVar8) - uVar35;
    lVar34 = uVar33 - uVar31;
    lVar30 = uVar29 - uVar32;
    lVar13 = uVar12 - uVar24;
    *piVar28 = (iVar23 + iVar16) * 4 + -0x1000;
    piVar28[4] = (iVar23 - iVar16) * 4;
    lVar17 = (lVar19 + lVar20) * 0x1151;
    piVar28[2] = (int)((ulong)(lVar19 * 0x187e + lVar17) >> 0xb);
    piVar28[6] = (int)((ulong)(lVar20 * -0x3b21 + lVar17) >> 0xb);
    lVar17 = (lVar13 + lVar34 + lVar30 + lVar10) * 0x25a1;
    lVar20 = (lVar30 + lVar10) * -0xc7c + lVar17;
    lVar17 = (lVar13 + lVar34) * -0x3ec5 + lVar17;
    lVar25 = (lVar13 + lVar10) * -0x1ccd;
    lVar19 = (lVar30 + lVar34) * -0x5203;
    piVar28[1] = (int)((ulong)(lVar10 * 0x300b + lVar25 + lVar20) >> 0xb);
    piVar28[3] = (int)((ulong)(lVar34 * 0x6254 + lVar19 + lVar17) >> 0xb);
    piVar28[5] = (int)((ulong)(lVar30 * 0x41b3 + lVar19 + lVar20) >> 0xb);
    piVar28[7] = (int)((ulong)(lVar13 * 0x98e + lVar25 + lVar17) >> 0xb);
    piVar9 = local_138;
    if ((int)lVar11 != 7) {
      if ((int)lVar11 == 0xf) {
        lVar11 = 0;
        do {
          iVar16 = aiStack_58[lVar11];
          iVar23 = param_1[lVar11];
          lVar26 = (long)(iVar16 + iVar23);
          iVar1 = aiStack_78[lVar11];
          lVar21 = (long)(iVar1 + param_1[lVar11 + 8]);
          iVar2 = aiStack_98[lVar11];
          iVar3 = local_138[lVar11];
          iVar4 = aiStack_118[lVar11];
          lVar10 = (long)(param_1[lVar11 + 0x30] + iVar4);
          lVar20 = (long)(iVar3 + param_1[lVar11 + 0x38]);
          lVar19 = lVar20 + lVar26;
          lVar26 = lVar26 - lVar20;
          lVar20 = lVar10 + lVar21;
          lVar21 = lVar21 - lVar10;
          lVar17 = (long)(iVar2 + param_1[lVar11 + 0x10]);
          iVar5 = aiStack_f8[lVar11];
          lVar13 = (long)(iVar5 + param_1[lVar11 + 0x28]);
          lVar10 = lVar13 + lVar17;
          lVar17 = lVar17 - lVar13;
          iVar6 = aiStack_b8[lVar11];
          lVar18 = (long)(iVar6 + param_1[lVar11 + 0x18]);
          iVar7 = aiStack_d8[lVar11];
          lVar25 = (long)(iVar7 + param_1[lVar11 + 0x20]);
          lVar13 = lVar25 + lVar18;
          lVar18 = lVar18 - lVar25;
          param_1[lVar11] = (int)((ulong)(lVar10 + lVar13 + lVar20 + lVar19) >> 3);
          lVar25 = (long)(iVar23 - iVar16);
          lVar22 = (long)(param_1[lVar11 + 8] - iVar1);
          lVar30 = (long)(param_1[lVar11 + 0x10] - iVar2);
          lVar34 = (long)(param_1[lVar11 + 0x18] - iVar6);
          lVar14 = (long)(param_1[lVar11 + 0x20] - iVar7);
          lVar15 = (long)(param_1[lVar11 + 0x28] - iVar5);
          lVar27 = (long)(param_1[lVar11 + 0x30] - iVar4);
          lVar36 = (long)(param_1[lVar11 + 0x38] - iVar3);
          param_1[lVar11 + 0x20] =
               (int)((ulong)((lVar20 - lVar10) * 0x1151 + (lVar19 - lVar13) * 0x29cf) >> 0x10);
          lVar19 = (lVar26 - lVar17) * 0x2c63 + (lVar18 - lVar21) * 0x8d4;
          param_1[lVar11 + 0x10] =
               (int)((ulong)(lVar17 * 0x4587 + lVar21 * 0x2e75 + lVar19) >> 0x10);
          param_1[lVar11 + 0x30] =
               (int)((ulong)(lVar18 * -0x21f9 + lVar26 * -0x6c2 + lVar19) >> 0x10);
          lVar18 = (lVar27 - lVar36) * 0xd23 + (lVar25 + lVar22) * 0x2b4e;
          lVar17 = (lVar36 + lVar15) * 0x1555 + (lVar30 + lVar25) * 0x27e9;
          lVar13 = (lVar14 - lVar36) * 0x1cb6 + (lVar34 + lVar25) * 0x22fc;
          lVar19 = (lVar27 - lVar15) * 0x2d09 + (lVar30 + lVar22) * 0x470;
          lVar10 = (lVar27 + lVar14) * -0x27e9 + (lVar34 + lVar22) * -0x1555;
          lVar20 = (lVar15 - lVar14) * 0xd23 + (lVar34 + lVar30) * -0x2b4e;
          param_1[lVar11 + 8] =
               (int)((ulong)(lVar36 * 0x18f3 + lVar25 * -0x492a + lVar17 + lVar18 + lVar13) >> 0x10)
          ;
          param_1[lVar11 + 0x18] =
               (int)((ulong)(lVar27 * -0x353f + lVar22 * 0x24d + lVar10 + lVar19 + lVar18) >> 0x10);
          param_1[lVar11 + 0x28] =
               (int)((ulong)(lVar15 * 0x2747 + lVar30 * -0x2406 + lVar20 + lVar19 + lVar17) >> 0x10)
          ;
          param_1[lVar11 + 0x38] =
               (int)((ulong)(lVar14 * 0x4560 + lVar34 * 0x2218 + lVar20 + lVar10 + lVar13) >> 0x10);
          lVar11 = lVar11 + 1;
        } while ((int)lVar11 != 8);
        return;
      }
      piVar9 = piVar28 + 8;
    }
    lVar11 = lVar11 + 1;
    piVar28 = piVar9;
  } while( true );
}


