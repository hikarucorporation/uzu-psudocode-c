// Function : jpeg_fdct_7x14
// Namespace: juce:jpeglibNamespace
// Entry    : 0036fb70
// Prototype: undefined jpeg_fdct_7x14(int * param_1, long param_2, uint param_3)
// Body     : 0036fb70 - 00370003


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::jpeg_fdct_7x14(int*, unsigned char**, unsigned int) */

void __cdecl juce::jpeglibNamespace::jpeg_fdct_7x14(int *param_1,long param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  int *piVar23;
  ulong uVar24;
  long lVar25;
  ulong uVar26;
  long lVar27;
  long lVar28;
  ulong uVar29;
  long lVar30;
  int local_f8 [8];
  int aiStack_d8 [8];
  int local_b8 [8];
  int aiStack_98 [8];
  int aiStack_78 [8];
  int aiStack_58 [10];
  
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar22 = (ulong)param_3;
  lVar14 = 0;
  piVar23 = param_1;
  do {
    lVar12 = *(long *)(param_2 + lVar14 * 8);
    uVar29 = (ulong)*(byte *)(lVar12 + 6 + uVar22);
    lVar13 = uVar29 + *(byte *)(lVar12 + uVar22);
    uVar11 = (ulong)*(byte *)(lVar12 + 1 + uVar22);
    uVar24 = (ulong)*(byte *)(lVar12 + 5 + uVar22);
    lVar16 = uVar24 + uVar11;
    uVar26 = (ulong)*(byte *)(lVar12 + 2 + uVar22);
    uVar19 = (ulong)*(byte *)(lVar12 + 4 + uVar22);
    lVar18 = uVar26 + uVar19;
    bVar1 = *(byte *)(lVar12 + 3 + uVar22);
    lVar17 = *(byte *)(lVar12 + uVar22) - uVar29;
    lVar12 = uVar11 - uVar24;
    lVar27 = uVar26 - uVar19;
    *piVar23 = ((int)lVar16 + (uint)bVar1 + (int)(lVar13 + lVar18)) * 4 + -0xe00;
    lVar21 = (lVar13 + lVar18 + (ulong)bVar1 * -4) * 0xb50;
    lVar15 = (lVar16 - lVar18) * 0xa12;
    piVar23[2] = (int)((ulong)(lVar15 + (lVar13 - lVar18) * 0x1d76 + lVar21) >> 0xb);
    lVar20 = (lVar13 - lVar16) * 0x1c37;
    piVar23[4] = (int)((lVar16 + (ulong)bVar1 * -2) * -0x16a1 + lVar15 + lVar20 >> 0xb);
    piVar23[6] = (int)((ulong)(lVar20 + (lVar13 - lVar18) * -0x1d76 + lVar21) >> 0xb);
    lVar16 = (lVar12 + lVar17) * 0x1def;
    lVar13 = (lVar12 + lVar27) * -0x2c1f;
    lVar18 = (lVar27 + lVar17) * 0x13a3;
    piVar23[1] = (int)((ulong)(lVar16 + (lVar17 - lVar12) * -0x573 + lVar18) >> 0xb);
    piVar23[3] = (int)((ulong)(lVar16 + (lVar17 - lVar12) * 0x573 + lVar13) >> 0xb);
    piVar23[5] = (int)((ulong)(lVar27 * 0x3bde + lVar18 + lVar13) >> 0xb);
    piVar10 = local_f8;
    if ((int)lVar14 != 7) {
      if ((int)lVar14 == 0xd) {
        lVar14 = 0;
        do {
          iVar2 = aiStack_58[lVar14];
          iVar3 = param_1[lVar14];
          lVar15 = (long)(iVar3 + iVar2);
          iVar4 = aiStack_78[lVar14];
          lVar28 = (long)(iVar4 + param_1[lVar14 + 8]);
          iVar5 = aiStack_98[lVar14];
          iVar6 = local_f8[lVar14];
          lVar18 = (long)(iVar6 + param_1[lVar14 + 0x28]);
          lVar16 = (long)(param_1[lVar14 + 0x38] + param_1[lVar14 + 0x30]);
          lVar13 = lVar16 + lVar15;
          lVar15 = lVar15 - lVar16;
          lVar16 = lVar18 + lVar28;
          lVar28 = lVar28 - lVar18;
          lVar17 = (long)(iVar5 + param_1[lVar14 + 0x10]);
          iVar7 = param_1[lVar14 + 0x20];
          iVar8 = aiStack_d8[lVar14];
          lVar12 = (long)(iVar8 + iVar7);
          lVar18 = lVar12 + lVar17;
          lVar17 = lVar17 - lVar12;
          iVar9 = local_b8[lVar14];
          lVar12 = (long)(iVar9 + param_1[lVar14 + 0x18]);
          param_1[lVar14] = (int)((ulong)((lVar18 + lVar12 + lVar16 + lVar13) * 0x14e6) >> 0xf);
          param_1[lVar14 + 0x20] =
               (int)((ulong)(lVar18 * -0x126d + lVar12 * -0x1d90 + lVar16 * 0x694 + lVar13 * 0x1aa1)
                    >> 0xf);
          lVar25 = (long)(iVar3 - iVar2);
          lVar27 = (long)(param_1[lVar14 + 8] - iVar4);
          lVar18 = (long)(param_1[lVar14 + 0x10] - iVar5);
          lVar21 = (long)(param_1[lVar14 + 0x18] - iVar9);
          lVar20 = (long)(iVar7 - iVar8);
          lVar16 = (long)(param_1[lVar14 + 0x28] - iVar6);
          lVar30 = (long)(param_1[lVar14 + 0x30] - param_1[lVar14 + 0x38]);
          lVar13 = (lVar15 + lVar28) * 0x171b;
          param_1[lVar14 + 0x10] = (int)((ulong)(lVar17 * 0xcd3 + lVar15 * 0x5b5 + lVar13) >> 0xf);
          param_1[lVar14 + 0x30] =
               (int)((ulong)(lVar17 * -0x1cd0 + lVar28 * -0x23ee + lVar13) >> 0xf);
          param_1[lVar14 + 0x38] =
               (int)((ulong)(((lVar25 + lVar21) - (lVar27 + lVar18 + (lVar16 - lVar20) + lVar30)) *
                            0x14e6) >> 0xf);
          lVar13 = (lVar16 - lVar20) * 0x1d5e + lVar21 * -0x14e6 + (lVar27 + lVar18) * -0x34f;
          lVar12 = (lVar30 + lVar20) * 0xfb9 + (lVar25 + lVar18) * 0x1906;
          param_1[lVar14 + 0x28] =
               (int)((ulong)(lVar20 * 0x1768 + lVar18 * -0x319c + lVar13 + lVar12) >> 0xf);
          lVar18 = (lVar16 - lVar30) * 0x9c3 + (lVar27 + lVar25) * 0x1be5;
          param_1[lVar14 + 0x18] =
               (int)((ulong)(lVar27 * -0x8dd + lVar16 * -0x4027 + lVar13 + lVar18) >> 0xf);
          param_1[lVar14 + 8] =
               (int)((ulong)(lVar25 * -0x178d + lVar21 * 0x14e6 + lVar30 * -0x2a7 + lVar18 + lVar12)
                    >> 0xf);
          lVar14 = lVar14 + 1;
        } while ((int)lVar14 != 7);
        return;
      }
      piVar10 = piVar23 + 8;
    }
    lVar14 = lVar14 + 1;
    piVar23 = piVar10;
  } while( true );
}


