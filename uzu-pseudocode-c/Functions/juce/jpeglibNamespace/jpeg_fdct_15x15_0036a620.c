// Function : jpeg_fdct_15x15
// Namespace: juce:jpeglibNamespace
// Entry    : 0036a620
// Prototype: undefined jpeg_fdct_15x15(int * param_1, long param_2, uint param_3)
// Body     : 0036a620 - 0036ac36


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::jpeg_fdct_15x15(int*, unsigned char**, unsigned int) */

void __cdecl juce::jpeglibNamespace::jpeg_fdct_15x15(int *param_1,long param_2,uint param_3)

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
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  int *piVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  ulong uVar28;
  ulong uVar29;
  long lVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  ulong uVar37;
  long lVar38;
  int *local_170;
  int local_118 [8];
  int aiStack_f8 [8];
  int aiStack_d8 [8];
  int aiStack_b8 [8];
  int aiStack_98 [8];
  int aiStack_78 [8];
  int aiStack_58 [10];
  
  uVar32 = (ulong)param_3;
  lVar18 = 0;
  local_170 = param_1;
  do {
    lVar30 = *(long *)(param_2 + lVar18 * 8);
    uVar31 = (ulong)*(byte *)(lVar30 + 0xe + uVar32);
    lVar27 = uVar31 + *(byte *)(lVar30 + uVar32);
    uVar10 = (ulong)*(byte *)(lVar30 + 1 + uVar32);
    uVar29 = (ulong)*(byte *)(lVar30 + 0xd + uVar32);
    lVar26 = uVar29 + uVar10;
    uVar11 = (ulong)*(byte *)(lVar30 + 2 + uVar32);
    uVar33 = (ulong)*(byte *)(lVar30 + 0xc + uVar32);
    lVar35 = uVar33 + uVar11;
    uVar22 = (ulong)*(byte *)(lVar30 + 3 + uVar32);
    uVar19 = (ulong)*(byte *)(lVar30 + 0xb + uVar32);
    lVar14 = uVar19 + uVar22;
    uVar37 = (ulong)*(byte *)(lVar30 + 4 + uVar32);
    uVar28 = (ulong)*(byte *)(lVar30 + 10 + uVar32);
    lVar25 = *(byte *)(lVar30 + uVar32) - uVar31;
    lVar15 = uVar28 + uVar37;
    lVar17 = uVar10 - uVar29;
    uVar29 = (ulong)*(byte *)(lVar30 + 5 + uVar32);
    lVar12 = uVar11 - uVar33;
    uVar10 = (ulong)*(byte *)(lVar30 + 9 + uVar32);
    lVar23 = uVar22 - uVar19;
    lVar21 = uVar10 + uVar29;
    lVar38 = uVar37 - uVar28;
    uVar11 = (ulong)*(byte *)(lVar30 + 6 + uVar32);
    lVar36 = uVar29 - uVar10;
    uVar10 = (ulong)*(byte *)(lVar30 + 8 + uVar32);
    lVar24 = uVar10 + uVar11;
    lVar20 = uVar11 - uVar10;
    uVar10 = (ulong)*(byte *)(lVar30 + 7 + uVar32);
    lVar34 = lVar27 + lVar15 + lVar21;
    lVar13 = lVar26 + lVar14 + lVar24;
    lVar30 = uVar10 + lVar35;
    *local_170 = (int)lVar13 + (int)lVar30 + (int)lVar34 + -0x780;
    local_170[6] = (int)((ulong)(lVar13 * -0xdfc + lVar30 * -0x2d42 + lVar34 * 0x249d) >> 0xd);
    lVar35 = ((ulong)(lVar15 + lVar26) >> 1) + lVar35 + uVar10 * -2;
    lVar26 = (lVar26 - lVar15) * 0x194c + (lVar27 - lVar14) * 0x2c44 + (lVar24 - lVar21) * 0x1e48;
    local_170[2] = (int)((ulong)(lVar24 * -0x47a0 + lVar35 * 0x16a1 + lVar14 * 0x30ff + lVar26) >>
                        0xd);
    local_170[4] = (int)((ulong)(lVar26 + lVar27 * -0x2ec + lVar35 * -0x16a1 + lVar21 * 0x198d) >>
                        0xd);
    lVar27 = (lVar36 + lVar23) * 0x1268 + (lVar38 + lVar17) * 0x2b0a + (lVar25 - lVar20) * 0x2d02;
    local_170[1] = (int)((ulong)(lVar23 * 0xf39 + lVar12 * 0x2731 + lVar38 * -0x1071 +
                                 lVar20 * 0x366a + lVar27) >> 0xd);
    local_170[3] = (int)((ulong)(((lVar17 - lVar23) - lVar20) * 0x1a9a +
                                ((lVar25 - lVar38) - lVar36) * 0x2b0a) >> 0xd);
    local_170[5] = (int)((ulong)((((lVar25 - lVar12) - lVar23) + lVar36 + lVar20) * 0x2731) >> 0xd);
    local_170[7] = (int)((ulong)(lVar17 * -0x45a4 + lVar25 * -0xb60 + lVar12 * -0x2731 +
                                 lVar36 * -0x1bd1 + lVar27) >> 0xd);
    piVar16 = local_118;
    if ((int)lVar18 != 7) {
      if ((int)lVar18 == 0xe) {
        lVar18 = 0;
        do {
          iVar1 = aiStack_58[lVar18];
          iVar2 = param_1[lVar18];
          lVar26 = (long)(iVar1 + iVar2);
          iVar3 = aiStack_78[lVar18];
          lVar13 = (long)(iVar3 + param_1[lVar18 + 8]);
          iVar4 = aiStack_98[lVar18];
          lVar35 = (long)(iVar4 + param_1[lVar18 + 0x10]);
          iVar5 = aiStack_b8[lVar18];
          lVar14 = (long)(iVar5 + param_1[lVar18 + 0x18]);
          iVar6 = aiStack_d8[lVar18];
          lVar15 = (long)(iVar6 + param_1[lVar18 + 0x20]);
          iVar7 = local_118[lVar18];
          iVar8 = aiStack_f8[lVar18];
          lVar30 = (long)(iVar8 + param_1[lVar18 + 0x28]);
          iVar9 = param_1[lVar18 + 0x30];
          lVar12 = (long)(iVar7 + iVar9);
          lVar21 = lVar15 + lVar26 + lVar30;
          lVar24 = lVar14 + lVar13 + lVar12;
          lVar27 = param_1[lVar18 + 0x38] + lVar35;
          param_1[lVar18] = (int)((ulong)((lVar24 + lVar21 + lVar27) * 0x2469) >> 0xf);
          param_1[lVar18 + 0x30] =
               (int)((ulong)(lVar24 * -0xfe9 + lVar27 * -0x337e + lVar21 * 0x29a8) >> 0xf);
          lVar27 = (lVar15 + lVar13 >> 1) + lVar35 + (long)param_1[lVar18 + 0x38] * -2;
          lVar17 = (lVar13 - lVar15) * 0x1cc9 + (lVar26 - lVar14) * 0x325d +
                   (lVar12 - lVar30) * 0x2274;
          lVar35 = (long)(iVar2 - iVar1);
          lVar24 = (long)(param_1[lVar18 + 8] - iVar3);
          lVar15 = (long)(param_1[lVar18 + 0x10] - iVar4);
          lVar21 = (long)(param_1[lVar18 + 0x18] - iVar5);
          lVar13 = (long)(param_1[lVar18 + 0x20] - iVar6);
          lVar20 = (long)(param_1[lVar18 + 0x28] - iVar8);
          lVar23 = (long)(iVar9 - iVar7);
          param_1[lVar18 + 0x10] =
               (int)((ulong)(lVar14 * 0x37bf + lVar27 * 0x19bf + lVar17 + lVar12 * -0x517e) >> 0xf);
          param_1[lVar18 + 0x20] =
               (int)((ulong)(lVar17 + lVar30 * 0x1d12 + lVar27 * -0x19be + lVar26 * -0x354) >> 0xf);
          lVar27 = (lVar20 + lVar21) * 0x14f1 + (lVar13 + lVar24) * 0x30f8 +
                   (lVar35 - lVar23) * 0x3335;
          param_1[lVar18 + 8] =
               (int)((ulong)(lVar21 * 0x1152 + lVar15 * 0x2c97 + lVar13 * -0x12b4 + lVar23 * 0x3dea
                            + lVar27) >> 0xf);
          param_1[lVar18 + 0x18] =
               (int)((ulong)(((lVar24 - lVar21) - lVar23) * 0x1e44 +
                            ((lVar35 - lVar13) - lVar20) * 0x30f8) >> 0xf);
          param_1[lVar18 + 0x28] =
               (int)((ulong)((((lVar35 - lVar15) - lVar21) + lVar20 + lVar23) * 0x2c97) >> 0xf);
          param_1[lVar18 + 0x38] =
               (int)((ulong)(lVar24 * -0x4f3c + lVar35 * -0xcf2 + lVar15 * -0x2c97 +
                             lVar20 * -0x1fa6 + lVar27) >> 0xf);
          lVar18 = lVar18 + 1;
        } while ((int)lVar18 != 8);
        return;
      }
      piVar16 = local_170 + 8;
    }
    lVar18 = lVar18 + 1;
    local_170 = piVar16;
  } while( true );
}


