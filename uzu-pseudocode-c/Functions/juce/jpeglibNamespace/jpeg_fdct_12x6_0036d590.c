// Function : jpeg_fdct_12x6
// Namespace: juce:jpeglibNamespace
// Entry    : 0036d590
// Prototype: long jpeg_fdct_12x6(int * param_1, long param_2, ulong param_3)
// Body     : 0036d590 - 0036dfac


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl */
/* juce::jpeglibNamespace::jpeg_fdct_12x6(int*, unsigned char**, unsigned int) */

long __cdecl juce::jpeglibNamespace::jpeg_fdct_12x6(int *param_1,long param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
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
  int iVar62;
  ulong uVar18;
  undefined1 auVar19 [16];
  ulong uVar21;
  undefined1 auVar20 [16];
  int iVar63;
  int iVar64;
  ulong uVar22;
  int iVar25;
  int iVar27;
  undefined1 auVar23 [16];
  ulong uVar26;
  undefined1 auVar24 [16];
  int iVar65;
  undefined1 auVar28 [16];
  long lVar29;
  undefined1 auVar31 [16];
  ulong uVar30;
  ulong uVar33;
  undefined1 auVar32 [16];
  int iVar66;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  int iVar67;
  undefined1 auVar36 [16];
  int iVar68;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  ulong uVar39;
  ulong uVar41;
  undefined1 auVar40 [16];
  int iVar69;
  ulong uVar42;
  undefined1 auVar43 [16];
  ulong uVar45;
  undefined1 auVar44 [16];
  ulong uVar46;
  long lVar48;
  undefined1 auVar47 [16];
  ulong uVar49;
  int iVar70;
  int iVar71;
  long lVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  long lVar53;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  int iVar72;
  long lVar56;
  int iVar60;
  long lVar59;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  int iVar73;
  undefined1 auVar61 [16];
  int local_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  
  *(undefined1 (*) [16])(param_1 + 0x3c) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x38) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x34) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x30) = (undefined1  [16])0x0;
  uVar42 = param_3 & 0xffffffff;
  lVar17 = 0;
  do {
    lVar29 = *(long *)(param_2 + lVar17);
    uVar45 = (ulong)*(byte *)(lVar29 + 0xb + uVar42);
    lVar15 = uVar45 + *(byte *)(lVar29 + uVar42);
    uVar46 = (ulong)*(byte *)(lVar29 + 1 + uVar42);
    uVar49 = (ulong)*(byte *)(lVar29 + 2 + uVar42);
    uVar5 = (ulong)*(byte *)(lVar29 + 9 + uVar42);
    lVar7 = uVar5 + uVar49;
    uVar3 = (ulong)*(byte *)(lVar29 + 3 + uVar42);
    uVar21 = (ulong)*(byte *)(lVar29 + 8 + uVar42);
    lVar9 = uVar21 + uVar3;
    uVar22 = (ulong)*(byte *)(lVar29 + 5 + uVar42);
    uVar18 = (ulong)*(byte *)(lVar29 + 6 + uVar42);
    lVar14 = uVar18 + uVar22;
    lVar16 = lVar15 + lVar14;
    lVar15 = lVar15 - lVar14;
    lVar14 = lVar9 + lVar7;
    lVar7 = lVar7 - lVar9;
    uVar26 = (ulong)*(byte *)(lVar29 + 10 + uVar42);
    lVar11 = *(byte *)(lVar29 + uVar42) - uVar45;
    lVar9 = uVar26 + uVar46;
    lVar12 = uVar46 - uVar26;
    lVar13 = uVar49 - uVar5;
    uVar45 = (ulong)*(byte *)(lVar29 + 4 + uVar42);
    uVar46 = (ulong)*(byte *)(lVar29 + 7 + uVar42);
    lVar4 = uVar3 - uVar21;
    lVar29 = uVar45 + uVar46;
    lVar6 = uVar45 - uVar46;
    lVar10 = uVar22 - uVar18;
    lVar8 = lVar9 - lVar29;
    param_1[lVar17] = ((int)lVar16 + (int)lVar29 + (int)lVar9 + (int)lVar14) * 4 + -0x1800;
    param_1[lVar17 + 6] = ((int)lVar15 - ((int)lVar7 + (int)lVar8)) * 4;
    param_1[lVar17 + 4] = (int)((ulong)((lVar16 - lVar14) * 0x2731) >> 0xb);
    param_1[lVar17 + 2] = (int)((ulong)(lVar7 * 0x2bb5 + lVar15 * 0x2bb6 + lVar8) >> 0xb);
    lVar15 = (lVar6 + lVar12) * 0x1151;
    lVar16 = lVar12 * 0x187e + lVar15;
    lVar15 = lVar6 * -0x3b21 + lVar15;
    lVar7 = (lVar11 + lVar13) * 0x23e7;
    lVar14 = (lVar4 + lVar11) * 0x1b8d;
    lVar9 = (lVar4 + lVar13) * -0x5e8;
    param_1[lVar17 + 1] =
         (int)((ulong)(lVar11 * -0x1296 + lVar7 + lVar14 + lVar16 + lVar10 * 0x5e8) >> 0xb);
    param_1[lVar17 + 3] =
         (int)((ulong)((lVar10 + lVar13) * -0x1151 + (lVar11 - lVar4) * 0x29cf + lVar15) >> 0xb);
    param_1[lVar17 + 5] =
         (int)((ulong)(((lVar13 * -0x4add + lVar7 + lVar9) - lVar15) + lVar10 * 0x1b8d) >> 0xb);
    param_1[lVar17 + 7] =
         (int)((ulong)(((lVar4 * 0x173a + lVar9 + lVar14) - lVar16) + lVar10 * -0x23e7) >> 0xb);
    uVar2 = _UNK_005dd958;
    uVar1 = _DAT_005dd950;
    lVar17 = lVar17 + 8;
  } while (lVar17 != 0x30);
  iVar63 = param_1[0x28] + *param_1;
  auVar23._4_4_ = param_1[0x29] + param_1[1];
  iVar25 = param_1[0x2a] + param_1[2];
  iVar27 = param_1[0x2b] + param_1[3];
  auVar19._4_4_ = iVar27;
  auVar19._0_4_ = iVar25;
  auVar23._8_4_ = auVar23._4_4_;
  auVar23._12_4_ = -(uint)(auVar23._4_4_ < 0);
  lVar9 = CONCAT44(-(uint)(iVar63 < 0),iVar63);
  auVar19._8_4_ = iVar27;
  auVar19._12_4_ = -(uint)(iVar27 < 0);
  lVar7 = CONCAT44(-(uint)(iVar25 < 0),iVar25);
  iVar70 = param_1[0x20] + param_1[8];
  auVar51._4_4_ = param_1[0x21] + param_1[9];
  iVar25 = param_1[0x22] + param_1[10];
  iVar27 = param_1[0x23] + param_1[0xb];
  auVar54._4_4_ = iVar27;
  auVar54._0_4_ = iVar25;
  auVar54._8_4_ = iVar27;
  auVar54._12_4_ = -(uint)(iVar27 < 0);
  lVar53 = CONCAT44(-(uint)(iVar25 < 0),iVar25);
  auVar51._8_4_ = auVar51._4_4_;
  auVar51._12_4_ = -(uint)(auVar51._4_4_ < 0);
  lVar50 = CONCAT44(-(uint)(iVar70 < 0),iVar70);
  iVar66 = param_1[0x18] + param_1[0x10];
  auVar34._4_4_ = param_1[0x19] + param_1[0x11];
  iVar25 = param_1[0x1a] + param_1[0x12];
  iVar27 = param_1[0x1b] + param_1[0x13];
  auVar31._4_4_ = iVar27;
  auVar31._0_4_ = iVar25;
  auVar34._8_4_ = auVar34._4_4_;
  auVar34._12_4_ = -(uint)(auVar34._4_4_ < 0);
  lVar4 = CONCAT44(-(uint)(iVar66 < 0),iVar66);
  auVar31._8_4_ = iVar27;
  auVar31._12_4_ = -(uint)(iVar27 < 0);
  lVar29 = CONCAT44(-(uint)(iVar25 < 0),iVar25);
  lVar17 = lVar29 + lVar7;
  lVar15 = auVar31._8_8_ + auVar19._8_8_;
  lVar14 = lVar4 + lVar9;
  lVar16 = auVar34._8_8_ + auVar23._8_8_;
  uVar22 = lVar9 - lVar4;
  uVar26 = auVar23._8_8_ - auVar34._8_8_;
  uVar18 = lVar7 - lVar29;
  uVar21 = auVar19._8_8_ - auVar31._8_8_;
  iVar69 = *param_1 - param_1[0x28];
  auVar43._4_4_ = param_1[1] - param_1[0x29];
  iVar25 = param_1[2] - param_1[0x2a];
  iVar27 = param_1[3] - param_1[0x2b];
  auVar47._4_4_ = iVar27;
  auVar47._0_4_ = iVar25;
  auVar43._8_4_ = auVar43._4_4_;
  auVar43._12_4_ = -(uint)(auVar43._4_4_ < 0);
  lVar12 = auVar43._8_8_;
  lVar11 = CONCAT44(-(uint)(iVar69 < 0),iVar69);
  auVar47._8_4_ = iVar27;
  auVar47._12_4_ = -(uint)(iVar27 < 0);
  lVar48 = auVar47._8_8_;
  lVar13 = CONCAT44(-(uint)(iVar25 < 0),iVar25);
  iVar72 = param_1[8] - param_1[0x20];
  auVar57._4_4_ = param_1[9] - param_1[0x21];
  iVar25 = param_1[10] - param_1[0x22];
  iVar60 = param_1[0xb] - param_1[0x23];
  auVar57._8_4_ = auVar57._4_4_;
  auVar57._12_4_ = -(uint)(auVar57._4_4_ < 0);
  lVar59 = auVar57._8_8_;
  lVar56 = CONCAT44(-(uint)(iVar72 < 0),iVar72);
  lVar29 = CONCAT44(-(uint)(iVar25 < 0),iVar25);
  iVar68 = param_1[0x10] - param_1[0x18];
  auVar37._4_4_ = param_1[0x11] - param_1[0x19];
  iVar25 = param_1[0x12] - param_1[0x1a];
  iVar27 = param_1[0x13] - param_1[0x1b];
  auVar35._4_4_ = iVar27;
  auVar35._0_4_ = iVar25;
  auVar37._8_4_ = auVar37._4_4_;
  auVar37._12_4_ = -(uint)(auVar37._4_4_ < 0);
  lVar10 = auVar37._8_8_;
  lVar8 = CONCAT44(-(uint)(iVar68 < 0),iVar68);
  auVar35._8_4_ = iVar27;
  auVar35._12_4_ = -(uint)(iVar27 < 0);
  lVar6 = auVar35._8_8_;
  lVar4 = CONCAT44(-(uint)(iVar25 < 0),iVar25);
  uVar30 = lVar14 + lVar50;
  uVar33 = lVar16 + auVar51._8_8_;
  uVar39 = lVar17 + lVar53;
  uVar41 = lVar15 + auVar54._8_8_;
  uVar42 = (ulong)_DAT_005dd950;
  uVar46 = (ulong)_UNK_005dd958;
  uVar45 = (ulong)_DAT_005dd950;
  uVar49 = (ulong)_UNK_005dd958;
  uVar3 = (ulong)_UNK_005dd958;
  uVar5 = (ulong)_UNK_005dd958;
  *param_1 = (int)(((uVar30 >> 0x20) * (ulong)_DAT_005dd950 << 0x20) +
                   (uVar30 & 0xffffffff) * (ulong)_DAT_005dd950 >> 0x10);
  param_1[1] = (int)(((uVar33 >> 0x20) * uVar5 << 0x20) + (uVar33 & 0xffffffff) * uVar3 >> 0x10);
  param_1[2] = (int)(((uVar39 >> 0x20) * uVar45 << 0x20) + (uVar39 & 0xffffffff) * uVar42 >> 0x10);
  param_1[3] = (int)(((uVar41 >> 0x20) * uVar49 << 0x20) + (uVar41 & 0xffffffff) * uVar46 >> 0x10);
  uVar42 = (ulong)_DAT_005dd960;
  uVar46 = (ulong)_UNK_005dd968;
  uVar45 = (ulong)_DAT_005dd960;
  uVar49 = (ulong)_UNK_005dd968;
  uVar3 = (ulong)_UNK_005dd968;
  uVar5 = (ulong)_UNK_005dd968;
  param_1[0x10] =
       (int)(((uVar22 >> 0x20) * (ulong)_DAT_005dd960 << 0x20) +
             (uVar22 & 0xffffffff) * (ulong)_DAT_005dd960 >> 0x10);
  param_1[0x11] = (int)(((uVar26 >> 0x20) * uVar5 << 0x20) + (uVar26 & 0xffffffff) * uVar3 >> 0x10);
  param_1[0x12] =
       (int)(((uVar18 >> 0x20) * uVar45 << 0x20) + (uVar18 & 0xffffffff) * uVar42 >> 0x10);
  param_1[0x13] =
       (int)(((uVar21 >> 0x20) * uVar49 << 0x20) + (uVar21 & 0xffffffff) * uVar46 >> 0x10);
  uVar22 = lVar14 + lVar50 * -2;
  uVar26 = lVar16 + auVar51._8_8_ * -2;
  uVar18 = lVar17 + lVar53 * -2;
  uVar21 = lVar15 + auVar54._8_8_ * -2;
  uVar42 = (ulong)_DAT_005dd970;
  uVar46 = (ulong)_UNK_005dd978;
  uVar45 = (ulong)_DAT_005dd970;
  uVar49 = (ulong)_UNK_005dd978;
  uVar3 = (ulong)_UNK_005dd978;
  uVar5 = (ulong)_UNK_005dd978;
  param_1[0x20] =
       (int)(((uVar22 >> 0x20) * (ulong)_DAT_005dd970 << 0x20) +
             (uVar22 & 0xffffffff) * (ulong)_DAT_005dd970 >> 0x10);
  param_1[0x21] = (int)(((uVar26 >> 0x20) * uVar5 << 0x20) + (uVar26 & 0xffffffff) * uVar3 >> 0x10);
  param_1[0x22] =
       (int)(((uVar18 >> 0x20) * uVar45 << 0x20) + (uVar18 & 0xffffffff) * uVar42 >> 0x10);
  param_1[0x23] =
       (int)(((uVar21 >> 0x20) * uVar49 << 0x20) + (uVar21 & 0xffffffff) * uVar46 >> 0x10);
  lVar9 = (((ulong)(lVar8 + lVar11) >> 0x20) * (ulong)_DAT_005dd980 << 0x20) +
          (lVar8 + lVar11 & 0xffffffffU) * (ulong)_DAT_005dd980;
  lVar14 = (((ulong)(lVar10 + lVar12) >> 0x20) * (ulong)_UNK_005dd988 << 0x20) +
           (lVar10 + lVar12 & 0xffffffffU) * (ulong)_UNK_005dd988;
  lVar15 = (((ulong)(lVar4 + lVar13) >> 0x20) * (ulong)_DAT_005dd980 << 0x20) +
           (lVar4 + lVar13 & 0xffffffffU) * (ulong)_DAT_005dd980;
  lVar7 = (((ulong)(lVar6 + lVar48) >> 0x20) * (ulong)_UNK_005dd988 << 0x20) +
          (lVar6 + lVar48 & 0xffffffffU) * (ulong)_UNK_005dd988;
  lVar17 = CONCAT44(-(uint)(iVar60 < 0),iVar60);
  param_1[8] = (int)((((ulong)(lVar56 + lVar11) >> 0x20) * (ulong)uVar1 << 0x20) +
                     (lVar56 + lVar11 & 0xffffffffU) * (ulong)uVar1 + lVar9 >> 0x10);
  param_1[9] = (int)((((ulong)(lVar59 + lVar12) >> 0x20) * (ulong)uVar2 << 0x20) +
                     (lVar59 + lVar12 & 0xffffffffU) * (ulong)uVar2 + lVar14 >> 0x10);
  param_1[10] = (int)((((ulong)(lVar29 + lVar13) >> 0x20) * (ulong)uVar1 << 0x20) +
                      (lVar29 + lVar13 & 0xffffffffU) * (ulong)uVar1 + lVar15 >> 0x10);
  param_1[0xb] = (int)((((ulong)(lVar17 + lVar48) >> 0x20) * (ulong)uVar2 << 0x20) +
                       (lVar17 + lVar48 & 0xffffffffU) * (ulong)uVar2 + lVar7 >> 0x10);
  uVar42 = lVar11 - (lVar56 + lVar8);
  uVar45 = lVar12 - (lVar59 + lVar10);
  uVar46 = lVar13 - (lVar29 + lVar4);
  uVar49 = lVar48 - (lVar17 + lVar6);
  param_1[0x18] =
       (int)(((uVar42 >> 0x20) * (ulong)uVar1 << 0x20) + (uVar42 & 0xffffffff) * (ulong)uVar1 >>
            0x10);
  param_1[0x19] =
       (int)(((uVar45 >> 0x20) * (ulong)uVar2 << 0x20) + (uVar45 & 0xffffffff) * (ulong)uVar2 >>
            0x10);
  param_1[0x1a] =
       (int)(((uVar46 >> 0x20) * (ulong)uVar1 << 0x20) + (uVar46 & 0xffffffff) * (ulong)uVar1 >>
            0x10);
  param_1[0x1b] =
       (int)(((uVar49 >> 0x20) * (ulong)uVar2 << 0x20) + (uVar49 & 0xffffffff) * (ulong)uVar2 >>
            0x10);
  param_1[0x28] =
       (int)((((ulong)(lVar8 - lVar56) >> 0x20) * (ulong)uVar1 << 0x20) +
             (lVar8 - lVar56 & 0xffffffffU) * (ulong)uVar1 + lVar9 >> 0x10);
  param_1[0x29] =
       (int)((((ulong)(lVar10 - lVar59) >> 0x20) * (ulong)uVar2 << 0x20) +
             (lVar10 - lVar59 & 0xffffffffU) * (ulong)uVar2 + lVar14 >> 0x10);
  param_1[0x2a] =
       (int)((((ulong)(lVar4 - lVar29) >> 0x20) * (ulong)uVar1 << 0x20) +
             (lVar4 - lVar29 & 0xffffffffU) * (ulong)uVar1 + lVar15 >> 0x10);
  param_1[0x2b] =
       (int)((((ulong)(lVar6 - lVar17) >> 0x20) * (ulong)uVar2 << 0x20) +
             (lVar6 - lVar17 & 0xffffffffU) * (ulong)uVar2 + lVar7 >> 0x10);
  iVar62 = param_1[0x2c] + param_1[4];
  auVar20._4_4_ = param_1[0x2d] + param_1[5];
  iVar25 = param_1[0x2e] + param_1[6];
  iVar27 = param_1[0x2f] + param_1[7];
  auVar38._4_4_ = iVar27;
  auVar38._0_4_ = iVar25;
  auVar20._8_4_ = auVar20._4_4_;
  auVar20._12_4_ = -(uint)(auVar20._4_4_ < 0);
  lVar7 = CONCAT44(-(uint)(iVar62 < 0),iVar62);
  auVar38._8_4_ = iVar27;
  auVar38._12_4_ = -(uint)(iVar27 < 0);
  lVar16 = CONCAT44(-(uint)(iVar25 < 0),iVar25);
  local_88 = (int)*(undefined8 *)(param_1 + 0xc);
  iStack_84 = (int)((ulong)*(undefined8 *)(param_1 + 0xc) >> 0x20);
  iStack_80 = (int)*(undefined8 *)(param_1 + 0xe);
  iStack_7c = (int)((ulong)*(undefined8 *)(param_1 + 0xe) >> 0x20);
  iVar71 = param_1[0x24] + local_88;
  auVar52._4_4_ = param_1[0x25] + iStack_84;
  iVar25 = param_1[0x26] + iStack_80;
  iVar27 = param_1[0x27] + iStack_7c;
  auVar58._4_4_ = iVar27;
  auVar58._0_4_ = iVar25;
  auVar58._8_4_ = iVar27;
  auVar58._12_4_ = -(uint)(iVar27 < 0);
  lVar50 = CONCAT44(-(uint)(iVar25 < 0),iVar25);
  auVar52._8_4_ = auVar52._4_4_;
  auVar52._12_4_ = -(uint)(auVar52._4_4_ < 0);
  lVar12 = CONCAT44(-(uint)(iVar71 < 0),iVar71);
  iVar64 = param_1[0x1c] + param_1[0x14];
  auVar24._4_4_ = param_1[0x1d] + param_1[0x15];
  iVar25 = param_1[0x1e] + param_1[0x16];
  iVar27 = param_1[0x1f] + param_1[0x17];
  auVar32._4_4_ = iVar27;
  auVar32._0_4_ = iVar25;
  auVar24._8_4_ = auVar24._4_4_;
  auVar24._12_4_ = -(uint)(auVar24._4_4_ < 0);
  lVar9 = CONCAT44(-(uint)(iVar64 < 0),iVar64);
  auVar32._8_4_ = iVar27;
  auVar32._12_4_ = -(uint)(iVar27 < 0);
  lVar14 = CONCAT44(-(uint)(iVar25 < 0),iVar25);
  lVar17 = lVar9 + lVar7;
  lVar15 = auVar24._8_8_ + auVar20._8_8_;
  uVar18 = lVar7 - lVar9;
  uVar21 = auVar20._8_8_ - auVar24._8_8_;
  lVar7 = lVar14 + lVar16;
  lVar9 = auVar32._8_8_ + auVar38._8_8_;
  uVar22 = lVar16 - lVar14;
  uVar26 = auVar38._8_8_ - auVar32._8_8_;
  iVar73 = param_1[4] - param_1[0x2c];
  auVar61._4_4_ = param_1[5] - param_1[0x2d];
  iVar25 = param_1[6] - param_1[0x2e];
  iVar27 = param_1[7] - param_1[0x2f];
  auVar40._4_4_ = iVar27;
  auVar40._0_4_ = iVar25;
  auVar61._8_4_ = auVar61._4_4_;
  auVar61._12_4_ = -(uint)(auVar61._4_4_ < 0);
  lVar56 = auVar61._8_8_;
  lVar53 = CONCAT44(-(uint)(iVar73 < 0),iVar73);
  auVar40._8_4_ = iVar27;
  auVar40._12_4_ = -(uint)(iVar27 < 0);
  lVar8 = auVar40._8_8_;
  lVar6 = CONCAT44(-(uint)(iVar25 < 0),iVar25);
  iVar65 = local_88 - param_1[0x24];
  auVar28._4_4_ = iStack_84 - param_1[0x25];
  iStack_80 = iStack_80 - param_1[0x26];
  iStack_7c = iStack_7c - param_1[0x27];
  auVar55._4_4_ = iStack_7c;
  auVar55._0_4_ = iStack_80;
  auVar28._8_4_ = auVar28._4_4_;
  auVar28._12_4_ = -(uint)(auVar28._4_4_ < 0);
  lVar16 = auVar28._8_8_;
  lVar14 = CONCAT44(-(uint)(iVar65 < 0),iVar65);
  auVar55._8_4_ = iStack_7c;
  auVar55._12_4_ = -(uint)(iStack_7c < 0);
  lVar48 = auVar55._8_8_;
  lVar13 = CONCAT44(-(uint)(iStack_80 < 0),iStack_80);
  iVar67 = param_1[0x14] - param_1[0x1c];
  auVar36._4_4_ = param_1[0x15] - param_1[0x1d];
  iVar25 = param_1[0x16] - param_1[0x1e];
  iVar27 = param_1[0x17] - param_1[0x1f];
  auVar44._4_4_ = iVar27;
  auVar44._0_4_ = iVar25;
  auVar36._8_4_ = auVar36._4_4_;
  auVar36._12_4_ = -(uint)(auVar36._4_4_ < 0);
  lVar4 = auVar36._8_8_;
  lVar29 = CONCAT44(-(uint)(iVar67 < 0),iVar67);
  auVar44._8_4_ = iVar27;
  auVar44._12_4_ = -(uint)(iVar27 < 0);
  lVar11 = auVar44._8_8_;
  lVar10 = CONCAT44(-(uint)(iVar25 < 0),iVar25);
  uVar46 = lVar7 + lVar50;
  uVar49 = lVar9 + auVar58._8_8_;
  uVar42 = lVar17 + lVar12;
  uVar45 = lVar15 + auVar52._8_8_;
  param_1[4] = (int)(((uVar42 >> 0x20) * (ulong)uVar1 << 0x20) +
                     (uVar42 & 0xffffffff) * (ulong)uVar1 >> 0x10);
  param_1[5] = (int)(((uVar45 >> 0x20) * (ulong)uVar2 << 0x20) +
                     (uVar45 & 0xffffffff) * (ulong)uVar2 >> 0x10);
  param_1[6] = (int)(((uVar46 >> 0x20) * (ulong)uVar1 << 0x20) +
                     (uVar46 & 0xffffffff) * (ulong)uVar1 >> 0x10);
  param_1[7] = (int)(((uVar49 >> 0x20) * (ulong)uVar2 << 0x20) +
                     (uVar49 & 0xffffffff) * (ulong)uVar2 >> 0x10);
  uVar42 = (ulong)_DAT_005dd960;
  uVar46 = (ulong)_UNK_005dd968;
  uVar45 = (ulong)_DAT_005dd960;
  uVar49 = (ulong)_UNK_005dd968;
  uVar3 = (ulong)_UNK_005dd968;
  uVar5 = (ulong)_UNK_005dd968;
  param_1[0x14] =
       (int)(((uVar18 >> 0x20) * (ulong)_DAT_005dd960 << 0x20) +
             (uVar18 & 0xffffffff) * (ulong)_DAT_005dd960 >> 0x10);
  param_1[0x15] = (int)(((uVar21 >> 0x20) * uVar5 << 0x20) + (uVar21 & 0xffffffff) * uVar3 >> 0x10);
  param_1[0x16] =
       (int)(((uVar22 >> 0x20) * uVar45 << 0x20) + (uVar22 & 0xffffffff) * uVar42 >> 0x10);
  param_1[0x17] =
       (int)(((uVar26 >> 0x20) * uVar49 << 0x20) + (uVar26 & 0xffffffff) * uVar46 >> 0x10);
  uVar18 = lVar17 + lVar12 * -2;
  uVar21 = lVar15 + auVar52._8_8_ * -2;
  uVar22 = lVar7 + lVar50 * -2;
  uVar26 = lVar9 + auVar58._8_8_ * -2;
  uVar42 = (ulong)_DAT_005dd970;
  uVar46 = (ulong)_UNK_005dd978;
  uVar45 = (ulong)_DAT_005dd970;
  uVar49 = (ulong)_UNK_005dd978;
  uVar3 = (ulong)_UNK_005dd978;
  uVar5 = (ulong)_UNK_005dd978;
  param_1[0x24] =
       (int)(((uVar18 >> 0x20) * (ulong)_DAT_005dd970 << 0x20) +
             (uVar18 & 0xffffffff) * (ulong)_DAT_005dd970 >> 0x10);
  param_1[0x25] = (int)(((uVar21 >> 0x20) * uVar5 << 0x20) + (uVar21 & 0xffffffff) * uVar3 >> 0x10);
  param_1[0x26] =
       (int)(((uVar22 >> 0x20) * uVar45 << 0x20) + (uVar22 & 0xffffffff) * uVar42 >> 0x10);
  param_1[0x27] =
       (int)(((uVar26 >> 0x20) * uVar49 << 0x20) + (uVar26 & 0xffffffff) * uVar46 >> 0x10);
  lVar7 = (((ulong)(lVar29 + lVar53) >> 0x20) * (ulong)_DAT_005dd980 << 0x20) +
          (lVar29 + lVar53 & 0xffffffffU) * (ulong)_DAT_005dd980;
  lVar9 = (((ulong)(lVar4 + lVar56) >> 0x20) * (ulong)_UNK_005dd988 << 0x20) +
          (lVar4 + lVar56 & 0xffffffffU) * (ulong)_UNK_005dd988;
  lVar17 = (((ulong)(lVar10 + lVar6) >> 0x20) * (ulong)_DAT_005dd980 << 0x20) +
           (lVar10 + lVar6 & 0xffffffffU) * (ulong)_DAT_005dd980;
  lVar15 = (((ulong)(lVar11 + lVar8) >> 0x20) * (ulong)_UNK_005dd988 << 0x20) +
           (lVar11 + lVar8 & 0xffffffffU) * (ulong)_UNK_005dd988;
  param_1[0xc] = (int)((((ulong)(lVar14 + lVar53) >> 0x20) * (ulong)uVar1 << 0x20) +
                       (lVar14 + lVar53 & 0xffffffffU) * (ulong)uVar1 + lVar7 >> 0x10);
  param_1[0xd] = (int)((((ulong)(lVar16 + lVar56) >> 0x20) * (ulong)uVar2 << 0x20) +
                       (lVar16 + lVar56 & 0xffffffffU) * (ulong)uVar2 + lVar9 >> 0x10);
  param_1[0xe] = (int)((((ulong)(lVar13 + lVar6) >> 0x20) * (ulong)uVar1 << 0x20) +
                       (lVar13 + lVar6 & 0xffffffffU) * (ulong)uVar1 + lVar17 >> 0x10);
  param_1[0xf] = (int)((((ulong)(lVar48 + lVar8) >> 0x20) * (ulong)uVar2 << 0x20) +
                       (lVar48 + lVar8 & 0xffffffffU) * (ulong)uVar2 + lVar15 >> 0x10);
  uVar46 = lVar53 - (lVar14 + lVar29);
  uVar49 = lVar56 - (lVar16 + lVar4);
  uVar42 = lVar6 - (lVar13 + lVar10);
  uVar45 = lVar8 - (lVar48 + lVar11);
  param_1[0x1c] =
       (int)(((uVar46 >> 0x20) * (ulong)uVar1 << 0x20) + (uVar46 & 0xffffffff) * (ulong)uVar1 >>
            0x10);
  param_1[0x1d] =
       (int)(((uVar49 >> 0x20) * (ulong)uVar2 << 0x20) + (uVar49 & 0xffffffff) * (ulong)uVar2 >>
            0x10);
  param_1[0x1e] =
       (int)(((uVar42 >> 0x20) * (ulong)uVar1 << 0x20) + (uVar42 & 0xffffffff) * (ulong)uVar1 >>
            0x10);
  param_1[0x1f] =
       (int)(((uVar45 >> 0x20) * (ulong)uVar2 << 0x20) + (uVar45 & 0xffffffff) * (ulong)uVar2 >>
            0x10);
  param_1[0x2c] =
       (int)((((ulong)(lVar29 - lVar14) >> 0x20) * (ulong)uVar1 << 0x20) +
             (lVar29 - lVar14 & 0xffffffffU) * (ulong)uVar1 + lVar7 >> 0x10);
  param_1[0x2d] =
       (int)((((ulong)(lVar4 - lVar16) >> 0x20) * (ulong)uVar2 << 0x20) +
             (lVar4 - lVar16 & 0xffffffffU) * (ulong)uVar2 + lVar9 >> 0x10);
  param_1[0x2e] =
       (int)((((ulong)(lVar10 - lVar13) >> 0x20) * (ulong)uVar1 << 0x20) +
             (lVar10 - lVar13 & 0xffffffffU) * (ulong)uVar1 + lVar17 >> 0x10);
  param_1[0x2f] =
       (int)((((ulong)(lVar11 - lVar48) >> 0x20) * (ulong)uVar2 << 0x20) +
             (lVar11 - lVar48 & 0xffffffffU) * (ulong)uVar2 + lVar15 >> 0x10);
  return lVar17;
}


