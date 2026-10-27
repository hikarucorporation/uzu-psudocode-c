// Function : select_scan_parameters
// Namespace: juce:jpeglibNamespace
// Entry    : 003759b0
// Prototype: undefined select_scan_parameters(long * param_1)
// Body     : 003759b0 - 00375dde


/* WARNING: Removing unreachable block (ram,0x00375dc1) */
/* WARNING: Removing unreachable block (ram,0x00375dda) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::select_scan_parameters(juce::jpeglibNamespace::jpeg_compress_struct*) */

void __cdecl juce::jpeglibNamespace::select_scan_parameters(long *param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  undefined4 uVar24;
  undefined1 auVar22 [16];
  long lVar25;
  undefined1 auVar23 [16];
  long lVar26;
  undefined1 auVar27 [16];
  long lVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  
  lVar21 = param_1[0x23];
  if (lVar21 == 0) {
    uVar14 = *(uint *)((long)param_1 + 0x5c);
    if (4 < (int)uVar14) {
      lVar21 = *param_1;
      *(undefined4 *)(lVar21 + 0x28) = 0x1b;
      *(uint *)(lVar21 + 0x2c) = uVar14;
      *(undefined4 *)(*param_1 + 0x30) = 4;
      (**(code **)*param_1)(param_1);
      uVar14 = *(uint *)((long)param_1 + 0x5c);
    }
    *(uint *)((long)param_1 + 0x164) = uVar14;
    lVar9 = _UNK_00652dc8;
    lVar8 = _DAT_00652dc0;
    lVar28 = _UNK_00652db8;
    lVar1 = _DAT_00652db0;
    lVar13 = _UNK_005dda78;
    lVar26 = _DAT_005dda70;
    lVar10 = _UNK_005dda68;
    lVar21 = _DAT_005dda60;
    uVar7 = _UNK_005dda58;
    uVar6 = _DAT_005dda50;
    if ((int)uVar14 < 1) goto LAB_00375d85;
    lVar12 = param_1[0xd];
    if (uVar14 < 4) {
      uVar11 = 0;
    }
    else {
      uVar11 = (ulong)(uVar14 & 0xfffffffc);
      uVar18 = (uVar11 - 4 >> 2) + 1;
      uVar24 = (undefined4)((ulong)lVar12 >> 0x20);
      uVar16 = _DAT_005d99f0;
      uVar19 = _UNK_005d99f8;
      if (uVar11 - 4 == 0) {
        lVar15 = 0;
LAB_00375d0f:
        auVar23._8_4_ = (int)lVar12;
        auVar23._0_8_ = lVar12;
        auVar23._12_4_ = uVar24;
        lVar21 = lVar12 + (uVar16 & 0xffffffff) * (ulong)_DAT_005dda50 +
                 ((uVar16 >> 0x20) * (ulong)_DAT_005dda50 << 0x20);
        lVar10 = auVar23._8_8_ + (uVar19 & 0xffffffff) * (ulong)_UNK_005dda58 +
                 ((uVar19 >> 0x20) * (ulong)_UNK_005dda58 << 0x20);
        lVar26 = _DAT_00652db0 + lVar21;
        lVar13 = _UNK_00652db8 + lVar10;
        param_1[lVar15 + 0x2d] = lVar21;
        (param_1 + lVar15 + 0x2d)[1] = lVar10;
        param_1[lVar15 + 0x2f] = lVar26;
        (param_1 + lVar15 + 0x2f)[1] = lVar13;
      }
      else {
        uVar17 = uVar18 & 0xfffffffffffffffe;
        lVar15 = 0;
        auVar30._8_4_ = (int)lVar12;
        auVar30._0_8_ = lVar12;
        auVar30._12_4_ = uVar24;
        do {
          lVar20 = ((uVar16 >> 0x20) * (ulong)uVar6 << 0x20) +
                   (uVar16 & 0xffffffff) * (ulong)uVar6 + lVar12;
          lVar25 = ((uVar19 >> 0x20) * (ulong)uVar7 << 0x20) +
                   (uVar19 & 0xffffffff) * (ulong)uVar7 + auVar30._8_8_;
          param_1[lVar15 + 0x2d] = lVar20;
          (param_1 + lVar15 + 0x2d)[1] = lVar25;
          param_1[lVar15 + 0x2f] = lVar20 + lVar1;
          (param_1 + lVar15 + 0x2f)[1] = lVar25 + lVar28;
          param_1[lVar15 + 0x31] = lVar20 + lVar21;
          (param_1 + lVar15 + 0x31)[1] = lVar25 + lVar10;
          param_1[lVar15 + 0x33] = lVar20 + lVar26;
          (param_1 + lVar15 + 0x33)[1] = lVar25 + lVar13;
          lVar15 = lVar15 + 8;
          uVar16 = uVar16 + lVar8;
          uVar19 = uVar19 + lVar9;
          uVar17 = uVar17 - 2;
        } while (uVar17 != 0);
        if ((uVar18 & 1) != 0) goto LAB_00375d0f;
      }
      if (uVar11 == uVar14) goto LAB_00375d85;
    }
    lVar12 = lVar12 + uVar11 * 0x60;
    do {
      param_1[uVar11 + 0x2d] = lVar12;
      uVar11 = uVar11 + 1;
      lVar12 = lVar12 + 0x60;
    } while (uVar14 != uVar11);
    goto LAB_00375d85;
  }
  lVar10 = (long)*(int *)(param_1[0x3c] + 0x2c);
  uVar14 = *(uint *)(lVar21 + lVar10 * 0x24);
  *(uint *)((long)param_1 + 0x164) = uVar14;
  uVar7 = _UNK_005dda58;
  uVar6 = _DAT_005dda50;
  if (0 < (int)uVar14) {
    lVar26 = param_1[0xd];
    if (uVar14 < 4) {
      uVar16 = 0;
    }
    else {
      uVar16 = (ulong)(uVar14 & 0xfffffffc);
      uVar19 = (uVar16 - 4 >> 2) + 1;
      uVar24 = (undefined4)((ulong)lVar26 >> 0x20);
      if (uVar16 - 4 == 0) {
        lVar13 = 0;
LAB_00375b57:
        lVar1 = lVar21 + lVar10 * 0x24;
        uVar19 = *(ulong *)(lVar1 + 4 + lVar13 * 4);
        uVar11 = *(ulong *)(lVar1 + 0xc + lVar13 * 4);
        auVar35._0_4_ = -(uint)((int)uVar19 < 0);
        auVar35._4_4_ = -(uint)((long)uVar19 < 0);
        auVar35._8_4_ = -(uint)((long)uVar19 < 0);
        auVar35._12_4_ = -(uint)(0 < SUB164((undefined1  [16])0x0,0xc));
        uVar2 = (ulong)_UNK_005dda58;
        uVar3 = (ulong)_UNK_005dda58;
        auVar22._8_4_ = (int)lVar26;
        auVar22._0_8_ = lVar26;
        auVar22._12_4_ = uVar24;
        auVar29._0_4_ = -(uint)((int)uVar11 < 0);
        auVar29._4_4_ = -(uint)((long)uVar11 < 0);
        auVar29._8_4_ = -(uint)((long)uVar11 < 0);
        auVar29._12_4_ = -(uint)(0 < SUB164((undefined1  [16])0x0,0xc));
        uVar18 = (ulong)_DAT_005dda50;
        uVar4 = (ulong)_UNK_005dda58;
        uVar17 = (ulong)_DAT_005dda50;
        uVar5 = (ulong)_UNK_005dda58;
        param_1[lVar13 + 0x2d] =
             (uVar19 & 0xffffffff) * (ulong)_DAT_005dda50 + lVar26 +
             ((ulong)auVar35._0_4_ * (ulong)_DAT_005dda50 << 0x20);
        (param_1 + lVar13 + 0x2d)[1] =
             (uVar19 >> 0x20) * uVar2 + auVar22._8_8_ +
             ((auVar35._8_8_ & 0xffffffff) * uVar3 << 0x20);
        param_1[lVar13 + 0x2f] =
             (uVar11 & 0xffffffff) * uVar18 + lVar26 + (auVar29._0_4_ * uVar17 << 0x20);
        (param_1 + lVar13 + 0x2f)[1] =
             (uVar11 >> 0x20) * uVar4 + auVar22._8_8_ +
             ((auVar29._8_8_ & 0xffffffff) * uVar5 << 0x20);
      }
      else {
        uVar11 = uVar19 & 0xfffffffffffffffe;
        lVar1 = lVar21 + lVar10 * 0x24;
        lVar13 = 0;
        auVar27._8_4_ = (int)lVar26;
        auVar27._0_8_ = lVar26;
        auVar27._12_4_ = uVar24;
        do {
          uVar18 = *(ulong *)(lVar1 + 4 + lVar13 * 4);
          uVar17 = *(ulong *)(lVar1 + 0xc + lVar13 * 4);
          auVar31._0_4_ = -(uint)((int)uVar18 < 0);
          auVar31._4_4_ = -(uint)((long)uVar18 < 0);
          auVar31._8_4_ = -(uint)((long)uVar18 < 0);
          auVar31._12_4_ = -(uint)(0 < SUB164((undefined1  [16])0x0,0xc));
          lVar28 = auVar27._8_8_;
          auVar32._0_4_ = -(uint)((int)uVar17 < 0);
          auVar32._4_4_ = -(uint)((long)uVar17 < 0);
          auVar32._8_4_ = -(uint)((long)uVar17 < 0);
          auVar32._12_4_ = -(uint)(0 < SUB164((undefined1  [16])0x0,0xc));
          param_1[lVar13 + 0x2d] =
               (uVar18 & 0xffffffff) * (ulong)uVar6 + lVar26 +
               ((ulong)auVar31._0_4_ * (ulong)uVar6 << 0x20);
          (param_1 + lVar13 + 0x2d)[1] =
               (uVar18 >> 0x20) * (ulong)uVar7 + lVar28 +
               ((auVar31._8_8_ & 0xffffffff) * (ulong)uVar7 << 0x20);
          param_1[lVar13 + 0x2f] =
               (uVar17 & 0xffffffff) * (ulong)uVar6 + lVar26 +
               ((ulong)auVar32._0_4_ * (ulong)uVar6 << 0x20);
          (param_1 + lVar13 + 0x2f)[1] =
               (uVar17 >> 0x20) * (ulong)uVar7 + lVar28 +
               ((auVar32._8_8_ & 0xffffffff) * (ulong)uVar7 << 0x20);
          uVar18 = *(ulong *)(lVar1 + 0x14 + lVar13 * 4);
          uVar17 = *(ulong *)(lVar1 + 0x1c + lVar13 * 4);
          auVar33._0_4_ = -(uint)((int)uVar18 < 0);
          auVar33._4_4_ = -(uint)((long)uVar18 < 0);
          auVar33._8_4_ = -(uint)((long)uVar18 < 0);
          auVar33._12_4_ = -(uint)(0 < SUB164((undefined1  [16])0x0,0xc));
          auVar34._0_4_ = -(uint)((int)uVar17 < 0);
          auVar34._4_4_ = -(uint)((long)uVar17 < 0);
          auVar34._8_4_ = -(uint)((long)uVar17 < 0);
          auVar34._12_4_ = -(uint)(0 < SUB164((undefined1  [16])0x0,0xc));
          param_1[lVar13 + 0x31] =
               (uVar18 & 0xffffffff) * (ulong)uVar6 + lVar26 +
               ((ulong)auVar33._0_4_ * (ulong)uVar6 << 0x20);
          (param_1 + lVar13 + 0x31)[1] =
               (uVar18 >> 0x20) * (ulong)uVar7 + lVar28 +
               ((auVar33._8_8_ & 0xffffffff) * (ulong)uVar7 << 0x20);
          param_1[lVar13 + 0x33] =
               (uVar17 & 0xffffffff) * (ulong)uVar6 + lVar26 +
               ((ulong)auVar34._0_4_ * (ulong)uVar6 << 0x20);
          (param_1 + lVar13 + 0x33)[1] =
               (uVar17 >> 0x20) * (ulong)uVar7 + lVar28 +
               ((auVar34._8_8_ & 0xffffffff) * (ulong)uVar7 << 0x20);
          lVar13 = lVar13 + 8;
          uVar11 = uVar11 - 2;
        } while (uVar11 != 0);
        if ((uVar19 & 1) != 0) goto LAB_00375b57;
      }
      if (uVar16 == uVar14) goto LAB_00375c00;
    }
    do {
      param_1[uVar16 + 0x2d] =
           (long)*(int *)(lVar21 + lVar10 * 0x24 + 4 + uVar16 * 4) * 0x60 + lVar26;
      uVar16 = uVar16 + 1;
    } while (uVar14 != uVar16);
  }
LAB_00375c00:
  if (*(char *)((long)param_1 + 0x14c) != '\0') {
    *(undefined4 *)((long)param_1 + 0x1bc) = *(undefined4 *)(lVar21 + 0x14 + lVar10 * 0x24);
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(lVar21 + 0x18 + lVar10 * 0x24);
    *(undefined4 *)((long)param_1 + 0x1c4) = *(undefined4 *)(lVar21 + 0x1c + lVar10 * 0x24);
    *(undefined4 *)(param_1 + 0x39) = *(undefined4 *)(lVar21 + 0x20 + lVar10 * 0x24);
    return;
  }
LAB_00375d85:
  *(undefined4 *)((long)param_1 + 0x1bc) = 0;
  *(int *)(param_1 + 0x38) = *(int *)((long)param_1 + 0x1cc) * *(int *)((long)param_1 + 0x1cc) + -1;
  *(undefined4 *)((long)param_1 + 0x1c4) = 0;
  *(undefined4 *)(param_1 + 0x39) = 0;
  return;
}


