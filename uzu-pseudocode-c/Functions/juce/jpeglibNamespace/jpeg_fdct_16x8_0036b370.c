// Function : jpeg_fdct_16x8
// Namespace: juce:jpeglibNamespace
// Entry    : 0036b370
// Prototype: undefined jpeg_fdct_16x8(int * param_1, long param_2, ulong param_3)
// Body     : 0036b370 - 0036c5c3


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::jpeg_fdct_16x8(int*, unsigned char**, unsigned int) */

void __cdecl juce::jpeglibNamespace::jpeg_fdct_16x8(int *param_1,long param_2,ulong param_3)

{
  byte bVar1;
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
  ulong uVar15;
  ulong uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  uint uVar20;
  uint uVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  ulong uVar37;
  int iVar139;
  uint uVar38;
  uint uVar39;
  int iVar140;
  ulong uVar40;
  undefined1 auVar41 [16];
  ulong uVar46;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  ulong uVar47;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  ulong uVar48;
  undefined1 auVar50 [16];
  ulong uVar56;
  undefined1 auVar51 [16];
  ulong uVar49;
  ulong uVar57;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  ulong uVar58;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  int iVar141;
  int iVar142;
  ulong uVar59;
  int iVar64;
  int iVar67;
  undefined1 auVar60 [16];
  ulong uVar65;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  ulong uVar66;
  undefined1 auVar63 [16];
  uint uVar68;
  uint uVar69;
  uint uVar70;
  uint uVar71;
  ulong uVar72;
  undefined1 auVar73 [16];
  int iVar77;
  int iVar78;
  int iVar79;
  ulong uVar80;
  long lVar81;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar82 [16];
  ulong uVar84;
  undefined1 auVar83 [16];
  int iVar143;
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  ulong uVar91;
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  int iVar144;
  int iVar145;
  ulong uVar92;
  undefined1 auVar93 [16];
  ulong uVar96;
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  uint uVar105;
  uint uVar106;
  uint uVar110;
  int iVar111;
  uint uVar112;
  int iVar113;
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  uint uVar114;
  uint uVar116;
  uint uVar117;
  int iVar118;
  undefined1 auVar115 [16];
  ulong uVar119;
  undefined1 auVar120 [16];
  ulong uVar121;
  ulong uVar126;
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  uint uVar127;
  long lVar128;
  int iVar132;
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  uint uVar133;
  int iVar138;
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  int local_128;
  int iStack_124;
  int iStack_120;
  int iStack_11c;
  undefined8 local_108;
  undefined8 local_e8;
  int iStack_e0;
  int iStack_dc;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 local_68;
  undefined8 local_58;
  
  uVar49 = param_3 & 0xffffffff;
  lVar24 = 0;
  do {
    lVar128 = *(long *)(param_2 + lVar24);
    uVar121 = (ulong)*(byte *)(lVar128 + 0xf + uVar49);
    lVar23 = uVar121 + *(byte *)(lVar128 + uVar49);
    bVar1 = *(byte *)(lVar128 + 1 + uVar49);
    uVar59 = (ulong)*(byte *)(lVar128 + 0xe + uVar49);
    lVar32 = uVar59 + bVar1;
    uVar119 = (ulong)*(byte *)(lVar128 + 2 + uVar49);
    uVar57 = (ulong)*(byte *)(lVar128 + 6 + uVar49);
    uVar65 = (ulong)*(byte *)(lVar128 + 9 + uVar49);
    lVar28 = uVar65 + uVar57;
    uVar40 = (ulong)*(byte *)(lVar128 + 7 + uVar49);
    uVar92 = (ulong)*(byte *)(lVar128 + 8 + uVar49);
    lVar30 = uVar40 + uVar92;
    lVar31 = lVar23 + lVar30;
    lVar23 = lVar23 - lVar30;
    lVar30 = lVar28 + lVar32;
    lVar32 = lVar32 - lVar28;
    uVar96 = (ulong)*(byte *)(lVar128 + 0xd + uVar49);
    lVar28 = uVar96 + uVar119;
    uVar46 = (ulong)*(byte *)(lVar128 + 5 + uVar49);
    uVar56 = (ulong)*(byte *)(lVar128 + 10 + uVar49);
    lVar22 = uVar46 + uVar56;
    lVar36 = lVar22 + lVar28;
    lVar28 = lVar28 - lVar22;
    uVar72 = (ulong)*(byte *)(lVar128 + 3 + uVar49);
    uVar80 = (ulong)*(byte *)(lVar128 + 0xc + uVar49);
    uVar48 = (ulong)*(byte *)(lVar128 + 4 + uVar49);
    uVar37 = (ulong)*(byte *)(lVar128 + 0xb + uVar49);
    lVar22 = uVar80 + uVar72;
    lVar34 = uVar48 + uVar37;
    lVar81 = lVar34 + lVar22;
    lVar22 = lVar22 - lVar34;
    lVar27 = *(byte *)(lVar128 + uVar49) - uVar121;
    lVar128 = bVar1 - uVar59;
    lVar25 = uVar119 - uVar96;
    lVar29 = uVar72 - uVar80;
    lVar34 = uVar48 - uVar37;
    lVar33 = uVar46 - uVar56;
    lVar26 = uVar57 - uVar65;
    lVar35 = uVar40 - uVar92;
    param_1[lVar24] = ((int)lVar36 + (int)lVar81 + (int)lVar30 + (int)lVar31) * 4 + -0x2000;
    param_1[lVar24 + 4] =
         (int)((ulong)((lVar30 - lVar36) * 0x1151 + (lVar31 - lVar81) * 0x29cf) >> 0xb);
    lVar30 = (lVar23 - lVar28) * 0x2c63 + (lVar22 - lVar32) * 0x8d4;
    param_1[lVar24 + 2] = (int)((ulong)(lVar28 * 0x4587 + lVar32 * 0x2e75 + lVar30) >> 0xb);
    param_1[lVar24 + 6] = (int)((ulong)(lVar22 * -0x21f9 + lVar23 * -0x6c2 + lVar30) >> 0xb);
    lVar30 = (lVar26 - lVar35) * 0xd23 + (lVar128 + lVar27) * 0x2b4e;
    lVar36 = (lVar35 + lVar33) * 0x1555 + (lVar25 + lVar27) * 0x27e9;
    lVar22 = (lVar34 - lVar35) * 0x1cb6 + (lVar29 + lVar27) * 0x22fc;
    lVar32 = (lVar26 - lVar33) * 0x2d09 + (lVar25 + lVar128) * 0x470;
    lVar28 = (lVar26 + lVar34) * -0x27e9 + (lVar29 + lVar128) * -0x1555;
    lVar23 = (lVar33 - lVar34) * 0xd23 + (lVar29 + lVar25) * -0x2b4e;
    param_1[lVar24 + 1] =
         (int)((ulong)(lVar35 * 0x18f3 + lVar27 * -0x492a + lVar36 + lVar30 + lVar22) >> 0xb);
    param_1[lVar24 + 3] =
         (int)((ulong)(lVar26 * -0x353f + lVar128 * 0x24d + lVar28 + lVar32 + lVar30) >> 0xb);
    param_1[lVar24 + 5] =
         (int)((ulong)(lVar33 * 0x2747 + lVar25 * -0x2406 + lVar23 + lVar32 + lVar36) >> 0xb);
    param_1[lVar24 + 7] =
         (int)((ulong)(lVar34 * 0x4560 + lVar29 * 0x2218 + lVar23 + lVar28 + lVar22) >> 0xb);
    lVar24 = lVar24 + 8;
  } while (lVar24 != 0x40);
  iVar141 = param_1[0x38] + *param_1;
  auVar60._4_4_ = param_1[0x39] + param_1[1];
  iVar64 = param_1[0x3a] + param_1[2];
  iVar67 = param_1[0x3b] + param_1[3];
  auVar73._4_4_ = iVar67;
  auVar73._0_4_ = iVar64;
  auVar73._8_4_ = iVar67;
  auVar73._12_4_ = -(uint)(iVar67 < 0);
  lVar30 = CONCAT44(-(uint)(iVar64 < 0),iVar64);
  auVar60._8_4_ = auVar60._4_4_;
  auVar60._12_4_ = -(uint)(auVar60._4_4_ < 0);
  lVar32 = CONCAT44(-(uint)(iVar141 < 0),iVar141);
  iVar139 = param_1[0x30] + param_1[8];
  auVar41._4_4_ = param_1[0x31] + param_1[9];
  iVar64 = param_1[0x32] + param_1[10];
  iVar67 = param_1[0x33] + param_1[0xb];
  auVar50._4_4_ = iVar67;
  auVar50._0_4_ = iVar64;
  auVar50._8_4_ = iVar67;
  auVar50._12_4_ = -(uint)(iVar67 < 0);
  lVar23 = CONCAT44(-(uint)(iVar64 < 0),iVar64);
  auVar41._8_4_ = auVar41._4_4_;
  auVar41._12_4_ = -(uint)(auVar41._4_4_ < 0);
  lVar24 = CONCAT44(-(uint)(iVar139 < 0),iVar139);
  iVar144 = param_1[0x28] + param_1[0x10];
  auVar93._4_4_ = param_1[0x29] + param_1[0x11];
  iVar64 = param_1[0x2a] + param_1[0x12];
  iVar67 = param_1[0x2b] + param_1[0x13];
  auVar134._4_4_ = iVar67;
  auVar134._0_4_ = iVar64;
  auVar134._8_4_ = iVar67;
  auVar134._12_4_ = -(uint)(iVar67 < 0);
  lVar25 = CONCAT44(-(uint)(iVar64 < 0),iVar64);
  auVar93._8_4_ = auVar93._4_4_;
  auVar93._12_4_ = -(uint)(auVar93._4_4_ < 0);
  lVar81 = CONCAT44(-(uint)(iVar144 < 0),iVar144);
  iVar143 = param_1[0x20] + param_1[0x18];
  auVar85._4_4_ = param_1[0x21] + param_1[0x19];
  iVar64 = param_1[0x22] + param_1[0x1a];
  iVar67 = param_1[0x23] + param_1[0x1b];
  auVar97._4_4_ = iVar67;
  auVar97._0_4_ = iVar64;
  auVar97._8_4_ = iVar67;
  auVar97._12_4_ = -(uint)(iVar67 < 0);
  lVar128 = CONCAT44(-(uint)(iVar64 < 0),iVar64);
  auVar85._8_4_ = auVar85._4_4_;
  auVar85._12_4_ = -(uint)(auVar85._4_4_ < 0);
  lVar36 = CONCAT44(-(uint)(iVar143 < 0),iVar143);
  lVar28 = lVar36 + lVar32;
  lVar22 = auVar85._8_8_ + auVar60._8_8_;
  uVar59 = lVar32 - lVar36;
  uVar65 = auVar60._8_8_ - auVar85._8_8_;
  lVar32 = lVar128 + lVar30;
  lVar36 = auVar97._8_8_ + auVar73._8_8_;
  uVar72 = lVar30 - lVar128;
  uVar80 = auVar73._8_8_ - auVar97._8_8_;
  lVar128 = lVar81 + lVar24;
  lVar34 = auVar93._8_8_ + auVar41._8_8_;
  uVar40 = lVar24 - lVar81;
  uVar46 = auVar41._8_8_ - auVar93._8_8_;
  lVar24 = lVar25 + lVar23;
  lVar30 = auVar134._8_8_ + auVar50._8_8_;
  uVar48 = lVar23 - lVar25;
  uVar56 = auVar50._8_8_ - auVar134._8_8_;
  uVar133 = *param_1 - param_1[0x38];
  iVar138 = param_1[1] - param_1[0x39];
  auVar135._0_8_ = CONCAT44(iVar138,uVar133);
  auVar135._8_4_ = param_1[2] - param_1[0x3a];
  auVar135._12_4_ = param_1[3] - param_1[0x3b];
  uVar114 = param_1[8] - param_1[0x30];
  uVar116 = param_1[9] - param_1[0x31];
  uVar117 = param_1[10] - param_1[0x32];
  iVar118 = param_1[0xb] - param_1[0x33];
  local_128 = (int)*(undefined8 *)(param_1 + 0xc);
  iStack_124 = (int)((ulong)*(undefined8 *)(param_1 + 0xc) >> 0x20);
  iStack_120 = (int)*(undefined8 *)(param_1 + 0xe);
  iStack_11c = (int)((ulong)*(undefined8 *)(param_1 + 0xe) >> 0x20);
  uVar105 = param_1[0x10] - param_1[0x28];
  uVar110 = param_1[0x11] - param_1[0x29];
  uVar112 = param_1[0x12] - param_1[0x2a];
  iVar113 = param_1[0x13] - param_1[0x2b];
  uVar106 = param_1[0x18] - param_1[0x20];
  iVar111 = param_1[0x19] - param_1[0x21];
  auVar107._0_8_ = CONCAT44(iVar111,uVar106);
  auVar107._8_4_ = param_1[0x1a] - param_1[0x22];
  auVar107._12_4_ = param_1[0x1b] - param_1[0x23];
  *param_1 = (int)((ulong)(lVar28 + lVar128) >> 3);
  param_1[1] = (int)((ulong)(lVar22 + lVar34) >> 3);
  param_1[2] = (int)((ulong)(lVar32 + lVar24) >> 3);
  param_1[3] = (int)((ulong)(lVar36 + lVar30) >> 3);
  param_1[0x20] = (int)((ulong)(lVar28 - lVar128) >> 3);
  param_1[0x21] = (int)((ulong)(lVar22 - lVar34) >> 3);
  param_1[0x22] = (int)((ulong)(lVar32 - lVar24) >> 3);
  param_1[0x23] = (int)((ulong)(lVar36 - lVar30) >> 3);
  lVar32 = ((uVar59 + uVar40 >> 0x20) * (ulong)_DAT_005dd7e0 << 0x20) +
           (uVar59 + uVar40 & 0xffffffff) * (ulong)_DAT_005dd7e0;
  lVar30 = ((uVar65 + uVar46 >> 0x20) * (ulong)_UNK_005dd7e8 << 0x20) +
           (uVar65 + uVar46 & 0xffffffff) * (ulong)_UNK_005dd7e8;
  lVar24 = ((uVar72 + uVar48 >> 0x20) * (ulong)_DAT_005dd7e0 << 0x20) +
           (uVar72 + uVar48 & 0xffffffff) * (ulong)_DAT_005dd7e0;
  lVar23 = ((uVar80 + uVar56 >> 0x20) * (ulong)_UNK_005dd7e8 << 0x20) +
           (uVar80 + uVar56 & 0xffffffff) * (ulong)_UNK_005dd7e8;
  uVar92 = (ulong)_UNK_005dd7f8;
  uVar96 = (ulong)_UNK_005dd7f8;
  uVar49 = (ulong)_DAT_005dd7f0;
  uVar119 = (ulong)_UNK_005dd7f8;
  uVar57 = (ulong)_DAT_005dd7f0;
  uVar121 = (ulong)_UNK_005dd7f8;
  param_1[0x10] =
       (int)(((uVar59 >> 0x20) * (ulong)_DAT_005dd7f0 << 0x20) +
             (uVar59 & 0xffffffff) * (ulong)_DAT_005dd7f0 + lVar32 >> 0x10);
  param_1[0x11] =
       (int)(((uVar65 >> 0x20) * uVar96 << 0x20) + (uVar65 & 0xffffffff) * uVar92 + lVar30 >> 0x10);
  param_1[0x12] =
       (int)(((uVar72 >> 0x20) * uVar57 << 0x20) + (uVar72 & 0xffffffff) * uVar49 + lVar24 >> 0x10);
  param_1[0x13] =
       (int)(((uVar80 >> 0x20) * uVar121 << 0x20) + (uVar80 & 0xffffffff) * uVar119 + lVar23 >> 0x10
            );
  uVar21 = _UNK_005d9aa8;
  uVar20 = _DAT_005d9aa0;
  uVar96 = (ulong)_UNK_005d9aa8;
  uVar119 = (ulong)_UNK_005dd808;
  uVar121 = (ulong)_UNK_005dd808;
  uVar49 = (ulong)_DAT_005d9aa0;
  uVar59 = (ulong)_UNK_005d9aa8;
  uVar57 = (ulong)_DAT_005dd800;
  uVar65 = (ulong)_UNK_005dd808;
  auVar115._0_8_ = auVar135._8_8_;
  uVar92 = (ulong)_DAT_005dd800;
  uVar72 = (ulong)_UNK_005dd808;
  auVar103._0_4_ = -(uint)(auVar135._8_4_ < 0);
  auVar103._4_4_ = -(uint)(auVar135._12_4_ < 0);
  auVar103._12_4_ = -(uint)(auVar135._12_4_ < SUB164((undefined1  [16])0x0,0xc));
  auVar115._8_4_ = auVar135._12_4_;
  auVar115._12_4_ = auVar103._4_4_;
  uVar91 = auVar115._8_8_;
  lVar22 = CONCAT44(auVar103._0_4_,auVar135._8_4_);
  auVar19._8_4_ = uVar117;
  auVar19._0_8_ = CONCAT44(uVar116,uVar114);
  auVar19._12_4_ = iVar118;
  auVar61._0_8_ = auVar19._8_8_;
  uVar68 = -(uint)((int)uVar117 < 0);
  iVar77 = -(uint)(iVar118 < 0);
  auVar74._12_4_ = -(uint)(iVar118 < SUB164((undefined1  [16])0x0,0xc));
  local_88 = CONCAT44(iVar77,uVar68);
  auVar61._8_4_ = iVar118;
  auVar61._12_4_ = iVar77;
  uVar58 = auVar61._8_8_;
  auVar18._8_4_ = uVar112;
  auVar18._0_8_ = CONCAT44(uVar110,uVar105);
  auVar18._12_4_ = iVar113;
  auVar51._0_8_ = auVar18._8_8_;
  param_1[0x30] =
       (int)((uVar40 & 0xffffffff) * (ulong)_DAT_005dd800 +
             ((uVar40 >> 0x20) * (ulong)_DAT_005dd800 + (uVar40 & 0xffffffff) * (ulong)_DAT_005d9aa0
             << 0x20) + lVar32 >> 0x10);
  param_1[0x31] =
       (int)((uVar46 & 0xffffffff) * uVar121 +
             ((uVar46 >> 0x20) * uVar119 + (uVar46 & 0xffffffff) * uVar96 << 0x20) + lVar30 >> 0x10)
  ;
  param_1[0x32] =
       (int)((uVar48 & 0xffffffff) * uVar92 +
             ((uVar48 >> 0x20) * uVar57 + (uVar48 & 0xffffffff) * uVar49 << 0x20) + lVar24 >> 0x10);
  param_1[0x33] =
       (int)((uVar56 & 0xffffffff) * uVar72 +
             ((uVar56 >> 0x20) * uVar65 + (uVar56 & 0xffffffff) * uVar59 << 0x20) + lVar23 >> 0x10);
  uVar38 = -(uint)((int)uVar112 < 0);
  iVar64 = -(uint)(iVar113 < 0);
  local_d8 = CONCAT44(iVar64,uVar38);
  auVar51._8_4_ = iVar113;
  auVar51._12_4_ = iVar64;
  uVar47 = auVar51._8_8_;
  auVar98._0_8_ = auVar107._8_8_;
  uVar39 = -(uint)(auVar107._8_4_ < 0);
  iVar67 = -(uint)(auVar107._12_4_ < 0);
  local_58 = CONCAT44(iVar67,uVar39);
  auVar98._8_4_ = auVar107._12_4_;
  auVar98._12_4_ = iVar67;
  uVar66 = auVar98._8_8_;
  uVar49 = CONCAT44(uVar38,uVar112) + lVar22;
  uVar57 = uVar47 + uVar91;
  uVar59 = CONCAT44(uVar39,auVar107._8_4_) + CONCAT44(uVar68,uVar117);
  uVar65 = uVar66 + uVar58;
  lVar128 = ((uVar59 + uVar49 >> 0x20) * (ulong)_DAT_005dd810 << 0x20) +
            (uVar59 + uVar49 & 0xffffffff) * (ulong)_DAT_005dd810;
  lVar34 = ((uVar65 + uVar57 >> 0x20) * (ulong)_UNK_005dd818 << 0x20) +
           (uVar65 + uVar57 & 0xffffffff) * (ulong)_UNK_005dd818;
  uVar127 = -(uint)((int)uVar133 < 0);
  iVar132 = -(uint)(iVar138 < 0);
  auVar86._4_4_ = iVar132;
  auVar86._0_4_ = uVar127;
  auVar122._8_4_ = iVar138;
  auVar122._0_8_ = auVar135._0_8_;
  auVar122._12_4_ = iVar132;
  uVar126 = auVar122._8_8_;
  uVar69 = -(uint)((int)uVar114 < 0);
  iVar138 = -(uint)((int)uVar116 < 0);
  local_a8 = CONCAT44(iVar138,uVar69);
  auVar42._8_4_ = uVar116;
  auVar42._0_8_ = CONCAT44(uVar116,uVar114);
  auVar42._12_4_ = iVar138;
  uVar70 = -(uint)((int)uVar105 < 0);
  iVar78 = -(uint)((int)uVar110 < 0);
  local_98 = CONCAT44(iVar78,uVar70);
  auVar120._8_4_ = uVar110;
  auVar120._0_8_ = CONCAT44(uVar110,uVar105);
  auVar120._12_4_ = iVar78;
  uVar71 = -(uint)((int)uVar106 < 0);
  iVar79 = -(uint)(iVar111 < 0);
  local_68 = CONCAT44(iVar79,uVar71);
  auVar108._8_4_ = iVar111;
  auVar108._0_8_ = auVar107._0_8_;
  auVar108._12_4_ = iVar79;
  uVar84 = auVar108._8_8_;
  uVar119 = CONCAT44(uVar70,uVar105) + CONCAT44(uVar127,uVar133);
  uVar121 = auVar120._8_8_ + uVar126;
  uVar92 = CONCAT44(uVar71,uVar106) + CONCAT44(uVar69,uVar114);
  uVar96 = uVar84 + auVar42._8_8_;
  lVar36 = ((uVar92 + uVar119 >> 0x20) * (ulong)_DAT_005dd810 << 0x20) +
           (uVar92 + uVar119 & 0xffffffff) * (ulong)_DAT_005dd810;
  lVar81 = ((uVar96 + uVar121 >> 0x20) * (ulong)_UNK_005dd818 << 0x20) +
           (uVar96 + uVar121 & 0xffffffff) * (ulong)_UNK_005dd818;
  lVar31 = (uVar119 & 0xffffffff) * (ulong)_DAT_005dd820 +
           ((uVar119 >> 0x20) * (ulong)_DAT_005dd820 + (uVar119 & 0xffffffff) * (ulong)uVar20 <<
           0x20) + lVar36;
  lVar33 = (uVar121 & 0xffffffff) * (ulong)_UNK_005dd828 +
           ((uVar121 >> 0x20) * (ulong)_UNK_005dd828 + (uVar121 & 0xffffffff) * (ulong)uVar21 <<
           0x20) + lVar81;
  lVar36 = (uVar92 & 0xffffffff) * (ulong)_DAT_005dd830 +
           ((uVar92 >> 0x20) * (ulong)_DAT_005dd830 + (uVar92 & 0xffffffff) * (ulong)uVar20 << 0x20)
           + lVar36;
  lVar81 = (uVar96 & 0xffffffff) * (ulong)_UNK_005dd838 +
           ((uVar96 >> 0x20) * (ulong)_UNK_005dd838 + (uVar96 & 0xffffffff) * (ulong)uVar21 << 0x20)
           + lVar81;
  lVar32 = (uVar49 & 0xffffffff) * (ulong)_DAT_005dd820 +
           ((uVar49 >> 0x20) * (ulong)_DAT_005dd820 + (uVar49 & 0xffffffff) * (ulong)uVar20 << 0x20)
           + lVar128;
  lVar28 = (uVar57 & 0xffffffff) * (ulong)_UNK_005dd828 +
           ((uVar57 >> 0x20) * (ulong)_UNK_005dd828 + (uVar57 & 0xffffffff) * (ulong)uVar21 << 0x20)
           + lVar34;
  lVar128 = (uVar59 & 0xffffffff) * (ulong)_DAT_005dd830 +
            ((uVar59 >> 0x20) * (ulong)_DAT_005dd830 + (uVar59 & 0xffffffff) * (ulong)uVar20 << 0x20
            ) + lVar128;
  lVar34 = (uVar65 & 0xffffffff) * (ulong)_UNK_005dd838 +
           ((uVar65 >> 0x20) * (ulong)_UNK_005dd838 + (uVar65 & 0xffffffff) * (ulong)uVar21 << 0x20)
           + lVar34;
  uVar49 = CONCAT44(uVar39,auVar107._8_4_) + lVar22;
  uVar57 = uVar66 + uVar91;
  lVar25 = (uVar49 & 0xffffffff) * (ulong)_DAT_005dd840 +
           ((uVar49 >> 0x20) * (ulong)_DAT_005dd840 + (uVar49 & 0xffffffff) * (ulong)uVar20 << 0x20)
  ;
  lVar26 = (uVar57 & 0xffffffff) * (ulong)_UNK_005dd848 +
           ((uVar57 >> 0x20) * (ulong)_UNK_005dd848 + (uVar57 & 0xffffffff) * (ulong)uVar21 << 0x20)
  ;
  uVar49 = CONCAT44(uVar71,uVar106) + CONCAT44(uVar127,uVar133);
  uVar57 = uVar84 + uVar126;
  lVar24 = (uVar49 & 0xffffffff) * (ulong)_DAT_005dd840 +
           ((uVar49 >> 0x20) * (ulong)_DAT_005dd840 + (uVar49 & 0xffffffff) * (ulong)uVar20 << 0x20)
  ;
  lVar23 = (uVar57 & 0xffffffff) * (ulong)_UNK_005dd848 +
           ((uVar57 >> 0x20) * (ulong)_UNK_005dd848 + (uVar57 & 0xffffffff) * (ulong)uVar21 << 0x20)
  ;
  uVar49 = (ulong)_DAT_005dd850;
  uVar37 = (ulong)_UNK_005dd858;
  auVar103._8_4_ = auVar103._4_4_;
  uVar57 = (ulong)_DAT_005dd850;
  uVar2 = (ulong)_UNK_005dd858;
  uVar3 = (ulong)_UNK_005dd858;
  auVar86._8_4_ = iVar132;
  auVar86._12_4_ = -(uint)(auVar135._12_4_ < SUB164((undefined1  [16])0x0,0xc));
  uVar4 = (ulong)_UNK_005dd858;
  uVar92 = (ulong)_DAT_005dd860;
  uVar5 = (ulong)_UNK_005dd868;
  auVar123._8_4_ = iVar67;
  auVar123._0_8_ = local_58;
  auVar123._12_4_ = -(uint)(auVar107._12_4_ < SUB164((undefined1  [16])0x0,0xc));
  uVar96 = (ulong)_DAT_005dd860;
  uVar6 = (ulong)_UNK_005dd868;
  uVar119 = (ulong)_DAT_005dd860;
  uVar7 = (ulong)_UNK_005dd868;
  auVar129._8_4_ = iVar79;
  auVar129._0_8_ = local_68;
  auVar129._12_4_ = -(uint)(auVar107._12_4_ < SUB164((undefined1  [16])0x0,0xc));
  uVar121 = (ulong)_DAT_005dd860;
  uVar8 = (ulong)_UNK_005dd868;
  uVar59 = CONCAT44(uVar38,uVar112) + CONCAT44(uVar68,uVar117);
  uVar65 = uVar47 + uVar58;
  lVar27 = (uVar59 & 0xffffffff) * (ulong)_DAT_005dd870 +
           ((uVar59 >> 0x20) * (ulong)_DAT_005dd870 + (uVar59 & 0xffffffff) * (ulong)uVar20 << 0x20)
  ;
  lVar29 = (uVar65 & 0xffffffff) * (ulong)_UNK_005dd878 +
           ((uVar65 >> 0x20) * (ulong)_UNK_005dd878 + (uVar65 & 0xffffffff) * (ulong)uVar21 << 0x20)
  ;
  uVar59 = CONCAT44(uVar70,uVar105) + CONCAT44(uVar69,uVar114);
  uVar65 = CONCAT44(iVar78,uVar110) + CONCAT44(iVar138,uVar116);
  lVar30 = (uVar59 & 0xffffffff) * (ulong)_DAT_005dd870 +
           ((uVar59 >> 0x20) * (ulong)_DAT_005dd870 + (uVar59 & 0xffffffff) * (ulong)uVar20 << 0x20)
  ;
  lVar22 = (uVar65 & 0xffffffff) * (ulong)_UNK_005dd878 +
           ((uVar65 >> 0x20) * (ulong)_UNK_005dd878 + (uVar65 & 0xffffffff) * (ulong)uVar21 << 0x20)
  ;
  uVar59 = (ulong)_DAT_005dd880;
  uVar9 = (ulong)_UNK_005dd888;
  auVar74._8_4_ = iVar77;
  auVar74._0_8_ = local_88;
  uVar65 = (ulong)_DAT_005dd880;
  uVar10 = (ulong)_UNK_005dd888;
  uVar72 = (ulong)_DAT_005dd880;
  uVar11 = (ulong)_UNK_005dd888;
  auVar99._8_4_ = iVar138;
  auVar99._0_8_ = local_a8;
  auVar99._12_4_ = -(uint)(iVar118 < SUB164((undefined1  [16])0x0,0xc));
  uVar40 = (ulong)_DAT_005dd880;
  uVar12 = (ulong)_UNK_005dd888;
  uVar46 = (ulong)_DAT_005dd890;
  uVar13 = (ulong)_UNK_005dd898;
  auVar52._8_4_ = iVar64;
  auVar52._0_8_ = local_d8;
  auVar52._12_4_ = -(uint)(iVar113 < 0);
  uVar48 = (ulong)_DAT_005dd890;
  uVar14 = (ulong)_UNK_005dd898;
  uVar56 = (ulong)_DAT_005dd890;
  uVar15 = (ulong)_UNK_005dd898;
  auVar82._8_4_ = iVar78;
  auVar82._0_8_ = local_98;
  auVar82._12_4_ = -(uint)(iVar113 < SUB164((undefined1  [16])0x0,0xc));
  uVar80 = (ulong)_DAT_005dd890;
  uVar16 = (ulong)_UNK_005dd898;
  param_1[8] = (int)(((ulong)uVar127 * (ulong)_DAT_005dd850 << 0x20) +
                     (ulong)uVar133 * (ulong)_DAT_005dd850 + lVar24 + lVar31 >> 0x10);
  param_1[9] = (int)(((auVar86._8_8_ & 0xffffffff) * uVar4 << 0x20) + (uVar126 & 0xffffffff) * uVar3
                     + lVar23 + lVar33 >> 0x10);
  param_1[10] = (int)((auVar103._0_4_ * uVar57 << 0x20) + (auVar115._0_8_ & 0xffffffff) * uVar49 +
                      lVar25 + lVar32 >> 0x10);
  param_1[0xb] = (int)(((auVar103._8_8_ & 0xffffffff) * uVar2 << 0x20) +
                       (uVar91 & 0xffffffff) * uVar37 + lVar26 + lVar28 >> 0x10);
  param_1[0x18] = (int)((uVar69 * uVar40 << 0x20) + uVar114 * uVar72 + lVar30 + lVar36 >> 0x10);
  param_1[0x19] =
       (int)(((auVar99._8_8_ & 0xffffffff) * uVar12 << 0x20) + uVar116 * uVar11 + lVar22 + lVar81 >>
            0x10);
  param_1[0x1a] = (int)((uVar68 * uVar65 << 0x20) + uVar117 * uVar59 + lVar27 + lVar128 >> 0x10);
  param_1[0x1b] =
       (int)(((auVar74._8_8_ & 0xffffffff) * uVar10 << 0x20) + (uVar58 & 0xffffffff) * uVar9 +
             lVar29 + lVar34 >> 0x10);
  param_1[0x28] = (int)((uVar70 * uVar80 << 0x20) + uVar105 * uVar56 + lVar30 + lVar31 >> 0x10);
  param_1[0x29] =
       (int)(((auVar82._8_8_ & 0xffffffff) * uVar16 << 0x20) + uVar110 * uVar15 + lVar22 + lVar33 >>
            0x10);
  param_1[0x2a] = (int)((uVar38 * uVar48 << 0x20) + uVar112 * uVar46 + lVar27 + lVar32 >> 0x10);
  param_1[0x2b] =
       (int)(((auVar52._8_8_ & 0xffffffff) * uVar14 << 0x20) + (uVar47 & 0xffffffff) * uVar13 +
             lVar29 + lVar28 >> 0x10);
  param_1[0x38] = (int)((uVar71 * uVar121 << 0x20) + uVar106 * uVar119 + lVar24 + lVar36 >> 0x10);
  param_1[0x39] =
       (int)(((auVar129._8_8_ & 0xffffffff) * uVar8 << 0x20) + (uVar84 & 0xffffffff) * uVar7 +
             lVar23 + lVar81 >> 0x10);
  param_1[0x3a] =
       (int)((uVar39 * uVar96 << 0x20) + (auVar98._0_8_ & 0xffffffff) * uVar92 + lVar25 + lVar128 >>
            0x10);
  param_1[0x3b] =
       (int)(((auVar123._8_8_ & 0xffffffff) * uVar6 << 0x20) + (uVar66 & 0xffffffff) * uVar5 +
             lVar26 + lVar34 >> 0x10);
  local_e8._0_4_ = (int)*(undefined8 *)(param_1 + 4);
  local_e8._4_4_ = (int)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20);
  iStack_e0 = (int)*(undefined8 *)(param_1 + 6);
  iStack_dc = (int)((ulong)*(undefined8 *)(param_1 + 6) >> 0x20);
  iVar142 = param_1[0x3c] + (int)local_e8;
  auVar62._4_4_ = param_1[0x3d] + local_e8._4_4_;
  iVar64 = param_1[0x3e] + iStack_e0;
  iVar67 = param_1[0x3f] + iStack_dc;
  auVar75._4_4_ = iVar67;
  auVar75._0_4_ = iVar64;
  auVar75._8_4_ = iVar67;
  auVar75._12_4_ = -(uint)(iVar67 < 0);
  lVar30 = CONCAT44(-(uint)(iVar64 < 0),iVar64);
  auVar62._8_4_ = auVar62._4_4_;
  auVar62._12_4_ = -(uint)(auVar62._4_4_ < 0);
  lVar32 = CONCAT44(-(uint)(iVar142 < 0),iVar142);
  iVar140 = param_1[0x34] + local_128;
  auVar43._4_4_ = param_1[0x35] + iStack_124;
  iVar64 = param_1[0x36] + iStack_120;
  iVar67 = param_1[0x37] + iStack_11c;
  auVar130._4_4_ = iVar67;
  auVar130._0_4_ = iVar64;
  auVar130._8_4_ = iVar67;
  auVar130._12_4_ = -(uint)(iVar67 < 0);
  lVar25 = CONCAT44(-(uint)(iVar64 < 0),iVar64);
  auVar43._8_4_ = auVar43._4_4_;
  auVar43._12_4_ = -(uint)(auVar43._4_4_ < 0);
  lVar24 = CONCAT44(-(uint)(iVar140 < 0),iVar140);
  iVar145 = param_1[0x2c] + param_1[0x14];
  auVar94._4_4_ = param_1[0x2d] + param_1[0x15];
  iVar64 = param_1[0x2e] + param_1[0x16];
  iVar67 = param_1[0x2f] + param_1[0x17];
  auVar100._4_4_ = iVar67;
  auVar100._0_4_ = iVar64;
  auVar100._8_4_ = iVar67;
  auVar100._12_4_ = -(uint)(iVar67 < 0);
  lVar128 = CONCAT44(-(uint)(iVar64 < 0),iVar64);
  auVar94._8_4_ = auVar94._4_4_;
  auVar94._12_4_ = -(uint)(auVar94._4_4_ < 0);
  lVar81 = CONCAT44(-(uint)(iVar145 < 0),iVar145);
  iVar64 = param_1[0x24] + param_1[0x1c];
  iVar67 = param_1[0x25] + param_1[0x1d];
  auVar87._0_8_ = CONCAT44(iVar67,iVar64);
  auVar87._8_4_ = param_1[0x26] + param_1[0x1e];
  auVar87._12_4_ = param_1[0x27] + param_1[0x1f];
  auVar53._0_8_ = auVar87._8_8_;
  auVar53._8_4_ = auVar87._12_4_;
  auVar53._12_4_ = -(uint)(auVar87._12_4_ < 0);
  lVar23 = CONCAT44(-(uint)(auVar87._8_4_ < 0),auVar87._8_4_);
  auVar88._8_4_ = iVar67;
  auVar88._0_8_ = auVar87._0_8_;
  auVar88._12_4_ = -(uint)(iVar67 < 0);
  lVar36 = CONCAT44(-(uint)(iVar64 < 0),iVar64);
  lVar28 = lVar36 + lVar32;
  lVar22 = auVar88._8_8_ + auVar62._8_8_;
  uVar59 = lVar32 - lVar36;
  uVar65 = auVar62._8_8_ - auVar88._8_8_;
  lVar32 = lVar23 + lVar30;
  lVar36 = auVar53._8_8_ + auVar75._8_8_;
  uVar72 = lVar30 - lVar23;
  uVar48 = auVar75._8_8_ - auVar53._8_8_;
  lVar30 = lVar81 + lVar24;
  lVar34 = auVar94._8_8_ + auVar43._8_8_;
  uVar40 = lVar24 - lVar81;
  uVar46 = auVar43._8_8_ - auVar94._8_8_;
  lVar24 = lVar128 + lVar25;
  lVar23 = auVar100._8_8_ + auVar130._8_8_;
  uVar56 = lVar25 - lVar128;
  uVar80 = auVar130._8_8_ - auVar100._8_8_;
  uVar117 = (int)local_e8 - param_1[0x3c];
  iVar77 = local_e8._4_4_ - param_1[0x3d];
  auVar124._0_8_ = CONCAT44(iVar77,uVar117);
  auVar124._8_4_ = iStack_e0 - param_1[0x3e];
  auVar124._12_4_ = iStack_dc - param_1[0x3f];
  uVar69 = local_128 - param_1[0x34];
  uVar70 = iStack_124 - param_1[0x35];
  uVar71 = iStack_120 - param_1[0x36];
  iStack_11c = iStack_11c - param_1[0x37];
  uVar114 = param_1[0x14] - param_1[0x2c];
  uVar116 = param_1[0x15] - param_1[0x2d];
  auVar109._0_8_ = CONCAT44(uVar116,uVar114);
  auVar109._8_4_ = param_1[0x16] - param_1[0x2e];
  auVar109._12_4_ = param_1[0x17] - param_1[0x2f];
  uVar133 = param_1[0x1c] - param_1[0x24];
  iVar118 = param_1[0x1d] - param_1[0x25];
  auVar136._0_8_ = CONCAT44(iVar118,uVar133);
  auVar136._8_4_ = param_1[0x1e] - param_1[0x26];
  auVar136._12_4_ = param_1[0x1f] - param_1[0x27];
  param_1[4] = (int)((ulong)(lVar28 + lVar30) >> 3);
  param_1[5] = (int)((ulong)(lVar22 + lVar34) >> 3);
  param_1[6] = (int)((ulong)(lVar32 + lVar24) >> 3);
  param_1[7] = (int)((ulong)(lVar36 + lVar23) >> 3);
  param_1[0x24] = (int)((ulong)(lVar28 - lVar30) >> 3);
  param_1[0x25] = (int)((ulong)(lVar22 - lVar34) >> 3);
  param_1[0x26] = (int)((ulong)(lVar32 - lVar24) >> 3);
  param_1[0x27] = (int)((ulong)(lVar36 - lVar23) >> 3);
  lVar24 = ((uVar59 + uVar40 >> 0x20) * (ulong)_DAT_005dd7e0 << 0x20) +
           (uVar59 + uVar40 & 0xffffffff) * (ulong)_DAT_005dd7e0;
  lVar23 = ((uVar65 + uVar46 >> 0x20) * (ulong)_UNK_005dd7e8 << 0x20) +
           (uVar65 + uVar46 & 0xffffffff) * (ulong)_UNK_005dd7e8;
  lVar32 = ((uVar72 + uVar56 >> 0x20) * (ulong)_DAT_005dd7e0 << 0x20) +
           (uVar72 + uVar56 & 0xffffffff) * (ulong)_DAT_005dd7e0;
  lVar30 = ((uVar48 + uVar80 >> 0x20) * (ulong)_UNK_005dd7e8 << 0x20) +
           (uVar48 + uVar80 & 0xffffffff) * (ulong)_UNK_005dd7e8;
  uVar92 = (ulong)_UNK_005dd7f8;
  uVar96 = (ulong)_UNK_005dd7f8;
  uVar49 = (ulong)_DAT_005dd7f0;
  uVar119 = (ulong)_UNK_005dd7f8;
  uVar57 = (ulong)_DAT_005dd7f0;
  uVar121 = (ulong)_UNK_005dd7f8;
  param_1[0x14] =
       (int)(((uVar59 >> 0x20) * (ulong)_DAT_005dd7f0 << 0x20) +
             (uVar59 & 0xffffffff) * (ulong)_DAT_005dd7f0 + lVar24 >> 0x10);
  param_1[0x15] =
       (int)(((uVar65 >> 0x20) * uVar96 << 0x20) + (uVar65 & 0xffffffff) * uVar92 + lVar23 >> 0x10);
  param_1[0x16] =
       (int)(((uVar72 >> 0x20) * uVar57 << 0x20) + (uVar72 & 0xffffffff) * uVar49 + lVar32 >> 0x10);
  param_1[0x17] =
       (int)(((uVar48 >> 0x20) * uVar121 << 0x20) + (uVar48 & 0xffffffff) * uVar119 + lVar30 >> 0x10
            );
  uVar21 = _UNK_005d9aa8;
  uVar20 = _DAT_005d9aa0;
  uVar59 = (ulong)_UNK_005d9aa8;
  uVar92 = (ulong)_UNK_005dd808;
  uVar96 = (ulong)_UNK_005dd808;
  uVar65 = (ulong)_DAT_005d9aa0;
  uVar72 = (ulong)_UNK_005d9aa8;
  uVar49 = (ulong)_DAT_005dd800;
  uVar119 = (ulong)_UNK_005dd808;
  uVar57 = (ulong)_DAT_005dd800;
  uVar121 = (ulong)_UNK_005dd808;
  auVar54._0_8_ = auVar124._8_8_;
  param_1[0x34] =
       (int)((uVar40 & 0xffffffff) * (ulong)_DAT_005dd800 +
             ((uVar40 >> 0x20) * (ulong)_DAT_005dd800 + (uVar40 & 0xffffffff) * (ulong)_DAT_005d9aa0
             << 0x20) + lVar24 >> 0x10);
  param_1[0x35] =
       (int)((uVar46 & 0xffffffff) * uVar96 +
             ((uVar46 >> 0x20) * uVar92 + (uVar46 & 0xffffffff) * uVar59 << 0x20) + lVar23 >> 0x10);
  param_1[0x36] =
       (int)((uVar56 & 0xffffffff) * uVar57 +
             ((uVar56 >> 0x20) * uVar49 + (uVar56 & 0xffffffff) * uVar65 << 0x20) + lVar32 >> 0x10);
  param_1[0x37] =
       (int)((uVar80 & 0xffffffff) * uVar121 +
             ((uVar80 >> 0x20) * uVar119 + (uVar80 & 0xffffffff) * uVar72 << 0x20) + lVar30 >> 0x10)
  ;
  uVar38 = -(uint)(auVar124._8_4_ < 0);
  iVar64 = -(uint)(auVar124._12_4_ < 0);
  local_c8 = CONCAT44(iVar64,uVar38);
  auVar54._8_4_ = auVar124._12_4_;
  auVar54._12_4_ = iVar64;
  uVar58 = auVar54._8_8_;
  auVar17._8_4_ = uVar71;
  auVar17._0_8_ = CONCAT44(uVar70,uVar69);
  auVar17._12_4_ = iStack_11c;
  auVar83._0_8_ = auVar17._8_8_;
  uVar39 = -(uint)((int)uVar71 < 0);
  iVar67 = -(uint)(iStack_11c < 0);
  local_e8 = CONCAT44(iVar67,uVar39);
  auVar83._8_4_ = iStack_11c;
  auVar83._12_4_ = iVar67;
  uVar84 = auVar83._8_8_;
  auVar44._0_8_ = auVar109._8_8_;
  uVar105 = -(uint)((int)auVar109._8_4_ < 0);
  iVar138 = -(uint)(auVar109._12_4_ < 0);
  auVar44._8_4_ = auVar109._12_4_;
  auVar44._12_4_ = iVar138;
  uVar47 = auVar44._8_8_;
  auVar89._0_8_ = auVar136._8_8_;
  uVar106 = -(uint)(auVar136._8_4_ < 0);
  iVar78 = -(uint)(auVar136._12_4_ < 0);
  local_b8 = CONCAT44(iVar78,uVar106);
  auVar89._8_4_ = auVar136._12_4_;
  auVar89._12_4_ = iVar78;
  uVar91 = auVar89._8_8_;
  uVar49 = CONCAT44(uVar105,auVar109._8_4_) + CONCAT44(uVar38,auVar124._8_4_);
  uVar57 = uVar47 + uVar58;
  uVar119 = CONCAT44(uVar106,auVar136._8_4_) + CONCAT44(uVar39,uVar71);
  uVar121 = uVar91 + uVar84;
  lVar32 = ((uVar119 + uVar49 >> 0x20) * (ulong)_DAT_005dd810 << 0x20) +
           (uVar119 + uVar49 & 0xffffffff) * (ulong)_DAT_005dd810;
  lVar30 = ((uVar121 + uVar57 >> 0x20) * (ulong)_UNK_005dd818 << 0x20) +
           (uVar121 + uVar57 & 0xffffffff) * (ulong)_UNK_005dd818;
  uVar127 = -(uint)((int)uVar117 < 0);
  iVar113 = -(uint)(iVar77 < 0);
  auVar45._4_4_ = iVar113;
  auVar45._0_4_ = uVar127;
  auVar125._8_4_ = iVar77;
  auVar125._0_8_ = auVar124._0_8_;
  auVar125._12_4_ = iVar113;
  uVar126 = auVar125._8_8_;
  uVar68 = -(uint)((int)uVar69 < 0);
  iVar77 = -(uint)((int)uVar70 < 0);
  local_d8 = CONCAT44(iVar77,uVar68);
  auVar101._8_4_ = uVar70;
  auVar101._0_8_ = CONCAT44(uVar70,uVar69);
  auVar101._12_4_ = iVar77;
  uVar110 = -(uint)((int)uVar114 < 0);
  iVar79 = -(uint)((int)uVar116 < 0);
  local_108 = CONCAT44(iVar79,uVar110);
  auVar104._8_4_ = uVar116;
  auVar104._0_8_ = auVar109._0_8_;
  auVar104._12_4_ = iVar79;
  uVar112 = -(uint)((int)uVar133 < 0);
  iVar111 = -(uint)(iVar118 < 0);
  auVar131._4_4_ = iVar111;
  auVar131._0_4_ = uVar112;
  auVar63._8_4_ = iVar118;
  auVar63._0_8_ = auVar136._0_8_;
  auVar63._12_4_ = iVar111;
  uVar66 = auVar63._8_8_;
  uVar92 = CONCAT44(uVar110,uVar114) + CONCAT44(uVar127,uVar117);
  uVar96 = auVar104._8_8_ + uVar126;
  uVar59 = CONCAT44(uVar112,uVar133) + CONCAT44(uVar68,uVar69);
  uVar65 = uVar66 + auVar101._8_8_;
  lVar128 = ((uVar59 + uVar92 >> 0x20) * (ulong)_DAT_005dd810 << 0x20) +
            (uVar59 + uVar92 & 0xffffffff) * (ulong)_DAT_005dd810;
  lVar26 = ((uVar65 + uVar96 >> 0x20) * (ulong)_UNK_005dd818 << 0x20) +
           (uVar65 + uVar96 & 0xffffffff) * (ulong)_UNK_005dd818;
  lVar36 = (uVar92 & 0xffffffff) * (ulong)_DAT_005dd820 +
           ((uVar92 >> 0x20) * (ulong)_DAT_005dd820 + (uVar92 & 0xffffffff) * (ulong)uVar20 << 0x20)
           + lVar128;
  lVar81 = (uVar96 & 0xffffffff) * (ulong)_UNK_005dd828 +
           ((uVar96 >> 0x20) * (ulong)_UNK_005dd828 + (uVar96 & 0xffffffff) * (ulong)uVar21 << 0x20)
           + lVar26;
  lVar128 = (uVar59 & 0xffffffff) * (ulong)_DAT_005dd830 +
            ((uVar59 >> 0x20) * (ulong)_DAT_005dd830 + (uVar59 & 0xffffffff) * (ulong)uVar20 << 0x20
            ) + lVar128;
  lVar26 = (uVar65 & 0xffffffff) * (ulong)_UNK_005dd838 +
           ((uVar65 >> 0x20) * (ulong)_UNK_005dd838 + (uVar65 & 0xffffffff) * (ulong)uVar21 << 0x20)
           + lVar26;
  lVar24 = (uVar49 & 0xffffffff) * (ulong)_DAT_005dd820 +
           ((uVar49 >> 0x20) * (ulong)_DAT_005dd820 + (uVar49 & 0xffffffff) * (ulong)uVar20 << 0x20)
           + lVar32;
  lVar23 = (uVar57 & 0xffffffff) * (ulong)_UNK_005dd828 +
           ((uVar57 >> 0x20) * (ulong)_UNK_005dd828 + (uVar57 & 0xffffffff) * (ulong)uVar21 << 0x20)
           + lVar30;
  lVar32 = (uVar119 & 0xffffffff) * (ulong)_DAT_005dd830 +
           ((uVar119 >> 0x20) * (ulong)_DAT_005dd830 + (uVar119 & 0xffffffff) * (ulong)uVar20 <<
           0x20) + lVar32;
  lVar30 = (uVar121 & 0xffffffff) * (ulong)_UNK_005dd838 +
           ((uVar121 >> 0x20) * (ulong)_UNK_005dd838 + (uVar121 & 0xffffffff) * (ulong)uVar21 <<
           0x20) + lVar30;
  uVar49 = CONCAT44(uVar106,auVar136._8_4_) + CONCAT44(uVar38,auVar124._8_4_);
  uVar57 = uVar91 + uVar58;
  lVar34 = (uVar49 & 0xffffffff) * (ulong)_DAT_005dd840 +
           ((uVar49 >> 0x20) * (ulong)_DAT_005dd840 + (uVar49 & 0xffffffff) * (ulong)uVar20 << 0x20)
  ;
  lVar27 = (uVar57 & 0xffffffff) * (ulong)_UNK_005dd848 +
           ((uVar57 >> 0x20) * (ulong)_UNK_005dd848 + (uVar57 & 0xffffffff) * (ulong)uVar21 << 0x20)
  ;
  uVar49 = CONCAT44(uVar112,uVar133) + CONCAT44(uVar127,uVar117);
  uVar57 = uVar66 + uVar126;
  lVar28 = (uVar49 & 0xffffffff) * (ulong)_DAT_005dd840 +
           ((uVar49 >> 0x20) * (ulong)_DAT_005dd840 + (uVar49 & 0xffffffff) * (ulong)uVar20 << 0x20)
  ;
  lVar22 = (uVar57 & 0xffffffff) * (ulong)_UNK_005dd848 +
           ((uVar57 >> 0x20) * (ulong)_UNK_005dd848 + (uVar57 & 0xffffffff) * (ulong)uVar21 << 0x20)
  ;
  uVar49 = (ulong)_DAT_005dd850;
  uVar37 = (ulong)_UNK_005dd858;
  auVar76._8_4_ = iVar64;
  auVar76._0_8_ = local_c8;
  auVar76._12_4_ = -(uint)(auVar124._12_4_ < 0);
  uVar57 = (ulong)_DAT_005dd850;
  uVar2 = (ulong)_UNK_005dd858;
  uVar3 = (ulong)_UNK_005dd858;
  auVar45._8_4_ = iVar113;
  auVar45._12_4_ = -(uint)(auVar124._12_4_ < SUB164((undefined1  [16])0x0,0xc));
  uVar4 = (ulong)_UNK_005dd858;
  uVar92 = (ulong)_DAT_005dd860;
  uVar5 = (ulong)_UNK_005dd868;
  auVar102._8_4_ = iVar78;
  auVar102._0_8_ = local_b8;
  auVar102._12_4_ = -(uint)(auVar136._12_4_ < SUB164((undefined1  [16])0x0,0xc));
  uVar96 = (ulong)_DAT_005dd860;
  uVar6 = (ulong)_UNK_005dd868;
  uVar119 = (ulong)_DAT_005dd860;
  uVar7 = (ulong)_UNK_005dd868;
  auVar131._8_4_ = iVar111;
  auVar131._12_4_ = -(uint)(auVar136._12_4_ < SUB164((undefined1  [16])0x0,0xc));
  uVar121 = (ulong)_DAT_005dd860;
  uVar8 = (ulong)_UNK_005dd868;
  uVar59 = CONCAT44(uVar105,auVar109._8_4_) + CONCAT44(uVar39,uVar71);
  uVar65 = uVar47 + uVar84;
  lVar25 = (uVar59 & 0xffffffff) * (ulong)_DAT_005dd870 +
           ((uVar59 >> 0x20) * (ulong)_DAT_005dd870 + (uVar59 & 0xffffffff) * (ulong)uVar20 << 0x20)
  ;
  lVar29 = (uVar65 & 0xffffffff) * (ulong)_UNK_005dd878 +
           ((uVar65 >> 0x20) * (ulong)_UNK_005dd878 + (uVar65 & 0xffffffff) * (ulong)uVar21 << 0x20)
  ;
  uVar59 = CONCAT44(uVar110,uVar114) + CONCAT44(uVar68,uVar69);
  uVar65 = CONCAT44(iVar79,uVar116) + CONCAT44(iVar77,uVar70);
  lVar31 = (uVar59 & 0xffffffff) * (ulong)_DAT_005dd870 +
           ((uVar59 >> 0x20) * (ulong)_DAT_005dd870 + (ulong)uVar20 * (uVar59 & 0xffffffff) << 0x20)
  ;
  lVar33 = (uVar65 & 0xffffffff) * (ulong)_UNK_005dd878 +
           ((uVar65 >> 0x20) * (ulong)_UNK_005dd878 + (ulong)uVar21 * (uVar65 & 0xffffffff) << 0x20)
  ;
  uVar59 = (ulong)_DAT_005dd880;
  uVar9 = (ulong)_UNK_005dd888;
  auVar137._8_4_ = iVar67;
  auVar137._0_8_ = local_e8;
  auVar137._12_4_ = -(uint)(iStack_11c < SUB164((undefined1  [16])0x0,0xc));
  uVar65 = (ulong)_DAT_005dd880;
  uVar10 = (ulong)_UNK_005dd888;
  uVar72 = (ulong)_DAT_005dd880;
  uVar11 = (ulong)_UNK_005dd888;
  auVar90._8_4_ = iVar77;
  auVar90._0_8_ = local_d8;
  auVar90._12_4_ = -(uint)(iStack_11c < SUB164((undefined1  [16])0x0,0xc));
  uVar40 = (ulong)_DAT_005dd880;
  uVar12 = (ulong)_UNK_005dd888;
  uVar46 = (ulong)_DAT_005dd890;
  uVar13 = (ulong)_UNK_005dd898;
  auVar55._4_4_ = iVar138;
  auVar55._0_4_ = uVar105;
  auVar55._8_4_ = iVar138;
  auVar55._12_4_ = -(uint)(auVar109._12_4_ < SUB164((undefined1  [16])0x0,0xc));
  uVar48 = (ulong)_DAT_005dd890;
  uVar14 = (ulong)_UNK_005dd898;
  uVar56 = (ulong)_DAT_005dd890;
  uVar15 = (ulong)_UNK_005dd898;
  auVar95._8_4_ = iVar79;
  auVar95._0_8_ = local_108;
  auVar95._12_4_ = -(uint)(auVar109._12_4_ < SUB164((undefined1  [16])0x0,0xc));
  uVar80 = (ulong)_DAT_005dd890;
  uVar16 = (ulong)_UNK_005dd898;
  param_1[0xc] = (int)(((ulong)uVar127 * (ulong)_DAT_005dd850 << 0x20) +
                       (ulong)uVar117 * (ulong)_DAT_005dd850 + lVar28 + lVar36 >> 0x10);
  param_1[0xd] = (int)(((auVar45._8_8_ & 0xffffffff) * uVar4 << 0x20) +
                       (uVar126 & 0xffffffff) * uVar3 + lVar22 + lVar81 >> 0x10);
  param_1[0xe] = (int)((uVar38 * uVar57 << 0x20) + (auVar54._0_8_ & 0xffffffff) * uVar49 + lVar34 +
                       lVar24 >> 0x10);
  param_1[0xf] = (int)(((auVar76._8_8_ & 0xffffffff) * uVar2 << 0x20) +
                       (uVar58 & 0xffffffff) * uVar37 + lVar27 + lVar23 >> 0x10);
  param_1[0x1c] = (int)((uVar68 * uVar40 << 0x20) + uVar69 * uVar72 + lVar31 + lVar128 >> 0x10);
  param_1[0x1d] =
       (int)(((auVar90._8_8_ & 0xffffffff) * uVar12 << 0x20) + uVar70 * uVar11 + lVar33 + lVar26 >>
            0x10);
  param_1[0x1e] = (int)((uVar39 * uVar65 << 0x20) + uVar71 * uVar59 + lVar25 + lVar32 >> 0x10);
  param_1[0x1f] =
       (int)(((auVar137._8_8_ & 0xffffffff) * uVar10 << 0x20) + (uVar84 & 0xffffffff) * uVar9 +
             lVar29 + lVar30 >> 0x10);
  param_1[0x2c] = (int)((uVar110 * uVar80 << 0x20) + uVar114 * uVar56 + lVar31 + lVar36 >> 0x10);
  param_1[0x2d] =
       (int)(((auVar95._8_8_ & 0xffffffff) * uVar16 << 0x20) + uVar116 * uVar15 + lVar33 + lVar81 >>
            0x10);
  param_1[0x2e] =
       (int)((uVar105 * uVar48 << 0x20) + auVar109._8_4_ * uVar46 + lVar25 + lVar24 >> 0x10);
  param_1[0x2f] =
       (int)(((auVar55._8_8_ & 0xffffffff) * uVar14 << 0x20) + (uVar47 & 0xffffffff) * uVar13 +
             lVar29 + lVar23 >> 0x10);
  param_1[0x3c] = (int)((uVar112 * uVar121 << 0x20) + uVar133 * uVar119 + lVar28 + lVar128 >> 0x10);
  param_1[0x3d] =
       (int)(((auVar131._8_8_ & 0xffffffff) * uVar8 << 0x20) + (uVar66 & 0xffffffff) * uVar7 +
             lVar22 + lVar26 >> 0x10);
  param_1[0x3e] =
       (int)((uVar106 * uVar96 << 0x20) + (auVar89._0_8_ & 0xffffffff) * uVar92 + lVar34 + lVar32 >>
            0x10);
  param_1[0x3f] =
       (int)(((auVar102._8_8_ & 0xffffffff) * uVar6 << 0x20) + (uVar91 & 0xffffffff) * uVar5 +
             lVar27 + lVar30 >> 0x10);
  return;
}


