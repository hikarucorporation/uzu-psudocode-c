// Function : my_numbox_dialog
// Namespace: 
// Entry    : 005a54a0
// Prototype: undefined my_numbox_dialog(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, double param_5, double param_6, double param_7, undefined8 param_8, long * param_9, undefined8 param_10, uint param_11, undefined8 * param_12, undefined8 param_13, undefined8 param_14)
// Body     : 005a54a0 - 005a581d


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void my_numbox_dialog(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                     double param_5,double param_6,double param_7,undefined8 param_8,long *param_9,
                     undefined8 param_10,uint param_11,undefined8 *param_12,undefined8 param_13,
                     undefined8 param_14)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  char *pcVar5;
  undefined8 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  ulong uVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  double dVar19;
  double dVar20;
  undefined4 extraout_XMM0_Db;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar21;
  double dVar22;
  double dVar23;
  uint local_168 [2];
  float local_160;
  undefined4 local_148;
  float local_140;
  undefined4 local_138;
  float local_130;
  undefined4 local_128;
  float local_120;
  undefined4 local_108;
  float local_100;
  ulong local_48 [3];
  
  puVar6 = param_12;
  fVar13 = (float)atom_getfloatarg(0,param_11,(long)param_12);
  fVar14 = (float)atom_getfloatarg(1,param_11,(long)param_12);
  fVar15 = (float)atom_getfloatarg(2,param_11,(long)param_12);
  dVar19 = (double)fVar15;
  fVar16 = (float)atom_getfloatarg(3,param_11,(long)param_12);
  dVar20 = (double)fVar16;
  fVar17 = (float)atom_getfloatarg(4,param_11,(long)param_12);
  fVar18 = (float)atom_getfloatarg(6,param_11,(long)param_12);
  iemgui_setdialogatoms
            (CONCAT44(extraout_XMM0_Db,fVar18),param_2,param_3,param_4,param_5,param_6,param_7,
             param_8,(long)param_9,0x12,local_168,puVar6,param_13,param_14);
  local_168[0] = 1;
  local_160 = (float)*(int *)((long)param_9 + 0x4e4);
  local_148 = 1;
  local_140 = (float)(double)param_9[0x95];
  local_138 = 1;
  local_130 = (float)(double)param_9[0x96];
  local_128 = 1;
  local_120 = (float)(int)param_9[0x98];
  local_108 = 1;
  local_100 = (float)(int)param_9[0x9d];
  plVar2 = (long *)param_9[6];
  pcVar5 = (char *)gensym("dialog");
  puVar10 = local_168;
  uVar11 = (ulong)param_11;
  uVar21 = pd_undo_set_objectstate
                     (extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                      plVar2,(long)param_9,pcVar5,0x12,puVar10,uVar11,param_12);
  *(uint *)(param_9 + 0x98) = (uint)((int)fVar17 != 0);
  iemgui_dialog(uVar21,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,local_48,
                param_11,(long)param_12,(char *)puVar10,uVar11);
  iVar12 = 1;
  if (0 < (int)fVar13) {
    iVar12 = (int)fVar13;
  }
  *(int *)((long)param_9 + 0x4e4) = iVar12;
  iVar7 = 8;
  if (8 < (int)fVar14) {
    iVar7 = (int)fVar14;
  }
  lVar3 = param_9[6];
  iVar1 = *(int *)(lVar3 + 0xec);
  *(int *)(param_9 + 8) = iVar7 * iVar1;
  iVar8 = 10;
  if (10 < (int)fVar18) {
    iVar8 = (int)fVar18;
  }
  *(int *)(param_9 + 0x9d) = iVar8;
  iVar9 = 0x1f;
  if ((*(uint *)(param_9 + 0x88) & 0x3f) == 2) {
    iVar9 = 0x19;
  }
  iVar4 = 0x1b;
  if ((*(uint *)(param_9 + 0x88) & 0x3f) != 1) {
    iVar4 = iVar9;
  }
  *(int *)((long)param_9 + 0x44) =
       (((iVar7 * iVar1) / 2) / iVar1 + (iVar12 * *(int *)((long)param_9 + 0x444) * iVar4) / 0x24 +
       4) * iVar1;
  if ((int)param_9[0x98] == 0) {
    dVar22 = dVar20;
  }
  else {
    dVar22 = _DAT_005d9000;
    if (fVar16 != 0.0) {
      dVar22 = dVar20;
    }
    if (fVar15 != 0.0) {
      dVar22 = dVar20;
    }
    param_5 = dVar20;
    if (dVar22 <= 0.0) {
      param_4 = (ulong)(uint)fVar15;
      if (0.0 < fVar15) {
        dVar22 = DAT_00651f48 * dVar19;
        param_4 = (ulong)(uint)fVar15;
      }
    }
    else {
      param_4 = (ulong)(uint)fVar15;
      if (fVar15 <= 0.0) {
        dVar19 = DAT_00651f48 * dVar22;
        param_4 = (ulong)(uint)fVar15;
      }
    }
  }
  param_9[0x95] = (long)dVar19;
  param_9[0x96] = (long)dVar22;
  dVar20 = (double)*(float *)(param_9 + 0x94);
  if (dVar20 < dVar19) {
    *(float *)(param_9 + 0x94) = (float)dVar19;
    dVar20 = (double)(float)dVar19;
  }
  if (dVar20 <= dVar22) {
    dVar23 = _DAT_005d9000;
  }
  else {
    dVar20 = (double)(ulong)(uint)(float)dVar22;
    *(float *)(param_9 + 0x94) = (float)dVar22;
    dVar23 = _DAT_005d9000;
  }
  _DAT_005d9000 = dVar23;
  if ((int)param_9[0x98] != 0) {
    dVar22 = log(dVar22 / dVar19);
    dVar20 = (double)iVar8;
    dVar23 = exp(dVar22 / dVar20);
  }
  param_9[0x97] = (long)dVar23;
  uVar21 = (*(code *)param_9[7])(param_9,lVar3,0);
  iemgui_size(uVar21,dVar20,dVar19,param_4,param_5,param_6,param_7,param_8,(long)param_9,
              (long)param_9);
  return;
}


