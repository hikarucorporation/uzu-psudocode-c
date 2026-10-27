// Function : jpeg_fdct_islow
// Namespace: juce:jpeglibNamespace
// Entry    : 00371920
// Prototype: ulong jpeg_fdct_islow(int * param_1, long param_2, ulong param_3)
// Body     : 00371920 - 003729e6


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl */
/* juce::jpeglibNamespace::jpeg_fdct_islow(int*, unsigned char**, unsigned int) */

ulong __cdecl juce::jpeglibNamespace::jpeg_fdct_islow(int *param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
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
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  int iVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  int iVar26;
  long lVar27;
  int iVar130;
  uint uVar28;
  ulong uVar29;
  ulong uVar30;
  undefined1 auVar31 [16];
  ulong uVar34;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  int iVar131;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  int iVar43;
  undefined1 auVar39 [16];
  ulong uVar45;
  undefined1 auVar40 [16];
  int iVar44;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  int iVar132;
  int iVar133;
  ulong uVar46;
  undefined1 auVar47 [16];
  ulong uVar51;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  ulong uVar52;
  undefined1 auVar50 [16];
  uint uVar53;
  int iVar134;
  ulong uVar54;
  undefined1 auVar55 [16];
  int iVar58;
  ulong uVar59;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  int iVar135;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  ulong uVar63;
  undefined1 auVar64 [16];
  ulong uVar68;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar69 [16];
  ulong uVar73;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  int iVar136;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  uint uVar137;
  ulong uVar81;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  uint uVar82;
  uint uVar138;
  ulong uVar83;
  uint uVar88;
  uint uVar89;
  uint uVar90;
  int iVar93;
  int iVar94;
  ulong uVar91;
  undefined1 auVar84 [16];
  ulong uVar92;
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  ulong uVar95;
  ulong uVar100;
  undefined1 auVar96 [16];
  ulong uVar101;
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar102 [16];
  ulong uVar104;
  undefined1 auVar103 [16];
  long lVar105;
  long lVar106;
  long lVar107;
  long lVar108;
  long lVar109;
  uint uVar110;
  long lVar111;
  int iVar115;
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  long lVar116;
  undefined1 auVar114 [16];
  ulong uVar117;
  undefined1 auVar118 [16];
  ulong uVar121;
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  uint uVar122;
  int iVar128;
  undefined1 auVar123 [16];
  ulong uVar129;
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  int local_118;
  int iStack_114;
  int iStack_110;
  int iStack_10c;
  undefined8 local_e8;
  int local_d8;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 local_78;
  
  uVar63 = param_3 & 0xffffffff;
  lVar18 = 0;
  do {
    lVar22 = *(long *)(param_2 + lVar18);
    uVar92 = (ulong)*(byte *)(lVar22 + 7 + uVar63);
    lVar20 = uVar92 + *(byte *)(lVar22 + uVar63);
    uVar101 = (ulong)*(byte *)(lVar22 + 1 + uVar63);
    uVar46 = (ulong)*(byte *)(lVar22 + 6 + uVar63);
    lVar27 = uVar46 + uVar101;
    uVar95 = (ulong)*(byte *)(lVar22 + 2 + uVar63);
    uVar51 = (ulong)*(byte *)(lVar22 + 5 + uVar63);
    lVar19 = uVar51 + uVar95;
    uVar68 = (ulong)*(byte *)(lVar22 + 3 + uVar63);
    uVar83 = (ulong)*(byte *)(lVar22 + 4 + uVar63);
    lVar17 = uVar83 + uVar68;
    iVar26 = (int)lVar17 + (int)lVar20;
    lVar20 = lVar20 - lVar17;
    iVar21 = (int)lVar27 + (int)lVar19;
    lVar27 = lVar27 - lVar19;
    lVar25 = *(byte *)(lVar22 + uVar63) - uVar92;
    lVar24 = uVar101 - uVar46;
    lVar23 = uVar95 - uVar51;
    lVar17 = uVar68 - uVar83;
    param_1[lVar18] = (iVar26 + iVar21) * 4 + -0x1000;
    param_1[lVar18 + 4] = (iVar26 - iVar21) * 4;
    lVar19 = (lVar20 + lVar27) * 0x1151;
    param_1[lVar18 + 2] = (int)(lVar20 * 0x187e + lVar19 + 0x400U >> 0xb);
    param_1[lVar18 + 6] = (int)(lVar19 + lVar27 * -0x3b21 + 0x400U >> 0xb);
    lVar27 = (lVar17 + lVar24 + lVar23 + lVar25) * 0x25a1;
    lVar20 = (lVar23 + lVar25) * -0xc7c + lVar27 + 0x400;
    lVar22 = (lVar17 + lVar24) * -0x3ec5 + lVar27 + 0x400;
    lVar27 = (lVar17 + lVar25) * -0x1ccd;
    lVar19 = (lVar23 + lVar24) * -0x5203;
    param_1[lVar18 + 1] = (int)((ulong)(lVar25 * 0x300b + lVar27 + lVar20) >> 0xb);
    param_1[lVar18 + 3] = (int)((ulong)(lVar24 * 0x6254 + lVar19 + lVar22) >> 0xb);
    param_1[lVar18 + 5] = (int)((ulong)(lVar23 * 0x41b3 + lVar19 + lVar20) >> 0xb);
    param_1[lVar18 + 7] = (int)((ulong)(lVar17 * 0x98e + lVar27 + lVar22) >> 0xb);
    lVar18 = lVar18 + 8;
  } while (lVar18 != 0x40);
  iVar132 = param_1[0x38] + *param_1;
  auVar47._4_4_ = param_1[0x39] + param_1[1];
  iVar21 = param_1[0x3a] + param_1[2];
  iVar26 = param_1[0x3b] + param_1[3];
  auVar55._4_4_ = iVar26;
  auVar55._0_4_ = iVar21;
  auVar47._8_4_ = auVar47._4_4_;
  auVar47._12_4_ = -(uint)(auVar47._4_4_ < 0);
  lVar27 = CONCAT44(-(uint)(iVar132 < 0),iVar132);
  auVar55._8_4_ = iVar26;
  auVar55._12_4_ = -(uint)(iVar26 < 0);
  lVar17 = CONCAT44(-(uint)(iVar21 < 0),iVar21);
  iVar130 = param_1[0x30] + param_1[8];
  auVar31._4_4_ = param_1[0x31] + param_1[9];
  iVar21 = param_1[0x32] + param_1[10];
  iVar26 = param_1[0x33] + param_1[0xb];
  auVar118._4_4_ = iVar26;
  auVar118._0_4_ = iVar21;
  auVar118._8_4_ = iVar26;
  auVar118._12_4_ = -(uint)(iVar26 < 0);
  lVar22 = CONCAT44(-(uint)(iVar21 < 0),iVar21);
  auVar31._8_4_ = auVar31._4_4_;
  auVar31._12_4_ = -(uint)(auVar31._4_4_ < 0);
  lVar18 = CONCAT44(-(uint)(iVar130 < 0),iVar130);
  iVar21 = param_1[0x28] + param_1[0x10];
  iVar26 = param_1[0x29] + param_1[0x11];
  auVar74._0_8_ = CONCAT44(iVar26,iVar21);
  auVar74._8_4_ = param_1[0x2a] + param_1[0x12];
  auVar74._12_4_ = param_1[0x2b] + param_1[0x13];
  auVar64._0_8_ = auVar74._8_8_;
  auVar64._8_4_ = auVar74._12_4_;
  auVar64._12_4_ = -(uint)(auVar74._12_4_ < 0);
  lVar19 = CONCAT44(-(uint)(auVar74._8_4_ < 0),auVar74._8_4_);
  auVar75._8_4_ = iVar26;
  auVar75._0_8_ = auVar74._0_8_;
  auVar75._12_4_ = -(uint)(iVar26 < 0);
  lVar24 = CONCAT44(-(uint)(iVar21 < 0),iVar21);
  iVar131 = param_1[0x20] + param_1[0x18];
  auVar39._4_4_ = param_1[0x21] + param_1[0x19];
  iVar21 = param_1[0x22] + param_1[0x1a];
  iVar26 = param_1[0x23] + param_1[0x1b];
  auVar69._4_4_ = iVar26;
  auVar69._0_4_ = iVar21;
  auVar39._8_4_ = auVar39._4_4_;
  auVar39._12_4_ = -(uint)(auVar39._4_4_ < 0);
  lVar20 = CONCAT44(-(uint)(iVar131 < 0),iVar131);
  auVar69._8_4_ = iVar26;
  auVar69._12_4_ = -(uint)(iVar26 < 0);
  lVar23 = CONCAT44(-(uint)(iVar21 < 0),iVar21);
  uVar54 = lVar17 - lVar23;
  uVar59 = auVar55._8_8_ - auVar69._8_8_;
  uVar46 = lVar27 - lVar20;
  uVar51 = auVar47._8_8_ - auVar39._8_8_;
  lVar25 = lVar19 + lVar22;
  lVar106 = auVar64._8_8_ + auVar118._8_8_;
  uVar117 = lVar22 - lVar19;
  uVar121 = auVar118._8_8_ - auVar64._8_8_;
  lVar19 = lVar24 + lVar18;
  lVar22 = auVar75._8_8_ + auVar31._8_8_;
  uVar29 = lVar18 - lVar24;
  uVar34 = auVar31._8_8_ - auVar75._8_8_;
  uVar110 = *param_1 - param_1[0x38];
  iVar115 = param_1[1] - param_1[0x39];
  auVar112._0_8_ = CONCAT44(iVar115,uVar110);
  auVar112._8_4_ = param_1[2] - param_1[0x3a];
  auVar112._12_4_ = param_1[3] - param_1[0x3b];
  local_118 = (int)*(undefined8 *)(param_1 + 4);
  iStack_114 = (int)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20);
  iStack_110 = (int)*(undefined8 *)(param_1 + 6);
  iStack_10c = (int)((ulong)*(undefined8 *)(param_1 + 6) >> 0x20);
  uVar82 = param_1[8] - param_1[0x30];
  uVar88 = param_1[9] - param_1[0x31];
  uVar89 = param_1[10] - param_1[0x32];
  iVar93 = param_1[0xb] - param_1[0x33];
  lVar27 = lVar27 + lVar20 + _DAT_005dd990;
  lVar24 = auVar47._8_8_ + auVar39._8_8_ + _UNK_005dd998;
  lVar18 = lVar17 + lVar23 + _DAT_005dd990;
  lVar20 = auVar55._8_8_ + auVar69._8_8_ + _UNK_005dd998;
  uVar138 = param_1[0x10] - param_1[0x28];
  auVar84._4_4_ = param_1[0x11] - param_1[0x29];
  uVar90 = param_1[0x12] - param_1[0x2a];
  iVar94 = param_1[0x13] - param_1[0x2b];
  uVar122 = param_1[0x18] - param_1[0x20];
  iVar128 = param_1[0x19] - param_1[0x21];
  auVar123._0_8_ = CONCAT44(iVar128,uVar122);
  auVar123._8_4_ = param_1[0x1a] - param_1[0x22];
  auVar123._12_4_ = param_1[0x1b] - param_1[0x23];
  *param_1 = (int)((ulong)(lVar27 + lVar19) >> 2);
  param_1[1] = (int)((ulong)(lVar24 + lVar22) >> 2);
  param_1[2] = (int)((ulong)(lVar18 + lVar25) >> 2);
  param_1[3] = (int)((ulong)(lVar20 + lVar106) >> 2);
  param_1[0x20] = (int)((ulong)(lVar27 - lVar19) >> 2);
  param_1[0x21] = (int)((ulong)(lVar24 - lVar22) >> 2);
  param_1[0x22] = (int)((ulong)(lVar18 - lVar25) >> 2);
  param_1[0x23] = (int)((ulong)(lVar20 - lVar106) >> 2);
  lVar20 = _UNK_005dd9a8;
  lVar18 = _DAT_005dd9a0;
  lVar27 = (uVar46 + uVar29 & 0xffffffff) * (ulong)_DAT_005dd7e0 + _DAT_005dd9a0 +
           ((uVar46 + uVar29 >> 0x20) * (ulong)_DAT_005dd7e0 << 0x20);
  lVar17 = (uVar51 + uVar34 & 0xffffffff) * (ulong)_UNK_005dd7e8 + _UNK_005dd9a8 +
           ((uVar51 + uVar34 >> 0x20) * (ulong)_UNK_005dd7e8 << 0x20);
  lVar19 = (uVar54 + uVar117 & 0xffffffff) * (ulong)_DAT_005dd7e0 + _DAT_005dd9a0 +
           ((uVar54 + uVar117 >> 0x20) * (ulong)_DAT_005dd7e0 << 0x20);
  lVar22 = (uVar59 + uVar121 & 0xffffffff) * (ulong)_UNK_005dd7e8 + _UNK_005dd9a8 +
           ((uVar59 + uVar121 >> 0x20) * (ulong)_UNK_005dd7e8 << 0x20);
  uVar83 = (ulong)_UNK_005dd7f8;
  uVar92 = (ulong)_UNK_005dd7f8;
  uVar63 = (ulong)_DAT_005dd7f0;
  uVar95 = (ulong)_UNK_005dd7f8;
  uVar68 = (ulong)_DAT_005dd7f0;
  uVar101 = (ulong)_UNK_005dd7f8;
  param_1[0x10] =
       (int)(((uVar46 >> 0x20) * (ulong)_DAT_005dd7f0 << 0x20) +
             (uVar46 & 0xffffffff) * (ulong)_DAT_005dd7f0 + lVar27 >> 0xf);
  param_1[0x11] =
       (int)(((uVar51 >> 0x20) * uVar92 << 0x20) + (uVar51 & 0xffffffff) * uVar83 + lVar17 >> 0xf);
  param_1[0x12] =
       (int)(((uVar54 >> 0x20) * uVar68 << 0x20) + (uVar54 & 0xffffffff) * uVar63 + lVar19 >> 0xf);
  param_1[0x13] =
       (int)(((uVar59 >> 0x20) * uVar101 << 0x20) + (uVar59 & 0xffffffff) * uVar95 + lVar22 >> 0xf);
  uVar92 = (ulong)_UNK_005d9aa8;
  uVar95 = (ulong)_UNK_005dd808;
  uVar101 = (ulong)_UNK_005dd808;
  uVar63 = (ulong)_DAT_005d9aa0;
  uVar46 = (ulong)_UNK_005d9aa8;
  uVar68 = (ulong)_DAT_005dd800;
  uVar51 = (ulong)_UNK_005dd808;
  uVar83 = (ulong)_DAT_005dd800;
  uVar54 = (ulong)_UNK_005dd808;
  auVar70._0_8_ = auVar112._8_8_;
  uVar35 = -(uint)(auVar112._8_4_ < 0);
  iVar26 = -(uint)(auVar112._12_4_ < 0);
  auVar70._8_4_ = auVar112._12_4_;
  auVar70._12_4_ = iVar26;
  uVar73 = auVar70._8_8_;
  auVar16._8_4_ = uVar89;
  auVar16._0_8_ = CONCAT44(uVar88,uVar82);
  auVar16._12_4_ = iVar93;
  auVar40._0_8_ = auVar16._8_8_;
  param_1[0x30] =
       (int)((uVar29 & 0xffffffff) * (ulong)_DAT_005dd800 +
             ((uVar29 >> 0x20) * (ulong)_DAT_005dd800 + (uVar29 & 0xffffffff) * (ulong)_DAT_005d9aa0
             << 0x20) + lVar27 >> 0xf);
  param_1[0x31] =
       (int)((uVar34 & 0xffffffff) * uVar101 +
             ((uVar34 >> 0x20) * uVar95 + (uVar34 & 0xffffffff) * uVar92 << 0x20) + lVar17 >> 0xf);
  param_1[0x32] =
       (int)((uVar117 & 0xffffffff) * uVar83 +
             ((uVar117 >> 0x20) * uVar68 + (uVar117 & 0xffffffff) * uVar63 << 0x20) + lVar19 >> 0xf)
  ;
  param_1[0x33] =
       (int)((uVar121 & 0xffffffff) * uVar54 +
             ((uVar121 >> 0x20) * uVar51 + (uVar121 & 0xffffffff) * uVar46 << 0x20) + lVar22 >> 0xf)
  ;
  uVar28 = -(uint)((int)uVar89 < 0);
  iVar21 = -(uint)(iVar93 < 0);
  local_78 = CONCAT44(iVar21,uVar28);
  auVar40._8_4_ = iVar93;
  auVar40._12_4_ = iVar21;
  uVar45 = auVar40._8_8_;
  auVar96._4_4_ = iVar94;
  auVar96._0_4_ = uVar90;
  uVar36 = -(uint)((int)uVar90 < 0);
  iVar43 = -(uint)(iVar94 < 0);
  auVar96._8_4_ = iVar94;
  auVar96._12_4_ = iVar43;
  uVar100 = auVar96._8_8_;
  auVar113._0_8_ = auVar123._8_8_;
  uVar37 = -(uint)(auVar123._8_4_ < 0);
  iVar44 = -(uint)(auVar123._12_4_ < 0);
  auVar113._8_4_ = auVar123._12_4_;
  auVar113._12_4_ = iVar44;
  uVar104 = auVar113._8_8_;
  uVar95 = CONCAT44(uVar36,uVar90) + CONCAT44(uVar35,auVar112._8_4_);
  uVar101 = uVar100 + uVar73;
  uVar46 = CONCAT44(uVar37,auVar123._8_4_) + CONCAT44(uVar28,uVar89);
  uVar51 = uVar104 + uVar45;
  lVar106 = (uVar46 + uVar95 & 0xffffffff) * (ulong)_DAT_005dd810 + lVar18 +
            ((uVar46 + uVar95 >> 0x20) * (ulong)_DAT_005dd810 << 0x20);
  lVar107 = (uVar51 + uVar101 & 0xffffffff) * (ulong)_UNK_005dd818 + lVar20 +
            ((uVar51 + uVar101 >> 0x20) * (ulong)_UNK_005dd818 << 0x20);
  auVar60._0_4_ = -(uint)((int)uVar110 < 0);
  auVar60._4_4_ = -(uint)(iVar115 < 0);
  auVar60._12_4_ = -(uint)(auVar112._12_4_ < SUB164((undefined1  [16])0x0,0xc));
  auVar78._8_4_ = iVar115;
  auVar78._0_8_ = auVar112._0_8_;
  auVar78._12_4_ = auVar60._4_4_;
  uVar81 = auVar78._8_8_;
  lVar19 = CONCAT44(auVar60._0_4_,uVar110);
  uVar38 = -(uint)((int)uVar82 < 0);
  iVar115 = -(uint)((int)uVar88 < 0);
  auVar41._12_4_ = -(uint)(iVar93 < SUB164((undefined1  [16])0x0,0xc));
  local_98 = CONCAT44(iVar115,uVar38);
  auVar32._8_4_ = uVar88;
  auVar32._0_8_ = CONCAT44(uVar88,uVar82);
  auVar32._12_4_ = iVar115;
  uVar53 = -(uint)((int)uVar138 < 0);
  iVar58 = -(uint)(auVar84._4_4_ < 0);
  local_88 = CONCAT44(iVar58,uVar53);
  auVar84._8_4_ = auVar84._4_4_;
  auVar84._12_4_ = iVar58;
  uVar91 = auVar84._8_8_;
  auVar119._0_4_ = -(uint)((int)uVar122 < 0);
  auVar119._4_4_ = -(uint)(iVar128 < 0);
  auVar119._12_4_ = -(uint)(auVar123._12_4_ < SUB164((undefined1  [16])0x0,0xc));
  auVar124._8_4_ = iVar128;
  auVar124._0_8_ = auVar123._0_8_;
  auVar124._12_4_ = auVar119._4_4_;
  uVar129 = auVar124._8_8_;
  lVar105 = CONCAT44(auVar119._0_4_,uVar122);
  uVar83 = CONCAT44(uVar53,uVar138) + lVar19;
  uVar92 = uVar91 + uVar81;
  uVar63 = lVar105 + CONCAT44(uVar38,uVar82);
  uVar68 = uVar129 + auVar32._8_8_;
  lVar18 = (uVar63 + uVar83 & 0xffffffff) * (ulong)_DAT_005dd810 + lVar18 +
           ((uVar63 + uVar83 >> 0x20) * (ulong)_DAT_005dd810 << 0x20);
  lVar20 = (uVar68 + uVar92 & 0xffffffff) * (ulong)_UNK_005dd818 + lVar20 +
           ((uVar68 + uVar92 >> 0x20) * (ulong)_UNK_005dd818 << 0x20);
  lVar22 = (uVar83 & 0xffffffff) * (ulong)_DAT_005dd820 +
           ((uVar83 >> 0x20) * (ulong)_DAT_005dd820 + (uVar83 & 0xffffffff) * (ulong)_DAT_005d9aa0
           << 0x20) + lVar18;
  lVar23 = (uVar92 & 0xffffffff) * (ulong)_UNK_005dd828 +
           ((uVar92 >> 0x20) * (ulong)_UNK_005dd828 + (uVar92 & 0xffffffff) * (ulong)_UNK_005d9aa8
           << 0x20) + lVar20;
  lVar18 = (uVar63 & 0xffffffff) * (ulong)_DAT_005dd830 +
           ((uVar63 >> 0x20) * (ulong)_DAT_005dd830 + (uVar63 & 0xffffffff) * (ulong)_DAT_005d9aa0
           << 0x20) + lVar18;
  lVar20 = (uVar68 & 0xffffffff) * (ulong)_UNK_005dd838 +
           ((uVar68 >> 0x20) * (ulong)_UNK_005dd838 + (uVar68 & 0xffffffff) * (ulong)_UNK_005d9aa8
           << 0x20) + lVar20;
  lVar24 = (uVar95 & 0xffffffff) * (ulong)_DAT_005dd820 +
           ((uVar95 >> 0x20) * (ulong)_DAT_005dd820 + (uVar95 & 0xffffffff) * (ulong)_DAT_005d9aa0
           << 0x20) + lVar106;
  lVar25 = (uVar101 & 0xffffffff) * (ulong)_UNK_005dd828 +
           ((uVar101 >> 0x20) * (ulong)_UNK_005dd828 + (uVar101 & 0xffffffff) * (ulong)_UNK_005d9aa8
           << 0x20) + lVar107;
  lVar106 = (uVar46 & 0xffffffff) * (ulong)_DAT_005dd830 +
            ((uVar46 >> 0x20) * (ulong)_DAT_005dd830 + (uVar46 & 0xffffffff) * (ulong)_DAT_005d9aa0
            << 0x20) + lVar106;
  lVar107 = (uVar51 & 0xffffffff) * (ulong)_UNK_005dd838 +
            ((uVar51 >> 0x20) * (ulong)_UNK_005dd838 + (uVar51 & 0xffffffff) * (ulong)_UNK_005d9aa8
            << 0x20) + lVar107;
  uVar63 = CONCAT44(uVar37,auVar123._8_4_) + CONCAT44(uVar35,auVar112._8_4_);
  uVar68 = uVar104 + uVar73;
  lVar27 = (uVar63 & 0xffffffff) * (ulong)_DAT_005dd840 +
           ((uVar63 >> 0x20) * (ulong)_DAT_005dd840 + (uVar63 & 0xffffffff) * (ulong)_DAT_005d9aa0
           << 0x20);
  lVar17 = (uVar68 & 0xffffffff) * (ulong)_UNK_005dd848 +
           ((uVar68 >> 0x20) * (ulong)_UNK_005dd848 + (uVar68 & 0xffffffff) * (ulong)_UNK_005d9aa8
           << 0x20);
  uVar63 = lVar105 + lVar19;
  uVar68 = uVar129 + uVar81;
  lVar19 = (uVar63 & 0xffffffff) * (ulong)_DAT_005dd840 +
           ((uVar63 >> 0x20) * (ulong)_DAT_005dd840 + (uVar63 & 0xffffffff) * (ulong)_DAT_005d9aa0
           << 0x20);
  lVar108 = (uVar68 & 0xffffffff) * (ulong)_UNK_005dd848 +
            ((uVar68 >> 0x20) * (ulong)_UNK_005dd848 + (uVar68 & 0xffffffff) * (ulong)_UNK_005d9aa8
            << 0x20);
  uVar63 = (ulong)_DAT_005dd850;
  uVar1 = (ulong)_UNK_005dd858;
  auVar97._4_4_ = iVar26;
  auVar97._0_4_ = uVar35;
  auVar97._8_4_ = iVar26;
  auVar97._12_4_ = -(uint)(auVar112._12_4_ < SUB164((undefined1  [16])0x0,0xc));
  uVar68 = (ulong)_DAT_005dd850;
  uVar2 = (ulong)_UNK_005dd858;
  uVar3 = (ulong)_UNK_005dd858;
  auVar60._8_4_ = auVar60._4_4_;
  uVar4 = (ulong)_UNK_005dd858;
  uVar83 = (ulong)_DAT_005dd860;
  uVar5 = (ulong)_UNK_005dd868;
  auVar79._4_4_ = iVar44;
  auVar79._0_4_ = uVar37;
  auVar79._8_4_ = iVar44;
  auVar79._12_4_ = -(uint)(auVar123._12_4_ < SUB164((undefined1  [16])0x0,0xc));
  uVar92 = (ulong)_DAT_005dd860;
  uVar6 = (ulong)_UNK_005dd868;
  uVar95 = (ulong)_DAT_005dd860;
  uVar7 = (ulong)_UNK_005dd868;
  auVar119._8_4_ = auVar119._4_4_;
  uVar101 = (ulong)_DAT_005dd860;
  uVar8 = (ulong)_UNK_005dd868;
  uVar46 = CONCAT44(uVar36,uVar90) + CONCAT44(uVar28,uVar89);
  uVar51 = uVar100 + uVar45;
  lVar105 = (uVar46 & 0xffffffff) * (ulong)_DAT_005dd870 +
            ((uVar46 >> 0x20) * (ulong)_DAT_005dd870 + (uVar46 & 0xffffffff) * (ulong)_DAT_005d9aa0
            << 0x20);
  lVar109 = (uVar51 & 0xffffffff) * (ulong)_UNK_005dd878 +
            ((uVar51 >> 0x20) * (ulong)_UNK_005dd878 + (uVar51 & 0xffffffff) * (ulong)_UNK_005d9aa8
            << 0x20);
  uVar46 = CONCAT44(uVar53,uVar138) + CONCAT44(uVar38,uVar82);
  uVar51 = uVar91 + CONCAT44(iVar115,uVar88);
  lVar111 = (uVar46 & 0xffffffff) * (ulong)_DAT_005dd870 +
            ((uVar46 >> 0x20) * (ulong)_DAT_005dd870 + (uVar46 & 0xffffffff) * (ulong)_DAT_005d9aa0
            << 0x20);
  lVar116 = (uVar51 & 0xffffffff) * (ulong)_UNK_005dd878 +
            ((uVar51 >> 0x20) * (ulong)_UNK_005dd878 + (uVar51 & 0xffffffff) * (ulong)_UNK_005d9aa8
            << 0x20);
  uVar46 = (ulong)_DAT_005dd880;
  uVar9 = (ulong)_UNK_005dd888;
  auVar125._8_4_ = iVar21;
  auVar125._0_8_ = local_78;
  auVar125._12_4_ = -(uint)(iVar93 < 0);
  uVar51 = (ulong)_DAT_005dd880;
  uVar10 = (ulong)_UNK_005dd888;
  uVar54 = (ulong)_DAT_005dd880;
  uVar11 = (ulong)_UNK_005dd888;
  auVar41._8_4_ = iVar115;
  auVar41._0_8_ = local_98;
  uVar29 = (ulong)_DAT_005dd880;
  uVar12 = (ulong)_UNK_005dd888;
  uVar34 = (ulong)_DAT_005dd890;
  uVar13 = (ulong)_UNK_005dd898;
  auVar71._4_4_ = iVar43;
  auVar71._0_4_ = uVar36;
  auVar71._8_4_ = iVar43;
  auVar71._12_4_ = -(uint)(iVar94 < SUB164((undefined1  [16])0x0,0xc));
  uVar59 = (ulong)_DAT_005dd890;
  uVar14 = (ulong)_UNK_005dd898;
  uVar117 = (ulong)_DAT_005dd890;
  uVar30 = (ulong)_UNK_005dd898;
  auVar48._8_4_ = iVar58;
  auVar48._0_8_ = local_88;
  auVar48._12_4_ = -(uint)(iVar94 < SUB164((undefined1  [16])0x0,0xc));
  uVar121 = (ulong)_DAT_005dd890;
  uVar52 = (ulong)_UNK_005dd898;
  param_1[8] = (int)(((ulong)auVar60._0_4_ * (ulong)_DAT_005dd850 << 0x20) +
                     (ulong)uVar110 * (ulong)_DAT_005dd850 + lVar19 + lVar22 >> 0xf);
  param_1[9] = (int)(((auVar60._8_8_ & 0xffffffff) * uVar4 << 0x20) + (uVar81 & 0xffffffff) * uVar3
                     + lVar108 + lVar23 >> 0xf);
  param_1[10] = (int)((uVar35 * uVar68 << 0x20) + (auVar70._0_8_ & 0xffffffff) * uVar63 + lVar27 +
                      lVar24 >> 0xf);
  param_1[0xb] = (int)(((auVar97._8_8_ & 0xffffffff) * uVar2 << 0x20) +
                       (uVar73 & 0xffffffff) * uVar1 + lVar17 + lVar25 >> 0xf);
  param_1[0x18] = (int)((uVar38 * uVar29 << 0x20) + uVar82 * uVar54 + lVar111 + lVar18 >> 0xf);
  param_1[0x19] =
       (int)(((auVar41._8_8_ & 0xffffffff) * uVar12 << 0x20) + uVar88 * uVar11 + lVar116 + lVar20 >>
            0xf);
  param_1[0x1a] = (int)((uVar28 * uVar51 << 0x20) + uVar89 * uVar46 + lVar105 + lVar106 >> 0xf);
  param_1[0x1b] =
       (int)(((auVar125._8_8_ & 0xffffffff) * uVar10 << 0x20) + (uVar45 & 0xffffffff) * uVar9 +
             lVar109 + lVar107 >> 0xf);
  param_1[0x28] = (int)((uVar53 * uVar121 << 0x20) + uVar138 * uVar117 + lVar111 + lVar22 >> 0xf);
  param_1[0x29] =
       (int)(((auVar48._8_8_ & 0xffffffff) * uVar52 << 0x20) + (uVar91 & 0xffffffff) * uVar30 +
             lVar116 + lVar23 >> 0xf);
  param_1[0x2a] = (int)((uVar36 * uVar59 << 0x20) + uVar90 * uVar34 + lVar105 + lVar24 >> 0xf);
  param_1[0x2b] =
       (int)(((auVar71._8_8_ & 0xffffffff) * uVar14 << 0x20) + (uVar100 & 0xffffffff) * uVar13 +
             lVar109 + lVar25 >> 0xf);
  param_1[0x38] =
       (int)((auVar119._0_4_ * uVar101 << 0x20) + uVar122 * uVar95 + lVar19 + lVar18 >> 0xf);
  param_1[0x39] =
       (int)(((auVar119._8_8_ & 0xffffffff) * uVar8 << 0x20) + (uVar129 & 0xffffffff) * uVar7 +
             lVar108 + lVar20 >> 0xf);
  param_1[0x3a] =
       (int)((uVar37 * uVar92 << 0x20) + (auVar113._0_8_ & 0xffffffff) * uVar83 + lVar27 + lVar106
            >> 0xf);
  param_1[0x3b] =
       (int)(((auVar79._8_8_ & 0xffffffff) * uVar6 << 0x20) + (uVar104 & 0xffffffff) * uVar5 +
             lVar17 + lVar107 >> 0xf);
  iVar135 = param_1[0x3c] + local_118;
  auVar61._4_4_ = param_1[0x3d] + iStack_114;
  iVar21 = param_1[0x3e] + iStack_110;
  iVar26 = param_1[0x3f] + iStack_10c;
  auVar65._4_4_ = iVar26;
  auVar65._0_4_ = iVar21;
  auVar61._8_4_ = auVar61._4_4_;
  auVar61._12_4_ = -(uint)(auVar61._4_4_ < 0);
  lVar23 = CONCAT44(-(uint)(iVar135 < 0),iVar135);
  auVar65._8_4_ = iVar26;
  auVar65._12_4_ = -(uint)(iVar26 < 0);
  lVar24 = CONCAT44(-(uint)(iVar21 < 0),iVar21);
  local_d8 = (int)*(undefined8 *)(param_1 + 0xc);
  iStack_d4 = (int)((ulong)*(undefined8 *)(param_1 + 0xc) >> 0x20);
  iStack_d0 = (int)*(undefined8 *)(param_1 + 0xe);
  iStack_cc = (int)((ulong)*(undefined8 *)(param_1 + 0xe) >> 0x20);
  iVar133 = param_1[0x34] + local_d8;
  auVar49._4_4_ = param_1[0x35] + iStack_d4;
  iVar21 = param_1[0x36] + iStack_d0;
  iVar26 = param_1[0x37] + iStack_cc;
  auVar120._4_4_ = iVar26;
  auVar120._0_4_ = iVar21;
  auVar120._8_4_ = iVar26;
  auVar120._12_4_ = -(uint)(iVar26 < 0);
  lVar107 = CONCAT44(-(uint)(iVar21 < 0),iVar21);
  auVar49._8_4_ = auVar49._4_4_;
  auVar49._12_4_ = -(uint)(auVar49._4_4_ < 0);
  lVar19 = CONCAT44(-(uint)(iVar133 < 0),iVar133);
  iVar136 = param_1[0x2c] + param_1[0x14];
  auVar76._4_4_ = param_1[0x2d] + param_1[0x15];
  iVar21 = param_1[0x2e] + param_1[0x16];
  iVar26 = param_1[0x2f] + param_1[0x17];
  auVar126._4_4_ = iVar26;
  auVar126._0_4_ = iVar21;
  auVar126._8_4_ = iVar26;
  auVar126._12_4_ = -(uint)(iVar26 < 0);
  lVar105 = CONCAT44(-(uint)(iVar21 < 0),iVar21);
  auVar76._8_4_ = auVar76._4_4_;
  auVar76._12_4_ = -(uint)(auVar76._4_4_ < 0);
  lVar106 = CONCAT44(-(uint)(iVar136 < 0),iVar136);
  iVar134 = param_1[0x24] + param_1[0x1c];
  auVar56._4_4_ = param_1[0x25] + param_1[0x1d];
  iVar21 = param_1[0x26] + param_1[0x1e];
  iVar26 = param_1[0x27] + param_1[0x1f];
  auVar72._4_4_ = iVar26;
  auVar72._0_4_ = iVar21;
  auVar56._8_4_ = auVar56._4_4_;
  auVar56._12_4_ = -(uint)(auVar56._4_4_ < 0);
  lVar22 = CONCAT44(-(uint)(iVar134 < 0),iVar134);
  auVar72._8_4_ = iVar26;
  auVar72._12_4_ = -(uint)(iVar26 < 0);
  lVar25 = CONCAT44(-(uint)(iVar21 < 0),iVar21);
  lVar27 = lVar23 + lVar22 + _DAT_005dd990;
  lVar17 = auVar61._8_8_ + auVar56._8_8_ + _UNK_005dd998;
  lVar18 = lVar24 + lVar25 + _DAT_005dd990;
  lVar20 = auVar65._8_8_ + auVar72._8_8_ + _UNK_005dd998;
  uVar54 = lVar24 - lVar25;
  uVar59 = auVar65._8_8_ - auVar72._8_8_;
  uVar46 = lVar23 - lVar22;
  uVar51 = auVar61._8_8_ - auVar56._8_8_;
  lVar24 = lVar105 + lVar107;
  lVar25 = auVar126._8_8_ + auVar120._8_8_;
  uVar117 = lVar107 - lVar105;
  uVar121 = auVar120._8_8_ - auVar126._8_8_;
  lVar22 = lVar106 + lVar19;
  lVar23 = auVar76._8_8_ + auVar49._8_8_;
  uVar29 = lVar19 - lVar106;
  uVar34 = auVar49._8_8_ - auVar76._8_8_;
  uVar53 = local_118 - param_1[0x3c];
  iStack_114 = iStack_114 - param_1[0x3d];
  iStack_110 = iStack_110 - param_1[0x3e];
  iStack_10c = iStack_10c - param_1[0x3f];
  uVar88 = local_d8 - param_1[0x34];
  iStack_d4 = iStack_d4 - param_1[0x35];
  auVar85._0_8_ = CONCAT44(iStack_d4,uVar88);
  auVar85._8_4_ = iStack_d0 - param_1[0x36];
  auVar85._12_4_ = iStack_cc - param_1[0x37];
  uVar137 = param_1[0x14] - param_1[0x2c];
  auVar80._4_4_ = param_1[0x15] - param_1[0x2d];
  uVar82 = param_1[0x16] - param_1[0x2e];
  iVar58 = param_1[0x17] - param_1[0x2f];
  uVar89 = param_1[0x1c] - param_1[0x24];
  iVar93 = param_1[0x1d] - param_1[0x25];
  auVar102._0_8_ = CONCAT44(iVar93,uVar89);
  auVar102._8_4_ = param_1[0x1e] - param_1[0x26];
  auVar102._12_4_ = param_1[0x1f] - param_1[0x27];
  param_1[4] = (int)((ulong)(lVar27 + lVar22) >> 2);
  param_1[5] = (int)((ulong)(lVar17 + lVar23) >> 2);
  param_1[6] = (int)((ulong)(lVar18 + lVar24) >> 2);
  param_1[7] = (int)((ulong)(lVar20 + lVar25) >> 2);
  param_1[0x24] = (int)((ulong)(lVar27 - lVar22) >> 2);
  param_1[0x25] = (int)((ulong)(lVar17 - lVar23) >> 2);
  param_1[0x26] = (int)((ulong)(lVar18 - lVar24) >> 2);
  param_1[0x27] = (int)((ulong)(lVar20 - lVar25) >> 2);
  lVar27 = (uVar46 + uVar29 & 0xffffffff) * (ulong)_DAT_005dd7e0 + _DAT_005dd9a0 +
           ((uVar46 + uVar29 >> 0x20) * (ulong)_DAT_005dd7e0 << 0x20);
  lVar17 = (uVar51 + uVar34 & 0xffffffff) * (ulong)_UNK_005dd7e8 + _UNK_005dd9a8 +
           ((uVar51 + uVar34 >> 0x20) * (ulong)_UNK_005dd7e8 << 0x20);
  lVar18 = (uVar54 + uVar117 & 0xffffffff) * (ulong)_DAT_005dd7e0 + _DAT_005dd9a0 +
           ((uVar54 + uVar117 >> 0x20) * (ulong)_DAT_005dd7e0 << 0x20);
  lVar20 = (uVar59 + uVar121 & 0xffffffff) * (ulong)_UNK_005dd7e8 + _UNK_005dd9a8 +
           ((uVar59 + uVar121 >> 0x20) * (ulong)_UNK_005dd7e8 << 0x20);
  uVar83 = (ulong)_UNK_005dd7f8;
  uVar92 = (ulong)_UNK_005dd7f8;
  uVar63 = (ulong)_DAT_005dd7f0;
  uVar95 = (ulong)_UNK_005dd7f8;
  uVar68 = (ulong)_DAT_005dd7f0;
  uVar101 = (ulong)_UNK_005dd7f8;
  param_1[0x14] =
       (int)(((uVar46 >> 0x20) * (ulong)_DAT_005dd7f0 << 0x20) +
             (uVar46 & 0xffffffff) * (ulong)_DAT_005dd7f0 + lVar27 >> 0xf);
  param_1[0x15] =
       (int)(((uVar51 >> 0x20) * uVar92 << 0x20) + (uVar51 & 0xffffffff) * uVar83 + lVar17 >> 0xf);
  param_1[0x16] =
       (int)(((uVar54 >> 0x20) * uVar68 << 0x20) + (uVar54 & 0xffffffff) * uVar63 + lVar18 >> 0xf);
  param_1[0x17] =
       (int)(((uVar59 >> 0x20) * uVar101 << 0x20) + (uVar59 & 0xffffffff) * uVar95 + lVar20 >> 0xf);
  uVar92 = (ulong)_UNK_005d9aa8;
  uVar95 = (ulong)_UNK_005dd808;
  uVar101 = (ulong)_UNK_005dd808;
  uVar63 = (ulong)_DAT_005d9aa0;
  uVar46 = (ulong)_UNK_005d9aa8;
  uVar68 = (ulong)_DAT_005dd800;
  uVar51 = (ulong)_UNK_005dd808;
  uVar83 = (ulong)_DAT_005dd800;
  uVar54 = (ulong)_UNK_005dd808;
  param_1[0x34] =
       (int)((uVar29 & 0xffffffff) * (ulong)_DAT_005dd800 +
             ((uVar29 >> 0x20) * (ulong)_DAT_005dd800 + (uVar29 & 0xffffffff) * (ulong)_DAT_005d9aa0
             << 0x20) + lVar27 >> 0xf);
  param_1[0x35] =
       (int)((uVar34 & 0xffffffff) * uVar101 +
             ((uVar34 >> 0x20) * uVar95 + (uVar34 & 0xffffffff) * uVar92 << 0x20) + lVar17 >> 0xf);
  param_1[0x36] =
       (int)((uVar117 & 0xffffffff) * uVar83 +
             ((uVar117 >> 0x20) * uVar68 + (uVar117 & 0xffffffff) * uVar63 << 0x20) + lVar18 >> 0xf)
  ;
  param_1[0x37] =
       (int)((uVar121 & 0xffffffff) * uVar54 +
             ((uVar121 >> 0x20) * uVar51 + (uVar121 & 0xffffffff) * uVar46 << 0x20) + lVar20 >> 0xf)
  ;
  auVar15._8_4_ = iStack_110;
  auVar15._0_8_ = CONCAT44(iStack_114,uVar53);
  auVar15._12_4_ = iStack_10c;
  auVar66._0_8_ = auVar15._8_8_;
  uVar90 = -(uint)(iStack_110 < 0);
  iVar94 = -(uint)(iStack_10c < 0);
  auVar33._4_4_ = iVar94;
  auVar33._0_4_ = uVar90;
  auVar66._8_4_ = iStack_10c;
  auVar66._12_4_ = iVar94;
  uVar45 = auVar66._8_8_;
  uVar28 = -(uint)((int)uVar53 < 0);
  iVar21 = -(uint)(iStack_114 < 0);
  local_b8 = CONCAT44(iVar21,uVar28);
  auVar98._8_4_ = iStack_114;
  auVar98._0_8_ = CONCAT44(iStack_114,uVar53);
  auVar98._12_4_ = iVar21;
  uVar100 = auVar98._8_8_;
  auVar50._0_8_ = auVar85._8_8_;
  uVar35 = -(uint)((int)auVar85._8_4_ < 0);
  iVar26 = -(uint)(auVar85._12_4_ < 0);
  auVar50._8_4_ = auVar85._12_4_;
  auVar50._12_4_ = iVar26;
  uVar52 = auVar50._8_8_;
  uVar36 = -(uint)((int)uVar88 < 0);
  iVar43 = -(uint)(iStack_d4 < 0);
  local_e8 = CONCAT44(iVar43,uVar36);
  auVar86._8_4_ = iStack_d4;
  auVar86._0_8_ = auVar85._0_8_;
  auVar86._12_4_ = iVar43;
  uVar81 = auVar86._8_8_;
  auVar127._4_4_ = iVar58;
  auVar127._0_4_ = uVar82;
  auVar57._0_4_ = -(uint)((int)uVar82 < 0);
  auVar57._4_4_ = -(uint)(iVar58 < 0);
  auVar57._12_4_ = -(uint)(iVar58 < SUB164((undefined1  [16])0x0,0xc));
  auVar127._8_4_ = iVar58;
  auVar127._12_4_ = auVar57._4_4_;
  uVar129 = auVar127._8_8_;
  lVar107 = CONCAT44(auVar57._0_4_,uVar82);
  uVar37 = -(uint)((int)uVar137 < 0);
  iVar44 = -(uint)(auVar80._4_4_ < 0);
  auVar80._8_4_ = auVar80._4_4_;
  auVar80._12_4_ = iVar44;
  uVar73 = auVar80._8_8_;
  auVar87._0_8_ = auVar102._8_8_;
  uVar110 = -(uint)(auVar102._8_4_ < 0);
  iVar128 = -(uint)(auVar102._12_4_ < 0);
  auVar99._4_4_ = iVar128;
  auVar99._0_4_ = uVar110;
  auVar87._8_4_ = auVar102._12_4_;
  auVar87._12_4_ = iVar128;
  uVar91 = auVar87._8_8_;
  uVar38 = -(uint)((int)uVar89 < 0);
  iVar115 = -(uint)(iVar93 < 0);
  local_a8 = CONCAT44(iVar115,uVar38);
  auVar103._8_4_ = iVar93;
  auVar103._0_8_ = auVar102._0_8_;
  auVar103._12_4_ = iVar115;
  uVar104 = auVar103._8_8_;
  uVar63 = CONCAT44(uVar37,uVar137) + CONCAT44(uVar28,uVar53);
  uVar68 = uVar73 + uVar100;
  uVar46 = lVar107 + CONCAT44(uVar90,iStack_110);
  uVar51 = uVar129 + uVar45;
  uVar95 = CONCAT44(uVar38,uVar89) + CONCAT44(uVar36,uVar88);
  uVar101 = uVar104 + uVar81;
  uVar83 = CONCAT44(uVar110,auVar102._8_4_) + CONCAT44(uVar35,auVar85._8_4_);
  uVar92 = uVar91 + uVar52;
  lVar27 = (uVar83 + uVar46 & 0xffffffff) * (ulong)_DAT_005dd810 + _DAT_005dd9a0 +
           ((uVar83 + uVar46 >> 0x20) * (ulong)_DAT_005dd810 << 0x20);
  lVar19 = (uVar92 + uVar51 & 0xffffffff) * (ulong)_UNK_005dd818 + _UNK_005dd9a8 +
           ((uVar92 + uVar51 >> 0x20) * (ulong)_UNK_005dd818 << 0x20);
  lVar18 = (uVar95 + uVar63 & 0xffffffff) * (ulong)_DAT_005dd810 + _DAT_005dd9a0 +
           ((uVar95 + uVar63 >> 0x20) * (ulong)_DAT_005dd810 << 0x20);
  lVar20 = (uVar101 + uVar68 & 0xffffffff) * (ulong)_UNK_005dd818 + _UNK_005dd9a8 +
           ((uVar101 + uVar68 >> 0x20) * (ulong)_UNK_005dd818 << 0x20);
  lVar23 = (uVar63 & 0xffffffff) * (ulong)_DAT_005dd820 +
           ((uVar63 >> 0x20) * (ulong)_DAT_005dd820 + (uVar63 & 0xffffffff) * (ulong)_DAT_005d9aa0
           << 0x20) + lVar18;
  lVar24 = (uVar68 & 0xffffffff) * (ulong)_UNK_005dd828 +
           ((uVar68 >> 0x20) * (ulong)_UNK_005dd828 + (uVar68 & 0xffffffff) * (ulong)_UNK_005d9aa8
           << 0x20) + lVar20;
  lVar18 = (uVar95 & 0xffffffff) * (ulong)_DAT_005dd830 +
           ((uVar95 >> 0x20) * (ulong)_DAT_005dd830 + (uVar95 & 0xffffffff) * (ulong)_DAT_005d9aa0
           << 0x20) + lVar18;
  lVar20 = (uVar101 & 0xffffffff) * (ulong)_UNK_005dd838 +
           ((uVar101 >> 0x20) * (ulong)_UNK_005dd838 + (uVar101 & 0xffffffff) * (ulong)_UNK_005d9aa8
           << 0x20) + lVar20;
  lVar111 = (uVar46 & 0xffffffff) * (ulong)_DAT_005dd820 +
            ((uVar46 >> 0x20) * (ulong)_DAT_005dd820 + (uVar46 & 0xffffffff) * (ulong)_DAT_005d9aa0
            << 0x20) + lVar27;
  lVar116 = (uVar51 & 0xffffffff) * (ulong)_UNK_005dd828 +
            ((uVar51 >> 0x20) * (ulong)_UNK_005dd828 + (uVar51 & 0xffffffff) * (ulong)_UNK_005d9aa8
            << 0x20) + lVar19;
  lVar27 = (uVar83 & 0xffffffff) * (ulong)_DAT_005dd830 +
           ((uVar83 >> 0x20) * (ulong)_DAT_005dd830 + (uVar83 & 0xffffffff) * (ulong)_DAT_005d9aa0
           << 0x20) + lVar27;
  lVar19 = (uVar92 & 0xffffffff) * (ulong)_UNK_005dd838 +
           ((uVar92 >> 0x20) * (ulong)_UNK_005dd838 + (uVar92 & 0xffffffff) * (ulong)_UNK_005d9aa8
           << 0x20) + lVar19;
  uVar63 = CONCAT44(uVar110,auVar102._8_4_) + CONCAT44(uVar90,iStack_110);
  uVar68 = uVar91 + uVar45;
  lVar17 = (uVar63 & 0xffffffff) * (ulong)_DAT_005dd840 +
           ((uVar63 >> 0x20) * (ulong)_DAT_005dd840 + (uVar63 & 0xffffffff) * (ulong)_DAT_005d9aa0
           << 0x20);
  lVar22 = (uVar68 & 0xffffffff) * (ulong)_UNK_005dd848 +
           ((uVar68 >> 0x20) * (ulong)_UNK_005dd848 + (uVar68 & 0xffffffff) * (ulong)_UNK_005d9aa8
           << 0x20);
  uVar63 = CONCAT44(uVar38,uVar89) + CONCAT44(uVar28,uVar53);
  uVar68 = uVar104 + uVar100;
  lVar25 = (uVar63 & 0xffffffff) * (ulong)_DAT_005dd840 +
           ((uVar63 >> 0x20) * (ulong)_DAT_005dd840 + (uVar63 & 0xffffffff) * (ulong)_DAT_005d9aa0
           << 0x20);
  lVar106 = (uVar68 & 0xffffffff) * (ulong)_UNK_005dd848 +
            ((uVar68 >> 0x20) * (ulong)_UNK_005dd848 + (uVar68 & 0xffffffff) * (ulong)_UNK_005d9aa8
            << 0x20);
  uVar117 = (ulong)_UNK_005dd858;
  auVar33._8_4_ = iVar94;
  auVar33._12_4_ = -(uint)(iStack_10c < SUB164((undefined1  [16])0x0,0xc));
  uVar121 = (ulong)_UNK_005dd858;
  uVar1 = (ulong)_UNK_005dd858;
  auVar67._8_4_ = iVar21;
  auVar67._0_8_ = local_b8;
  auVar67._12_4_ = -(uint)(iStack_10c < SUB164((undefined1  [16])0x0,0xc));
  uVar2 = (ulong)_UNK_005dd858;
  uVar63 = (ulong)_DAT_005dd860;
  uVar3 = (ulong)_UNK_005dd868;
  auVar99._8_4_ = iVar128;
  auVar99._12_4_ = -(uint)(auVar102._12_4_ < SUB164((undefined1  [16])0x0,0xc));
  uVar68 = (ulong)_DAT_005dd860;
  uVar4 = (ulong)_UNK_005dd868;
  uVar83 = (ulong)_DAT_005dd860;
  uVar5 = (ulong)_UNK_005dd868;
  auVar114._8_4_ = iVar115;
  auVar114._0_8_ = local_a8;
  auVar114._12_4_ = -(uint)(auVar102._12_4_ < SUB164((undefined1  [16])0x0,0xc));
  uVar92 = (ulong)_DAT_005dd860;
  uVar6 = (ulong)_UNK_005dd868;
  uVar95 = lVar107 + CONCAT44(uVar35,auVar85._8_4_);
  uVar101 = uVar129 + uVar52;
  lVar107 = (uVar95 & 0xffffffff) * (ulong)_DAT_005dd870 +
            ((uVar95 >> 0x20) * (ulong)_DAT_005dd870 + (uVar95 & 0xffffffff) * (ulong)_DAT_005d9aa0
            << 0x20);
  lVar105 = (uVar101 & 0xffffffff) * (ulong)_UNK_005dd878 +
            ((uVar101 >> 0x20) * (ulong)_UNK_005dd878 +
             (uVar101 & 0xffffffff) * (ulong)_UNK_005d9aa8 << 0x20);
  uVar95 = CONCAT44(uVar37,uVar137) + CONCAT44(uVar36,uVar88);
  uVar101 = uVar73 + uVar81;
  lVar108 = (uVar95 & 0xffffffff) * (ulong)_DAT_005dd870 +
            ((uVar95 >> 0x20) * (ulong)_DAT_005dd870 + (ulong)_DAT_005d9aa0 * (uVar95 & 0xffffffff)
            << 0x20);
  lVar109 = (uVar101 & 0xffffffff) * (ulong)_UNK_005dd878 +
            ((uVar101 >> 0x20) * (ulong)_UNK_005dd878 +
             (ulong)_UNK_005d9aa8 * (uVar101 & 0xffffffff) << 0x20);
  uVar95 = (ulong)_DAT_005dd880;
  uVar7 = (ulong)_UNK_005dd888;
  auVar62._4_4_ = iVar26;
  auVar62._0_4_ = uVar35;
  auVar62._8_4_ = iVar26;
  auVar62._12_4_ = -(uint)(auVar85._12_4_ < SUB164((undefined1  [16])0x0,0xc));
  uVar101 = (ulong)_DAT_005dd880;
  uVar8 = (ulong)_UNK_005dd888;
  uVar46 = (ulong)_DAT_005dd880;
  uVar9 = (ulong)_UNK_005dd888;
  auVar42._8_4_ = iVar43;
  auVar42._0_8_ = local_e8;
  auVar42._12_4_ = -(uint)(auVar85._12_4_ < SUB164((undefined1  [16])0x0,0xc));
  uVar51 = (ulong)_DAT_005dd880;
  uVar10 = (ulong)_UNK_005dd888;
  uVar54 = (ulong)_DAT_005dd890;
  uVar11 = (ulong)_UNK_005dd898;
  auVar57._8_4_ = auVar57._4_4_;
  uVar29 = (ulong)_DAT_005dd890;
  uVar12 = (ulong)_UNK_005dd898;
  uVar34 = (ulong)_DAT_005dd890;
  uVar13 = (ulong)_UNK_005dd898;
  auVar77._4_4_ = iVar44;
  auVar77._0_4_ = uVar37;
  auVar77._8_4_ = iVar44;
  auVar77._12_4_ = -(uint)(iVar58 < SUB164((undefined1  [16])0x0,0xc));
  uVar59 = (ulong)_DAT_005dd890;
  uVar14 = (ulong)_UNK_005dd898;
  uVar30 = ((ulong)uVar90 * (ulong)_DAT_005dd850 << 0x20) +
           (auVar66._0_8_ & 0xffffffff) * (ulong)_DAT_005dd850 + lVar17 + lVar111 >> 0xf;
  param_1[0xc] = (int)(((ulong)uVar28 * (ulong)_DAT_005dd850 << 0x20) +
                       (ulong)uVar53 * (ulong)_DAT_005dd850 + lVar25 + lVar23 >> 0xf);
  param_1[0xd] = (int)(((auVar67._8_8_ & 0xffffffff) * uVar2 << 0x20) +
                       (uVar100 & 0xffffffff) * uVar1 + lVar106 + lVar24 >> 0xf);
  param_1[0xe] = (int)uVar30;
  param_1[0xf] = (int)(((auVar33._8_8_ & 0xffffffff) * uVar121 << 0x20) +
                       (uVar45 & 0xffffffff) * uVar117 + lVar22 + lVar116 >> 0xf);
  param_1[0x1c] = (int)((uVar36 * uVar51 << 0x20) + uVar88 * uVar46 + lVar108 + lVar18 >> 0xf);
  param_1[0x1d] =
       (int)(((auVar42._8_8_ & 0xffffffff) * uVar10 << 0x20) + (uVar81 & 0xffffffff) * uVar9 +
             lVar109 + lVar20 >> 0xf);
  param_1[0x1e] =
       (int)((uVar35 * uVar101 << 0x20) + auVar85._8_4_ * uVar95 + lVar107 + lVar27 >> 0xf);
  param_1[0x1f] =
       (int)(((auVar62._8_8_ & 0xffffffff) * uVar8 << 0x20) + (uVar52 & 0xffffffff) * uVar7 +
             lVar105 + lVar19 >> 0xf);
  param_1[0x2c] = (int)((uVar37 * uVar59 << 0x20) + uVar137 * uVar34 + lVar108 + lVar23 >> 0xf);
  param_1[0x2d] =
       (int)(((auVar77._8_8_ & 0xffffffff) * uVar14 << 0x20) + (uVar73 & 0xffffffff) * uVar13 +
             lVar109 + lVar24 >> 0xf);
  param_1[0x2e] =
       (int)((auVar57._0_4_ * uVar29 << 0x20) + uVar82 * uVar54 + lVar107 + lVar111 >> 0xf);
  param_1[0x2f] =
       (int)(((auVar57._8_8_ & 0xffffffff) * uVar12 << 0x20) + (uVar129 & 0xffffffff) * uVar11 +
             lVar105 + lVar116 >> 0xf);
  param_1[0x3c] = (int)((uVar38 * uVar92 << 0x20) + uVar89 * uVar83 + lVar25 + lVar18 >> 0xf);
  param_1[0x3d] =
       (int)(((auVar114._8_8_ & 0xffffffff) * uVar6 << 0x20) + (uVar104 & 0xffffffff) * uVar5 +
             lVar106 + lVar20 >> 0xf);
  param_1[0x3e] =
       (int)((uVar110 * uVar68 << 0x20) + (auVar87._0_8_ & 0xffffffff) * uVar63 + lVar17 + lVar27 >>
            0xf);
  param_1[0x3f] =
       (int)(((auVar99._8_8_ & 0xffffffff) * uVar4 << 0x20) + (uVar91 & 0xffffffff) * uVar3 + lVar22
             + lVar19 >> 0xf);
  return uVar30;
}


