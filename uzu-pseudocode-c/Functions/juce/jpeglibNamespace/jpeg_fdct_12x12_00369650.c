// Function : jpeg_fdct_12x12
// Namespace: juce:jpeglibNamespace
// Entry    : 00369650
// Prototype: undefined jpeg_fdct_12x12(int * param_1, long param_2, uint param_3)
// Body     : 00369650 - 00369ad8


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::jpeg_fdct_12x12(int*, unsigned char**, unsigned int) */

void __cdecl juce::jpeglibNamespace::jpeg_fdct_12x12(int *param_1,long param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  ulong uVar28;
  ulong uVar29;
  long lVar30;
  int *local_d0;
  int local_b8 [8];
  int aiStack_98 [8];
  int local_78 [8];
  int aiStack_58 [10];
  
  uVar28 = (ulong)param_3;
  lVar10 = 0;
  local_d0 = param_1;
  do {
    lVar17 = *(long *)(param_2 + lVar10 * 8);
    uVar7 = (ulong)*(byte *)(lVar17 + 0xb + uVar28);
    lVar27 = uVar7 + *(byte *)(lVar17 + uVar28);
    uVar8 = (ulong)*(byte *)(lVar17 + 1 + uVar28);
    uVar12 = (ulong)*(byte *)(lVar17 + 2 + uVar28);
    uVar21 = (ulong)*(byte *)(lVar17 + 9 + uVar28);
    lVar9 = uVar21 + uVar12;
    uVar29 = (ulong)*(byte *)(lVar17 + 3 + uVar28);
    uVar18 = (ulong)*(byte *)(lVar17 + 8 + uVar28);
    lVar20 = uVar18 + uVar29;
    uVar14 = (ulong)*(byte *)(lVar17 + 5 + uVar28);
    uVar22 = (ulong)*(byte *)(lVar17 + 6 + uVar28);
    lVar23 = uVar22 + uVar14;
    lVar26 = lVar23 + lVar27;
    lVar27 = lVar27 - lVar23;
    lVar23 = lVar20 + lVar9;
    lVar9 = lVar9 - lVar20;
    uVar24 = (ulong)*(byte *)(lVar17 + 10 + uVar28);
    lVar11 = *(byte *)(lVar17 + uVar28) - uVar7;
    lVar20 = uVar24 + uVar8;
    lVar16 = uVar8 - uVar24;
    lVar13 = uVar12 - uVar21;
    uVar8 = (ulong)*(byte *)(lVar17 + 4 + uVar28);
    uVar7 = (ulong)*(byte *)(lVar17 + 7 + uVar28);
    lVar30 = uVar29 - uVar18;
    lVar17 = uVar7 + uVar8;
    lVar25 = uVar8 - uVar7;
    lVar15 = uVar14 - uVar22;
    lVar19 = lVar20 - lVar17;
    *local_d0 = (int)lVar17 + (int)lVar20 + (int)lVar23 + (int)lVar26 + -0x600;
    local_d0[6] = (int)lVar27 - ((int)lVar19 + (int)lVar9);
    local_d0[4] = (int)((ulong)((lVar26 - lVar23) * 0x2731) >> 0xd);
    local_d0[2] = (int)((ulong)(lVar9 * 0x2bb5 + lVar27 * 0x2bb6 + lVar19) >> 0xd);
    lVar27 = (lVar25 + lVar16) * 0x1151;
    lVar20 = lVar16 * 0x187e + lVar27;
    lVar27 = lVar25 * -0x3b21 + lVar27;
    lVar26 = (lVar13 + lVar11) * 0x23e7;
    lVar23 = (lVar30 + lVar11) * 0x1b8d;
    lVar9 = (lVar30 + lVar13) * -0x5e8;
    local_d0[1] = (int)((ulong)(lVar11 * -0x1296 + lVar26 + lVar23 + lVar20 + lVar15 * 0x5e8) >> 0xd
                       );
    local_d0[3] = (int)((ulong)((lVar15 + lVar13) * -0x1151 + (lVar11 - lVar30) * 0x29cf + lVar27)
                       >> 0xd);
    local_d0[5] = (int)((ulong)(((lVar13 * -0x4add + lVar26 + lVar9) - lVar27) + lVar15 * 0x1b8d) >>
                       0xd);
    local_d0[7] = (int)((ulong)(((lVar30 * 0x173a + lVar9 + lVar23) - lVar20) + lVar15 * -0x23e7) >>
                       0xd);
    piVar6 = local_b8;
    if ((int)lVar10 != 7) {
      if ((int)lVar10 == 0xb) {
        lVar10 = 0;
        do {
          iVar1 = aiStack_58[lVar10];
          iVar2 = param_1[lVar10];
          lVar13 = (long)(iVar1 + iVar2);
          iVar3 = local_b8[lVar10];
          iVar4 = aiStack_98[lVar10];
          lVar26 = (long)(iVar4 + param_1[lVar10 + 0x10]);
          lVar20 = (long)(iVar3 + param_1[lVar10 + 0x18]);
          lVar9 = (long)(param_1[lVar10 + 0x30] + param_1[lVar10 + 0x28]);
          lVar27 = lVar9 + lVar13;
          lVar13 = lVar13 - lVar9;
          lVar9 = lVar26 + lVar20;
          lVar26 = lVar26 - lVar20;
          iVar5 = local_78[lVar10];
          lVar20 = (long)(iVar5 + param_1[lVar10 + 8]);
          lVar23 = (long)(param_1[lVar10 + 0x38] + param_1[lVar10 + 0x20]);
          lVar17 = lVar20 - lVar23;
          param_1[lVar10] = (int)((ulong)((lVar20 + lVar9 + lVar23 + lVar27) * 0x1c72) >> 0xe);
          lVar23 = (long)(iVar2 - iVar1);
          lVar19 = (long)(param_1[lVar10 + 8] - iVar5);
          lVar11 = (long)(param_1[lVar10 + 0x10] - iVar4);
          lVar15 = (long)(param_1[lVar10 + 0x18] - iVar3);
          lVar16 = (long)(param_1[lVar10 + 0x20] - param_1[lVar10 + 0x38]);
          lVar20 = (long)(param_1[lVar10 + 0x28] - param_1[lVar10 + 0x30]);
          param_1[lVar10 + 0x30] = (int)((ulong)((lVar13 - (lVar26 + lVar17)) * 0x1c72) >> 0xe);
          param_1[lVar10 + 0x20] = (int)((ulong)((lVar27 - lVar9) * 0x22d6) >> 0xe);
          param_1[lVar10 + 0x10] =
               (int)((ulong)(lVar26 * 0xa69 + lVar13 * 0x26db + lVar17 * 0x1c72) >> 0xe);
          lVar27 = (lVar16 + lVar19) * 0xf65;
          lVar26 = lVar19 * 0x15c5 + lVar27;
          lVar27 = lVar16 * -0x348f + lVar27;
          lVar9 = (lVar11 + lVar23) * 0x1fea;
          lVar17 = (lVar15 + lVar23) * 0x187d;
          lVar13 = (lVar15 + lVar11) * -0x540;
          param_1[lVar10 + 8] =
               (int)((ulong)(lVar23 * -0x1085 + lVar9 + lVar17 + lVar26 + lVar20 * 0x540) >> 0xe);
          param_1[lVar10 + 0x18] =
               (int)((ulong)((lVar20 + lVar11) * -0xf65 + (lVar23 - lVar15) * 0x252a + lVar27) >>
                    0xe);
          param_1[lVar10 + 0x28] =
               (int)((ulong)(((lVar11 * -0x428c + lVar9 + lVar13) - lVar27) + lVar20 * 0x187d) >>
                    0xe);
          param_1[lVar10 + 0x38] =
               (int)((ulong)(((lVar15 * 0x14a5 + lVar13 + lVar17) - lVar26) + lVar20 * -0x1fea) >>
                    0xe);
          lVar10 = lVar10 + 1;
        } while ((int)lVar10 != 8);
        return;
      }
      piVar6 = local_d0 + 8;
    }
    lVar10 = lVar10 + 1;
    local_d0 = piVar6;
  } while( true );
}


