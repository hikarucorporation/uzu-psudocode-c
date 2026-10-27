// Function : jpeg_fdct_14x7
// Namespace: juce:jpeglibNamespace
// Entry    : 0036c5d0
// Prototype: undefined jpeg_fdct_14x7(int * param_1, long param_2, uint param_3)
// Body     : 0036c5d0 - 0036d584


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::jpeg_fdct_14x7(int*, unsigned char**, unsigned int) */

void __cdecl juce::jpeglibNamespace::jpeg_fdct_14x7(int *param_1,long param_2,uint param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  uint uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  int iVar21;
  int iVar22;
  undefined1 auVar20 [16];
  uint uVar23;
  int iVar25;
  undefined1 auVar24 [16];
  int iVar85;
  ulong uVar26;
  long lVar27;
  undefined1 auVar28 [16];
  ulong uVar30;
  long lVar31;
  undefined1 auVar29 [16];
  int iVar86;
  int iVar34;
  int iVar35;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  int iVar87;
  undefined1 auVar36 [16];
  ulong uVar39;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  int iVar88;
  int iVar89;
  ulong uVar40;
  undefined1 auVar41 [16];
  ulong uVar45;
  long lVar46;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  int iVar90;
  ulong uVar47;
  ulong uVar49;
  undefined1 auVar48 [16];
  long lVar50;
  uint uVar51;
  ulong uVar52;
  undefined1 auVar53 [16];
  ulong uVar54;
  int iVar58;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  long lVar59;
  ulong uVar60;
  long lVar61;
  ulong uVar64;
  undefined1 auVar62 [16];
  long lVar65;
  undefined1 auVar63 [16];
  long lVar66;
  int iVar68;
  long lVar69;
  undefined1 auVar67 [16];
  long lVar70;
  long lVar72;
  undefined1 auVar71 [16];
  long lVar73;
  long lVar77;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  long lVar78;
  long lVar79;
  long lVar80;
  long lVar83;
  undefined1 auVar81 [16];
  long lVar84;
  undefined1 auVar82 [16];
  int local_b8;
  int iStack_b4;
  undefined8 uStack_b0;
  int local_a8;
  int iStack_a4;
  undefined8 uStack_a0;
  
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  uVar26 = (ulong)param_3;
  lVar18 = 0;
  do {
    lVar10 = *(long *)(param_2 + lVar18);
    uVar45 = (ulong)*(byte *)(lVar10 + 0xd + uVar26);
    lVar16 = uVar45 + *(byte *)(lVar10 + uVar26);
    uVar47 = (ulong)*(byte *)(lVar10 + 1 + uVar26);
    uVar6 = (ulong)*(byte *)(lVar10 + 0xc + uVar26);
    lVar11 = uVar6 + uVar47;
    uVar7 = (ulong)*(byte *)(lVar10 + 2 + uVar26);
    uVar30 = (ulong)*(byte *)(lVar10 + 5 + uVar26);
    uVar49 = (ulong)*(byte *)(lVar10 + 8 + uVar26);
    lVar14 = uVar49 + uVar30;
    uVar40 = (ulong)*(byte *)(lVar10 + 6 + uVar26);
    uVar60 = (ulong)*(byte *)(lVar10 + 7 + uVar26);
    lVar12 = uVar60 + uVar40;
    lVar5 = lVar12 + lVar16;
    lVar16 = lVar16 - lVar12;
    lVar15 = lVar11 + lVar14;
    lVar11 = lVar11 - lVar14;
    uVar39 = (ulong)*(byte *)(lVar10 + 0xb + uVar26);
    lVar12 = uVar39 + uVar7;
    uVar64 = (ulong)*(byte *)(lVar10 + 4 + uVar26);
    uVar52 = (ulong)*(byte *)(lVar10 + 9 + uVar26);
    lVar14 = uVar52 + uVar64;
    lVar27 = lVar14 + lVar12;
    lVar12 = lVar12 - lVar14;
    lVar31 = *(byte *)(lVar10 + uVar26) - uVar45;
    lVar9 = uVar47 - uVar6;
    lVar8 = uVar7 - uVar39;
    uVar45 = (ulong)*(byte *)(lVar10 + 3 + uVar26);
    uVar6 = (ulong)*(byte *)(lVar10 + 10 + uVar26);
    lVar14 = uVar45 + uVar6;
    lVar10 = uVar45 - uVar6;
    lVar13 = uVar64 - uVar52;
    lVar19 = uVar30 - uVar49;
    lVar17 = uVar40 - uVar60;
    param_1[lVar18] = ((int)lVar15 + (int)lVar27 + (int)lVar5 + (int)lVar14) * 4 + -0x1c00;
    param_1[lVar18 + 4] =
         (int)((ulong)((lVar27 + lVar14 * -2) * -0x1c37 + lVar15 * 0xa12 + lVar14 * -0x65b0 +
                      lVar5 * 0x28c6) >> 0xb);
    lVar5 = (lVar16 + lVar11) * 0x2362;
    param_1[lVar18 + 2] = (int)((ulong)(lVar12 * 0x13a3 + lVar16 * 0x8bd + lVar5) >> 0xb);
    param_1[lVar18 + 6] = (int)((ulong)(lVar12 * -0x2c1f + lVar11 * -0x3704 + lVar5) >> 0xb);
    param_1[lVar18 + 7] =
         (((int)lVar31 + (int)lVar10) -
         ((int)(lVar8 + lVar9) + (int)(lVar19 - lVar13) + (int)lVar17)) * 4;
    lVar12 = (lVar19 - lVar13) * 0x2cf8 + lVar10 * -0x2000 + (lVar8 + lVar9) * -0x511;
    lVar16 = (lVar17 + lVar13) * 0x1814 + (lVar8 + lVar31) * 0x2652;
    param_1[lVar18 + 5] = (int)((ulong)(lVar13 * 0x23d7 + lVar8 * -0x4bf7 + lVar12 + lVar16) >> 0xb)
    ;
    lVar11 = (lVar19 - lVar17) * 0xef2 + (lVar9 + lVar31) * 0x2ab7;
    param_1[lVar18 + 3] = (int)((ulong)(lVar9 * -0xd92 + lVar19 * -0x623c + lVar12 + lVar11) >> 0xb)
    ;
    param_1[lVar18 + 1] =
         (int)((ulong)(lVar10 * 0x2000 + lVar17 * -0x240f + lVar31 * -0x2410 + lVar11 + lVar16) >>
              0xb);
    lVar18 = lVar18 + 8;
  } while (lVar18 != 0x38);
  iVar86 = param_1[0x30] + *param_1;
  auVar32._4_4_ = param_1[0x31] + param_1[1];
  iVar34 = param_1[0x32] + param_1[2];
  iVar35 = param_1[0x33] + param_1[3];
  auVar74._4_4_ = iVar35;
  auVar74._0_4_ = iVar34;
  auVar32._8_4_ = auVar32._4_4_;
  auVar32._12_4_ = -(uint)(auVar32._4_4_ < 0);
  lVar8 = auVar32._8_8_;
  lVar10 = CONCAT44(-(uint)(iVar86 < 0),iVar86);
  auVar74._8_4_ = iVar35;
  auVar74._12_4_ = -(uint)(iVar35 < 0);
  lVar77 = auVar74._8_8_;
  lVar73 = CONCAT44(-(uint)(iVar34 < 0),iVar34);
  iVar87 = param_1[0x28] + param_1[8];
  auVar36._4_4_ = param_1[0x29] + param_1[9];
  iVar34 = param_1[0x2a] + param_1[10];
  iVar35 = param_1[0x2b] + param_1[0xb];
  auVar53._4_4_ = iVar35;
  auVar53._0_4_ = iVar34;
  auVar36._8_4_ = auVar36._4_4_;
  auVar36._12_4_ = -(uint)(auVar36._4_4_ < 0);
  lVar13 = auVar36._8_8_;
  lVar9 = CONCAT44(-(uint)(iVar87 < 0),iVar87);
  auVar53._8_4_ = iVar35;
  auVar53._12_4_ = -(uint)(iVar35 < 0);
  lVar59 = auVar53._8_8_;
  lVar84 = CONCAT44(-(uint)(iVar34 < 0),iVar34);
  iVar88 = param_1[0x20] + param_1[0x10];
  auVar41._4_4_ = param_1[0x21] + param_1[0x11];
  iVar34 = param_1[0x22] + param_1[0x12];
  iVar35 = param_1[0x23] + param_1[0x13];
  auVar28._4_4_ = iVar35;
  auVar28._0_4_ = iVar34;
  auVar41._8_4_ = auVar41._4_4_;
  auVar41._12_4_ = -(uint)(auVar41._4_4_ < 0);
  lVar19 = auVar41._8_8_;
  lVar15 = CONCAT44(-(uint)(iVar88 < 0),iVar88);
  auVar28._8_4_ = iVar35;
  auVar28._12_4_ = -(uint)(iVar35 < 0);
  lVar16 = auVar28._8_8_;
  lVar18 = CONCAT44(-(uint)(iVar34 < 0),iVar34);
  auVar1 = *(undefined1 (*) [16])(param_1 + 0x18);
  auVar81._0_8_ = auVar1._8_8_;
  auVar71._0_8_ = auVar1._0_8_;
  auVar71._8_4_ = auVar1._4_4_;
  auVar71._12_4_ = -(uint)(auVar1._4_4_ < 0);
  lVar72 = auVar71._8_8_;
  lVar70 = CONCAT44(-(uint)(auVar1._0_4_ < 0),auVar1._0_4_);
  auVar81._8_4_ = auVar1._12_4_;
  auVar81._12_4_ = -(uint)(auVar1._12_4_ < 0);
  lVar83 = auVar81._8_8_;
  lVar80 = CONCAT44(-(uint)(auVar1._8_4_ < 0),auVar1._8_4_);
  iVar34 = *param_1 - param_1[0x30];
  iVar35 = param_1[1] - param_1[0x31];
  iVar21 = param_1[2] - param_1[0x32];
  iVar22 = param_1[3] - param_1[0x33];
  lVar50 = CONCAT44(-(uint)(iVar21 < 0),iVar21);
  iVar21 = param_1[8] - param_1[0x28];
  iVar58 = param_1[9] - param_1[0x29];
  auVar55._0_8_ = CONCAT44(iVar58,iVar21);
  auVar55._8_4_ = param_1[10] - param_1[0x2a];
  auVar55._12_4_ = param_1[0xb] - param_1[0x2b];
  auVar20._0_8_ = auVar55._8_8_;
  auVar20._8_4_ = auVar55._12_4_;
  auVar20._12_4_ = -(uint)(auVar55._12_4_ < 0);
  lVar5 = auVar20._8_8_;
  lVar12 = CONCAT44(-(uint)(auVar55._8_4_ < 0),auVar55._8_4_);
  auVar56._8_4_ = iVar58;
  auVar56._0_8_ = auVar55._0_8_;
  auVar56._12_4_ = -(uint)(iVar58 < 0);
  lVar65 = auVar56._8_8_;
  lVar61 = CONCAT44(-(uint)(iVar21 < 0),iVar21);
  uVar23 = param_1[0x10] - param_1[0x20];
  iVar21 = param_1[0x11] - param_1[0x21];
  iVar58 = param_1[0x12] - param_1[0x22];
  iVar25 = param_1[0x13] - param_1[0x23];
  uVar60 = lVar80 + lVar84 + lVar18 + lVar73;
  uVar64 = lVar83 + lVar59 + lVar16 + lVar77;
  uVar26 = (ulong)_DAT_005dd8a0;
  uVar40 = (ulong)_UNK_005dd8a8;
  uVar30 = (ulong)_DAT_005dd8a0;
  uVar45 = (ulong)_UNK_005dd8a8;
  uVar47 = lVar70 + lVar9 + lVar15 + lVar10;
  uVar49 = lVar72 + lVar13 + lVar19 + lVar8;
  uVar6 = (ulong)_UNK_005dd8a8;
  uVar7 = (ulong)_UNK_005dd8a8;
  *param_1 = (int)(((uVar47 >> 0x20) * (ulong)_DAT_005dd8a0 << 0x20) +
                   (uVar47 & 0xffffffff) * (ulong)_DAT_005dd8a0 >> 0x10);
  param_1[1] = (int)(((uVar49 >> 0x20) * uVar7 << 0x20) + (uVar49 & 0xffffffff) * uVar6 >> 0x10);
  param_1[2] = (int)(((uVar60 >> 0x20) * uVar30 << 0x20) + (uVar60 & 0xffffffff) * uVar26 >> 0x10);
  param_1[3] = (int)(((uVar64 >> 0x20) * uVar45 << 0x20) + (uVar64 & 0xffffffff) * uVar40 >> 0x10);
  uVar26 = lVar18 + lVar73 + lVar80 * -4;
  uVar30 = lVar16 + lVar77 + lVar83 * -4;
  uVar40 = lVar15 + lVar10 + lVar70 * -4;
  uVar45 = lVar19 + lVar8 + lVar72 * -4;
  lVar17 = ((uVar40 >> 0x20) * (ulong)_DAT_005dd8b0 << 0x20) +
           (uVar40 & 0xffffffff) * (ulong)_DAT_005dd8b0;
  lVar46 = ((uVar45 >> 0x20) * (ulong)_UNK_005dd8b8 << 0x20) +
           (uVar45 & 0xffffffff) * (ulong)_UNK_005dd8b8;
  lVar27 = ((uVar26 >> 0x20) * (ulong)_DAT_005dd8b0 << 0x20) +
           (uVar26 & 0xffffffff) * (ulong)_DAT_005dd8b0;
  lVar31 = ((uVar30 >> 0x20) * (ulong)_UNK_005dd8b8 << 0x20) +
           (uVar30 & 0xffffffff) * (ulong)_UNK_005dd8b8;
  lVar11 = (((ulong)(lVar73 - lVar18) >> 0x20) * (ulong)_DAT_005dd8c0 << 0x20) +
           (lVar73 - lVar18 & 0xffffffffU) * (ulong)_DAT_005dd8c0;
  lVar14 = (((ulong)(lVar77 - lVar16) >> 0x20) * (ulong)_UNK_005dd8c8 << 0x20) +
           (lVar77 - lVar16 & 0xffffffffU) * (ulong)_UNK_005dd8c8;
  lVar66 = (((ulong)(lVar10 - lVar15) >> 0x20) * (ulong)_DAT_005dd8c0 << 0x20) +
           (lVar10 - lVar15 & 0xffffffffU) * (ulong)_DAT_005dd8c0;
  lVar69 = (((ulong)(lVar8 - lVar19) >> 0x20) * (ulong)_UNK_005dd8c8 << 0x20) +
           (lVar8 - lVar19 & 0xffffffffU) * (ulong)_UNK_005dd8c8;
  lVar18 = (((ulong)(lVar84 - lVar18) >> 0x20) * (ulong)_DAT_005dd8d0 << 0x20) +
           (lVar84 - lVar18 & 0xffffffffU) * (ulong)_DAT_005dd8d0;
  lVar16 = (((ulong)(lVar59 - lVar16) >> 0x20) * (ulong)_UNK_005dd8d8 << 0x20) +
           (lVar59 - lVar16 & 0xffffffffU) * (ulong)_UNK_005dd8d8;
  lVar78 = (((ulong)(lVar9 - lVar15) >> 0x20) * (ulong)_DAT_005dd8d0 << 0x20) +
           (lVar9 - lVar15 & 0xffffffffU) * (ulong)_DAT_005dd8d0;
  lVar79 = (((ulong)(lVar13 - lVar19) >> 0x20) * (ulong)_UNK_005dd8d8 << 0x20) +
           (lVar13 - lVar19 & 0xffffffffU) * (ulong)_UNK_005dd8d8;
  param_1[0x10] = (int)((ulong)(lVar78 + lVar66 + lVar17) >> 0x10);
  param_1[0x11] = (int)((ulong)(lVar79 + lVar69 + lVar46) >> 0x10);
  param_1[0x12] = (int)((ulong)(lVar18 + lVar11 + lVar27) >> 0x10);
  param_1[0x13] = (int)((ulong)(lVar16 + lVar14 + lVar31) >> 0x10);
  uVar4 = _UNK_005d9aa8;
  uVar3 = _DAT_005d9aa0;
  lVar15 = (((ulong)(lVar73 - lVar84) >> 0x20) * (ulong)_DAT_005dd8e0 << 0x20) +
           (lVar73 - lVar84 & 0xffffffffU) * (ulong)_DAT_005dd8e0;
  lVar19 = (((ulong)(lVar77 - lVar59) >> 0x20) * (ulong)_UNK_005dd8e8 << 0x20) +
           (lVar77 - lVar59 & 0xffffffffU) * (ulong)_UNK_005dd8e8;
  lVar10 = (((ulong)(lVar10 - lVar9) >> 0x20) * (ulong)_DAT_005dd8e0 << 0x20) +
           (lVar10 - lVar9 & 0xffffffffU) * (ulong)_DAT_005dd8e0;
  lVar8 = (((ulong)(lVar8 - lVar13) >> 0x20) * (ulong)_UNK_005dd8e8 << 0x20) +
          (lVar8 - lVar13 & 0xffffffffU) * (ulong)_UNK_005dd8e8;
  uVar52 = lVar84 + lVar80 * -2;
  uVar54 = lVar59 + lVar83 * -2;
  uVar64 = lVar9 + lVar70 * -2;
  uVar39 = lVar13 + lVar72 * -2;
  uVar45 = (ulong)_UNK_005d9aa8;
  uVar6 = (ulong)_UNK_005dd8f8;
  uVar7 = (ulong)_UNK_005dd8f8;
  uVar26 = (ulong)_DAT_005d9aa0;
  uVar47 = (ulong)_UNK_005d9aa8;
  uVar30 = (ulong)_DAT_005dd8f0;
  uVar49 = (ulong)_UNK_005dd8f8;
  uVar40 = (ulong)_DAT_005dd8f0;
  uVar60 = (ulong)_UNK_005dd8f8;
  param_1[0x20] =
       (int)((uVar64 & 0xffffffff) * (ulong)_DAT_005dd8f0 +
             ((uVar64 >> 0x20) * (ulong)_DAT_005dd8f0 + (uVar64 & 0xffffffff) * (ulong)_DAT_005d9aa0
             << 0x20) + lVar78 + lVar10 >> 0x10);
  param_1[0x21] =
       (int)((uVar39 & 0xffffffff) * uVar7 +
             ((uVar39 >> 0x20) * uVar6 + (uVar39 & 0xffffffff) * uVar45 << 0x20) + lVar79 + lVar8 >>
            0x10);
  param_1[0x22] =
       (int)((uVar52 & 0xffffffff) * uVar40 +
             ((uVar52 >> 0x20) * uVar30 + (uVar52 & 0xffffffff) * uVar26 << 0x20) + lVar18 + lVar15
            >> 0x10);
  param_1[0x23] =
       (int)((uVar54 & 0xffffffff) * uVar60 +
             ((uVar54 >> 0x20) * uVar49 + (uVar54 & 0xffffffff) * uVar47 << 0x20) + lVar16 + lVar19
            >> 0x10);
  param_1[0x30] = (int)((ulong)((lVar10 - lVar66) + lVar17) >> 0x10);
  param_1[0x31] = (int)((ulong)((lVar8 - lVar69) + lVar46) >> 0x10);
  param_1[0x32] = (int)((ulong)((lVar15 - lVar11) + lVar27) >> 0x10);
  param_1[0x33] = (int)((ulong)((lVar19 - lVar14) + lVar31) >> 0x10);
  lVar18 = CONCAT44(-(uint)(iVar22 < 0),iVar22);
  uVar26 = lVar5 + lVar18;
  lVar9 = (((ulong)(lVar12 + lVar50) >> 0x20) * (ulong)_DAT_005dd900 << 0x20) +
          (lVar12 + lVar50 & 0xffffffffU) * (ulong)_DAT_005dd900;
  lVar15 = ((uVar26 >> 0x20) * (ulong)_UNK_005dd908 << 0x20) +
           (uVar26 & 0xffffffff) * (ulong)_UNK_005dd908;
  lVar16 = CONCAT44(-(uint)(iVar34 < 0),iVar34);
  lVar11 = CONCAT44(-(uint)(iVar35 < 0),iVar35);
  lVar27 = (((ulong)(lVar61 + lVar16) >> 0x20) * (ulong)_DAT_005dd900 << 0x20) +
           (lVar61 + lVar16 & 0xffffffffU) * (ulong)_DAT_005dd900;
  lVar31 = (((ulong)(lVar65 + lVar11) >> 0x20) * (ulong)_UNK_005dd908 << 0x20) +
           (lVar65 + lVar11 & 0xffffffffU) * (ulong)_UNK_005dd908;
  uVar26 = lVar18 - lVar5;
  lVar18 = (((ulong)(lVar50 - lVar12) >> 0x20) * (ulong)_DAT_005dd910 << 0x20) +
           (lVar50 - lVar12 & 0xffffffffU) * (ulong)_DAT_005dd910;
  lVar14 = ((uVar26 >> 0x20) * (ulong)_UNK_005dd918 << 0x20) +
           (uVar26 & 0xffffffff) * (ulong)_UNK_005dd918;
  lVar10 = (((ulong)(lVar16 - lVar61) >> 0x20) * (ulong)_DAT_005dd910 << 0x20) +
           (lVar16 - lVar61 & 0xffffffffU) * (ulong)_DAT_005dd910;
  lVar8 = (((ulong)(lVar11 - lVar65) >> 0x20) * (ulong)_UNK_005dd918 << 0x20) +
          (lVar11 - lVar65 & 0xffffffffU) * (ulong)_UNK_005dd918;
  auVar2._8_4_ = iVar58;
  auVar2._0_8_ = CONCAT44(iVar21,uVar23);
  auVar2._12_4_ = iVar25;
  uVar51 = -(uint)((int)uVar23 < 0);
  iVar34 = -(uint)(iVar21 < 0);
  auVar33._4_4_ = iVar34;
  auVar33._0_4_ = uVar51;
  auVar37._0_8_ = auVar2._8_8_;
  auVar75._8_4_ = iVar21;
  auVar75._0_8_ = CONCAT44(iVar21,uVar23);
  auVar75._12_4_ = iVar34;
  uVar64 = auVar75._8_8_;
  uVar26 = lVar61 + CONCAT44(uVar51,uVar23);
  uVar30 = lVar65 + uVar64;
  lVar13 = (uVar26 & 0xffffffff) * (ulong)_DAT_005dd920 +
           ((uVar26 >> 0x20) * (ulong)_DAT_005dd920 + (uVar26 & 0xffffffff) * (ulong)uVar3 << 0x20);
  lVar17 = (uVar30 & 0xffffffff) * (ulong)_UNK_005dd928 +
           ((uVar30 >> 0x20) * (ulong)_UNK_005dd928 + (uVar30 & 0xffffffff) * (ulong)uVar4 << 0x20);
  auVar42._0_4_ = -(uint)(iVar58 < 0);
  auVar42._4_4_ = -(uint)(iVar25 < 0);
  auVar42._12_4_ = -(uint)(iVar25 < SUB164((undefined1  [16])0x0,0xc));
  auVar37._8_4_ = iVar25;
  auVar37._12_4_ = auVar42._4_4_;
  uVar60 = auVar37._8_8_;
  lVar19 = CONCAT44(auVar42._0_4_,iVar58);
  uVar26 = lVar12 + lVar19;
  uVar30 = lVar5 + uVar60;
  lVar46 = (uVar26 & 0xffffffff) * (ulong)_DAT_005dd920 +
           ((uVar26 >> 0x20) * (ulong)_DAT_005dd920 + (uVar26 & 0xffffffff) * (ulong)uVar3 << 0x20);
  lVar84 = (uVar30 & 0xffffffff) * (ulong)_UNK_005dd928 +
           ((uVar30 >> 0x20) * (ulong)_UNK_005dd928 + (uVar30 & 0xffffffff) * (ulong)uVar4 << 0x20);
  uVar26 = lVar16 + CONCAT44(uVar51,uVar23);
  lVar12 = ((uVar26 >> 0x20) * (ulong)_DAT_005dd930 << 0x20) +
           (uVar26 & 0xffffffff) * (ulong)_DAT_005dd930;
  lVar5 = ((lVar11 + uVar64 >> 0x20) * (ulong)_UNK_005dd938 << 0x20) +
          (lVar11 + uVar64 & 0xffffffff) * (ulong)_UNK_005dd938;
  uVar26 = CONCAT44(-(uint)(iVar22 < 0),iVar22) + uVar60;
  lVar16 = (((ulong)(lVar50 + lVar19) >> 0x20) * (ulong)_DAT_005dd930 << 0x20) +
           (lVar50 + lVar19 & 0xffffffffU) * (ulong)_DAT_005dd930;
  lVar11 = ((uVar26 >> 0x20) * (ulong)_UNK_005dd938 << 0x20) +
           (uVar26 & 0xffffffff) * (ulong)_UNK_005dd938;
  uVar26 = (ulong)_DAT_005dd940;
  uVar6 = (ulong)_UNK_005dd948;
  auVar42._8_4_ = auVar42._4_4_;
  uVar30 = (ulong)_DAT_005dd940;
  uVar7 = (ulong)_UNK_005dd948;
  uVar40 = (ulong)_DAT_005dd940;
  uVar47 = (ulong)_UNK_005dd948;
  auVar33._8_4_ = iVar34;
  auVar33._12_4_ = -(uint)(iVar25 < SUB164((undefined1  [16])0x0,0xc));
  uVar45 = (ulong)_DAT_005dd940;
  uVar49 = (ulong)_UNK_005dd948;
  param_1[8] = (int)((ulong)((lVar27 - lVar10) + lVar12) >> 0x10);
  param_1[9] = (int)((ulong)((lVar31 - lVar8) + lVar5) >> 0x10);
  param_1[10] = (int)((ulong)((lVar9 - lVar18) + lVar16) >> 0x10);
  param_1[0xb] = (int)((ulong)((lVar15 - lVar14) + lVar11) >> 0x10);
  param_1[0x18] = (int)((ulong)(lVar10 + lVar27 + lVar13) >> 0x10);
  param_1[0x19] = (int)((ulong)(lVar8 + lVar31 + lVar17) >> 0x10);
  param_1[0x1a] = (int)((ulong)(lVar18 + lVar9 + lVar46) >> 0x10);
  param_1[0x1b] = (int)((ulong)(lVar14 + lVar15 + lVar84) >> 0x10);
  param_1[0x28] = (int)((uVar51 * uVar45 << 0x20) + uVar23 * uVar40 + lVar12 + lVar13 >> 0x10);
  param_1[0x29] =
       (int)(((auVar33._8_8_ & 0xffffffff) * uVar49 << 0x20) + (uVar64 & 0xffffffff) * uVar47 +
             lVar5 + lVar17 >> 0x10);
  param_1[0x2a] =
       (int)((auVar42._0_4_ * uVar30 << 0x20) + (auVar37._0_8_ & 0xffffffff) * uVar26 + lVar16 +
             lVar46 >> 0x10);
  param_1[0x2b] =
       (int)(((auVar42._8_8_ & 0xffffffff) * uVar7 << 0x20) + (uVar60 & 0xffffffff) * uVar6 + lVar11
             + lVar84 >> 0x10);
  local_b8 = (int)*(undefined8 *)(param_1 + 4);
  iStack_b4 = (int)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20);
  uStack_b0._0_4_ = (int)*(undefined8 *)(param_1 + 6);
  uStack_b0._4_4_ = (int)((ulong)*(undefined8 *)(param_1 + 6) >> 0x20);
  iVar90 = param_1[0x34] + local_b8;
  auVar48._4_4_ = param_1[0x35] + iStack_b4;
  iVar34 = param_1[0x36] + (int)uStack_b0;
  iVar35 = param_1[0x37] + uStack_b0._4_4_;
  auVar62._4_4_ = iVar35;
  auVar62._0_4_ = iVar34;
  auVar48._8_4_ = auVar48._4_4_;
  auVar48._12_4_ = -(uint)(auVar48._4_4_ < 0);
  lVar50 = auVar48._8_8_;
  lVar46 = CONCAT44(-(uint)(iVar90 < 0),iVar90);
  auVar62._8_4_ = iVar35;
  auVar62._12_4_ = -(uint)(iVar35 < 0);
  lVar65 = auVar62._8_8_;
  lVar61 = CONCAT44(-(uint)(iVar34 < 0),iVar34);
  local_a8 = (int)*(undefined8 *)(param_1 + 0xc);
  iStack_a4 = (int)((ulong)*(undefined8 *)(param_1 + 0xc) >> 0x20);
  uStack_a0._0_4_ = (int)*(undefined8 *)(param_1 + 0xe);
  uStack_a0._4_4_ = (int)((ulong)*(undefined8 *)(param_1 + 0xe) >> 0x20);
  iVar85 = param_1[0x2c] + local_a8;
  auVar29._4_4_ = param_1[0x2d] + iStack_a4;
  iVar34 = param_1[0x2e] + (int)uStack_a0;
  iVar35 = param_1[0x2f] + uStack_a0._4_4_;
  auVar82._4_4_ = iVar35;
  auVar82._0_4_ = iVar34;
  auVar29._8_4_ = auVar29._4_4_;
  auVar29._12_4_ = -(uint)(auVar29._4_4_ < 0);
  lVar31 = auVar29._8_8_;
  lVar27 = CONCAT44(-(uint)(iVar85 < 0),iVar85);
  auVar82._8_4_ = iVar35;
  auVar82._12_4_ = -(uint)(iVar35 < 0);
  lVar77 = auVar82._8_8_;
  lVar73 = CONCAT44(-(uint)(iVar34 < 0),iVar34);
  iVar89 = param_1[0x24] + param_1[0x14];
  auVar43._4_4_ = param_1[0x25] + param_1[0x15];
  iVar34 = param_1[0x26] + param_1[0x16];
  iVar35 = param_1[0x27] + param_1[0x17];
  auVar57._4_4_ = iVar35;
  auVar57._0_4_ = iVar34;
  auVar43._8_4_ = auVar43._4_4_;
  auVar43._12_4_ = -(uint)(auVar43._4_4_ < 0);
  lVar14 = auVar43._8_8_;
  lVar11 = CONCAT44(-(uint)(iVar89 < 0),iVar89);
  auVar57._8_4_ = iVar35;
  auVar57._12_4_ = -(uint)(iVar35 < 0);
  lVar16 = auVar57._8_8_;
  lVar18 = CONCAT44(-(uint)(iVar34 < 0),iVar34);
  auVar1 = *(undefined1 (*) [16])(param_1 + 0x1c);
  auVar76._0_8_ = auVar1._8_8_;
  auVar67._0_8_ = auVar1._0_8_;
  auVar67._8_4_ = auVar1._4_4_;
  auVar67._12_4_ = -(uint)(auVar1._4_4_ < 0);
  lVar69 = auVar67._8_8_;
  lVar66 = CONCAT44(-(uint)(auVar1._0_4_ < 0),auVar1._0_4_);
  auVar76._8_4_ = auVar1._12_4_;
  auVar76._12_4_ = -(uint)(auVar1._12_4_ < 0);
  lVar72 = auVar76._8_8_;
  lVar70 = CONCAT44(-(uint)(auVar1._8_4_ < 0),auVar1._8_4_);
  local_b8 = local_b8 - param_1[0x34];
  iStack_b4 = iStack_b4 - param_1[0x35];
  uStack_b0._0_4_ = (int)uStack_b0 - param_1[0x36];
  iVar35 = uStack_b0._4_4_ - param_1[0x37];
  lVar17 = CONCAT44(-(uint)((int)uStack_b0 < 0),(int)uStack_b0);
  lVar12 = CONCAT44(-(uint)(local_b8 < 0),local_b8);
  uStack_b0 = CONCAT44(-(uint)(iStack_b4 < 0),iStack_b4);
  local_a8 = local_a8 - param_1[0x2c];
  iStack_a4 = iStack_a4 - param_1[0x2d];
  iVar34 = (int)uStack_a0 - param_1[0x2e];
  iVar21 = uStack_a0._4_4_ - param_1[0x2f];
  lVar5 = CONCAT44(-(uint)(local_a8 < 0),local_a8);
  uStack_a0 = CONCAT44(-(uint)(iStack_a4 < 0),iStack_a4);
  uVar23 = param_1[0x14] - param_1[0x24];
  iVar22 = param_1[0x15] - param_1[0x25];
  iVar58 = param_1[0x16] - param_1[0x26];
  iVar25 = param_1[0x17] - param_1[0x27];
  uVar60 = lVar70 + lVar73 + lVar18 + lVar61;
  uVar64 = lVar72 + lVar77 + lVar16 + lVar65;
  uVar26 = (ulong)_DAT_005dd8a0;
  uVar40 = (ulong)_UNK_005dd8a8;
  uVar30 = (ulong)_DAT_005dd8a0;
  uVar45 = (ulong)_UNK_005dd8a8;
  uVar47 = lVar66 + lVar27 + lVar11 + lVar46;
  uVar49 = lVar69 + lVar31 + lVar14 + lVar50;
  uVar6 = (ulong)_UNK_005dd8a8;
  uVar7 = (ulong)_UNK_005dd8a8;
  param_1[4] = (int)(((uVar47 >> 0x20) * (ulong)_DAT_005dd8a0 << 0x20) +
                     (uVar47 & 0xffffffff) * (ulong)_DAT_005dd8a0 >> 0x10);
  param_1[5] = (int)(((uVar49 >> 0x20) * uVar7 << 0x20) + (uVar49 & 0xffffffff) * uVar6 >> 0x10);
  param_1[6] = (int)(((uVar60 >> 0x20) * uVar30 << 0x20) + (uVar60 & 0xffffffff) * uVar26 >> 0x10);
  param_1[7] = (int)(((uVar64 >> 0x20) * uVar45 << 0x20) + (uVar64 & 0xffffffff) * uVar40 >> 0x10);
  uVar40 = lVar18 + lVar61 + lVar70 * -4;
  uVar45 = lVar16 + lVar65 + lVar72 * -4;
  uVar26 = lVar11 + lVar46 + lVar66 * -4;
  uVar30 = lVar14 + lVar50 + lVar69 * -4;
  lVar15 = ((uVar26 >> 0x20) * (ulong)_DAT_005dd8b0 << 0x20) +
           (uVar26 & 0xffffffff) * (ulong)_DAT_005dd8b0;
  lVar19 = ((uVar30 >> 0x20) * (ulong)_UNK_005dd8b8 << 0x20) +
           (uVar30 & 0xffffffff) * (ulong)_UNK_005dd8b8;
  lVar84 = ((uVar40 >> 0x20) * (ulong)_DAT_005dd8b0 << 0x20) +
           (uVar40 & 0xffffffff) * (ulong)_DAT_005dd8b0;
  lVar59 = ((uVar45 >> 0x20) * (ulong)_UNK_005dd8b8 << 0x20) +
           (uVar45 & 0xffffffff) * (ulong)_UNK_005dd8b8;
  lVar9 = (((ulong)(lVar61 - lVar18) >> 0x20) * (ulong)_DAT_005dd8c0 << 0x20) +
          (lVar61 - lVar18 & 0xffffffffU) * (ulong)_DAT_005dd8c0;
  lVar13 = (((ulong)(lVar65 - lVar16) >> 0x20) * (ulong)_UNK_005dd8c8 << 0x20) +
           (lVar65 - lVar16 & 0xffffffffU) * (ulong)_UNK_005dd8c8;
  lVar10 = (((ulong)(lVar46 - lVar11) >> 0x20) * (ulong)_DAT_005dd8c0 << 0x20) +
           (lVar46 - lVar11 & 0xffffffffU) * (ulong)_DAT_005dd8c0;
  lVar8 = (((ulong)(lVar50 - lVar14) >> 0x20) * (ulong)_UNK_005dd8c8 << 0x20) +
          (lVar50 - lVar14 & 0xffffffffU) * (ulong)_UNK_005dd8c8;
  lVar18 = (((ulong)(lVar73 - lVar18) >> 0x20) * (ulong)_DAT_005dd8d0 << 0x20) +
           (lVar73 - lVar18 & 0xffffffffU) * (ulong)_DAT_005dd8d0;
  lVar16 = (((ulong)(lVar77 - lVar16) >> 0x20) * (ulong)_UNK_005dd8d8 << 0x20) +
           (lVar77 - lVar16 & 0xffffffffU) * (ulong)_UNK_005dd8d8;
  lVar11 = (((ulong)(lVar27 - lVar11) >> 0x20) * (ulong)_DAT_005dd8d0 << 0x20) +
           (lVar27 - lVar11 & 0xffffffffU) * (ulong)_DAT_005dd8d0;
  lVar14 = (((ulong)(lVar31 - lVar14) >> 0x20) * (ulong)_UNK_005dd8d8 << 0x20) +
           (lVar31 - lVar14 & 0xffffffffU) * (ulong)_UNK_005dd8d8;
  param_1[0x14] = (int)((ulong)(lVar11 + lVar10 + lVar15) >> 0x10);
  param_1[0x15] = (int)((ulong)(lVar14 + lVar8 + lVar19) >> 0x10);
  param_1[0x16] = (int)((ulong)(lVar18 + lVar9 + lVar84) >> 0x10);
  param_1[0x17] = (int)((ulong)(lVar16 + lVar13 + lVar59) >> 0x10);
  uVar4 = _UNK_005d9aa8;
  uVar3 = _DAT_005d9aa0;
  lVar61 = (((ulong)(lVar61 - lVar73) >> 0x20) * (ulong)_DAT_005dd8e0 << 0x20) +
           (lVar61 - lVar73 & 0xffffffffU) * (ulong)_DAT_005dd8e0;
  lVar65 = (((ulong)(lVar65 - lVar77) >> 0x20) * (ulong)_UNK_005dd8e8 << 0x20) +
           (lVar65 - lVar77 & 0xffffffffU) * (ulong)_UNK_005dd8e8;
  lVar46 = (((ulong)(lVar46 - lVar27) >> 0x20) * (ulong)_DAT_005dd8e0 << 0x20) +
           (lVar46 - lVar27 & 0xffffffffU) * (ulong)_DAT_005dd8e0;
  lVar50 = (((ulong)(lVar50 - lVar31) >> 0x20) * (ulong)_UNK_005dd8e8 << 0x20) +
           (lVar50 - lVar31 & 0xffffffffU) * (ulong)_UNK_005dd8e8;
  uVar52 = lVar73 + lVar70 * -2;
  uVar54 = lVar77 + lVar72 * -2;
  uVar64 = lVar27 + lVar66 * -2;
  uVar39 = lVar31 + lVar69 * -2;
  uVar47 = (ulong)_UNK_005d9aa8;
  uVar40 = (ulong)_UNK_005dd8f8;
  uVar45 = (ulong)_UNK_005dd8f8;
  uVar49 = (ulong)_DAT_005d9aa0;
  uVar60 = (ulong)_UNK_005d9aa8;
  uVar26 = (ulong)_DAT_005dd8f0;
  uVar6 = (ulong)_UNK_005dd8f8;
  uVar30 = (ulong)_DAT_005dd8f0;
  uVar7 = (ulong)_UNK_005dd8f8;
  param_1[0x24] =
       (int)((uVar64 & 0xffffffff) * (ulong)_DAT_005dd8f0 +
             ((uVar64 >> 0x20) * (ulong)_DAT_005dd8f0 + (uVar64 & 0xffffffff) * (ulong)_DAT_005d9aa0
             << 0x20) + lVar11 + lVar46 >> 0x10);
  param_1[0x25] =
       (int)((uVar39 & 0xffffffff) * uVar45 +
             ((uVar39 >> 0x20) * uVar40 + (uVar39 & 0xffffffff) * uVar47 << 0x20) + lVar14 + lVar50
            >> 0x10);
  param_1[0x26] =
       (int)((uVar52 & 0xffffffff) * uVar30 +
             ((uVar52 >> 0x20) * uVar26 + (uVar52 & 0xffffffff) * uVar49 << 0x20) + lVar18 + lVar61
            >> 0x10);
  param_1[0x27] =
       (int)((uVar54 & 0xffffffff) * uVar7 +
             ((uVar54 >> 0x20) * uVar6 + (uVar54 & 0xffffffff) * uVar60 << 0x20) + lVar16 + lVar65
            >> 0x10);
  auVar1._8_4_ = iVar58;
  auVar1._0_8_ = CONCAT44(iVar22,uVar23);
  auVar1._12_4_ = iVar25;
  uVar51 = -(uint)((int)uVar23 < 0);
  iVar68 = -(uint)(iVar22 < 0);
  auVar24._4_4_ = iVar68;
  auVar24._0_4_ = uVar51;
  param_1[0x34] = (int)((ulong)((lVar46 - lVar10) + lVar15) >> 0x10);
  param_1[0x35] = (int)((ulong)((lVar50 - lVar8) + lVar19) >> 0x10);
  param_1[0x36] = (int)((ulong)((lVar61 - lVar9) + lVar84) >> 0x10);
  param_1[0x37] = (int)((ulong)((lVar65 - lVar13) + lVar59) >> 0x10);
  lVar16 = CONCAT44(-(uint)(iVar34 < 0),iVar34);
  lVar11 = CONCAT44(-(uint)(iVar21 < 0),iVar21);
  lVar18 = CONCAT44(-(uint)(iVar35 < 0),iVar35);
  lVar46 = (((ulong)(lVar16 + lVar17) >> 0x20) * (ulong)_DAT_005dd900 << 0x20) +
           (lVar16 + lVar17 & 0xffffffffU) * (ulong)_DAT_005dd900;
  lVar50 = (((ulong)(lVar11 + lVar18) >> 0x20) * (ulong)_UNK_005dd908 << 0x20) +
           (lVar11 + lVar18 & 0xffffffffU) * (ulong)_UNK_005dd908;
  lVar8 = (((ulong)(lVar5 + lVar12) >> 0x20) * (ulong)_DAT_005dd900 << 0x20) +
          (lVar5 + lVar12 & 0xffffffffU) * (ulong)_DAT_005dd900;
  lVar9 = (((ulong)(uStack_a0 + uStack_b0) >> 0x20) * (ulong)_UNK_005dd908 << 0x20) +
          (uStack_a0 + uStack_b0 & 0xffffffffU) * (ulong)_UNK_005dd908;
  lVar31 = (((ulong)(lVar17 - lVar16) >> 0x20) * (ulong)_DAT_005dd910 << 0x20) +
           (lVar17 - lVar16 & 0xffffffffU) * (ulong)_DAT_005dd910;
  lVar10 = (((ulong)(lVar18 - lVar11) >> 0x20) * (ulong)_UNK_005dd918 << 0x20) +
           (lVar18 - lVar11 & 0xffffffffU) * (ulong)_UNK_005dd918;
  auVar63._8_4_ = iVar22;
  auVar63._0_8_ = CONCAT44(iVar22,uVar23);
  auVar63._12_4_ = iVar68;
  uVar64 = auVar63._8_8_;
  lVar14 = (((ulong)(lVar12 - lVar5) >> 0x20) * (ulong)_DAT_005dd910 << 0x20) +
           (lVar12 - lVar5 & 0xffffffffU) * (ulong)_DAT_005dd910;
  lVar27 = (((ulong)(uStack_b0 - uStack_a0) >> 0x20) * (ulong)_UNK_005dd918 << 0x20) +
           (uStack_b0 - uStack_a0 & 0xffffffffU) * (ulong)_UNK_005dd918;
  uVar26 = lVar5 + CONCAT44(uVar51,uVar23);
  uVar30 = uStack_a0 + uVar64;
  lVar5 = (uVar26 & 0xffffffff) * (ulong)_DAT_005dd920 +
          ((uVar26 >> 0x20) * (ulong)_DAT_005dd920 + (uVar26 & 0xffffffff) * (ulong)uVar3 << 0x20);
  lVar13 = (uVar30 & 0xffffffff) * (ulong)_UNK_005dd928 +
           ((uVar30 >> 0x20) * (ulong)_UNK_005dd928 + (uVar30 & 0xffffffff) * (ulong)uVar4 << 0x20);
  auVar44._0_4_ = -(uint)(iVar58 < 0);
  auVar44._4_4_ = -(uint)(iVar25 < 0);
  auVar44._12_4_ = -(uint)(iVar25 < SUB164((undefined1  [16])0x0,0xc));
  auVar38._8_4_ = iVar25;
  auVar38._0_8_ = auVar1._8_8_;
  auVar38._12_4_ = auVar44._4_4_;
  uVar60 = auVar38._8_8_;
  lVar19 = CONCAT44(auVar44._0_4_,iVar58);
  uVar26 = lVar16 + lVar19;
  uVar30 = lVar11 + uVar60;
  lVar11 = (uVar26 & 0xffffffff) * (ulong)_DAT_005dd920 +
           ((uVar26 >> 0x20) * (ulong)_DAT_005dd920 + (ulong)uVar3 * (uVar26 & 0xffffffff) << 0x20);
  lVar15 = (uVar30 & 0xffffffff) * (ulong)_UNK_005dd928 +
           ((uVar30 >> 0x20) * (ulong)_UNK_005dd928 + (ulong)uVar4 * (uVar30 & 0xffffffff) << 0x20);
  uVar26 = lVar12 + CONCAT44(uVar51,uVar23);
  lVar12 = ((uVar26 >> 0x20) * (ulong)_DAT_005dd930 << 0x20) +
           (uVar26 & 0xffffffff) * (ulong)_DAT_005dd930;
  lVar84 = ((uStack_b0 + uVar64 >> 0x20) * (ulong)_UNK_005dd938 << 0x20) +
           (uStack_b0 + uVar64 & 0xffffffff) * (ulong)_UNK_005dd938;
  lVar16 = (((ulong)(lVar17 + lVar19) >> 0x20) * (ulong)_DAT_005dd930 << 0x20) +
           (lVar17 + lVar19 & 0xffffffffU) * (ulong)_DAT_005dd930;
  lVar18 = ((lVar18 + uVar60 >> 0x20) * (ulong)_UNK_005dd938 << 0x20) +
           (lVar18 + uVar60 & 0xffffffff) * (ulong)_UNK_005dd938;
  uVar26 = (ulong)_DAT_005dd940;
  uVar6 = (ulong)_UNK_005dd948;
  auVar44._8_4_ = auVar44._4_4_;
  uVar30 = (ulong)_DAT_005dd940;
  uVar7 = (ulong)_UNK_005dd948;
  uVar40 = (ulong)_DAT_005dd940;
  uVar47 = (ulong)_UNK_005dd948;
  auVar24._8_4_ = iVar68;
  auVar24._12_4_ = -(uint)(iVar25 < SUB164((undefined1  [16])0x0,0xc));
  uVar45 = (ulong)_DAT_005dd940;
  uVar49 = (ulong)_UNK_005dd948;
  param_1[0xc] = (int)((ulong)((lVar8 - lVar14) + lVar12) >> 0x10);
  param_1[0xd] = (int)((ulong)((lVar9 - lVar27) + lVar84) >> 0x10);
  param_1[0xe] = (int)((ulong)((lVar46 - lVar31) + lVar16) >> 0x10);
  param_1[0xf] = (int)((ulong)((lVar50 - lVar10) + lVar18) >> 0x10);
  param_1[0x1c] = (int)((ulong)(lVar14 + lVar8 + lVar5) >> 0x10);
  param_1[0x1d] = (int)((ulong)(lVar27 + lVar9 + lVar13) >> 0x10);
  param_1[0x1e] = (int)((ulong)(lVar31 + lVar46 + lVar11) >> 0x10);
  param_1[0x1f] = (int)((ulong)(lVar10 + lVar50 + lVar15) >> 0x10);
  param_1[0x2c] = (int)((uVar51 * uVar45 << 0x20) + uVar23 * uVar40 + lVar12 + lVar5 >> 0x10);
  param_1[0x2d] =
       (int)(((auVar24._8_8_ & 0xffffffff) * uVar49 << 0x20) + (uVar64 & 0xffffffff) * uVar47 +
             lVar84 + lVar13 >> 0x10);
  param_1[0x2e] =
       (int)((auVar44._0_4_ * uVar30 << 0x20) + (auVar1._8_8_ & 0xffffffff) * uVar26 + lVar16 +
             lVar11 >> 0x10);
  param_1[0x2f] =
       (int)(((auVar44._8_8_ & 0xffffffff) * uVar7 << 0x20) + (uVar60 & 0xffffffff) * uVar6 + lVar18
             + lVar15 >> 0x10);
  return;
}


