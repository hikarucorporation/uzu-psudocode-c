// Function : jpeg_fdct_5x10
// Namespace: juce:jpeglibNamespace
// Entry    : 00370370
// Prototype: undefined jpeg_fdct_5x10(int * param_1, long param_2, uint param_3)
// Body     : 00370370 - 00370681


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::jpeg_fdct_5x10(int*, unsigned char**, unsigned int) */

void __cdecl juce::jpeglibNamespace::jpeg_fdct_5x10(int *param_1,long param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  int *piVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  int local_78 [8];
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
  uVar12 = (ulong)param_3;
  lVar10 = 0;
  piVar14 = param_1;
  do {
    lVar6 = *(long *)(param_2 + lVar10 * 8);
    uVar19 = (ulong)*(byte *)(lVar6 + 4 + uVar12);
    lVar7 = uVar19 + *(byte *)(lVar6 + uVar12);
    uVar16 = (ulong)*(byte *)(lVar6 + 1 + uVar12);
    uVar21 = (ulong)*(byte *)(lVar6 + 3 + uVar12);
    lVar8 = uVar21 + uVar16;
    bVar1 = *(byte *)(lVar6 + 2 + uVar12);
    lVar9 = lVar8 + lVar7;
    lVar6 = *(byte *)(lVar6 + uVar12) - uVar19;
    lVar17 = uVar16 - uVar21;
    *piVar14 = ((uint)bVar1 + (int)lVar9) * 4 + -0xa00;
    lVar7 = (lVar7 - lVar8) * 0x194c;
    lVar9 = lVar9 + (ulong)bVar1 * -4;
    piVar14[2] = (int)((ulong)(lVar9 * 0xb50 + lVar7) >> 0xb);
    piVar14[4] = (int)((ulong)(lVar7 + lVar9 * -0xb50) >> 0xb);
    lVar7 = (lVar17 + lVar6) * 0x1a9a;
    piVar14[1] = (int)((ulong)(lVar6 * 0x1071 + lVar7) >> 0xb);
    piVar14[3] = (int)((ulong)(lVar17 * -0x45a4 + lVar7) >> 0xb);
    piVar5 = local_78;
    if ((int)lVar10 != 7) {
      if ((int)lVar10 == 9) {
        lVar10 = 0;
        do {
          iVar2 = local_78[lVar10];
          iVar3 = aiStack_58[lVar10];
          iVar4 = param_1[lVar10];
          lVar15 = (long)(iVar3 + iVar4);
          lVar13 = (long)(iVar2 + param_1[lVar10 + 8]);
          lVar9 = (long)(param_1[lVar10 + 0x30] + param_1[lVar10 + 0x18]);
          lVar8 = (long)(param_1[lVar10 + 0x20] + param_1[lVar10 + 0x28]);
          lVar7 = lVar8 + lVar15;
          lVar15 = lVar15 - lVar8;
          lVar8 = lVar9 + lVar13;
          lVar13 = lVar13 - lVar9;
          lVar6 = (long)(param_1[lVar10 + 0x38] + param_1[lVar10 + 0x10]);
          param_1[lVar10] = (int)((ulong)((lVar8 + lVar6 + lVar7) * 0x28f6) >> 0xf);
          lVar17 = (long)(iVar4 - iVar3);
          lVar18 = (long)(param_1[lVar10 + 8] - iVar2);
          lVar20 = (long)(param_1[lVar10 + 0x10] - param_1[lVar10 + 0x38]);
          lVar9 = (long)(param_1[lVar10 + 0x18] - param_1[lVar10 + 0x30]);
          lVar11 = (long)(param_1[lVar10 + 0x20] - param_1[lVar10 + 0x28]);
          param_1[lVar10 + 0x20] =
               (int)((ulong)(lVar8 * -0x11e6 + lVar6 * -0x39ee + lVar7 * 0x2edd) >> 0xf);
          lVar7 = (lVar15 + lVar13) * 0x220c;
          param_1[lVar10 + 0x10] = (int)((ulong)(lVar15 * 0x150b + lVar7) >> 0xf);
          param_1[lVar10 + 0x30] = (int)((ulong)(lVar13 * -0x5924 + lVar7) >> 0xf);
          param_1[lVar10 + 0x28] =
               (int)((ulong)((((lVar11 + lVar17) - (lVar18 - lVar9)) - lVar20) * 0x28f6) >> 0xf);
          param_1[lVar10 + 8] =
               (int)((ulong)(lVar11 * 0x910 +
                            lVar9 * 0x1a4c + lVar18 * 0x339d + lVar17 * 0x3937 + lVar20 * 0x28f6) >>
                    0xf);
          lVar7 = (lVar9 + lVar18) * -0x1813 + (lVar17 - lVar11) * 0x26f5;
          lVar8 = (lVar18 - lVar9) * 0x2123 + lVar20 * -0x28f6 + (lVar11 + lVar17) * 0xca8;
          param_1[lVar10 + 0x18] = (int)((ulong)(lVar8 + lVar7) >> 0xf);
          param_1[lVar10 + 0x38] = (int)((ulong)(lVar7 - lVar8) >> 0xf);
          lVar10 = lVar10 + 1;
        } while ((int)lVar10 != 5);
        return;
      }
      piVar5 = piVar14 + 8;
    }
    lVar10 = lVar10 + 1;
    piVar14 = piVar5;
  } while( true );
}


