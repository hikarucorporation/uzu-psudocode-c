// Function : jpeg_fdct_14x14
// Namespace: juce:jpeglibNamespace
// Entry    : 0036a0a0
// Prototype: undefined jpeg_fdct_14x14(int * param_1, long param_2, ulong param_3)
// Body     : 0036a0a0 - 0036a611


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::jpeg_fdct_14x14(int*, unsigned char**, unsigned int) */

void __cdecl juce::jpeglibNamespace::jpeg_fdct_14x14(int *param_1,long param_2,ulong param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  int *piVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  ulong uVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  ulong uVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  ulong uVar34;
  long lVar35;
  ulong uVar36;
  int *local_130;
  int local_f8 [8];
  int local_d8 [8];
  int aiStack_b8 [8];
  int aiStack_98 [8];
  int aiStack_78 [8];
  int aiStack_58 [10];
  
  uVar9 = param_3 & 0xffffffff;
  lVar14 = 0;
  local_130 = param_1;
  do {
    lVar19 = *(long *)(param_2 + lVar14 * 8);
    uVar15 = (ulong)*(byte *)(lVar19 + 0xd + uVar9);
    lVar22 = uVar15 + *(byte *)(lVar19 + uVar9);
    uVar20 = (ulong)*(byte *)(lVar19 + 1 + uVar9);
    uVar16 = (ulong)*(byte *)(lVar19 + 0xc + uVar9);
    lVar17 = uVar16 + uVar20;
    uVar25 = (ulong)*(byte *)(lVar19 + 2 + uVar9);
    uVar12 = (ulong)*(byte *)(lVar19 + 5 + uVar9);
    uVar36 = (ulong)*(byte *)(lVar19 + 8 + uVar9);
    lVar32 = uVar36 + uVar12;
    uVar23 = (ulong)*(byte *)(lVar19 + 6 + uVar9);
    uVar13 = (ulong)*(byte *)(lVar19 + 7 + uVar9);
    lVar10 = uVar13 + uVar23;
    lVar24 = lVar10 + lVar22;
    lVar22 = lVar22 - lVar10;
    lVar10 = lVar32 + lVar17;
    lVar17 = lVar17 - lVar32;
    uVar30 = (ulong)*(byte *)(lVar19 + 0xb + uVar9);
    lVar32 = uVar30 + uVar25;
    uVar18 = (ulong)*(byte *)(lVar19 + 4 + uVar9);
    uVar34 = (ulong)*(byte *)(lVar19 + 9 + uVar9);
    lVar28 = uVar34 + uVar18;
    lVar29 = lVar32 + lVar28;
    lVar32 = lVar32 - lVar28;
    lVar33 = *(byte *)(lVar19 + uVar9) - uVar15;
    lVar21 = uVar20 - uVar16;
    lVar26 = uVar25 - uVar30;
    uVar16 = (ulong)*(byte *)(lVar19 + 3 + uVar9);
    uVar15 = (ulong)*(byte *)(lVar19 + 10 + uVar9);
    lVar28 = uVar15 + uVar16;
    lVar31 = uVar16 - uVar15;
    lVar19 = uVar18 - uVar34;
    lVar35 = uVar12 - uVar36;
    lVar27 = uVar23 - uVar13;
    *local_130 = (int)lVar10 + (int)lVar29 + (int)lVar24 + (int)lVar28 + -0x700;
    local_130[4] = (int)((ulong)((lVar29 + lVar28 * -2) * -0x1c37 + (lVar10 + lVar28 * -2) * 0xa12 +
                                (lVar24 + lVar28 * -2) * 0x28c6) >> 0xd);
    lVar10 = (lVar17 + lVar22) * 0x2362;
    local_130[2] = (int)((ulong)(lVar32 * 0x13a3 + lVar22 * 0x8bd + lVar10) >> 0xd);
    local_130[6] = (int)((ulong)(lVar32 * -0x2c1f + lVar17 * -0x3704 + lVar10) >> 0xd);
    local_130[7] = ((int)lVar31 + (int)lVar33) -
                   ((int)(lVar26 + lVar21) + (int)(lVar35 - lVar19) + (int)lVar27);
    lVar32 = (lVar35 - lVar19) * 0x2cf8 + lVar31 * -0x2000 + (lVar26 + lVar21) * -0x511;
    lVar17 = (lVar27 + lVar19) * 0x1814 + (lVar26 + lVar33) * 0x2652;
    local_130[5] = (int)((ulong)(lVar19 * 0x23d7 + lVar26 * -0x4bf7 + lVar32 + lVar17) >> 0xd);
    lVar22 = (lVar35 - lVar27) * 0xef2 + (lVar21 + lVar33) * 0x2ab7;
    local_130[3] = (int)((ulong)(lVar21 * -0xd92 + lVar35 * -0x623c + lVar32 + lVar22) >> 0xd);
    local_130[1] = (int)((ulong)(lVar31 * 0x2000 + lVar27 * -0x240f + lVar33 * -0x2410 + lVar22 +
                                lVar17) >> 0xd);
    piVar11 = local_f8;
    if ((int)lVar14 != 7) {
      if ((int)lVar14 == 0xd) {
        lVar14 = 0;
        do {
          iVar1 = aiStack_58[lVar14];
          iVar2 = param_1[lVar14];
          lVar28 = (long)(iVar1 + iVar2);
          iVar3 = aiStack_78[lVar14];
          lVar10 = (long)(iVar3 + param_1[lVar14 + 8]);
          iVar4 = aiStack_98[lVar14];
          iVar5 = local_f8[lVar14];
          lVar17 = (long)(iVar5 + param_1[lVar14 + 0x28]);
          lVar32 = (long)(param_1[lVar14 + 0x38] + param_1[lVar14 + 0x30]);
          lVar22 = lVar32 + lVar28;
          lVar28 = lVar28 - lVar32;
          lVar24 = lVar10 + lVar17;
          lVar10 = lVar10 - lVar17;
          lVar29 = (long)(iVar4 + param_1[lVar14 + 0x10]);
          iVar6 = param_1[lVar14 + 0x20];
          iVar7 = local_d8[lVar14];
          lVar32 = (long)(iVar7 + iVar6);
          lVar17 = lVar32 + lVar29;
          lVar29 = lVar29 - lVar32;
          iVar8 = aiStack_b8[lVar14];
          lVar32 = (long)(iVar8 + param_1[lVar14 + 0x18]);
          param_1[lVar14] = (int)((ulong)((lVar17 + lVar32 + lVar24 + lVar22) * 0x14e6) >> 0xe);
          param_1[lVar14 + 0x20] =
               (int)((ulong)(lVar17 * -0x126d + lVar32 * -0x1d90 + lVar24 * 0x694 + lVar22 * 0x1aa1)
                    >> 0xe);
          lVar26 = (long)(iVar2 - iVar1);
          lVar31 = (long)(param_1[lVar14 + 8] - iVar3);
          lVar19 = (long)(param_1[lVar14 + 0x10] - iVar4);
          lVar21 = (long)(param_1[lVar14 + 0x18] - iVar8);
          lVar17 = (long)(iVar6 - iVar7);
          lVar32 = (long)(param_1[lVar14 + 0x28] - iVar5);
          lVar27 = (long)(param_1[lVar14 + 0x30] - param_1[lVar14 + 0x38]);
          lVar22 = (lVar28 + lVar10) * 0x171b;
          param_1[lVar14 + 0x10] = (int)((ulong)(lVar29 * 0xcd3 + lVar28 * 0x5b5 + lVar22) >> 0xe);
          param_1[lVar14 + 0x30] =
               (int)((ulong)(lVar29 * -0x1cd0 + lVar10 * -0x23ee + lVar22) >> 0xe);
          param_1[lVar14 + 0x38] =
               (int)((ulong)(((lVar26 + lVar21) - (lVar19 + lVar31 + (lVar32 - lVar17) + lVar27)) *
                            0x14e6) >> 0xe);
          lVar10 = (lVar32 - lVar17) * 0x1d5e + lVar21 * -0x14e6 + (lVar19 + lVar31) * -0x34f;
          lVar24 = (lVar27 + lVar17) * 0xfb9 + (lVar19 + lVar26) * 0x1906;
          param_1[lVar14 + 0x28] =
               (int)((ulong)(lVar17 * 0x1768 + lVar19 * -0x319c + lVar10 + lVar24) >> 0xe);
          lVar22 = (lVar32 - lVar27) * 0x9c3 + (lVar31 + lVar26) * 0x1be5;
          param_1[lVar14 + 0x18] =
               (int)((ulong)(lVar31 * -0x8dd + lVar32 * -0x4027 + lVar10 + lVar22) >> 0xe);
          param_1[lVar14 + 8] =
               (int)((ulong)(lVar26 * -0x178d + lVar21 * 0x14e6 + lVar27 * -0x2a7 + lVar22 + lVar24)
                    >> 0xe);
          lVar14 = lVar14 + 1;
        } while ((int)lVar14 != 8);
        return;
      }
      piVar11 = local_130 + 8;
    }
    lVar14 = lVar14 + 1;
    local_130 = piVar11;
  } while( true );
}


