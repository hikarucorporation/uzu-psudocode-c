// Function : bicoeff_getrect
// Namespace: 
// Entry    : 00567f40
// Prototype: undefined bicoeff_getrect(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long param_10, int * param_11, int * param_12, uint * param_13, int * param_14)
// Body     : 00567f40 - 00567fb1


void bicoeff_getrect(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    long param_9,long param_10,int *param_11,int *param_12,uint *param_13,
                    int *param_14)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  uint *puVar4;
  int *piVar5;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  
  piVar3 = param_12;
  puVar4 = param_13;
  piVar5 = param_14;
  iVar1 = text_xpix(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10
                    ,param_11,param_12,(char *)param_13,param_14);
  *param_11 = iVar1;
  iVar1 = text_ypix(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9
                    ,param_10,extraout_RDX,piVar3,(char *)puVar4,piVar5);
  *param_12 = iVar1;
  iVar1 = text_xpix(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                    param_9,param_10,extraout_RDX_00,piVar3,(char *)puVar4,piVar5);
  uVar2 = *(int *)(param_9 + 0x40) * *(int *)(param_9 + 0x38) + iVar1;
  *param_13 = uVar2;
  iVar1 = text_ypix(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                    param_9,param_10,extraout_RDX_01,(ulong)uVar2,(char *)puVar4,piVar5);
  *param_14 = *(int *)(param_9 + 0x40) * *(int *)(param_9 + 0x3c) + iVar1;
  return;
}


