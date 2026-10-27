// Function : jpeg_fdct_10x10
// Namespace: juce:jpeglibNamespace
// Entry    : 00368d80
// Prototype: undefined jpeg_fdct_10x10(int * param_1, long param_2, ulong param_3)
// Body     : 00368d80 - 00369132


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::jpeg_fdct_10x10(int*, unsigned char**, unsigned int) */

void __cdecl juce::jpeglibNamespace::jpeg_fdct_10x10(int *param_1,long param_2,ulong param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  int *piVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  int *piVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  long lVar25;
  int local_78 [8];
  int aiStack_58 [10];
  
  uVar4 = param_3 & 0xffffffff;
  lVar9 = 0;
  piVar20 = param_1;
  do {
    lVar8 = *(long *)(param_2 + lVar9 * 8);
    uVar11 = (ulong)*(byte *)(lVar8 + 9 + uVar4);
    lVar10 = uVar11 + *(byte *)(lVar8 + uVar4);
    uVar6 = (ulong)*(byte *)(lVar8 + 1 + uVar4);
    uVar17 = (ulong)*(byte *)(lVar8 + 8 + uVar4);
    lVar22 = uVar17 + uVar6;
    uVar7 = (ulong)*(byte *)(lVar8 + 3 + uVar4);
    uVar18 = (ulong)*(byte *)(lVar8 + 6 + uVar4);
    lVar12 = uVar18 + uVar7;
    uVar24 = (ulong)*(byte *)(lVar8 + 4 + uVar4);
    uVar19 = (ulong)*(byte *)(lVar8 + 5 + uVar4);
    lVar15 = uVar19 + uVar24;
    lVar16 = lVar15 + lVar10;
    lVar10 = lVar10 - lVar15;
    lVar15 = lVar12 + lVar22;
    lVar22 = lVar22 - lVar12;
    lVar21 = *(byte *)(lVar8 + uVar4) - uVar11;
    uVar13 = (ulong)*(byte *)(lVar8 + 2 + uVar4);
    uVar11 = (ulong)*(byte *)(lVar8 + 7 + uVar4);
    lVar23 = uVar6 - uVar17;
    lVar12 = uVar11 + uVar13;
    lVar14 = uVar13 - uVar11;
    lVar8 = uVar7 - uVar18;
    lVar25 = uVar24 - uVar19;
    *piVar20 = ((int)lVar15 + (int)lVar16 + (int)lVar12) * 2 + -0xa00;
    piVar20[4] = (int)((ulong)((lVar15 + lVar12 * -2) * -0xdfc + (lVar16 + lVar12 * -2) * 0x249d) >>
                      0xc);
    lVar12 = (lVar10 + lVar22) * 0x1a9a;
    piVar20[2] = (int)((ulong)(lVar10 * 0x1071 + lVar12) >> 0xc);
    piVar20[6] = (int)((ulong)(lVar22 * -0x45a4 + lVar12) >> 0xc);
    piVar20[5] = (((int)(lVar25 + lVar21) - (int)lVar14) - (int)(lVar23 - lVar8)) * 2;
    piVar20[1] = (int)((ulong)(lVar25 * 0x714 +
                              lVar8 * 0x148c + lVar23 * 0x2853 + lVar21 * 0x2cb3 + lVar14 * 0x2000)
                      >> 0xc);
    lVar10 = (lVar8 + lVar23) * -0x12cf + (lVar21 - lVar25) * 0x1e6f;
    lVar22 = (lVar23 - lVar8) * 0x19e3 + lVar14 * -0x2000 + (lVar25 + lVar21) * 0x9e3;
    piVar20[3] = (int)((ulong)(lVar22 + lVar10) >> 0xc);
    piVar20[7] = (int)((ulong)(lVar10 - lVar22) >> 0xc);
    piVar5 = local_78;
    if ((int)lVar9 != 7) {
      if ((int)lVar9 == 9) {
        lVar9 = 0;
        do {
          iVar1 = local_78[lVar9];
          iVar2 = aiStack_58[lVar9];
          iVar3 = param_1[lVar9];
          lVar23 = (long)(iVar2 + iVar3);
          lVar21 = (long)(iVar1 + param_1[lVar9 + 8]);
          lVar12 = (long)(param_1[lVar9 + 0x30] + param_1[lVar9 + 0x18]);
          lVar22 = (long)(param_1[lVar9 + 0x28] + param_1[lVar9 + 0x20]);
          lVar10 = lVar22 + lVar23;
          lVar23 = lVar23 - lVar22;
          lVar22 = lVar21 + lVar12;
          lVar21 = lVar21 - lVar12;
          lVar16 = (long)(param_1[lVar9 + 0x38] + param_1[lVar9 + 0x10]);
          param_1[lVar9] = (int)((ulong)((lVar22 + lVar16 + lVar10) * 0x28f6) >> 0xf);
          lVar15 = (long)(iVar3 - iVar2);
          lVar8 = (long)(param_1[lVar9 + 8] - iVar1);
          lVar25 = (long)(param_1[lVar9 + 0x10] - param_1[lVar9 + 0x38]);
          lVar12 = (long)(param_1[lVar9 + 0x18] - param_1[lVar9 + 0x30]);
          lVar14 = (long)(param_1[lVar9 + 0x20] - param_1[lVar9 + 0x28]);
          param_1[lVar9 + 0x20] =
               (int)((ulong)(lVar22 * -0x11e6 + lVar16 * -0x39ee + lVar10 * 0x2edd) >> 0xf);
          lVar10 = (lVar23 + lVar21) * 0x220c;
          param_1[lVar9 + 0x10] = (int)((ulong)(lVar23 * 0x150b + lVar10) >> 0xf);
          param_1[lVar9 + 0x30] = (int)((ulong)(lVar21 * -0x5924 + lVar10) >> 0xf);
          param_1[lVar9 + 0x28] =
               (int)((ulong)((((lVar14 + lVar15) - (lVar8 - lVar12)) - lVar25) * 0x28f6) >> 0xf);
          param_1[lVar9 + 8] =
               (int)((ulong)(lVar14 * 0x910 +
                            lVar12 * 0x1a4c + lVar8 * 0x339d + lVar15 * 0x3937 + lVar25 * 0x28f6) >>
                    0xf);
          lVar22 = (lVar12 + lVar8) * -0x1813 + (lVar15 - lVar14) * 0x26f5;
          lVar10 = (lVar8 - lVar12) * 0x2123 + lVar25 * -0x28f6 + (lVar14 + lVar15) * 0xca8;
          param_1[lVar9 + 0x18] = (int)((ulong)(lVar10 + lVar22) >> 0xf);
          param_1[lVar9 + 0x38] = (int)((ulong)(lVar22 - lVar10) >> 0xf);
          lVar9 = lVar9 + 1;
        } while ((int)lVar9 != 8);
        return;
      }
      piVar5 = piVar20 + 8;
    }
    lVar9 = lVar9 + 1;
    piVar20 = piVar5;
  } while( true );
}


