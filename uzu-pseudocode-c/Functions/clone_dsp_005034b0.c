// Function : clone_dsp
// Namespace: 
// Entry    : 005034b0
// Prototype: undefined clone_dsp(undefined8 param_1, undefined8 param_2, long param_3, long param_4, uint * param_5, undefined8 param_6, char * param_7, ulong param_8)
// Body     : 005034b0 - 00503e6f


void clone_dsp(undefined8 param_1,undefined8 param_2,long param_3,long param_4,uint *param_5,
              undefined8 param_6,char *param_7,ulong param_8)

{
  undefined4 *puVar1;
  long *plVar2;
  long lVar3;
  undefined1 *puVar4;
  int iVar5;
  int *piVar6;
  long lVar7;
  long lVar8;
  uint *extraout_RDX;
  uint *extraout_RDX_00;
  uint *extraout_RDX_01;
  uint *extraout_RDX_02;
  uint *puVar9;
  undefined8 extraout_RDX_03;
  undefined8 extraout_RDX_04;
  undefined8 extraout_RDX_05;
  undefined8 extraout_RDX_06;
  uint *extraout_RDX_07;
  undefined8 extraout_RDX_08;
  undefined8 extraout_RDX_09;
  undefined8 extraout_RDX_10;
  undefined8 extraout_RDX_11;
  undefined8 extraout_RDX_12;
  undefined8 extraout_RDX_13;
  undefined8 extraout_RDX_14;
  uint *extraout_RDX_15;
  uint *extraout_RDX_16;
  uint *extraout_RDX_17;
  uint *extraout_RDX_18;
  undefined8 extraout_RDX_19;
  uint *extraout_RDX_20;
  undefined8 extraout_RDX_21;
  undefined8 extraout_RDX_22;
  uint *extraout_RDX_23;
  undefined8 *puVar10;
  ulong uVar11;
  uint *puVar12;
  ulong uVar13;
  uint *puVar14;
  uint *puVar15;
  uint uVar16;
  ulong uVar17;
  uint uVar18;
  char *pcVar19;
  long lVar20;
  uint uVar21;
  uint *puVar22;
  undefined1 *puVar23;
  int iVar24;
  int iVar25;
  int iVar27;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  undefined8 extraout_XMM0_Qa_05;
  undefined8 extraout_XMM0_Qa_06;
  undefined8 extraout_XMM0_Qa_07;
  undefined8 extraout_XMM0_Qa_08;
  undefined8 extraout_XMM0_Qa_09;
  undefined8 extraout_XMM0_Qa_10;
  undefined8 extraout_XMM0_Qa_11;
  undefined8 extraout_XMM0_Qa_12;
  undefined8 extraout_XMM0_Qa_13;
  undefined8 extraout_XMM0_Qa_14;
  undefined8 extraout_XMM0_Qa_15;
  undefined8 extraout_XMM0_Qa_16;
  undefined8 extraout_XMM0_Qa_17;
  undefined8 extraout_XMM0_Qa_18;
  undefined8 uVar26;
  undefined8 extraout_XMM0_Qa_19;
  undefined8 extraout_XMM0_Qa_20;
  undefined8 extraout_XMM0_Qa_21;
  int iVar28;
  undefined1 in_XMM0 [16];
  int iVar29;
  undefined1 extraout_XMM0 [16];
  undefined8 extraout_XMM0_Qb;
  undefined1 extraout_XMM0_00 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined8 extraout_XMM0_Qb_03;
  undefined8 extraout_XMM0_Qb_04;
  undefined8 extraout_XMM0_Qb_05;
  undefined1 extraout_XMM0_01 [16];
  undefined8 extraout_XMM0_Qb_06;
  undefined8 extraout_XMM0_Qb_07;
  undefined8 extraout_XMM0_Qb_08;
  undefined8 extraout_XMM0_Qb_09;
  undefined8 extraout_XMM0_Qb_10;
  undefined8 uVar30;
  undefined8 extraout_XMM1_Qa;
  undefined8 extraout_XMM1_Qa_00;
  undefined8 extraout_XMM1_Qa_01;
  undefined8 extraout_XMM1_Qa_02;
  undefined8 extraout_XMM1_Qa_03;
  undefined8 extraout_XMM1_Qa_04;
  undefined8 extraout_XMM1_Qa_05;
  undefined8 extraout_XMM1_Qa_06;
  undefined8 extraout_XMM1_Qa_07;
  undefined8 extraout_XMM1_Qa_08;
  undefined8 extraout_XMM1_Qa_09;
  undefined8 extraout_XMM1_Qa_10;
  undefined8 extraout_XMM1_Qa_11;
  undefined8 extraout_XMM1_Qa_12;
  undefined8 extraout_XMM1_Qa_13;
  undefined8 extraout_XMM1_Qa_14;
  undefined8 extraout_XMM1_Qa_15;
  undefined8 extraout_XMM1_Qa_16;
  undefined8 extraout_XMM1_Qa_17;
  undefined8 uVar31;
  undefined8 extraout_XMM1_Qa_18;
  undefined8 extraout_XMM1_Qa_19;
  undefined8 extraout_XMM1_Qa_20;
  undefined8 extraout_XMM1_Qa_21;
  undefined1 in_XMM1 [16];
  undefined8 extraout_XMM1_Qb;
  undefined8 extraout_XMM1_Qb_00;
  undefined8 extraout_XMM1_Qb_01;
  undefined8 extraout_XMM1_Qb_02;
  undefined8 extraout_XMM1_Qb_03;
  undefined8 extraout_XMM1_Qb_04;
  undefined8 extraout_XMM1_Qb_05;
  undefined8 extraout_XMM1_Qb_06;
  undefined8 extraout_XMM1_Qb_07;
  undefined8 extraout_XMM1_Qb_08;
  undefined8 extraout_XMM1_Qb_09;
  undefined8 extraout_XMM1_Qb_10;
  int iVar33;
  undefined8 uVar32;
  int iVar34;
  undefined1 in_XMM3 [16];
  int iVar35;
  undefined8 uVar36;
  undefined1 in_XMM4 [16];
  undefined8 uVar37;
  undefined1 in_XMM6 [16];
  undefined8 uVar38;
  undefined1 in_XMM7 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auStackY_118 [128];
  undefined8 in_stack_ffffffffffffff68;
  uint *local_78;
  uint *local_48;
  int local_40;
  
  iVar5 = *(int *)(param_3 + 0x38);
  if (iVar5 == 0) {
    return;
  }
  uVar16 = *(uint *)(param_3 + 0x48);
  uVar17 = 0;
  if (0 < (int)uVar16) {
    if (uVar16 < 9) {
      lVar7 = 0;
      uVar18 = 0;
    }
    else {
      uVar17 = 8;
      if ((ulong)(uVar16 & 7) != 0) {
        uVar17 = (ulong)(uVar16 & 7);
      }
      lVar7 = uVar16 - uVar17;
      piVar6 = (int *)(*(long *)(param_3 + 0x50) + 0xb8);
      param_1 = 0xffffffffffffffff;
      in_XMM3 = (undefined1  [16])0x0;
      iVar24 = 0;
      iVar25 = 0;
      iVar27 = 0;
      iVar28 = 0;
      lVar8 = lVar7;
      do {
        param_2 = CONCAT44(*piVar6,piVar6[-6]);
        in_XMM4 = ZEXT416((uint)piVar6[-0xc]);
        in_XMM6._0_4_ = -(uint)(piVar6[-0x2a] == 0);
        in_XMM6._4_4_ = -(uint)(piVar6[-0x24] == 0);
        in_XMM6._8_4_ = -(uint)(piVar6[-0x1e] == 0);
        in_XMM6._12_4_ = -(uint)(piVar6[-0x18] == 0);
        iVar29 = in_XMM3._4_4_;
        iVar33 = in_XMM3._8_4_;
        iVar34 = in_XMM3._12_4_;
        in_XMM7._0_4_ = -(uint)(piVar6[-0x12] == 0);
        in_XMM7._4_4_ = -(uint)(piVar6[-0xc] == 0);
        in_XMM7._8_4_ = -(uint)(piVar6[-6] == 0);
        in_XMM7._12_4_ = -(uint)(*piVar6 == 0);
        in_XMM3._0_4_ = in_XMM3._0_4_ + in_XMM6._0_4_ + 1;
        in_XMM3._4_4_ = iVar29 + in_XMM6._4_4_ + 1;
        in_XMM3._8_4_ = iVar33 + in_XMM6._8_4_ + 1;
        in_XMM3._12_4_ = iVar34 + in_XMM6._12_4_ + 1;
        iVar24 = iVar24 + in_XMM7._0_4_ + 1;
        iVar25 = iVar25 + in_XMM7._4_4_ + 1;
        iVar27 = iVar27 + in_XMM7._8_4_ + 1;
        iVar28 = iVar28 + in_XMM7._12_4_ + 1;
        piVar6 = piVar6 + 0x30;
        lVar8 = lVar8 + -8;
      } while (lVar8 != 0);
      in_XMM1._0_4_ = iVar27 + in_XMM3._8_4_ + iVar24 + in_XMM3._0_4_;
      in_XMM1._4_4_ = iVar28 + in_XMM3._12_4_ + iVar25 + in_XMM3._4_4_;
      iVar25 = (iVar27 + in_XMM3._8_4_) * 2;
      in_XMM1._8_4_ = iVar25;
      iVar24 = (iVar28 + in_XMM3._12_4_) * 2;
      in_XMM1._12_4_ = iVar24;
      in_XMM0._0_4_ = in_XMM1._4_4_ + in_XMM1._0_4_;
      in_XMM0._4_4_ = in_XMM1._4_4_ * 2;
      in_XMM0._8_4_ = in_XMM1._4_4_ + iVar25;
      in_XMM0._12_4_ = in_XMM1._4_4_ + iVar24;
      uVar18 = in_XMM0._0_4_;
    }
    param_5 = (uint *)(*(long *)(param_3 + 0x50) + lVar7 * 0x18 + 0x10);
    lVar7 = (ulong)uVar16 - lVar7;
    uVar17 = (ulong)uVar18;
    do {
      uVar17 = (ulong)(((int)uVar17 + 1) - (uint)(*param_5 == 0));
      param_5 = param_5 + 6;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  puVar22 = (uint *)0x0;
  uVar16 = *(uint *)(param_3 + 0x58);
  uVar11 = (ulong)uVar16;
  iVar24 = (int)uVar17;
  if (0 < (int)uVar16) {
    if (uVar16 < 9) {
      lVar7 = 0;
      puVar22 = (uint *)0x0;
    }
    else {
      uVar13 = 8;
      if ((ulong)(uVar16 & 7) != 0) {
        uVar13 = (ulong)(uVar16 & 7);
      }
      lVar7 = uVar11 - uVar13;
      piVar6 = (int *)(*(long *)(param_3 + 0x60) + 0x78);
      param_1 = 0xffffffffffffffff;
      in_XMM3 = (undefined1  [16])0x0;
      iVar25 = 0;
      iVar27 = 0;
      iVar28 = 0;
      iVar29 = 0;
      lVar8 = lVar7;
      do {
        param_2 = CONCAT44(*piVar6,piVar6[-4]);
        in_XMM4 = ZEXT416((uint)piVar6[-8]);
        in_XMM6._0_4_ = -(uint)(piVar6[-0x1c] == 0);
        in_XMM6._4_4_ = -(uint)(piVar6[-0x18] == 0);
        in_XMM6._8_4_ = -(uint)(piVar6[-0x14] == 0);
        in_XMM6._12_4_ = -(uint)(piVar6[-0x10] == 0);
        iVar33 = in_XMM3._4_4_;
        iVar34 = in_XMM3._8_4_;
        iVar35 = in_XMM3._12_4_;
        in_XMM7._0_4_ = -(uint)(piVar6[-0xc] == 0);
        in_XMM7._4_4_ = -(uint)(piVar6[-8] == 0);
        in_XMM7._8_4_ = -(uint)(piVar6[-4] == 0);
        in_XMM7._12_4_ = -(uint)(*piVar6 == 0);
        in_XMM3._0_4_ = in_XMM3._0_4_ + in_XMM6._0_4_ + 1;
        in_XMM3._4_4_ = iVar33 + in_XMM6._4_4_ + 1;
        in_XMM3._8_4_ = iVar34 + in_XMM6._8_4_ + 1;
        in_XMM3._12_4_ = iVar35 + in_XMM6._12_4_ + 1;
        iVar25 = iVar25 + in_XMM7._0_4_ + 1;
        iVar27 = iVar27 + in_XMM7._4_4_ + 1;
        iVar28 = iVar28 + in_XMM7._8_4_ + 1;
        iVar29 = iVar29 + in_XMM7._12_4_ + 1;
        piVar6 = piVar6 + 0x20;
        lVar8 = lVar8 + -8;
      } while (lVar8 != 0);
      in_XMM1._0_4_ = iVar28 + in_XMM3._8_4_ + iVar25 + in_XMM3._0_4_;
      in_XMM1._4_4_ = iVar29 + in_XMM3._12_4_ + iVar27 + in_XMM3._4_4_;
      iVar27 = (iVar28 + in_XMM3._8_4_) * 2;
      in_XMM1._8_4_ = iVar27;
      iVar25 = (iVar29 + in_XMM3._12_4_) * 2;
      in_XMM1._12_4_ = iVar25;
      in_XMM0._0_4_ = in_XMM1._4_4_ + in_XMM1._0_4_;
      in_XMM0._4_4_ = in_XMM1._4_4_ * 2;
      in_XMM0._8_4_ = in_XMM1._4_4_ + iVar27;
      in_XMM0._12_4_ = in_XMM1._4_4_ + iVar25;
      puVar22 = (uint *)(ulong)in_XMM0._0_4_;
    }
    lVar8 = uVar11 - lVar7;
    param_5 = (uint *)(*(long *)(param_3 + 0x60) + lVar7 * 0x10 + 8);
    do {
      puVar22 = (uint *)(ulong)(((int)puVar22 + 1) - (uint)(*param_5 == 0));
      param_5 = param_5 + 4;
      lVar8 = lVar8 + -1;
      uVar11 = 0;
    } while (lVar8 != 0);
  }
  iVar25 = (int)puVar22;
  if (0 < iVar5) {
    lVar8 = 0;
    lVar7 = 0;
    do {
      iVar5 = obj_ninlets(*(long **)(*(long *)(param_3 + 0x40) + lVar8));
      uVar30 = in_XMM1._0_8_;
      puVar9 = extraout_RDX;
      uVar26 = extraout_XMM0_Qa;
      if (iVar5 != *(int *)(param_3 + 0x48)) {
LAB_00503795:
        pd_error(uVar26,uVar30,param_1,in_XMM3._0_8_,in_XMM4._0_8_,param_2,in_XMM6._0_8_,
                 in_XMM7._0_8_,param_3,"clone: can\'t do DSP until edited copy is saved",puVar9,
                 uVar11,param_7,param_8);
        if (iVar25 == 0) {
          return;
        }
        puVar10 = (undefined8 *)(uVar17 * 8 + param_4);
        uVar26 = extraout_RDX_03;
        uVar30 = extraout_XMM0_Qa_02;
        uVar31 = extraout_XMM1_Qa;
        do {
          uVar17 = 1;
          if ((*(byte *)(param_3 + 0x88) & 4) != 0) {
            uVar17 = (ulong)*(uint *)(param_3 + 0x38);
          }
          signal_setmultiout(uVar30,uVar31,param_1,in_XMM3._0_8_,in_XMM4._0_8_,param_2,in_XMM6._0_8_
                             ,in_XMM7._0_8_,puVar10,uVar17,uVar26,uVar11,param_7,param_8);
          piVar6 = (int *)*puVar10;
          dsp_add_zero(extraout_XMM0_Qa_03,extraout_XMM1_Qa_00,param_1,in_XMM3._0_8_,in_XMM4._0_8_,
                       param_2,in_XMM6._0_8_,in_XMM7._0_8_,*(undefined8 *)(piVar6 + 2),
                       piVar6[5] * *piVar6,extraout_RDX_04,uVar11,param_7,param_8,
                       in_stack_ffffffffffffff68);
          puVar10 = puVar10 + 1;
          puVar22 = (uint *)((long)puVar22 + -1);
          uVar26 = extraout_RDX_05;
          uVar30 = extraout_XMM0_Qa_04;
          uVar31 = extraout_XMM1_Qa_01;
        } while (puVar22 != (uint *)0x0);
        return;
      }
      iVar5 = obj_noutlets(*(long *)(*(long *)(param_3 + 0x40) + lVar8));
      uVar30 = in_XMM1._0_8_;
      puVar9 = extraout_RDX_00;
      uVar26 = extraout_XMM0_Qa_00;
      if (iVar5 != *(int *)(param_3 + 0x58)) goto LAB_00503795;
      iVar5 = obj_nsiginlets(*(long **)(*(long *)(param_3 + 0x40) + lVar8));
      uVar30 = in_XMM1._0_8_;
      puVar9 = extraout_RDX_01;
      uVar26 = extraout_XMM0_Qa_01;
      if (iVar5 != iVar24) goto LAB_00503795;
      iVar5 = obj_nsigoutlets(*(long *)(*(long *)(param_3 + 0x40) + lVar8));
      uVar30 = in_XMM1._0_8_;
      uVar26 = extraout_XMM0._0_8_;
      puVar9 = extraout_RDX_02;
      if (iVar5 != iVar25) goto LAB_00503795;
      lVar7 = lVar7 + 1;
      iVar5 = *(int *)(param_3 + 0x38);
      lVar8 = lVar8 + 0x10;
      param_5 = extraout_RDX_02;
      in_XMM0 = extraout_XMM0;
    } while (lVar7 < iVar5);
  }
  if (iVar25 + iVar24 == 0) {
    puVar23 = (undefined1 *)0x0;
    puVar9 = (uint *)(auStackY_118 + 0x80);
    puVar4 = auStackY_118 + 0x80;
  }
  else {
    puVar23 = auStackY_118 +
              (0x80 - ((ulong)(uint)(iVar25 + iVar24) * 8 + 0xf & 0xfffffffffffffff0));
    puVar9 = (uint *)puVar23;
    puVar4 = puVar23;
  }
  if (iVar25 == 0) {
    local_78 = (uint *)0x0;
  }
  else {
    param_5 = (uint *)(puVar4 + -((long)puVar22 * 4 + 0xfU & 0xfffffffffffffff0));
    puVar9 = param_5;
    local_78 = param_5;
  }
  puVar14 = local_78;
  if ((*(byte *)(param_3 + 0x88) & 4) == 0) {
    if (0 < iVar5) {
      lVar8 = uVar17 * 8 + param_4;
      local_48 = (uint *)0x0;
      puVar14 = puVar22;
      do {
        if (iVar24 != 0) {
          uVar11 = 0;
          do {
            while (puVar14 = *(uint **)(param_4 + uVar11 * 8), (*(byte *)(param_3 + 0x88) & 2) == 0)
            {
              *(uint **)(puVar23 + uVar11 * 8) = puVar14;
              uVar11 = uVar11 + 1;
              if (uVar17 == uVar11) goto LAB_0050395b;
            }
            uVar16 = puVar14[5];
            uVar18 = puVar14[4];
            puVar9[-2] = 0x5038ff;
            puVar9[-1] = 0;
            piVar6 = signal_new((ulong)uVar18,in_XMM1._0_8_,param_1,in_XMM3._0_8_,in_XMM4._0_8_,
                                param_2,in_XMM6._0_8_,in_XMM7._0_8_,0,1,0,puVar14,param_7,param_8);
            *(int **)(puVar23 + uVar11 * 8) = piVar6;
            puVar1 = *(undefined4 **)(param_4 + uVar11 * 8);
            puVar9[-2] = 0x503914;
            puVar9[-1] = 0;
            signal_setborrowed(extraout_XMM0_Qa_05,in_XMM1._0_8_,param_1,in_XMM3._0_8_,in_XMM4._0_8_
                               ,param_2,in_XMM6._0_8_,in_XMM7._0_8_,piVar6,puVar1,extraout_RDX_06,
                               puVar23,param_7,param_8);
            in_XMM1._8_8_ = extraout_XMM1_Qb;
            in_XMM1._0_8_ = extraout_XMM1_Qa_02;
            in_XMM0._8_8_ = extraout_XMM0_Qb;
            in_XMM0._0_8_ = extraout_XMM0_Qa_06;
            lVar7 = *(long *)(puVar23 + uVar11 * 8);
            *(undefined4 *)(lVar7 + 0x14) = 1;
            puVar14 = *(uint **)(param_4 + uVar11 * 8);
            param_5 = (uint *)(long)(int)*puVar14;
            *(long *)(lVar7 + 8) =
                 (long)(int)((long)((ulong)(uint)((int)local_48 >> 0x1f) << 0x20 |
                                   (ulong)local_48 & 0xffffffff) % (long)(int)uVar16) *
                 (long)param_5 * 4 + *(long *)(puVar14 + 2);
            *(undefined4 *)(*(long *)(puVar23 + uVar11 * 8) + 0x1c) = 1;
            uVar11 = uVar11 + 1;
          } while (uVar17 != uVar11);
        }
LAB_0050395b:
        uVar30 = in_XMM1._0_8_;
        uVar26 = in_XMM0._0_8_;
        if (iVar25 != 0) {
          puVar12 = (uint *)0x0;
          do {
            puVar9[-2] = 0x50397f;
            puVar9[-1] = 0;
            piVar6 = signal_newfromcontext
                               (in_XMM0._0_8_,in_XMM1._0_8_,param_1,in_XMM3._0_8_,in_XMM4._0_8_,
                                param_2,in_XMM6._0_8_,in_XMM7._0_8_,1,1,param_5,puVar14,param_7,
                                param_8);
            uVar30 = in_XMM1._0_8_;
            uVar26 = extraout_XMM0_00._0_8_;
            *(int **)(puVar23 + (long)puVar12 * 8 + uVar17 * 8) = piVar6;
            puVar12 = (uint *)((long)puVar12 + 1);
            param_5 = extraout_RDX_07;
            in_XMM0 = extraout_XMM0_00;
          } while (puVar22 != puVar12);
        }
        uVar11 = (long)local_48 * 0x10;
        plVar2 = *(long **)(*(long *)(param_3 + 0x40) + uVar11);
        puVar9[-2] = 0x5039a6;
        puVar9[-1] = 0;
        canvas_dodsp(uVar26,uVar30,param_1,in_XMM3._0_8_,in_XMM4._0_8_,param_2,in_XMM6._0_8_,
                     in_XMM7._0_8_,plVar2,0,puVar23,uVar11,param_7,param_8);
        in_XMM1._8_8_ = extraout_XMM1_Qb_00;
        in_XMM1._0_8_ = extraout_XMM1_Qa_03;
        in_XMM0._8_8_ = extraout_XMM0_Qb_00;
        in_XMM0._0_8_ = extraout_XMM0_Qa_07;
        uVar26 = extraout_RDX_08;
        if (((*(byte *)(param_3 + 0x88) & 2) != 0) && (iVar24 != 0)) {
          uVar13 = 0;
          do {
            while( true ) {
              lVar7 = *(long *)(puVar23 + uVar13 * 8);
              uVar16 = *(int *)(lVar7 + 0x1c) - 1;
              *(uint *)(lVar7 + 0x1c) = uVar16;
              if (uVar16 != 0) break;
              puVar9[-2] = 0x5039f8;
              puVar9[-1] = 0;
              in_XMM0._0_8_ =
                   signal_makereusable(in_XMM0._0_8_,in_XMM1._0_8_,param_1,in_XMM3._0_8_,
                                       in_XMM4._0_8_,param_2,in_XMM6._0_8_,in_XMM7._0_8_,lVar7,0,
                                       uVar26,uVar11,param_7,param_8);
              in_XMM1._8_8_ = extraout_XMM1_Qb_02;
              in_XMM1._0_8_ = extraout_XMM1_Qa_05;
              in_XMM0._8_8_ = extraout_XMM0_Qb_02;
              uVar13 = uVar13 + 1;
              uVar26 = extraout_RDX_10;
              if (uVar17 == uVar13) goto LAB_00503a10;
            }
            puVar9[-2] = 0x5039da;
            puVar9[-1] = 0;
            in_XMM0._0_8_ =
                 bug(in_XMM0._0_8_,in_XMM1._0_8_,param_1,in_XMM3._0_8_,in_XMM4._0_8_,param_2,
                     in_XMM6._0_8_,in_XMM7._0_8_,"clone 2: %d",(ulong)uVar16,uVar26,uVar11,param_7,
                     param_8,(char)*puVar9);
            in_XMM1._8_8_ = extraout_XMM1_Qb_01;
            in_XMM1._0_8_ = extraout_XMM1_Qa_04;
            in_XMM0._8_8_ = extraout_XMM0_Qb_01;
            uVar13 = uVar13 + 1;
            uVar26 = extraout_RDX_09;
          } while (uVar17 != uVar13);
        }
LAB_00503a10:
        if (iVar25 != 0) {
          if (local_48 == (uint *)0x0) {
            lVar7 = 0;
            puVar14 = local_78;
            do {
              uVar16 = (*(int **)(puVar23 + lVar7 + uVar17 * 8))[5];
              iVar5 = **(int **)(puVar23 + lVar7 + uVar17 * 8);
              puVar9[-2] = 0x503ade;
              puVar9[-1] = 0;
              signal_setmultiout(in_XMM0._0_8_,in_XMM1._0_8_,param_1,in_XMM3._0_8_,in_XMM4._0_8_,
                                 param_2,in_XMM6._0_8_,in_XMM7._0_8_,(undefined8 *)(lVar8 + lVar7),
                                 (ulong)uVar16,uVar26,uVar11,param_7,param_8);
              uVar26 = *(undefined8 *)(*(long *)(puVar23 + lVar7 + uVar17 * 8) + 8);
              lVar20 = *(long *)(*(long *)(lVar8 + lVar7) + 8);
              puVar9[-2] = 0x503afd;
              puVar9[-1] = 0;
              dsp_add_copy(extraout_XMM0_Qa_11,extraout_XMM1_Qa_09,param_1,in_XMM3._0_8_,
                           in_XMM4._0_8_,param_2,in_XMM6._0_8_,in_XMM7._0_8_,uVar26,lVar20,
                           iVar5 * uVar16,uVar11,param_7,param_8,*(undefined8 *)puVar9);
              *puVar14 = uVar16;
              lVar3 = *(long *)(puVar23 + lVar7 + uVar17 * 8);
              puVar9[-2] = 0x503b09;
              puVar9[-1] = 0;
              signal_makereusable(extraout_XMM0_Qa_12,extraout_XMM1_Qa_10,param_1,in_XMM3._0_8_,
                                  in_XMM4._0_8_,param_2,in_XMM6._0_8_,in_XMM7._0_8_,lVar3,lVar20,
                                  extraout_RDX_12,uVar11,param_7,param_8);
              in_XMM1._8_8_ = extraout_XMM1_Qb_04;
              in_XMM1._0_8_ = extraout_XMM1_Qa_11;
              in_XMM0._8_8_ = extraout_XMM0_Qb_04;
              in_XMM0._0_8_ = extraout_XMM0_Qa_13;
              puVar14 = puVar14 + 1;
              lVar7 = lVar7 + 8;
              uVar26 = extraout_RDX_13;
            } while ((long)puVar22 * 8 != lVar7);
          }
          else {
            puVar14 = (uint *)0x0;
            do {
              uVar30 = in_XMM1._0_8_;
              uVar26 = in_XMM0._0_8_;
              piVar6 = *(int **)(puVar23 + (long)puVar14 * 8 + uVar17 * 8);
              uVar16 = piVar6[5];
              param_7 = (char *)(ulong)uVar16;
              uVar18 = local_78[(long)puVar14];
              param_8 = (ulong)uVar18;
              uVar21 = uVar16;
              if ((int)uVar18 < (int)uVar16) {
                uVar21 = uVar18;
              }
              iVar5 = *piVar6;
              uVar11 = (ulong)(uVar21 * iVar5);
              if (uVar16 != uVar18) {
                puVar9[-2] = 0x503a9d;
                puVar9[-1] = 0;
                pd_error(uVar26,uVar30,param_1,in_XMM3._0_8_,in_XMM4._0_8_,param_2,in_XMM6._0_8_,
                         in_XMM7._0_8_,param_3,
                         "warning: clone instance %d: channel count of outlet %d (%d) does not match first instance (%d)"
                         ,local_48,(ulong)puVar14 & 0xffffffff,param_7,param_8);
                piVar6 = *(int **)(puVar23 + (long)puVar14 * 8 + uVar17 * 8);
                uVar26 = extraout_XMM0_Qa_10;
                uVar30 = extraout_XMM1_Qa_08;
              }
              uVar31 = *(undefined8 *)(piVar6 + 2);
              lVar7 = *(long *)(*(long *)(lVar8 + (long)puVar14 * 8) + 8);
              puVar9[-2] = 0x503a4b;
              puVar9[-1] = 0;
              dsp_add_plus(uVar26,uVar30,param_1,in_XMM3._0_8_,in_XMM4._0_8_,param_2,in_XMM6._0_8_,
                           in_XMM7._0_8_,uVar31,lVar7,lVar7,uVar21 * iVar5,param_7,param_8,
                           *(undefined8 *)puVar9);
              lVar20 = *(long *)(puVar23 + (long)puVar14 * 8 + uVar17 * 8);
              puVar9[-2] = 0x503a54;
              puVar9[-1] = 0;
              signal_makereusable(extraout_XMM0_Qa_08,extraout_XMM1_Qa_06,param_1,in_XMM3._0_8_,
                                  in_XMM4._0_8_,param_2,in_XMM6._0_8_,in_XMM7._0_8_,lVar20,lVar7,
                                  extraout_RDX_11,uVar11,param_7,param_8);
              in_XMM1._8_8_ = extraout_XMM1_Qb_03;
              in_XMM1._0_8_ = extraout_XMM1_Qa_07;
              in_XMM0._8_8_ = extraout_XMM0_Qb_03;
              in_XMM0._0_8_ = extraout_XMM0_Qa_09;
              puVar14 = (uint *)((long)puVar14 + 1);
            } while (puVar22 != puVar14);
          }
        }
        puVar14 = (uint *)((long)local_48 + 1);
        param_5 = puVar14;
        local_48 = puVar14;
      } while ((long)puVar14 < (long)*(int *)(param_3 + 0x38));
    }
  }
  else if (0 < iVar5) {
    lVar7 = uVar17 * 8 + param_4;
    lVar8 = (long)puVar22 * 8;
    uVar11 = 0;
    puVar14 = puVar22;
    do {
      local_40 = (int)uVar11;
      if (iVar24 != 0) {
        uVar13 = 0;
        do {
          while (puVar14 = *(uint **)(param_4 + uVar13 * 8), (*(byte *)(param_3 + 0x88) & 2) == 0) {
            *(uint **)(puVar23 + uVar13 * 8) = puVar14;
            uVar13 = uVar13 + 1;
            if (uVar17 == uVar13) goto LAB_00503c3d;
          }
          uVar16 = puVar14[5];
          uVar18 = puVar14[4];
          puVar9[-2] = 0x503bdd;
          puVar9[-1] = 0;
          piVar6 = signal_new((ulong)uVar18,in_XMM1._0_8_,param_1,in_XMM3._0_8_,in_XMM4._0_8_,
                              param_2,in_XMM6._0_8_,in_XMM7._0_8_,0,1,0,puVar14,param_7,param_8);
          *(int **)(puVar23 + uVar13 * 8) = piVar6;
          puVar1 = *(undefined4 **)(param_4 + uVar13 * 8);
          puVar9[-2] = 0x503bf2;
          puVar9[-1] = 0;
          signal_setborrowed(extraout_XMM0_Qa_14,in_XMM1._0_8_,param_1,in_XMM3._0_8_,in_XMM4._0_8_,
                             param_2,in_XMM6._0_8_,in_XMM7._0_8_,piVar6,puVar1,extraout_RDX_14,
                             puVar23,param_7,param_8);
          in_XMM1._8_8_ = extraout_XMM1_Qb_05;
          in_XMM1._0_8_ = extraout_XMM1_Qa_12;
          in_XMM0._8_8_ = extraout_XMM0_Qb_05;
          in_XMM0._0_8_ = extraout_XMM0_Qa_15;
          lVar20 = *(long *)(puVar23 + uVar13 * 8);
          *(undefined4 *)(lVar20 + 0x14) = 1;
          puVar14 = *(uint **)(param_4 + uVar13 * 8);
          param_5 = (uint *)(long)(int)*puVar14;
          *(long *)(lVar20 + 8) =
               (long)(int)((long)((ulong)(uint)(local_40 >> 0x1f) << 0x20 | uVar11 & 0xffffffff) %
                          (long)(int)uVar16) * (long)param_5 * 4 + *(long *)(puVar14 + 2);
          *(undefined4 *)(*(long *)(puVar23 + uVar13 * 8) + 0x1c) = 1;
          uVar13 = uVar13 + 1;
        } while (uVar17 != uVar13);
      }
LAB_00503c3d:
      uVar30 = in_XMM1._0_8_;
      uVar26 = in_XMM0._0_8_;
      puVar12 = puVar22;
      if (iVar25 != 0) {
        puVar15 = (uint *)0x0;
        do {
          puVar9[-2] = 0x503c5f;
          puVar9[-1] = 0;
          piVar6 = signal_newfromcontext
                             (in_XMM0._0_8_,in_XMM1._0_8_,param_1,in_XMM3._0_8_,in_XMM4._0_8_,
                              param_2,in_XMM6._0_8_,in_XMM7._0_8_,1,1,param_5,puVar14,param_7,
                              param_8);
          uVar30 = in_XMM1._0_8_;
          uVar26 = extraout_XMM0_01._0_8_;
          *(int **)(puVar23 + (long)puVar15 * 8 + uVar17 * 8) = piVar6;
          puVar15 = (uint *)((long)puVar15 + 1);
          param_5 = extraout_RDX_15;
          in_XMM0 = extraout_XMM0_01;
        } while (puVar22 != puVar15);
      }
      puVar22 = puVar12;
      puVar14 = (uint *)(uVar11 * 0x10);
      plVar2 = *(long **)(*(long *)(param_3 + 0x40) + (long)puVar14);
      puVar9[-2] = 0x503c87;
      puVar9[-1] = 0;
      canvas_dodsp(uVar26,uVar30,param_1,in_XMM3._0_8_,in_XMM4._0_8_,param_2,in_XMM6._0_8_,
                   in_XMM7._0_8_,plVar2,0,puVar23,puVar14,param_7,param_8);
      in_XMM1._8_8_ = extraout_XMM1_Qb_06;
      in_XMM1._0_8_ = extraout_XMM1_Qa_13;
      in_XMM0._8_8_ = extraout_XMM0_Qb_06;
      in_XMM0._0_8_ = extraout_XMM0_Qa_16;
      param_5 = extraout_RDX_16;
      if (((*(byte *)(param_3 + 0x88) & 2) != 0) && (iVar24 != 0)) {
        uVar13 = 0;
        puVar12 = extraout_RDX_16;
        do {
          while( true ) {
            lVar20 = *(long *)(puVar23 + uVar13 * 8);
            uVar16 = *(int *)(lVar20 + 0x1c) - 1;
            *(uint *)(lVar20 + 0x1c) = uVar16;
            if (uVar16 != 0) break;
            puVar9[-2] = 0x503cd8;
            puVar9[-1] = 0;
            in_XMM0._0_8_ =
                 signal_makereusable(in_XMM0._0_8_,in_XMM1._0_8_,param_1,in_XMM3._0_8_,in_XMM4._0_8_
                                     ,param_2,in_XMM6._0_8_,in_XMM7._0_8_,lVar20,0,puVar12,
                                     (ulong)puVar14,param_7,param_8);
            in_XMM1._8_8_ = extraout_XMM1_Qb_08;
            in_XMM1._0_8_ = extraout_XMM1_Qa_15;
            in_XMM0._8_8_ = extraout_XMM0_Qb_08;
            uVar13 = uVar13 + 1;
            puVar12 = extraout_RDX_18;
            param_5 = extraout_RDX_18;
            if (uVar17 == uVar13) goto LAB_00503cf0;
          }
          puVar9[-2] = 0x503cba;
          puVar9[-1] = 0;
          in_XMM0._0_8_ =
               bug(in_XMM0._0_8_,in_XMM1._0_8_,param_1,in_XMM3._0_8_,in_XMM4._0_8_,param_2,
                   in_XMM6._0_8_,in_XMM7._0_8_,"clone 1: %d",(ulong)uVar16,puVar12,puVar14,param_7,
                   param_8,(char)*puVar9);
          in_XMM1._8_8_ = extraout_XMM1_Qb_07;
          in_XMM1._0_8_ = extraout_XMM1_Qa_14;
          in_XMM0._8_8_ = extraout_XMM0_Qb_07;
          uVar13 = uVar13 + 1;
          puVar12 = extraout_RDX_17;
          param_5 = extraout_RDX_17;
        } while (uVar17 != uVar13);
      }
LAB_00503cf0:
      if (iVar25 != 0) {
        lVar20 = 0;
        uVar16 = 0;
        puVar12 = local_78;
        do {
          piVar6 = *(int **)(puVar23 + lVar20 + uVar17 * 8);
          uVar18 = piVar6[5];
          param_7 = (char *)(ulong)uVar18;
          iVar5 = *piVar6;
          uVar26 = *(undefined8 *)(piVar6 + 2);
          uVar30 = in_XMM0._0_8_;
          uVar31 = in_XMM1._0_8_;
          auVar39._8_8_ = uVar31;
          auVar39._0_8_ = uVar30;
          uVar32 = in_XMM3._0_8_;
          uVar36 = in_XMM4._0_8_;
          uVar37 = in_XMM6._0_8_;
          uVar38 = in_XMM7._0_8_;
          if (uVar11 == 0) {
            iVar27 = *(int *)(param_3 + 0x38);
            puVar9[-2] = 0x503d2f;
            puVar9[-1] = 0;
            auVar39 = signal_setmultiout(uVar30,uVar31,param_1,uVar32,uVar36,param_2,uVar37,uVar38,
                                         (undefined8 *)(lVar7 + lVar20),(ulong)(iVar27 * uVar18),
                                         param_5,puVar14,param_7,param_8);
            *puVar12 = uVar18;
            pcVar19 = *(char **)(*(long *)(lVar7 + lVar20) + 8);
LAB_00503d51:
            puVar9[-2] = 0x503d63;
            puVar9[-1] = 0;
            dsp_add_copy(auVar39._0_8_,auVar39._8_8_,param_1,in_XMM3._0_8_,in_XMM4._0_8_,param_2,
                         in_XMM6._0_8_,in_XMM7._0_8_,uVar26,pcVar19,iVar5 * uVar18,puVar14,param_7,
                         param_8,*(undefined8 *)puVar9);
            uVar26 = extraout_RDX_19;
            uVar30 = extraout_XMM0_Qa_17;
            uVar31 = extraout_XMM1_Qa_16;
          }
          else {
            uVar21 = *puVar12;
            puVar14 = *(uint **)(lVar7 + lVar20);
            pcVar19 = (char *)((long)(int)(uVar21 * iVar5 * local_40) * 4 + *(long *)(puVar14 + 2));
            if (uVar18 == uVar21) goto LAB_00503d51;
            if ((int)uVar21 < (int)uVar18) {
              puVar9[-2] = 0x503dd7;
              puVar9[-1] = 0;
              auVar40 = dsp_add_copy(uVar30,uVar31,param_1,uVar32,uVar36,param_2,uVar37,uVar38,
                                     uVar26,pcVar19,uVar21 * iVar5,puVar14,param_7,param_8,
                                     *(undefined8 *)puVar9);
            }
            else {
              puVar9[-2] = 0x503dee;
              puVar9[-1] = 0;
              uVar26 = dsp_add_copy(uVar30,uVar31,param_1,uVar32,uVar36,param_2,uVar37,uVar38,uVar26
                                    ,pcVar19,iVar5 * uVar18,puVar14,param_7,param_8,
                                    *(undefined8 *)puVar9);
              uVar21 = *puVar12;
              puVar9[-2] = 0x503e04;
              puVar9[-1] = 0;
              dsp_add_zero(uVar26,extraout_XMM1_Qa_18,param_1,in_XMM3._0_8_,in_XMM4._0_8_,param_2,
                           in_XMM6._0_8_,in_XMM7._0_8_,pcVar19 + (long)(int)(iVar5 * uVar18) * 4,
                           (uVar21 - uVar18) * iVar5,extraout_RDX_21,puVar14,param_7,param_8,
                           *(undefined8 *)puVar9);
              auVar40._8_8_ = extraout_XMM1_Qa_19;
              auVar40._0_8_ = extraout_XMM0_Qa_19;
            }
            param_7 = (char *)(ulong)uVar18;
            param_8 = (ulong)*puVar12;
            pcVar19 = 
            "warning: clone instance %d: channel count of outlet %d (%d) does not match first instance (%d)"
            ;
            puVar14 = (uint *)(ulong)uVar16;
            puVar9[-2] = 0x503e29;
            puVar9[-1] = 0;
            pd_error(auVar40._0_8_,auVar40._8_8_,param_1,in_XMM3._0_8_,in_XMM4._0_8_,param_2,
                     in_XMM6._0_8_,in_XMM7._0_8_,param_3,
                     "warning: clone instance %d: channel count of outlet %d (%d) does not match first instance (%d)"
                     ,uVar11,puVar14,param_7,param_8);
            uVar26 = extraout_RDX_22;
            uVar30 = extraout_XMM0_Qa_20;
            uVar31 = extraout_XMM1_Qa_20;
          }
          lVar3 = *(long *)(puVar23 + lVar20 + uVar17 * 8);
          puVar9[-2] = 0x503d70;
          puVar9[-1] = 0;
          signal_makereusable(uVar30,uVar31,param_1,in_XMM3._0_8_,in_XMM4._0_8_,param_2,
                              in_XMM6._0_8_,in_XMM7._0_8_,lVar3,(long)pcVar19,uVar26,(ulong)puVar14,
                              param_7,param_8);
          in_XMM1._8_8_ = extraout_XMM1_Qb_09;
          in_XMM1._0_8_ = extraout_XMM1_Qa_17;
          in_XMM0._8_8_ = extraout_XMM0_Qb_09;
          in_XMM0._0_8_ = extraout_XMM0_Qa_18;
          puVar12 = puVar12 + 1;
          uVar16 = uVar16 + 1;
          lVar20 = lVar20 + 8;
          param_5 = extraout_RDX_20;
        } while (lVar8 != lVar20);
      }
      uVar11 = uVar11 + 1;
    } while ((long)uVar11 < (long)*(int *)(param_3 + 0x38));
  }
  if (iVar24 != 0) {
    uVar11 = 0;
    do {
      uVar16 = *(uint *)(*(long *)(param_4 + uVar11 * 8) + 0x1c);
      if ((int)uVar16 < 1) {
        puVar9[-2] = 0x503e5f;
        puVar9[-1] = 0;
        bug(in_XMM0._0_8_,in_XMM1._0_8_,param_1,in_XMM3._0_8_,in_XMM4._0_8_,param_2,in_XMM6._0_8_,
            in_XMM7._0_8_,"clone 3 %d",(ulong)uVar16,param_5,puVar14,param_7,param_8,(char)*puVar9);
        in_XMM1._8_8_ = extraout_XMM1_Qb_10;
        in_XMM1._0_8_ = extraout_XMM1_Qa_21;
        in_XMM0._8_8_ = extraout_XMM0_Qb_10;
        in_XMM0._0_8_ = extraout_XMM0_Qa_21;
        param_5 = extraout_RDX_23;
      }
      uVar11 = uVar11 + 1;
    } while (uVar17 != uVar11);
  }
  return;
}


