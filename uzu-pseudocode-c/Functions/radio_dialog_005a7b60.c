// Function : radio_dialog
// Namespace: 
// Entry    : 005a7b60
// Prototype: undefined radio_dialog(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, double param_5, double param_6, double param_7, undefined8 param_8, long * param_9, undefined8 param_10, uint param_11, undefined8 * param_12, undefined8 param_13, undefined8 param_14)
// Body     : 005a7b60 - 005a7d42


void radio_dialog(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 double param_5,double param_6,double param_7,undefined8 param_8,long *param_9,
                 undefined8 param_10,uint param_11,undefined8 *param_12,undefined8 param_13,
                 undefined8 param_14)

{
  long *plVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  undefined7 extraout_var;
  undefined8 *puVar6;
  uint *puVar7;
  ulong uVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined8 uVar13;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  uint local_168 [4];
  undefined4 local_158;
  undefined4 local_150;
  undefined4 local_148;
  undefined4 local_140;
  undefined4 local_138;
  undefined4 local_130;
  undefined4 local_128;
  float local_120;
  undefined4 local_108;
  float local_100;
  ulong local_48 [3];
  
  puVar6 = param_12;
  fVar10 = (float)atom_getfloatarg(0,param_11,(long)param_12);
  fVar11 = (float)atom_getfloatarg(4,param_11,(long)param_12);
  fVar12 = (float)atom_getfloatarg(6,param_11,(long)param_12);
  iVar9 = (int)fVar12;
  iemgui_setdialogatoms
            (CONCAT44(extraout_XMM0_Db,fVar12),param_2,param_3,param_4,param_5,param_6,param_7,
             param_8,(long)param_9,0x12,local_168,puVar6,param_13,param_14);
  local_158 = 1;
  local_150 = 0;
  local_148 = 1;
  local_140 = 0;
  local_138 = 1;
  local_130 = 0;
  local_128 = 1;
  if (*(int *)((long)param_9 + 0x4ac) == 0) {
    local_120 = DAT_005d9054;
  }
  else {
    local_120 = (float)(int)param_9[0x93];
  }
  local_108 = 1;
  local_100 = (float)*(int *)((long)param_9 + 0x49c);
  plVar1 = (long *)param_9[6];
  pcVar5 = (char *)gensym("dialog");
  puVar7 = local_168;
  uVar8 = (ulong)param_11;
  uVar13 = pd_undo_set_objectstate
                     (CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da),param_2,param_3,param_4,param_5
                      ,param_6,param_7,param_8,plVar1,(long)param_9,pcVar5,0x12,puVar7,uVar8,
                      param_12);
  *(uint *)(param_9 + 0x93) = (uint)((int)fVar11 != 0);
  iemgui_dialog(uVar13,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,local_48,
                param_11,(long)param_12,(char *)puVar7,uVar8);
  iVar3 = iemgui_clip_size((int)fVar10);
  uVar13 = CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_00);
  iVar3 = iVar3 * *(int *)(param_9[6] + 0xec);
  *(int *)((long)param_9 + 0x44) = iVar3;
  *(int *)(param_9 + 8) = iVar3;
  bVar2 = true;
  if (*(int *)((long)param_9 + 0x49c) != iVar9) {
    uVar4 = glist_isvisible(param_9[6]);
    uVar13 = CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_01);
    if (uVar4 != 0) {
      uVar13 = (*(code *)param_9[7])(param_9,param_9[6],4);
      bVar2 = false;
    }
  }
  *(int *)((long)param_9 + 0x49c) = iVar9;
  if (iVar9 <= (int)param_9[0x92]) {
    *(int *)(param_9 + 0x92) = iVar9 + -1;
    *(int *)((long)param_9 + 0x494) = iVar9 + -1;
  }
  if (!bVar2) {
    bVar2 = gobj_shouldvis(param_9,(long *)param_9[6]);
    uVar13 = CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_02);
    if ((int)CONCAT71(extraout_var,bVar2) != 0) {
      uVar13 = (*(code *)param_9[7])(param_9,param_9[6],2);
      canvas_fixlinesfor(uVar13,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9[6],
                         (long)param_9);
      return;
    }
  }
  iemgui_size(uVar13,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)param_9,
              (long)param_9);
  return;
}


