// Function : jpeg_fdct_3x3
// Namespace: juce:jpeglibNamespace
// Entry    : 00367100
// Prototype: undefined jpeg_fdct_3x3(int * param_1, long * param_2, uint param_3)
// Body     : 00367100 - 00367316


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::jpeg_fdct_3x3(int*, unsigned char**, unsigned int) */

void __cdecl juce::jpeglibNamespace::jpeg_fdct_3x3(int *param_1,long *param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  long lVar16;
  
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
  uVar9 = (ulong)param_3;
  lVar4 = *param_2;
  bVar1 = *(byte *)(lVar4 + uVar9);
  bVar2 = *(byte *)(lVar4 + 2 + uVar9);
  iVar7 = (uint)bVar2 + (uint)bVar1;
  uVar5 = (uint)*(byte *)(lVar4 + 1 + uVar9);
  iVar13 = (iVar7 + uVar5) * 0x10;
  *param_1 = iVar13 + -0x1800;
  iVar12 = (int)((iVar7 + uVar5 * -2) * 0x16a1) >> 9;
  param_1[2] = iVar12;
  iVar15 = (int)(((uint)bVar1 - (uint)bVar2) * 0x2731) >> 9;
  param_1[1] = iVar15;
  lVar4 = param_2[1];
  bVar1 = *(byte *)(lVar4 + uVar9);
  bVar2 = *(byte *)(lVar4 + 2 + uVar9);
  lVar6 = (ulong)bVar1 + (ulong)bVar2;
  bVar3 = *(byte *)(lVar4 + 1 + uVar9);
  lVar4 = (ulong)bVar3 + lVar6;
  lVar16 = lVar4 * 0x10;
  param_1[8] = (int)lVar16 + -0x1800;
  iVar11 = (int)(((int)lVar6 + (uint)bVar3 * -2) * 0x16a1) >> 9;
  param_1[10] = iVar11;
  iVar14 = (int)(((uint)bVar1 - (uint)bVar2) * 0x2731) >> 9;
  param_1[9] = iVar14;
  lVar6 = param_2[2];
  bVar1 = *(byte *)(lVar6 + 2 + uVar9);
  iVar7 = (uint)bVar1 + (uint)*(byte *)(lVar6 + uVar9);
  uVar5 = (uint)*(byte *)(lVar6 + 1 + uVar9);
  iVar8 = (iVar7 + uVar5) * 0x10;
  iVar7 = (int)((iVar7 + uVar5 * -2) * 0x16a1) >> 9;
  iVar10 = (int)(((uint)*(byte *)(lVar6 + uVar9) - (uint)bVar1) * 0x2731) >> 9;
  lVar6 = (long)(iVar8 + iVar13 + -0x3000);
  *param_1 = (int)((ulong)((lVar6 + lVar16 + -0x1800) * 0x38e4) >> 0xf);
  param_1[0x10] = (int)((ulong)((lVar6 - (lVar4 * 0x20 + -0x3000)) * 0x283a) >> 0xf);
  param_1[8] = ((iVar13 - (iVar8 + -0x1800)) + -0x1800) * 0x45ad >> 0xf;
  lVar4 = (long)(iVar10 + iVar15);
  param_1[1] = (int)((ulong)((lVar4 + iVar14) * 0x38e4) >> 0xf);
  param_1[0x11] = (int)((ulong)((lVar4 + (long)iVar14 * -2) * 0x283a) >> 0xf);
  param_1[9] = (iVar15 - iVar10) * 0x45ad >> 0xf;
  lVar4 = (long)(iVar7 + iVar12);
  param_1[2] = (int)((ulong)((lVar4 + iVar11) * 0x38e4) >> 0xf);
  param_1[0x12] = (int)((ulong)((lVar4 + (long)iVar11 * -2) * 0x283a) >> 0xf);
  param_1[10] = (int)((ulong)((long)(iVar12 - iVar7) * 0x45ad) >> 0xf);
  return;
}


