// Function : bng_dialog
// Namespace: 
// Entry    : 005a2510
// Prototype: undefined bng_dialog(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, double param_5, double param_6, double param_7, undefined8 param_8, long * param_9, undefined8 param_10, uint param_11, undefined8 * param_12, undefined8 param_13, undefined8 param_14)
// Body     : 005a2510 - 005a2662


void bng_dialog(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               double param_5,double param_6,double param_7,undefined8 param_8,long *param_9,
               undefined8 param_10,uint param_11,undefined8 *param_12,undefined8 param_13,
               undefined8 param_14)

{
  long *plVar1;
  int iVar2;
  char *pcVar3;
  undefined8 *puVar4;
  uint *puVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined8 uVar11;
  undefined4 extraout_XMM0_Db_01;
  ulong local_178 [4];
  uint local_158 [4];
  undefined4 local_148;
  undefined4 local_140;
  undefined4 local_138;
  float local_130;
  undefined4 local_128;
  float local_120;
  
  puVar4 = param_12;
  fVar9 = (float)atom_getfloatarg(0,param_11,(long)param_12);
  fVar10 = (float)atom_getfloatarg(2,param_11,(long)param_12);
  iVar8 = (int)fVar10;
  fVar10 = (float)atom_getfloatarg(3,param_11,(long)param_12);
  iVar7 = (int)fVar10;
  iemgui_setdialogatoms
            (CONCAT44(extraout_XMM0_Db,fVar10),param_2,param_3,param_4,param_5,param_6,param_7,
             param_8,(long)param_9,0x12,local_158,puVar4,param_13,param_14);
  local_148 = 1;
  local_140 = 0;
  local_138 = 1;
  local_130 = (float)*(int *)((long)param_9 + 0x494);
  local_128 = 1;
  local_120 = (float)(int)param_9[0x93];
  plVar1 = (long *)param_9[6];
  pcVar3 = (char *)gensym("dialog");
  puVar5 = local_158;
  uVar6 = (ulong)param_11;
  uVar11 = pd_undo_set_objectstate
                     (CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da),param_2,param_3,param_4,param_5
                      ,param_6,param_7,param_8,plVar1,(long)param_9,pcVar3,0x12,puVar5,uVar6,
                      param_12);
  iemgui_dialog(uVar11,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,local_178,
                param_11,(long)param_12,(char *)puVar5,uVar6);
  iVar2 = iemgui_clip_size((int)fVar9);
  iVar2 = iVar2 * *(int *)(param_9[6] + 0xec);
  *(int *)((long)param_9 + 0x44) = iVar2;
  *(int *)(param_9 + 8) = iVar2;
  iVar2 = iVar7;
  if (iVar8 < iVar7) {
    iVar2 = iVar8;
    iVar8 = iVar7;
  }
  iVar7 = 10;
  if (10 < iVar2) {
    iVar7 = iVar2;
  }
  iVar2 = 0x32;
  if (0x32 < iVar8) {
    iVar2 = iVar8;
  }
  *(int *)((long)param_9 + 0x494) = iVar7;
  *(int *)(param_9 + 0x93) = iVar2;
  iemgui_size(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_00),param_2,param_3,param_4,param_5,
              param_6,param_7,param_8,(long)param_9,(long)param_9);
  return;
}


