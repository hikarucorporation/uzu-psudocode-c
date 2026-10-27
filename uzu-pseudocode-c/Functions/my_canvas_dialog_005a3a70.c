// Function : my_canvas_dialog
// Namespace: 
// Entry    : 005a3a70
// Prototype: undefined my_canvas_dialog(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, double param_5, double param_6, double param_7, undefined8 param_8, long * param_9, undefined8 param_10, uint param_11, undefined8 * param_12, undefined8 param_13, undefined8 param_14)
// Body     : 005a3a70 - 005a3bea


void my_canvas_dialog(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     double param_5,double param_6,double param_7,undefined8 param_8,long *param_9,
                     undefined8 param_10,uint param_11,undefined8 *param_12,undefined8 param_13,
                     undefined8 param_14)

{
  long *plVar1;
  char *pcVar2;
  undefined8 *puVar3;
  int iVar4;
  uint *puVar5;
  ulong uVar6;
  int iVar7;
  float fVar8;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined8 uVar9;
  undefined4 extraout_XMM0_Db_01;
  uint local_168 [4];
  undefined4 local_158;
  undefined4 local_150;
  undefined4 local_148;
  float local_140;
  undefined4 local_138;
  float local_130;
  undefined4 local_118;
  undefined4 local_110;
  undefined4 local_78;
  undefined8 *local_70;
  ulong local_48 [3];
  
  puVar3 = param_12;
  fVar8 = (float)atom_getfloatarg(0,param_11,(long)param_12);
  iVar4 = (int)fVar8;
  fVar8 = (float)atom_getfloatarg(2,param_11,(long)param_12);
  iVar7 = (int)fVar8;
  fVar8 = (float)atom_getfloatarg(3,param_11,(long)param_12);
  iemgui_setdialogatoms
            (CONCAT44(extraout_XMM0_Db,fVar8),param_2,param_3,param_4,param_5,param_6,param_7,
             param_8,(long)param_9,0x12,local_168,puVar3,param_13,param_14);
  local_158 = 1;
  local_150 = 0;
  local_148 = 1;
  local_140 = (float)(int)param_9[0x98];
  local_138 = 1;
  local_130 = (float)*(int *)((long)param_9 + 0x4c4);
  local_118 = 1;
  local_110 = 0xbf800000;
  local_78 = 2;
  local_70 = gensym("none");
  plVar1 = (long *)param_9[6];
  pcVar2 = (char *)gensym("dialog");
  puVar5 = local_168;
  uVar6 = (ulong)param_11;
  uVar9 = pd_undo_set_objectstate
                    (CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                     param_6,param_7,param_8,plVar1,(long)param_9,pcVar2,0x12,puVar5,uVar6,param_12)
  ;
  iemgui_dialog(uVar9,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,local_48,
                param_11,(long)param_12,(char *)puVar5,uVar6);
  *(byte *)(param_9 + 0x89) = *(byte *)(param_9 + 0x89) & 0xfe;
  if (iVar4 < 1) {
    iVar4 = 1;
  }
  iVar4 = iVar4 * *(int *)(param_9[6] + 0xec);
  *(int *)((long)param_9 + 0x44) = iVar4;
  *(int *)(param_9 + 8) = iVar4;
  if (iVar7 < 1) {
    iVar7 = 1;
  }
  *(int *)(param_9 + 0x98) = iVar7;
  iVar4 = 1;
  if (0 < (int)fVar8) {
    iVar4 = (int)fVar8;
  }
  *(int *)((long)param_9 + 0x4c4) = iVar4;
  iemgui_size(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_00),param_2,param_3,param_4,param_5,
              param_6,param_7,param_8,(long)param_9,(long)param_9);
  return;
}


