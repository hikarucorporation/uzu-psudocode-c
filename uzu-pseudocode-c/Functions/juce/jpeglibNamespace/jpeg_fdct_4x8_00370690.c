// Function : jpeg_fdct_4x8
// Namespace: juce:jpeglibNamespace
// Entry    : 00370690
// Prototype: undefined1[16] jpeg_fdct_4x8(int * param_1, long * param_2, uint param_3)
// Body     : 00370690 - 0037127b


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl */
/* juce::jpeglibNamespace::jpeg_fdct_4x8(int*, unsigned char**, unsigned int) */

undefined1  [16] __cdecl
juce::jpeglibNamespace::jpeg_fdct_4x8(int *param_1,long *param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined1 auVar17 [16];
  uint uVar18;
  undefined1 auVar19 [16];
  int iVar20;
  long lVar21;
  int iVar22;
  long lVar23;
  long lVar24;
  int iVar106;
  uint uVar25;
  uint uVar26;
  ulong uVar27;
  undefined1 auVar28 [16];
  ulong uVar32;
  ulong uVar33;
  undefined1 auVar29 [16];
  ulong uVar34;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  uint uVar36;
  uint uVar35;
  undefined1 auVar38 [16];
  ulong uVar37;
  ulong uVar40;
  undefined1 auVar39 [16];
  int iVar107;
  ulong uVar41;
  ulong uVar42;
  undefined1 auVar43 [16];
  ulong uVar44;
  ulong uVar45;
  uint uVar46;
  ulong uVar47;
  int iVar50;
  ulong uVar48;
  undefined1 auVar49 [16];
  ulong uVar51;
  ulong uVar52;
  long lVar53;
  long lVar55;
  undefined1 auVar54 [16];
  long lVar56;
  long lVar59;
  ulong uVar60;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  int iVar108;
  uint uVar61;
  ulong uVar62;
  uint uVar66;
  undefined1 auVar63 [16];
  int iVar65;
  uint uVar68;
  undefined1 auVar64 [16];
  ulong uVar67;
  int iVar109;
  uint uVar69;
  int iVar71;
  int iVar72;
  int iVar74;
  undefined1 auVar70 [16];
  long lVar73;
  long lVar76;
  undefined1 auVar75 [16];
  undefined1 auVar77 [16];
  uint uVar78;
  uint uVar80;
  int iVar82;
  ulong uVar81;
  undefined1 auVar79 [16];
  uint uVar83;
  uint uVar84;
  uint uVar87;
  int iVar88;
  uint uVar89;
  int iVar91;
  undefined1 auVar85 [16];
  ulong uVar90;
  undefined1 auVar86 [16];
  long lVar92;
  ulong uVar94;
  undefined1 auVar93 [16];
  long lVar95;
  uint uVar96;
  int iVar98;
  undefined1 auVar97 [16];
  long lVar99;
  long lVar100;
  undefined1 auVar101 [16];
  long lVar102;
  long lVar103;
  long lVar104;
  undefined1 auVar105 [16];
  
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
  uVar42 = (ulong)param_3;
  lVar21 = *param_2;
  bVar1 = *(byte *)(lVar21 + 3 + uVar42);
  iVar22 = (uint)*(byte *)(lVar21 + uVar42) + (uint)bVar1;
  bVar2 = *(byte *)(lVar21 + 1 + uVar42);
  bVar3 = *(byte *)(lVar21 + 2 + uVar42);
  iVar20 = (uint)bVar2 + (uint)bVar3;
  lVar23 = (ulong)*(byte *)(lVar21 + uVar42) - (ulong)bVar1;
  lVar24 = (ulong)bVar2 - (ulong)bVar3;
  *param_1 = (iVar20 + iVar22) * 8 + -0x1000;
  param_1[2] = (iVar22 - iVar20) * 8;
  lVar21 = (lVar24 + lVar23) * 0x1151;
  param_1[1] = (int)(lVar23 * 0x187e + lVar21 + 0x200U >> 10);
  param_1[3] = (int)(lVar21 + lVar24 * -0x3b21 + 0x200U >> 10);
  lVar21 = param_2[1];
  bVar1 = *(byte *)(lVar21 + 3 + uVar42);
  iVar20 = (uint)*(byte *)(lVar21 + uVar42) + (uint)bVar1;
  bVar2 = *(byte *)(lVar21 + 1 + uVar42);
  bVar3 = *(byte *)(lVar21 + 2 + uVar42);
  iVar22 = (uint)bVar2 + (uint)bVar3;
  lVar23 = (ulong)*(byte *)(lVar21 + uVar42) - (ulong)bVar1;
  lVar24 = (ulong)bVar2 - (ulong)bVar3;
  param_1[8] = (iVar22 + iVar20) * 8 + -0x1000;
  param_1[10] = (iVar20 - iVar22) * 8;
  lVar21 = (lVar24 + lVar23) * 0x1151;
  param_1[9] = (int)(lVar23 * 0x187e + lVar21 + 0x200U >> 10);
  param_1[0xb] = (int)(lVar21 + lVar24 * -0x3b21 + 0x200U >> 10);
  lVar21 = param_2[2];
  bVar1 = *(byte *)(lVar21 + 3 + uVar42);
  iVar20 = (uint)*(byte *)(lVar21 + uVar42) + (uint)bVar1;
  bVar2 = *(byte *)(lVar21 + 1 + uVar42);
  bVar3 = *(byte *)(lVar21 + 2 + uVar42);
  iVar22 = (uint)bVar2 + (uint)bVar3;
  lVar23 = (ulong)*(byte *)(lVar21 + uVar42) - (ulong)bVar1;
  lVar24 = (ulong)bVar2 - (ulong)bVar3;
  param_1[0x10] = (iVar22 + iVar20) * 8 + -0x1000;
  param_1[0x12] = (iVar20 - iVar22) * 8;
  lVar21 = (lVar24 + lVar23) * 0x1151;
  param_1[0x11] = (int)(lVar23 * 0x187e + lVar21 + 0x200U >> 10);
  param_1[0x13] = (int)(lVar21 + lVar24 * -0x3b21 + 0x200U >> 10);
  lVar21 = param_2[3];
  bVar1 = *(byte *)(lVar21 + 3 + uVar42);
  iVar20 = (uint)*(byte *)(lVar21 + uVar42) + (uint)bVar1;
  bVar2 = *(byte *)(lVar21 + 1 + uVar42);
  bVar3 = *(byte *)(lVar21 + 2 + uVar42);
  iVar22 = (uint)bVar2 + (uint)bVar3;
  lVar23 = (ulong)*(byte *)(lVar21 + uVar42) - (ulong)bVar1;
  lVar24 = (ulong)bVar2 - (ulong)bVar3;
  param_1[0x18] = (iVar22 + iVar20) * 8 + -0x1000;
  param_1[0x1a] = (iVar20 - iVar22) * 8;
  lVar21 = (lVar24 + lVar23) * 0x1151;
  param_1[0x19] = (int)(lVar23 * 0x187e + lVar21 + 0x200U >> 10);
  param_1[0x1b] = (int)(lVar21 + lVar24 * -0x3b21 + 0x200U >> 10);
  lVar21 = param_2[4];
  bVar1 = *(byte *)(lVar21 + 3 + uVar42);
  iVar20 = (uint)*(byte *)(lVar21 + uVar42) + (uint)bVar1;
  bVar2 = *(byte *)(lVar21 + 1 + uVar42);
  bVar3 = *(byte *)(lVar21 + 2 + uVar42);
  iVar22 = (uint)bVar2 + (uint)bVar3;
  lVar23 = (ulong)*(byte *)(lVar21 + uVar42) - (ulong)bVar1;
  lVar24 = (ulong)bVar2 - (ulong)bVar3;
  param_1[0x20] = (iVar22 + iVar20) * 8 + -0x1000;
  param_1[0x22] = (iVar20 - iVar22) * 8;
  lVar21 = (lVar24 + lVar23) * 0x1151;
  param_1[0x21] = (int)(lVar23 * 0x187e + lVar21 + 0x200U >> 10);
  param_1[0x23] = (int)(lVar21 + lVar24 * -0x3b21 + 0x200U >> 10);
  lVar21 = param_2[5];
  bVar1 = *(byte *)(lVar21 + 3 + uVar42);
  iVar20 = (uint)*(byte *)(lVar21 + uVar42) + (uint)bVar1;
  bVar2 = *(byte *)(lVar21 + 1 + uVar42);
  bVar3 = *(byte *)(lVar21 + 2 + uVar42);
  iVar22 = (uint)bVar2 + (uint)bVar3;
  lVar23 = (ulong)*(byte *)(lVar21 + uVar42) - (ulong)bVar1;
  lVar24 = (ulong)bVar2 - (ulong)bVar3;
  param_1[0x28] = (iVar22 + iVar20) * 8 + -0x1000;
  param_1[0x2a] = (iVar20 - iVar22) * 8;
  lVar21 = (lVar24 + lVar23) * 0x1151;
  param_1[0x29] = (int)(lVar23 * 0x187e + lVar21 + 0x200U >> 10);
  param_1[0x2b] = (int)(lVar21 + lVar24 * -0x3b21 + 0x200U >> 10);
  lVar21 = param_2[6];
  bVar1 = *(byte *)(lVar21 + 3 + uVar42);
  iVar20 = (uint)*(byte *)(lVar21 + uVar42) + (uint)bVar1;
  bVar2 = *(byte *)(lVar21 + 1 + uVar42);
  bVar3 = *(byte *)(lVar21 + 2 + uVar42);
  iVar22 = (uint)bVar2 + (uint)bVar3;
  lVar23 = (ulong)*(byte *)(lVar21 + uVar42) - (ulong)bVar1;
  lVar24 = (ulong)bVar2 - (ulong)bVar3;
  param_1[0x30] = (iVar22 + iVar20) * 8 + -0x1000;
  param_1[0x32] = (iVar20 - iVar22) * 8;
  lVar21 = (lVar24 + lVar23) * 0x1151;
  param_1[0x31] = (int)(lVar23 * 0x187e + lVar21 + 0x200U >> 10);
  param_1[0x33] = (int)(lVar21 + lVar24 * -0x3b21 + 0x200U >> 10);
  lVar21 = param_2[7];
  bVar1 = *(byte *)(lVar21 + 3 + uVar42);
  iVar22 = (uint)*(byte *)(lVar21 + uVar42) + (uint)bVar1;
  bVar2 = *(byte *)(lVar21 + 1 + uVar42);
  bVar3 = *(byte *)(lVar21 + 2 + uVar42);
  iVar20 = (uint)bVar2 + (uint)bVar3;
  lVar24 = (ulong)*(byte *)(lVar21 + uVar42) - (ulong)bVar1;
  lVar23 = (ulong)bVar2 - (ulong)bVar3;
  param_1[0x38] = (iVar20 + iVar22) * 8 + -0x1000;
  param_1[0x3a] = (iVar22 - iVar20) * 8;
  lVar21 = (lVar23 + lVar24) * 0x1151;
  param_1[0x39] = (int)(lVar24 * 0x187e + lVar21 + 0x200U >> 10);
  param_1[0x3b] = (int)(lVar21 + lVar23 * -0x3b21 + 0x200U >> 10);
  iVar106 = param_1[0x38] + *param_1;
  auVar28._4_4_ = param_1[0x39] + param_1[1];
  iVar20 = param_1[0x3a] + param_1[2];
  iVar22 = param_1[0x3b] + param_1[3];
  auVar38._4_4_ = iVar22;
  auVar38._0_4_ = iVar20;
  auVar28._8_4_ = auVar28._4_4_;
  auVar28._12_4_ = -(uint)(auVar28._4_4_ < 0);
  lVar21 = CONCAT44(-(uint)(iVar106 < 0),iVar106);
  auVar38._8_4_ = iVar22;
  auVar38._12_4_ = -(uint)(iVar22 < 0);
  lVar23 = CONCAT44(-(uint)(iVar20 < 0),iVar20);
  iVar107 = param_1[0x30] + param_1[8];
  auVar43._4_4_ = param_1[0x31] + param_1[9];
  iVar20 = param_1[0x32] + param_1[10];
  iVar22 = param_1[0x33] + param_1[0xb];
  auVar49._4_4_ = iVar22;
  auVar49._0_4_ = iVar20;
  auVar49._8_4_ = iVar22;
  auVar49._12_4_ = -(uint)(iVar22 < 0);
  lVar76 = CONCAT44(-(uint)(iVar20 < 0),iVar20);
  auVar43._8_4_ = auVar43._4_4_;
  auVar43._12_4_ = -(uint)(auVar43._4_4_ < 0);
  lVar24 = CONCAT44(-(uint)(iVar107 < 0),iVar107);
  iVar109 = param_1[0x28] + param_1[0x10];
  auVar70._4_4_ = param_1[0x29] + param_1[0x11];
  iVar72 = param_1[0x2a] + param_1[0x12];
  iVar74 = param_1[0x2b] + param_1[0x13];
  auVar70._8_4_ = auVar70._4_4_;
  auVar70._12_4_ = -(uint)(auVar70._4_4_ < 0);
  lVar73 = CONCAT44(-(uint)(iVar109 < 0),iVar109);
  iVar108 = param_1[0x20] + param_1[0x18];
  auVar63._4_4_ = param_1[0x21] + param_1[0x19];
  iVar20 = param_1[0x22] + param_1[0x1a];
  iVar22 = param_1[0x23] + param_1[0x1b];
  auVar101._4_4_ = iVar22;
  auVar101._0_4_ = iVar20;
  auVar63._8_4_ = auVar63._4_4_;
  auVar63._12_4_ = -(uint)(auVar63._4_4_ < 0);
  lVar102 = CONCAT44(-(uint)(iVar108 < 0),iVar108);
  auVar101._8_4_ = iVar22;
  auVar101._12_4_ = -(uint)(iVar22 < 0);
  lVar92 = CONCAT44(-(uint)(iVar20 < 0),iVar20);
  lVar56 = lVar21 + lVar102 + _DAT_005dd990;
  lVar59 = auVar28._8_8_ + auVar63._8_8_ + _UNK_005dd998;
  lVar53 = lVar23 + lVar92 + _DAT_005dd990;
  lVar55 = auVar38._8_8_ + auVar101._8_8_ + _UNK_005dd998;
  uVar37 = lVar23 - lVar92;
  uVar40 = auVar38._8_8_ - auVar101._8_8_;
  uVar27 = lVar21 - lVar102;
  uVar32 = auVar28._8_8_ - auVar63._8_8_;
  lVar21 = CONCAT44(-(uint)(iVar72 < 0),iVar72);
  auVar17._8_4_ = iVar74;
  auVar17._0_8_ = lVar21;
  auVar17._12_4_ = -(uint)(iVar74 < 0);
  lVar21 = lVar21 + lVar76;
  lVar102 = auVar17._8_8_ + auVar49._8_8_;
  uVar47 = lVar76 - CONCAT44(-(uint)(iVar72 < 0),iVar72);
  uVar51 = auVar49._8_8_ - CONCAT44(-(uint)(iVar74 < 0),iVar74);
  lVar23 = lVar73 + lVar24;
  lVar76 = auVar70._8_8_ + auVar43._8_8_;
  uVar41 = lVar24 - lVar73;
  uVar44 = auVar43._8_8_ - auVar70._8_8_;
  uVar61 = *param_1 - param_1[0x38];
  iVar65 = param_1[1] - param_1[0x39];
  auVar93._4_4_ = iVar65;
  auVar93._0_4_ = uVar61;
  uVar66 = param_1[2] - param_1[0x3a];
  uVar68 = param_1[3] - param_1[0x3b];
  uVar78 = param_1[8] - param_1[0x30];
  iVar20 = param_1[9] - param_1[0x31];
  auVar29._4_4_ = iVar20;
  auVar29._0_4_ = uVar78;
  uVar80 = param_1[10] - param_1[0x32];
  iVar82 = param_1[0xb] - param_1[0x33];
  uVar83 = param_1[0x10] - param_1[0x28];
  uVar87 = param_1[0x11] - param_1[0x29];
  uVar89 = param_1[0x12] - param_1[0x2a];
  iVar91 = param_1[0x13] - param_1[0x2b];
  uVar84 = param_1[0x18] - param_1[0x20];
  iVar88 = param_1[0x19] - param_1[0x21];
  auVar85._0_8_ = CONCAT44(iVar88,uVar84);
  auVar85._8_4_ = param_1[0x1a] - param_1[0x22];
  auVar85._12_4_ = param_1[0x1b] - param_1[0x23];
  uVar69 = -(uint)((int)uVar66 < 0);
  iVar71 = -(uint)((int)uVar68 < 0);
  *param_1 = (int)((ulong)(lVar56 + lVar23) >> 2);
  param_1[1] = (int)((ulong)(lVar59 + lVar76) >> 2);
  param_1[2] = (int)((ulong)(lVar53 + lVar21) >> 2);
  param_1[3] = (int)((ulong)(lVar55 + lVar102) >> 2);
  param_1[0x20] = (int)((ulong)(lVar56 - lVar23) >> 2);
  param_1[0x21] = (int)((ulong)(lVar59 - lVar76) >> 2);
  param_1[0x22] = (int)((ulong)(lVar53 - lVar21) >> 2);
  param_1[0x23] = (int)((ulong)(lVar55 - lVar102) >> 2);
  lVar24 = (uVar27 + uVar41 & 0xffffffff) * (ulong)_DAT_005dd7e0 + _DAT_005dd9a0 +
           ((uVar27 + uVar41 >> 0x20) * (ulong)_DAT_005dd7e0 << 0x20);
  lVar76 = (uVar32 + uVar44 & 0xffffffff) * (ulong)_UNK_005dd7e8 + _UNK_005dd9a8 +
           ((uVar32 + uVar44 >> 0x20) * (ulong)_UNK_005dd7e8 << 0x20);
  lVar21 = (uVar37 + uVar47 & 0xffffffff) * (ulong)_DAT_005dd7e0 + _DAT_005dd9a0 +
           ((uVar37 + uVar47 >> 0x20) * (ulong)_DAT_005dd7e0 << 0x20);
  lVar23 = (uVar40 + uVar51 & 0xffffffff) * (ulong)_UNK_005dd7e8 + _UNK_005dd9a8 +
           ((uVar40 + uVar51 >> 0x20) * (ulong)_UNK_005dd7e8 << 0x20);
  uVar48 = (ulong)_UNK_005dd7f8;
  uVar52 = (ulong)_UNK_005dd7f8;
  uVar42 = (ulong)_DAT_005dd7f0;
  uVar62 = (ulong)_UNK_005dd7f8;
  uVar45 = (ulong)_DAT_005dd7f0;
  uVar67 = (ulong)_UNK_005dd7f8;
  param_1[0x10] =
       (int)(((uVar27 >> 0x20) * (ulong)_DAT_005dd7f0 << 0x20) +
             (uVar27 & 0xffffffff) * (ulong)_DAT_005dd7f0 + lVar24 >> 0xf);
  param_1[0x11] =
       (int)(((uVar32 >> 0x20) * uVar52 << 0x20) + (uVar32 & 0xffffffff) * uVar48 + lVar76 >> 0xf);
  param_1[0x12] =
       (int)(((uVar37 >> 0x20) * uVar45 << 0x20) + (uVar37 & 0xffffffff) * uVar42 + lVar21 >> 0xf);
  param_1[0x13] =
       (int)(((uVar40 >> 0x20) * uVar67 << 0x20) + (uVar40 & 0xffffffff) * uVar62 + lVar23 >> 0xf);
  uVar4 = _UNK_005d9aa8;
  uVar40 = _DAT_005d9aa0;
  uVar52 = _UNK_005d9aa8 & 0xffffffff;
  uVar62 = (ulong)_UNK_005dd808;
  uVar67 = (ulong)_UNK_005dd808;
  uVar42 = _DAT_005d9aa0 & 0xffffffff;
  uVar27 = _UNK_005d9aa8 & 0xffffffff;
  uVar45 = (ulong)_DAT_005dd800;
  uVar32 = (ulong)_UNK_005dd808;
  auVar93._8_4_ = iVar65;
  auVar93._12_4_ = -(uint)(iVar65 < 0);
  uVar94 = auVar93._8_8_;
  lVar92 = CONCAT44(-(uint)((int)uVar61 < 0),uVar61);
  uVar48 = (ulong)_DAT_005dd800;
  uVar37 = (ulong)_UNK_005dd808;
  auVar79._4_4_ = iVar82;
  auVar79._0_4_ = uVar80;
  uVar35 = -(uint)((int)uVar80 < 0);
  iVar72 = -(uint)(iVar82 < 0);
  auVar79._8_4_ = iVar82;
  auVar79._12_4_ = iVar72;
  uVar81 = auVar79._8_8_;
  uVar36 = -(uint)((int)uVar78 < 0);
  iVar74 = -(uint)(iVar20 < 0);
  auVar29._8_4_ = iVar20;
  auVar29._12_4_ = iVar74;
  uVar33 = auVar29._8_8_;
  auVar19._8_4_ = uVar89;
  auVar19._0_8_ = CONCAT44(uVar87,uVar83);
  auVar19._12_4_ = iVar91;
  auVar30._0_8_ = auVar19._8_8_;
  uVar46 = -(uint)((int)uVar89 < 0);
  iVar50 = -(uint)(iVar91 < 0);
  auVar30._8_4_ = iVar91;
  auVar30._12_4_ = iVar50;
  uVar34 = auVar30._8_8_;
  param_1[0x30] =
       (int)((uVar41 & 0xffffffff) * (ulong)_DAT_005dd800 +
             ((uVar41 >> 0x20) * (ulong)_DAT_005dd800 +
              (uVar41 & 0xffffffff) * (_DAT_005d9aa0 & 0xffffffff) << 0x20) + lVar24 >> 0xf);
  param_1[0x31] =
       (int)((uVar44 & 0xffffffff) * uVar67 +
             ((uVar44 >> 0x20) * uVar62 + (uVar44 & 0xffffffff) * uVar52 << 0x20) + lVar76 >> 0xf);
  param_1[0x32] =
       (int)((uVar47 & 0xffffffff) * uVar48 +
             ((uVar47 >> 0x20) * uVar45 + (uVar47 & 0xffffffff) * uVar42 << 0x20) + lVar21 >> 0xf);
  param_1[0x33] =
       (int)((uVar51 & 0xffffffff) * uVar37 +
             ((uVar51 >> 0x20) * uVar32 + (uVar51 & 0xffffffff) * uVar27 << 0x20) + lVar23 >> 0xf);
  uVar25 = -(uint)((int)uVar83 < 0);
  iVar20 = -(uint)((int)uVar87 < 0);
  auVar64._8_4_ = uVar87;
  auVar64._0_8_ = CONCAT44(uVar87,uVar83);
  auVar64._12_4_ = iVar20;
  auVar57._0_8_ = auVar85._8_8_;
  uVar96 = -(uint)(auVar85._8_4_ < 0);
  iVar98 = -(uint)(auVar85._12_4_ < 0);
  auVar75._4_4_ = iVar98;
  auVar75._0_4_ = uVar96;
  auVar57._8_4_ = auVar85._12_4_;
  auVar57._12_4_ = iVar98;
  uVar60 = auVar57._8_8_;
  uVar26 = -(uint)((int)uVar84 < 0);
  iVar22 = -(uint)(iVar88 < 0);
  auVar86._8_4_ = iVar88;
  auVar86._0_8_ = auVar85._0_8_;
  auVar86._12_4_ = iVar22;
  uVar90 = auVar86._8_8_;
  uVar62 = CONCAT44(uVar25,uVar83) + lVar92;
  uVar67 = auVar64._8_8_ + uVar94;
  uVar27 = CONCAT44(uVar46,uVar89) + CONCAT44(uVar69,uVar66);
  uVar32 = uVar34 + CONCAT44(iVar71,uVar68);
  uVar48 = CONCAT44(uVar26,uVar84) + CONCAT44(uVar36,uVar78);
  uVar52 = uVar90 + uVar33;
  uVar42 = CONCAT44(uVar96,auVar85._8_4_) + CONCAT44(uVar35,uVar80);
  uVar45 = uVar60 + uVar81;
  lVar21 = (uVar42 + uVar27 & 0xffffffff) * (ulong)_DAT_005dd810 + _DAT_005dd9a0 +
           ((uVar42 + uVar27 >> 0x20) * (ulong)_DAT_005dd810 << 0x20);
  lVar23 = (uVar45 + uVar32 & 0xffffffff) * (ulong)_UNK_005dd818 + _UNK_005dd9a8 +
           ((uVar45 + uVar32 >> 0x20) * (ulong)_UNK_005dd818 << 0x20);
  lVar24 = (uVar48 + uVar62 & 0xffffffff) * (ulong)_DAT_005dd810 + _DAT_005dd9a0 +
           ((uVar48 + uVar62 >> 0x20) * (ulong)_DAT_005dd810 << 0x20);
  lVar76 = (uVar52 + uVar67 & 0xffffffff) * (ulong)_UNK_005dd818 + _UNK_005dd9a8 +
           ((uVar52 + uVar67 >> 0x20) * (ulong)_UNK_005dd818 << 0x20);
  lVar56 = (uVar62 & 0xffffffff) * (ulong)_DAT_005dd820 +
           ((uVar62 >> 0x20) * (ulong)_DAT_005dd820 + (uVar62 & 0xffffffff) * (uVar40 & 0xffffffff)
           << 0x20) + lVar24;
  lVar59 = (uVar67 & 0xffffffff) * (ulong)_UNK_005dd828 +
           ((uVar67 >> 0x20) * (ulong)_UNK_005dd828 + (uVar67 & 0xffffffff) * (uVar4 & 0xffffffff)
           << 0x20) + lVar76;
  lVar24 = (uVar48 & 0xffffffff) * (ulong)_DAT_005dd830 +
           ((uVar48 >> 0x20) * (ulong)_DAT_005dd830 + (uVar48 & 0xffffffff) * (uVar40 & 0xffffffff)
           << 0x20) + lVar24;
  lVar76 = (uVar52 & 0xffffffff) * (ulong)_UNK_005dd838 +
           ((uVar52 >> 0x20) * (ulong)_UNK_005dd838 + (uVar52 & 0xffffffff) * (uVar4 & 0xffffffff)
           << 0x20) + lVar76;
  lVar102 = (uVar27 & 0xffffffff) * (ulong)_DAT_005dd820 +
            ((uVar27 >> 0x20) * (ulong)_DAT_005dd820 + (uVar27 & 0xffffffff) * (uVar40 & 0xffffffff)
            << 0x20) + lVar21;
  lVar73 = (uVar32 & 0xffffffff) * (ulong)_UNK_005dd828 +
           ((uVar32 >> 0x20) * (ulong)_UNK_005dd828 + (uVar32 & 0xffffffff) * (uVar4 & 0xffffffff)
           << 0x20) + lVar23;
  lVar21 = (uVar42 & 0xffffffff) * (ulong)_DAT_005dd830 +
           ((uVar42 >> 0x20) * (ulong)_DAT_005dd830 + (uVar42 & 0xffffffff) * (uVar40 & 0xffffffff)
           << 0x20) + lVar21;
  lVar23 = (uVar45 & 0xffffffff) * (ulong)_UNK_005dd838 +
           ((uVar45 >> 0x20) * (ulong)_UNK_005dd838 + (uVar45 & 0xffffffff) * (uVar4 & 0xffffffff)
           << 0x20) + lVar23;
  uVar42 = CONCAT44(uVar96,auVar85._8_4_) + CONCAT44(uVar69,uVar66);
  uVar45 = uVar60 + CONCAT44(iVar71,uVar68);
  lVar53 = (uVar42 & 0xffffffff) * (ulong)_DAT_005dd840 +
           ((uVar42 >> 0x20) * (ulong)_DAT_005dd840 + (uVar42 & 0xffffffff) * (uVar40 & 0xffffffff)
           << 0x20);
  lVar55 = (uVar45 & 0xffffffff) * (ulong)_UNK_005dd848 +
           ((uVar45 >> 0x20) * (ulong)_UNK_005dd848 + (uVar45 & 0xffffffff) * (uVar4 & 0xffffffff)
           << 0x20);
  uVar42 = CONCAT44(uVar26,uVar84) + lVar92;
  uVar45 = uVar90 + uVar94;
  lVar99 = (uVar42 & 0xffffffff) * (ulong)_DAT_005dd840 +
           ((uVar42 >> 0x20) * (ulong)_DAT_005dd840 + (uVar42 & 0xffffffff) * (uVar40 & 0xffffffff)
           << 0x20);
  lVar103 = (uVar45 & 0xffffffff) * (ulong)_UNK_005dd848 +
            ((uVar45 >> 0x20) * (ulong)_UNK_005dd848 + (uVar45 & 0xffffffff) * (uVar4 & 0xffffffff)
            << 0x20);
  uVar44 = (ulong)_UNK_005dd858;
  auVar31._4_4_ = iVar71;
  auVar31._0_4_ = uVar69;
  auVar31._8_4_ = iVar71;
  auVar31._12_4_ = -(uint)((int)uVar68 < SUB164((undefined1  [16])0x0,0xc));
  uVar47 = (ulong)_UNK_005dd858;
  uVar51 = (ulong)_UNK_005dd858;
  uVar18 = -(uint)(iVar65 < 0) * _UNK_005dd858;
  uVar42 = (ulong)_DAT_005dd860;
  uVar5 = (ulong)_UNK_005dd868;
  auVar75._8_4_ = iVar98;
  auVar75._12_4_ = -(uint)(auVar85._12_4_ < SUB164((undefined1  [16])0x0,0xc));
  uVar45 = (ulong)_DAT_005dd860;
  uVar6 = (ulong)_UNK_005dd868;
  uVar48 = (ulong)_DAT_005dd860;
  uVar7 = (ulong)_UNK_005dd868;
  auVar97._4_4_ = iVar22;
  auVar97._0_4_ = uVar26;
  auVar97._8_4_ = iVar22;
  auVar97._12_4_ = -(uint)(auVar85._12_4_ < SUB164((undefined1  [16])0x0,0xc));
  uVar52 = (ulong)_DAT_005dd860;
  uVar8 = (ulong)_UNK_005dd868;
  uVar62 = CONCAT44(uVar46,uVar89) + CONCAT44(uVar35,uVar80);
  uVar67 = uVar34 + uVar81;
  lVar92 = (uVar62 & 0xffffffff) * (ulong)_DAT_005dd870 +
           ((uVar62 >> 0x20) * (ulong)_DAT_005dd870 + (uVar62 & 0xffffffff) * (uVar40 & 0xffffffff)
           << 0x20);
  lVar95 = (uVar67 & 0xffffffff) * (ulong)_UNK_005dd878 +
           ((uVar67 >> 0x20) * (ulong)_UNK_005dd878 + (uVar67 & 0xffffffff) * (uVar4 & 0xffffffff)
           << 0x20);
  uVar62 = CONCAT44(uVar25,uVar83) + CONCAT44(uVar36,uVar78);
  uVar67 = CONCAT44(iVar20,uVar87) + uVar33;
  lVar100 = (uVar62 & 0xffffffff) * (ulong)_DAT_005dd870 +
            ((uVar62 >> 0x20) * (ulong)_DAT_005dd870 + (uVar40 & 0xffffffff) * (uVar62 & 0xffffffff)
            << 0x20);
  lVar104 = (uVar67 & 0xffffffff) * (ulong)_UNK_005dd878 +
            ((uVar67 >> 0x20) * (ulong)_UNK_005dd878 + (uVar4 & 0xffffffff) * (uVar67 & 0xffffffff)
            << 0x20);
  uVar62 = (ulong)_DAT_005dd880;
  uVar9 = (ulong)_UNK_005dd888;
  auVar77._4_4_ = iVar72;
  auVar77._0_4_ = uVar35;
  auVar77._8_4_ = iVar72;
  auVar77._12_4_ = -(uint)(iVar82 < SUB164((undefined1  [16])0x0,0xc));
  uVar67 = (ulong)_DAT_005dd880;
  uVar10 = (ulong)_UNK_005dd888;
  uVar27 = (ulong)_DAT_005dd880;
  uVar11 = (ulong)_UNK_005dd888;
  auVar54._4_4_ = iVar74;
  auVar54._0_4_ = uVar36;
  auVar54._8_4_ = iVar74;
  auVar54._12_4_ = -(uint)(iVar82 < SUB164((undefined1  [16])0x0,0xc));
  uVar32 = (ulong)_DAT_005dd880;
  uVar12 = (ulong)_UNK_005dd888;
  uVar37 = (ulong)_DAT_005dd890;
  uVar13 = (ulong)_UNK_005dd898;
  auVar39._4_4_ = iVar50;
  auVar39._0_4_ = uVar46;
  auVar39._8_4_ = iVar50;
  auVar39._12_4_ = -(uint)(iVar91 < SUB164((undefined1  [16])0x0,0xc));
  uVar40 = (ulong)_DAT_005dd890;
  uVar14 = (ulong)_UNK_005dd898;
  uVar4 = (ulong)_DAT_005dd890;
  uVar15 = (ulong)_UNK_005dd898;
  auVar58._4_4_ = iVar20;
  auVar58._0_4_ = uVar25;
  auVar58._8_4_ = iVar20;
  auVar58._12_4_ = -(uint)(iVar91 < SUB164((undefined1  [16])0x0,0xc));
  uVar41 = (ulong)_DAT_005dd890;
  uVar16 = (ulong)_UNK_005dd898;
  auVar105._0_8_ =
       ((ulong)uVar69 * (ulong)_DAT_005dd850 << 0x20) + (ulong)uVar66 * (ulong)_DAT_005dd850 +
       lVar53 + lVar102 >> 0xf;
  param_1[8] = (int)(((ulong)(-(uint)((int)uVar61 < 0) * _DAT_005dd850) << 0x20) +
                     (ulong)uVar61 * (ulong)_DAT_005dd850 + lVar99 + lVar56 >> 0xf);
  param_1[9] = (int)(((ulong)uVar18 << 0x20) + (uVar94 & 0xffffffff) * uVar51 + lVar103 + lVar59 >>
                    0xf);
  param_1[10] = (int)auVar105._0_8_;
  param_1[0xb] = (int)(((auVar31._8_8_ & 0xffffffff) * uVar47 << 0x20) + uVar68 * uVar44 + lVar55 +
                       lVar73 >> 0xf);
  param_1[0x18] = (int)((uVar36 * uVar32 << 0x20) + uVar78 * uVar27 + lVar100 + lVar24 >> 0xf);
  param_1[0x19] =
       (int)(((auVar54._8_8_ & 0xffffffff) * uVar12 << 0x20) + (uVar33 & 0xffffffff) * uVar11 +
             lVar104 + lVar76 >> 0xf);
  param_1[0x1a] = (int)((uVar35 * uVar67 << 0x20) + uVar80 * uVar62 + lVar92 + lVar21 >> 0xf);
  param_1[0x1b] =
       (int)(((auVar77._8_8_ & 0xffffffff) * uVar10 << 0x20) + (uVar81 & 0xffffffff) * uVar9 +
             lVar95 + lVar23 >> 0xf);
  auVar105._8_8_ = (uVar46 * uVar40 << 0x20) + uVar89 * uVar37 + lVar92 + lVar102 >> 0xf;
  param_1[0x28] = (int)((uVar25 * uVar41 << 0x20) + uVar83 * uVar4 + lVar100 + lVar56 >> 0xf);
  param_1[0x29] =
       (int)(((auVar58._8_8_ & 0xffffffff) * uVar16 << 0x20) + uVar87 * uVar15 + lVar104 + lVar59 >>
            0xf);
  param_1[0x2a] = (int)auVar105._8_8_;
  param_1[0x2b] =
       (int)(((auVar39._8_8_ & 0xffffffff) * uVar14 << 0x20) + (uVar34 & 0xffffffff) * uVar13 +
             lVar95 + lVar73 >> 0xf);
  param_1[0x38] = (int)((uVar26 * uVar52 << 0x20) + uVar84 * uVar48 + lVar99 + lVar24 >> 0xf);
  param_1[0x39] =
       (int)(((auVar97._8_8_ & 0xffffffff) * uVar8 << 0x20) + (uVar90 & 0xffffffff) * uVar7 +
             lVar103 + lVar76 >> 0xf);
  param_1[0x3a] =
       (int)((uVar96 * uVar45 << 0x20) + (auVar57._0_8_ & 0xffffffff) * uVar42 + lVar53 + lVar21 >>
            0xf);
  param_1[0x3b] =
       (int)(((auVar75._8_8_ & 0xffffffff) * uVar6 << 0x20) + (uVar60 & 0xffffffff) * uVar5 + lVar55
             + lVar23 >> 0xf);
  return auVar105;
}


