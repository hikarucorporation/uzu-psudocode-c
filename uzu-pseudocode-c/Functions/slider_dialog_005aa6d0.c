// Function : slider_dialog
// Namespace: 
// Entry    : 005aa6d0
// Prototype: undefined slider_dialog(undefined8 param_1, undefined8 param_2, undefined8 param_3, double param_4, double param_5, double param_6, undefined8 param_7, long * param_8, undefined8 param_9, uint param_10, undefined8 * param_11, undefined8 param_12, undefined8 param_13)
// Body     : 005aa6d0 - 005aac9c


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void slider_dialog(undefined8 param_1,undefined8 param_2,undefined8 param_3,double param_4,
                  double param_5,double param_6,undefined8 param_7,long *param_8,undefined8 param_9,
                  uint param_10,undefined8 *param_11,undefined8 param_12,undefined8 param_13)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined8 *puVar7;
  int iVar8;
  uint *puVar9;
  ulong uVar10;
  int iVar11;
  bool bVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  double dVar18;
  double dVar19;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  double dVar20;
  undefined1 extraout_var [12];
  undefined1 auVar21 [16];
  undefined8 extraout_XMM1_Qa;
  undefined8 uVar22;
  undefined8 extraout_XMM1_Qa_00;
  undefined1 in_XMM3 [16];
  ulong local_178 [4];
  uint local_158 [8];
  undefined4 local_138;
  float local_130;
  undefined4 local_128;
  float local_120;
  undefined4 local_118;
  float local_110;
  undefined4 local_48;
  float local_40;
  
  puVar7 = param_11;
  fVar13 = (float)atom_getfloatarg(0,param_10,(long)param_11);
  fVar14 = (float)atom_getfloatarg(1,param_10,(long)param_11);
  fVar15 = (float)atom_getfloatarg(2,param_10,(long)param_11);
  dVar18 = (double)fVar15;
  fVar16 = (float)atom_getfloatarg(3,param_10,(long)param_11);
  dVar19 = (double)fVar16;
  fVar17 = (float)atom_getfloatarg(4,param_10,(long)param_11);
  auVar21._0_4_ = (float)atom_getfloatarg(0x11,param_10,(long)param_11);
  auVar21._4_12_ = extraout_var;
  bVar12 = *(int *)((long)param_8 + 0x4bc) == 0;
  iVar8 = *(int *)(param_8[6] + 0xec);
  if (bVar12) {
    iVar8 = 1;
  }
  iVar11 = 1;
  if (bVar12) {
    iVar11 = *(int *)(param_8[6] + 0xec);
  }
  iVar8 = iVar8 * (int)fVar14;
  iVar11 = iVar11 * (int)fVar13;
  iemgui_setdialogatoms
            (auVar21._0_8_,param_2,param_3,in_XMM3._0_8_,param_4,param_5,param_6,param_7,
             (long)param_8,0x12,local_158,puVar7,param_12,param_13);
  local_138 = 1;
  local_130 = (float)(double)param_8[0x94];
  local_128 = 1;
  local_120 = (float)(double)param_8[0x95];
  local_118 = 1;
  local_110 = (float)(int)param_8[0x93];
  local_48 = 1;
  local_40 = (float)*(int *)((long)param_8 + 0x49c);
  plVar1 = (long *)param_8[6];
  uVar22 = extraout_XMM1_Qa;
  pcVar6 = (char *)gensym("dialog");
  puVar9 = local_158;
  uVar10 = (ulong)param_10;
  pd_undo_set_objectstate
            (extraout_XMM0_Qa,uVar22,param_3,in_XMM3._0_8_,param_4,param_5,param_6,param_7,plVar1,
             (long)param_8,pcVar6,0x12,puVar9,uVar10,param_11);
  *(uint *)(param_8 + 0x93) = (uint)((int)fVar17 != 0);
  *(uint *)((long)param_8 + 0x49c) = (uint)((int)auVar21._0_4_ != 0);
  iemgui_dialog(extraout_XMM0_Qa_00,extraout_XMM1_Qa_00,param_3,in_XMM3._0_8_,param_4,param_5,
                param_6,param_7,param_8,local_178,param_10,(long)param_11,(char *)puVar9,uVar10);
  if (*(int *)((long)param_8 + 0x4bc) == 0) {
    iVar5 = iemgui_clip_size(iVar8);
    lVar2 = param_8[6];
    iVar8 = *(int *)(lVar2 + 0xec);
    *(int *)(param_8 + 8) = iVar5 * iVar8;
    if (iVar11 < iVar8 * 2) {
      iVar11 = iVar8 * 2;
    }
    iVar5 = iVar11 * 100 + -100;
    if (iVar5 < *(int *)((long)param_8 + 0x494)) {
      *(int *)((long)param_8 + 0x494) = iVar5;
    }
    lVar3 = param_8[0x93];
    if ((int)lVar3 == 0) {
      dVar20 = (double)param_8[0x95] - (double)param_8[0x94];
    }
    else {
      dVar20 = log((double)param_8[0x95] / (double)param_8[0x94]);
    }
    auVar21 = ZEXT416((uint)fVar15);
    uVar10 = (ulong)(uint)fVar15;
    param_8[0x96] = (long)(dVar20 / (double)(iVar11 / iVar8 + -1));
    *(int *)((long)param_8 + 0x44) = iVar11;
    if ((int)lVar3 == 0) {
      param_8[0x94] = (long)dVar18;
      param_8[0x95] = (long)dVar19;
      dVar19 = dVar19 - dVar18;
    }
    else {
      dVar20 = _DAT_005d9000;
      if (fVar16 != 0.0) {
        dVar20 = dVar19;
      }
      if (fVar15 != 0.0) {
        dVar20 = dVar19;
      }
      if (dVar20 <= 0.0) {
        if (0.0 < fVar15) {
          dVar20 = DAT_00651f48 * dVar18;
        }
      }
      else if (fVar15 <= 0.0) {
        dVar18 = DAT_00651f48 * dVar20;
      }
      param_8[0x94] = (long)dVar18;
      param_8[0x95] = (long)dVar20;
      dVar19 = log(dVar20 / dVar18);
      uVar10 = auVar21._0_8_;
    }
    iVar8 = *(int *)(lVar2 + 0xec);
  }
  else {
    iVar5 = *(int *)(param_8[6] + 0xec);
    iVar4 = iVar5 * 2;
    if (iVar8 < iVar4) {
      iVar8 = iVar4;
    }
    iVar4 = iVar8 * 100 + -100;
    if (iVar4 < *(int *)((long)param_8 + 0x494)) {
      *(int *)((long)param_8 + 0x494) = iVar4;
    }
    if ((int)param_8[0x93] == 0) {
      dVar20 = (double)param_8[0x95] - (double)param_8[0x94];
    }
    else {
      dVar20 = log((double)param_8[0x95] / (double)param_8[0x94]);
    }
    param_8[0x96] = (long)(dVar20 / (double)(iVar8 / iVar5 + -1));
    *(int *)(param_8 + 8) = iVar8;
    iVar11 = iemgui_clip_size(iVar11);
    uVar10 = in_XMM3._0_8_;
    iVar8 = *(int *)(param_8[6] + 0xec);
    *(int *)((long)param_8 + 0x44) = iVar11 * iVar8;
    iVar11 = (int)param_8[8];
    if ((int)param_8[0x93] == 0) {
      param_8[0x94] = (long)dVar18;
      param_8[0x95] = (long)dVar19;
      dVar19 = dVar19 - dVar18;
    }
    else {
      dVar20 = _DAT_005d9000;
      if (fVar16 != 0.0) {
        dVar20 = dVar19;
      }
      if (fVar15 != 0.0) {
        dVar20 = dVar19;
      }
      auVar21 = ZEXT416((uint)fVar15);
      if (dVar20 <= 0.0) {
        if (0.0 < fVar15) {
          dVar20 = DAT_00651f48 * dVar18;
        }
      }
      else if (fVar15 <= 0.0) {
        dVar18 = DAT_00651f48 * dVar20;
      }
      param_8[0x94] = (long)dVar18;
      param_8[0x95] = (long)dVar20;
      dVar19 = log(dVar20 / dVar18);
      uVar10 = auVar21._0_8_;
    }
  }
  dVar18 = (double)((float)iVar11 / (float)iVar8 + DAT_005d9054);
  dVar19 = dVar19 / dVar18;
  param_8[0x96] = (long)dVar19;
  iemgui_size(dVar18,(ulong)(uint)(float)iVar8,dVar19,uVar10,param_4,param_5,param_6,param_7,
              (long)param_8,(long)param_8);
  fVar13 = *(float *)(param_8 + 0x97);
  fVar14 = 0.0;
  if (((uint)fVar13 & 0x7f800000) != 0x7f800000) {
    fVar14 = fVar13;
  }
  fVar15 = 0.0;
  if (((uint)fVar13 & 0x7f800000) != 0) {
    fVar15 = fVar14;
  }
  iVar8 = *(int *)((long)param_8 + 0x494);
  fVar13 = (float)(~-(uint)(fVar13 != 0.0) & (uint)fVar13 | (uint)fVar15 & -(uint)(fVar13 != 0.0));
  *(float *)(param_8 + 0x97) = fVar13;
  dVar19 = (double)param_8[0x94];
  dVar18 = (double)param_8[0x95];
  if (dVar19 <= dVar18) {
    if (dVar18 < (double)fVar13) {
      fVar13 = (float)dVar18;
    }
    if ((double)fVar13 < dVar19) {
      fVar13 = (float)dVar19;
    }
  }
  else {
    if (dVar19 < (double)fVar13) {
      fVar13 = (float)dVar19;
    }
    if ((double)fVar13 < dVar18) {
      fVar13 = (float)dVar18;
    }
  }
  if ((int)param_8[0x93] == 0) {
    dVar19 = (double)fVar13 - dVar19;
  }
  else {
    dVar19 = log((double)fVar13 / dVar19);
  }
  iVar5 = (int)((dVar19 * DAT_005d90a0) / (double)param_8[0x96] + _DAT_0065e808);
  iVar11 = 0;
  if (-1 < iVar5) {
    iVar11 = iVar5;
  }
  *(int *)((long)param_8 + 0x494) = iVar11;
  *(int *)(param_8 + 0x92) = iVar11;
  if (iVar11 != iVar8) {
    (*(code *)param_8[7])(param_8,param_8[6],0);
  }
  return;
}


