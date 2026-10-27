// Function : jpeg_fdct_10x5
// Namespace: juce:jpeglibNamespace
// Entry    : 0036dfb0
// Prototype: undefined jpeg_fdct_10x5(int * param_1, long param_2, ulong param_3)
// Body     : 0036dfb0 - 0036e6d0


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::jpeg_fdct_10x5(int*, unsigned char**, unsigned int) */

void __cdecl juce::jpeglibNamespace::jpeg_fdct_10x5(int *param_1,long param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  
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
  uVar2 = param_3 & 0xffffffff;
  lVar9 = 0;
  do {
    lVar11 = *(long *)(param_2 + lVar9);
    uVar3 = (ulong)*(byte *)(lVar11 + 9 + uVar2);
    lVar20 = uVar3 + *(byte *)(lVar11 + uVar2);
    uVar17 = (ulong)*(byte *)(lVar11 + 1 + uVar2);
    uVar5 = (ulong)*(byte *)(lVar11 + 8 + uVar2);
    lVar19 = uVar5 + uVar17;
    uVar15 = (ulong)*(byte *)(lVar11 + 3 + uVar2);
    uVar6 = (ulong)*(byte *)(lVar11 + 6 + uVar2);
    lVar1 = uVar6 + uVar15;
    uVar13 = (ulong)*(byte *)(lVar11 + 4 + uVar2);
    uVar7 = (ulong)*(byte *)(lVar11 + 5 + uVar2);
    lVar4 = uVar7 + uVar13;
    lVar8 = lVar4 + lVar20;
    lVar20 = lVar20 - lVar4;
    lVar4 = lVar1 + lVar19;
    lVar19 = lVar19 - lVar1;
    lVar12 = *(byte *)(lVar11 + uVar2) - uVar3;
    uVar10 = (ulong)*(byte *)(lVar11 + 2 + uVar2);
    uVar3 = (ulong)*(byte *)(lVar11 + 7 + uVar2);
    lVar18 = uVar17 - uVar5;
    lVar1 = uVar3 + uVar10;
    lVar11 = uVar10 - uVar3;
    lVar16 = uVar15 - uVar6;
    lVar14 = uVar13 - uVar7;
    param_1[lVar9] = ((int)lVar8 + (int)lVar4 + (int)lVar1) * 4 + -0x1400;
    param_1[lVar9 + 4] =
         (int)((ulong)((lVar4 + lVar1 * -2) * -0xdfc + (lVar8 + lVar1 * -2) * 0x249d) >> 0xb);
    lVar4 = (lVar20 + lVar19) * 0x1a9a;
    param_1[lVar9 + 2] = (int)((ulong)(lVar20 * 0x1071 + lVar4) >> 0xb);
    param_1[lVar9 + 6] = (int)((ulong)(lVar19 * -0x45a4 + lVar4) >> 0xb);
    param_1[lVar9 + 5] = (((int)(lVar14 + lVar12) - (int)lVar11) - (int)(lVar18 - lVar16)) * 4;
    param_1[lVar9 + 1] =
         (int)((ulong)(lVar14 * 0x714 +
                      lVar16 * 0x148c + lVar18 * 0x2853 + lVar12 * 0x2cb3 + lVar11 * 0x2000) >> 0xb)
    ;
    lVar20 = (lVar16 + lVar18) * -0x12cf + (lVar12 - lVar14) * 0x1e6f;
    lVar19 = (lVar18 - lVar16) * 0x19e3 + lVar11 * -0x2000 + (lVar14 + lVar12) * 0x9e3;
    param_1[lVar9 + 3] = (int)((ulong)(lVar19 + lVar20) >> 0xb);
    param_1[lVar9 + 7] = (int)((ulong)(lVar20 - lVar19) >> 0xb);
    lVar9 = lVar9 + 8;
  } while (lVar9 != 0x28);
  lVar8 = (long)(param_1[0x20] + *param_1);
  lVar19 = (long)(param_1[0x18] + param_1[8]);
  lVar9 = lVar19 + lVar8;
  lVar4 = (long)(*param_1 - param_1[0x20]);
  lVar20 = (long)(param_1[8] - param_1[0x18]);
  *param_1 = (int)((ulong)((lVar9 + param_1[0x10]) * 0x28f6) >> 0xf);
  lVar19 = (lVar8 - lVar19) * 0x2062;
  lVar9 = lVar9 + (long)param_1[0x10] * -4;
  param_1[0x10] = (int)((ulong)(lVar9 * 0xe7b + lVar19) >> 0xf);
  param_1[0x20] = (int)((ulong)(lVar19 + lVar9 * -0xe7b) >> 0xf);
  lVar9 = (lVar20 + lVar4) * 0x220c;
  param_1[8] = (int)((ulong)(lVar4 * 0x150b + lVar9) >> 0xf);
  param_1[0x18] = (int)((ulong)(lVar20 * -0x5924 + lVar9) >> 0xf);
  lVar19 = (long)(param_1[0x21] + param_1[1]);
  lVar4 = (long)(param_1[0x19] + param_1[9]);
  lVar9 = lVar4 + lVar19;
  lVar8 = (long)(param_1[1] - param_1[0x21]);
  lVar20 = (long)(param_1[9] - param_1[0x19]);
  param_1[1] = (int)((ulong)((lVar9 + param_1[0x11]) * 0x28f6) >> 0xf);
  lVar19 = (lVar19 - lVar4) * 0x2062;
  lVar9 = lVar9 + (long)param_1[0x11] * -4;
  param_1[0x11] = (int)((ulong)(lVar9 * 0xe7b + lVar19) >> 0xf);
  param_1[0x21] = (int)((ulong)(lVar19 + lVar9 * -0xe7b) >> 0xf);
  lVar9 = (lVar20 + lVar8) * 0x220c;
  param_1[9] = (int)((ulong)(lVar8 * 0x150b + lVar9) >> 0xf);
  param_1[0x19] = (int)((ulong)(lVar20 * -0x5924 + lVar9) >> 0xf);
  lVar8 = (long)(param_1[0x22] + param_1[2]);
  lVar19 = (long)(param_1[0x1a] + param_1[10]);
  lVar9 = lVar8 + lVar19;
  lVar4 = (long)(param_1[2] - param_1[0x22]);
  lVar20 = (long)(param_1[10] - param_1[0x1a]);
  param_1[2] = (int)((ulong)((lVar9 + param_1[0x12]) * 0x28f6) >> 0xf);
  lVar19 = (lVar8 - lVar19) * 0x2062;
  lVar9 = lVar9 + (long)param_1[0x12] * -4;
  param_1[0x12] = (int)((ulong)(lVar9 * 0xe7b + lVar19) >> 0xf);
  param_1[0x22] = (int)((ulong)(lVar19 + lVar9 * -0xe7b) >> 0xf);
  lVar9 = (lVar20 + lVar4) * 0x220c;
  param_1[10] = (int)((ulong)(lVar4 * 0x150b + lVar9) >> 0xf);
  param_1[0x1a] = (int)((ulong)(lVar20 * -0x5924 + lVar9) >> 0xf);
  lVar8 = (long)(param_1[0x23] + param_1[3]);
  lVar19 = (long)(param_1[0x1b] + param_1[0xb]);
  lVar9 = lVar8 + lVar19;
  lVar4 = (long)(param_1[3] - param_1[0x23]);
  lVar20 = (long)(param_1[0xb] - param_1[0x1b]);
  param_1[3] = (int)((ulong)((lVar9 + param_1[0x13]) * 0x28f6) >> 0xf);
  lVar19 = (lVar8 - lVar19) * 0x2062;
  lVar9 = lVar9 + (long)param_1[0x13] * -4;
  param_1[0x13] = (int)((ulong)(lVar9 * 0xe7b + lVar19) >> 0xf);
  param_1[0x23] = (int)((ulong)(lVar19 + lVar9 * -0xe7b) >> 0xf);
  lVar9 = (lVar20 + lVar4) * 0x220c;
  param_1[0xb] = (int)((ulong)(lVar4 * 0x150b + lVar9) >> 0xf);
  param_1[0x1b] = (int)((ulong)(lVar20 * -0x5924 + lVar9) >> 0xf);
  lVar8 = (long)(param_1[0x24] + param_1[4]);
  lVar19 = (long)(param_1[0x1c] + param_1[0xc]);
  lVar9 = lVar8 + lVar19;
  lVar4 = (long)(param_1[4] - param_1[0x24]);
  lVar20 = (long)(param_1[0xc] - param_1[0x1c]);
  param_1[4] = (int)((ulong)((lVar9 + param_1[0x14]) * 0x28f6) >> 0xf);
  lVar19 = (lVar8 - lVar19) * 0x2062;
  lVar9 = lVar9 + (long)param_1[0x14] * -4;
  param_1[0x14] = (int)((ulong)(lVar9 * 0xe7b + lVar19) >> 0xf);
  param_1[0x24] = (int)((ulong)(lVar19 + lVar9 * -0xe7b) >> 0xf);
  lVar9 = (lVar20 + lVar4) * 0x220c;
  param_1[0xc] = (int)((ulong)(lVar4 * 0x150b + lVar9) >> 0xf);
  param_1[0x1c] = (int)((ulong)(lVar20 * -0x5924 + lVar9) >> 0xf);
  lVar8 = (long)(param_1[0x25] + param_1[5]);
  lVar19 = (long)(param_1[0x1d] + param_1[0xd]);
  lVar9 = lVar8 + lVar19;
  lVar4 = (long)(param_1[5] - param_1[0x25]);
  lVar20 = (long)(param_1[0xd] - param_1[0x1d]);
  param_1[5] = (int)((ulong)((lVar9 + param_1[0x15]) * 0x28f6) >> 0xf);
  lVar19 = (lVar8 - lVar19) * 0x2062;
  lVar9 = lVar9 + (long)param_1[0x15] * -4;
  param_1[0x15] = (int)((ulong)(lVar9 * 0xe7b + lVar19) >> 0xf);
  param_1[0x25] = (int)((ulong)(lVar19 + lVar9 * -0xe7b) >> 0xf);
  lVar9 = (lVar20 + lVar4) * 0x220c;
  param_1[0xd] = (int)((ulong)(lVar4 * 0x150b + lVar9) >> 0xf);
  param_1[0x1d] = (int)((ulong)(lVar20 * -0x5924 + lVar9) >> 0xf);
  lVar8 = (long)(param_1[0x26] + param_1[6]);
  lVar19 = (long)(param_1[0x1e] + param_1[0xe]);
  lVar9 = lVar8 + lVar19;
  lVar4 = (long)(param_1[6] - param_1[0x26]);
  lVar20 = (long)(param_1[0xe] - param_1[0x1e]);
  param_1[6] = (int)((ulong)((lVar9 + param_1[0x16]) * 0x28f6) >> 0xf);
  lVar19 = (lVar8 - lVar19) * 0x2062;
  lVar9 = lVar9 + (long)param_1[0x16] * -4;
  param_1[0x16] = (int)((ulong)(lVar9 * 0xe7b + lVar19) >> 0xf);
  param_1[0x26] = (int)((ulong)(lVar19 + lVar9 * -0xe7b) >> 0xf);
  lVar9 = (lVar20 + lVar4) * 0x220c;
  param_1[0xe] = (int)((ulong)(lVar4 * 0x150b + lVar9) >> 0xf);
  param_1[0x1e] = (int)((ulong)(lVar20 * -0x5924 + lVar9) >> 0xf);
  lVar8 = (long)(param_1[0x27] + param_1[7]);
  lVar19 = (long)(param_1[0x1f] + param_1[0xf]);
  lVar9 = lVar8 + lVar19;
  lVar4 = (long)(param_1[7] - param_1[0x27]);
  lVar20 = (long)(param_1[0xf] - param_1[0x1f]);
  param_1[7] = (int)((ulong)((lVar9 + param_1[0x17]) * 0x28f6) >> 0xf);
  lVar19 = (lVar8 - lVar19) * 0x2062;
  lVar9 = lVar9 + (long)param_1[0x17] * -4;
  param_1[0x17] = (int)((ulong)(lVar9 * 0xe7b + lVar19) >> 0xf);
  param_1[0x27] = (int)((ulong)(lVar19 + lVar9 * -0xe7b) >> 0xf);
  lVar9 = (lVar20 + lVar4) * 0x220c;
  param_1[0xf] = (int)((ulong)(lVar4 * 0x150b + lVar9) >> 0xf);
  param_1[0x1f] = (int)((ulong)(lVar20 * -0x5924 + lVar9) >> 0xf);
  return;
}


