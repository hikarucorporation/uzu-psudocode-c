// Function : jpeg_fdct_4x2
// Namespace: juce:jpeglibNamespace
// Entry    : 0036f420
// Prototype: undefined jpeg_fdct_4x2(int * param_1, long * param_2, uint param_3)
// Body     : 0036f420 - 0036f58d


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::jpeg_fdct_4x2(int*, unsigned char**, unsigned int) */

void __cdecl juce::jpeglibNamespace::jpeg_fdct_4x2(int *param_1,long *param_2,uint param_3)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  
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
  uVar7 = (ulong)param_3;
  lVar5 = *param_2;
  lVar6 = param_2[1];
  bVar2 = *(byte *)(lVar5 + 3 + uVar7);
  iVar14 = (uint)*(byte *)(lVar5 + uVar7) + (uint)bVar2;
  bVar3 = *(byte *)(lVar5 + 1 + uVar7);
  bVar4 = *(byte *)(lVar5 + 2 + uVar7);
  iVar8 = (uint)bVar3 + (uint)bVar4;
  iVar1 = iVar8 + iVar14;
  iVar14 = iVar14 - iVar8;
  lVar12 = (ulong)*(byte *)(lVar5 + uVar7) - (ulong)bVar2;
  lVar5 = (ulong)bVar3 - (ulong)bVar4;
  lVar10 = (lVar5 + lVar12) * 0x1151;
  lVar13 = lVar10 + lVar12 * 0x187e + 0x200;
  lVar12 = lVar10 + lVar5 * -0x3b21 + 0x200;
  bVar2 = *(byte *)(lVar6 + 3 + uVar7);
  iVar11 = (uint)*(byte *)(lVar6 + uVar7) + (uint)bVar2;
  bVar3 = *(byte *)(lVar6 + 1 + uVar7);
  bVar4 = *(byte *)(lVar6 + 2 + uVar7);
  iVar9 = (uint)bVar3 + (uint)bVar4;
  iVar8 = iVar9 + iVar11;
  iVar11 = iVar11 - iVar9;
  lVar5 = (ulong)*(byte *)(lVar6 + uVar7) - (ulong)bVar2;
  lVar6 = (ulong)bVar3 - (ulong)bVar4;
  lVar10 = (lVar6 + lVar5) * 0x1151;
  lVar5 = lVar5 * 0x187e + lVar10;
  lVar10 = lVar6 * -0x3b21 + lVar10;
  *param_1 = (iVar8 + iVar1) * 8 + -0x2000;
  param_1[8] = (iVar1 - iVar8) * 8;
  param_1[1] = (int)((ulong)(lVar5 + lVar13) >> 10);
  param_1[9] = (int)((ulong)(lVar13 - lVar5) >> 10);
  param_1[2] = (iVar11 + iVar14) * 8;
  param_1[10] = (iVar14 - iVar11) * 8;
  param_1[3] = (int)((ulong)(lVar10 + lVar12) >> 10);
  param_1[0xb] = (int)((ulong)(lVar12 - lVar10) >> 10);
  return;
}


