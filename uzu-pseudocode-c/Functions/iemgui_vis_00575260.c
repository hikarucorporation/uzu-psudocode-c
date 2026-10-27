// Function : iemgui_vis
// Namespace: 
// Entry    : 00575260
// Prototype: undefined iemgui_vis(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long param_10, int param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00575260 - 005752b4


void iemgui_vis(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9,long param_10,int param_11,undefined8 param_12,char *param_13,
               undefined8 param_14)

{
  int *piVar1;
  int iVar2;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 uVar3;
  undefined8 extraout_RDX_01;
  undefined8 uVar4;
  undefined8 extraout_XMM0_Qa;
  
  (**(code **)(param_9 + 0x38))(param_9,param_10,4);
  if (param_11 == 0) {
    uVar4 = sys_unqueuegui(param_9);
    uVar3 = extraout_RDX_00;
  }
  else {
    uVar4 = (**(code **)(param_9 + 0x38))(param_9,param_10,2);
    uVar3 = extraout_RDX;
  }
  iVar2 = text_xpix(uVar4,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                    uVar3,param_12,param_13,param_14);
  piVar1 = *(int **)(param_9 + 0x48);
  *piVar1 = iVar2;
  iVar2 = text_ypix(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9
                    ,param_10,extraout_RDX_01,piVar1,param_13,param_14);
  *(int *)(*(long *)(param_9 + 0x48) + 4) = iVar2;
  return;
}


