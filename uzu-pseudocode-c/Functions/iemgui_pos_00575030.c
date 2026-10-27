// Function : iemgui_pos
// Namespace: 
// Entry    : 00575030
// Prototype: undefined iemgui_pos(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00575030 - 005750d9


void iemgui_pos(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9,long param_10,undefined8 param_11,undefined8 param_12,char *param_13,
               undefined8 param_14)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  char *pcVar5;
  float fVar6;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined8 uVar7;
  
  iVar3 = (int)param_12;
  pcVar5 = param_13;
  glist_getzoom(*(long *)(param_10 + 0x30));
  fVar6 = (float)atom_getfloatarg(0,iVar3,(long)param_13);
  *(short *)(param_10 + 0x28) = (short)(int)fVar6;
  fVar6 = (float)atom_getfloatarg(1,iVar3,(long)param_13);
  *(short *)(param_10 + 0x2a) = (short)(int)fVar6;
  uVar2 = glist_isvisible(*(long *)(param_10 + 0x30));
  if (uVar2 == 0) {
    return;
  }
  iVar3 = text_xpix(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                    param_6,param_7,param_8,param_10,*(long *)(param_10 + 0x30),extraout_RDX,
                    param_12,pcVar5,param_14);
  iVar4 = text_ypix(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,
                    param_5,param_6,param_7,param_8,param_10,*(long *)(param_10 + 0x30),
                    extraout_RDX_00,param_12,pcVar5,param_14);
  uVar7 = (**(code **)(param_10 + 0x38))(param_9,*(undefined8 *)(param_10 + 0x30),1);
  piVar1 = *(int **)(param_10 + 0x48);
  *piVar1 = iVar3;
  piVar1[1] = iVar4;
  canvas_fixlinesfor(uVar7,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                     *(long *)(param_10 + 0x30),param_9);
  return;
}


