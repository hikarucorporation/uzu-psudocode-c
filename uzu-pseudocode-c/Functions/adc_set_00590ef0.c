// Function : adc_set
// Namespace: 
// Entry    : 00590ef0
// Prototype: undefined adc_set(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, long param_8, undefined8 param_9, uint param_10, long param_11)
// Body     : 00590ef0 - 005910c3


/* WARNING: Removing unreachable block (ram,0x005910bf) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void adc_set(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,undefined8 param_9
            ,uint param_10,long param_11)

{
  int *piVar1;
  int iVar2;
  undefined1 auVar3 [16];
  void *pvVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  int iVar11;
  float fVar12;
  undefined8 extraout_XMM0_Qa;
  undefined1 in_XMM0 [16];
  undefined1 extraout_var [12];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 extraout_var_00 [12];
  int iVar15;
  int iVar17;
  int iVar18;
  int iVar19;
  undefined1 auVar16 [16];
  undefined1 auVar20 [16];
  int iVar21;
  int iVar23;
  int iVar24;
  int iVar25;
  undefined1 auVar22 [16];
  undefined1 auVar26 [16];
  
  auVar14._0_8_ = in_XMM0._0_8_;
  if (*(int *)(param_8 + 0x40) == 0) {
    if (0 < (int)param_10) {
      uVar7 = 0;
      do {
        auVar14._0_8_ = in_XMM0._0_8_;
        if ((long)*(int *)(param_8 + 0x30) <= (long)uVar7) break;
        in_XMM0._0_4_ = (float)atom_getfloatarg((int)uVar7,param_10,param_11);
        in_XMM0._4_12_ = extraout_var_00;
        auVar14._0_8_ = in_XMM0._0_8_;
        *(int *)(*(long *)(param_8 + 0x38) + uVar7 * 4) = (int)in_XMM0._0_4_;
        uVar7 = uVar7 + 1;
      } while (param_10 != uVar7);
    }
    goto LAB_00591063;
  }
  uVar7 = 0;
  fVar12 = (float)atom_getfloatarg(0,param_10,param_11);
  auVar13._0_4_ = (float)atom_getfloatarg(1,param_10,param_11);
  auVar13._4_12_ = extraout_var;
  uVar9 = 2;
  if (0 < (int)fVar12) {
    uVar9 = (ulong)(uint)(int)fVar12;
  }
  auVar22._0_8_ = param_5;
  auVar26._0_8_ = param_6;
  pvVar4 = resizebytes(auVar13._0_8_,param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                       *(void **)(param_8 + 0x38),(long)*(int *)(param_8 + 0x30) << 2,uVar9 * 4);
  *(void **)(param_8 + 0x38) = pvVar4;
  auVar3 = _DAT_0065d590;
  auVar20 = _DAT_0065d580;
  iVar11 = 1;
  if (0 < (int)auVar13._0_4_) {
    iVar11 = (int)auVar13._0_4_;
  }
  uVar8 = (uint)uVar9;
  param_6 = auVar26._0_8_;
  param_5 = auVar22._0_8_;
  auVar14._0_8_ = extraout_XMM0_Qa;
  if (uVar8 < 8) goto LAB_00591050;
  uVar7 = (ulong)(uVar8 & 0xfffffff8);
  auVar14._0_8_ = CONCAT44(iVar11,iVar11);
  uVar5 = (uVar7 - 8 >> 3) + 1;
  if (uVar7 - 8 == 0) {
    lVar6 = 0;
    auVar16 = juce::jpeglibNamespace::jpeg_zigzag_order2;
LAB_0059101e:
    param_1 = auVar16._0_8_;
    auVar14._0_8_ = CONCAT44(iVar11 + auVar16._4_4_,iVar11 + auVar16._0_4_);
    auVar14._8_4_ = iVar11 + auVar16._8_4_;
    auVar14._12_4_ = iVar11 + auVar16._12_4_;
    iVar2 = iVar11 + 4;
    auVar20._0_8_ = CONCAT44(iVar2 + auVar16._4_4_,iVar2 + auVar16._0_4_);
    auVar20._8_4_ = iVar2 + auVar16._8_4_;
    auVar20._12_4_ = iVar2 + auVar16._12_4_;
    *(undefined1 (*) [16])((long)pvVar4 + lVar6 * 4) = auVar14;
    *(undefined1 (*) [16])((long)pvVar4 + lVar6 * 4 + 0x10) = auVar20;
    param_2 = auVar20._0_8_;
    param_5 = auVar22._0_8_;
    param_6 = auVar26._0_8_;
  }
  else {
    uVar10 = uVar5 & 0xfffffffffffffffe;
    iVar2 = iVar11 + 4;
    param_2 = CONCAT44(iVar2,iVar2);
    lVar6 = 0;
    param_3 = (undefined8)DAT_0065d580;
    param_4 = (undefined8)DAT_0065d590;
    auVar16 = juce::jpeglibNamespace::jpeg_zigzag_order2;
    do {
      iVar15 = auVar16._0_4_;
      iVar17 = auVar16._4_4_;
      iVar18 = auVar16._8_4_;
      iVar19 = auVar16._12_4_;
      piVar1 = (int *)((long)pvVar4 + lVar6 * 4);
      *piVar1 = iVar11 + iVar15;
      piVar1[1] = iVar11 + iVar17;
      piVar1[2] = iVar11 + iVar18;
      piVar1[3] = iVar11 + iVar19;
      piVar1 = (int *)((long)pvVar4 + lVar6 * 4 + 0x10);
      *piVar1 = iVar2 + iVar15;
      piVar1[1] = iVar2 + iVar17;
      piVar1[2] = iVar2 + iVar18;
      piVar1[3] = iVar2 + iVar19;
      iVar21 = iVar15 + auVar20._0_4_;
      iVar23 = iVar17 + auVar20._4_4_;
      iVar24 = iVar18 + auVar20._8_4_;
      iVar25 = iVar19 + auVar20._12_4_;
      auVar26._0_8_ = CONCAT44(iVar11 + iVar23,iVar11 + iVar21);
      auVar26._8_4_ = iVar11 + iVar24;
      auVar26._12_4_ = iVar11 + iVar25;
      auVar22._0_8_ = CONCAT44(iVar23 + iVar2,iVar21 + iVar2);
      auVar22._8_4_ = iVar24 + iVar2;
      auVar22._12_4_ = iVar25 + iVar2;
      *(undefined1 (*) [16])((long)pvVar4 + lVar6 * 4 + 0x20) = auVar26;
      *(undefined1 (*) [16])((long)pvVar4 + lVar6 * 4 + 0x30) = auVar22;
      lVar6 = lVar6 + 0x10;
      auVar16._0_8_ = CONCAT44(iVar17 + auVar3._4_4_,iVar15 + auVar3._0_4_);
      auVar16._8_4_ = iVar18 + auVar3._8_4_;
      auVar16._12_4_ = iVar19 + auVar3._12_4_;
      uVar10 = uVar10 - 2;
    } while (uVar10 != 0);
    param_1 = auVar16._0_8_;
    param_5 = auVar22._0_8_;
    param_6 = auVar26._0_8_;
    if ((uVar5 & 1) != 0) goto LAB_0059101e;
  }
  for (; uVar7 != uVar9; uVar7 = uVar7 + 1) {
LAB_00591050:
    *(int *)((long)pvVar4 + uVar7 * 4) = iVar11 + (int)uVar7;
  }
  *(uint *)(param_8 + 0x30) = uVar8;
LAB_00591063:
  canvas_update_dsp(auVar14._0_8_,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}


