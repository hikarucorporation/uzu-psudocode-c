// Function : trigger_anything
// Namespace: 
// Entry    : 0054e0f0
// Prototype: undefined trigger_anything(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, double param_5, double param_6, double param_7, undefined8 param_8, long param_9, undefined8 * param_10, undefined8 param_11, int * param_12, uint * param_13, uint * param_14)
// Body     : 0054e0f0 - 0054e192


void trigger_anything(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     double param_5,double param_6,double param_7,undefined8 param_8,long param_9,
                     undefined8 *param_10,undefined8 param_11,int *param_12,uint *param_13,
                     uint *param_14)

{
  int *piVar1;
  undefined8 extraout_RDX;
  undefined8 uVar2;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  uint uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  
  uVar4 = *(ulong *)(param_9 + 0x30);
  if ((int)uVar4 != 0) {
    piVar1 = (int *)((long)(int)uVar4 * 0x10);
    puVar5 = (undefined8 *)((long)piVar1 + *(long *)(param_9 + 0x38) + -8);
    uVar2 = param_11;
    do {
      uVar3 = (int)uVar4 - 1;
      uVar4 = (ulong)uVar3;
      if (*(int *)(puVar5 + -1) == 5) {
        piVar1 = param_12;
        outlet_anything(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                        (long *)*puVar5,param_10,(uint)param_11,param_12,param_13,param_14);
        uVar2 = extraout_RDX_01;
        param_1 = extraout_XMM0_Qa_00;
      }
      else if (*(int *)(puVar5 + -1) == 0) {
        outlet_bang(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long *)*puVar5)
        ;
        uVar2 = extraout_RDX_00;
        param_1 = extraout_XMM0_Qa;
      }
      else {
        param_1 = pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                           "trigger: generic messages can only be converted to \'b\' or \'a\'",uVar2
                           ,piVar1,(char *)param_13,param_14);
        uVar2 = extraout_RDX;
      }
      puVar5 = puVar5 + -2;
    } while (uVar3 != 0);
  }
  return;
}


