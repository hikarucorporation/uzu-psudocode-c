// Function : vu_getrect
// Namespace: 
// Entry    : 005b0db0
// Prototype: undefined vu_getrect(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long param_10, int * param_11, int * param_12, int * param_13, int * param_14)
// Body     : 005b0db0 - 005b0e31


void vu_getrect(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9,long param_10,int *param_11,int *param_12,int *param_13,int *param_14)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined8 extraout_RDX;
  int *piVar4;
  int *piVar5;
  undefined8 extraout_XMM0_Qa;
  
  iVar1 = *(int *)(*(long *)(param_9 + 0x30) + 0xec);
  piVar3 = param_12;
  piVar4 = param_13;
  piVar5 = param_14;
  iVar2 = text_xpix(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10
                    ,param_11,param_12,(char *)param_13,param_14);
  *param_11 = iVar2 - iVar1;
  iVar2 = text_ypix(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9
                    ,param_10,extraout_RDX,piVar3,(char *)piVar4,piVar5);
  *param_12 = iVar2 + iVar1 * -2;
  *param_13 = iVar1 * 2 + *param_11 + *(int *)(param_9 + 0x44);
  *param_14 = iVar1 * 4 + *param_12 + *(int *)(param_9 + 0x40);
  return;
}


