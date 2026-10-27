// Function : jpeg_fdct_2x4
// Namespace: juce:jpeglibNamespace
// Entry    : 003716f0
// Prototype: undefined jpeg_fdct_2x4(int * param_1, long * param_2, ulong param_3)
// Body     : 003716f0 - 00371889


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::jpeg_fdct_2x4(int*, unsigned char**, unsigned int) */

void __cdecl juce::jpeglibNamespace::jpeg_fdct_2x4(int *param_1,long *param_2,ulong param_3)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  long lVar16;
  int iVar17;
  
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
  uVar5 = param_3 & 0xffffffff;
  bVar2 = *(byte *)(*param_2 + uVar5);
  bVar3 = *(byte *)(*param_2 + 1 + uVar5);
  iVar17 = (uint)bVar3 + (uint)bVar2 + -0x100;
  lVar14 = (ulong)bVar2 - (ulong)bVar3;
  *param_1 = iVar17;
  iVar4 = (int)lVar14;
  param_1[1] = iVar4;
  bVar2 = *(byte *)(param_2[1] + uVar5);
  bVar3 = *(byte *)(param_2[1] + 1 + uVar5);
  iVar7 = (uint)bVar3 + (uint)bVar2 + -0x100;
  lVar16 = (ulong)bVar2 - (ulong)bVar3;
  param_1[8] = iVar7;
  iVar15 = (int)lVar16;
  param_1[9] = iVar15;
  bVar2 = *(byte *)(param_2[2] + uVar5);
  bVar3 = *(byte *)(param_2[2] + 1 + uVar5);
  iVar11 = (uint)bVar3 + (uint)bVar2 + -0x100;
  lVar13 = (ulong)bVar2 - (ulong)bVar3;
  param_1[0x10] = iVar11;
  iVar8 = (int)lVar13;
  param_1[0x11] = iVar8;
  bVar2 = *(byte *)(param_2[3] + uVar5);
  bVar3 = *(byte *)(param_2[3] + 1 + uVar5);
  iVar9 = (uint)bVar3 + (uint)bVar2 + -0x100;
  lVar12 = (ulong)bVar2 - (ulong)bVar3;
  iVar1 = iVar9 + iVar17;
  lVar10 = (long)(iVar17 - iVar9);
  *param_1 = (iVar11 + iVar7 + iVar1) * 8;
  param_1[0x10] = (iVar1 - (iVar11 + iVar7)) * 8;
  lVar6 = ((iVar7 - iVar11) + lVar10) * 0x1151;
  param_1[8] = (int)(lVar10 * 0x187e + lVar6 + 0x200U >> 10);
  param_1[0x18] = (int)(lVar6 + (long)(iVar7 - iVar11) * -0x3b21 + 0x200U >> 10);
  iVar4 = (int)lVar12 + iVar4;
  iVar8 = iVar8 + iVar15;
  lVar14 = lVar14 - lVar12;
  lVar16 = lVar16 - lVar13;
  param_1[1] = (iVar8 + iVar4) * 8;
  param_1[0x11] = (iVar4 - iVar8) * 8;
  lVar6 = (lVar16 + lVar14) * 0x1151;
  param_1[9] = (int)(lVar14 * 0x187e + lVar6 + 0x200U >> 10);
  param_1[0x19] = (int)(lVar6 + lVar16 * -0x3b21 + 0x200U >> 10);
  return;
}


