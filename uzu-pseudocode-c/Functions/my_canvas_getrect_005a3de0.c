// Function : my_canvas_getrect
// Namespace: 
// Entry    : 005a3de0
// Prototype: undefined my_canvas_getrect(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long param_10, int * param_11, int * param_12, int * param_13, int * param_14)
// Body     : 005a3de0 - 005a3e37


void my_canvas_getrect(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                      long param_9,long param_10,int *param_11,int *param_12,int *param_13,
                      int *param_14)

{
  int iVar1;
  int *piVar2;
  undefined8 extraout_RDX;
  int *piVar3;
  int *piVar4;
  undefined8 extraout_XMM0_Qa;
  
  piVar2 = param_12;
  piVar3 = param_13;
  piVar4 = param_14;
  iVar1 = text_xpix(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10
                    ,param_11,param_12,(char *)param_13,param_14);
  *param_11 = iVar1;
  iVar1 = text_ypix(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9
                    ,param_10,extraout_RDX,piVar2,(char *)piVar3,piVar4);
  *param_12 = iVar1;
  *param_13 = *(int *)(param_9 + 0x44) + *param_11;
  *param_14 = *(int *)(param_9 + 0x40) + *param_12;
  return;
}


