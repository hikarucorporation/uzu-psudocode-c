// Function : template_notifyforscalar
// Namespace: 
// Entry    : 005212b0
// Prototype: undefined template_notifyforscalar(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, double param_5, double param_6, double param_7, undefined8 param_8, long param_9, uint * param_10, undefined8 param_11, uint * param_12, undefined8 param_13, uint * param_14)
// Body     : 005212b0 - 0052132b


void template_notifyforscalar
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               double param_5,double param_6,double param_7,undefined8 param_8,long param_9,
               uint *param_10,undefined8 param_11,uint *param_12,uint *param_13,uint *param_14)

{
  uint *puVar1;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  uint uVar2;
  uint *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 extraout_XMM0_Qa;
  undefined8 local_48 [3];
  
  uVar2 = (uint)param_13;
  puVar1 = param_12;
  puVar3 = param_14;
  uVar4 = gpointer_init(local_48);
  uVar5 = gpointer_setglist(uVar4,param_2,param_3,param_4,param_5,param_6,param_7,param_8,local_48,
                            (long)param_10,param_11,puVar1,(char *)param_13,puVar3);
  *param_14 = 3;
  *(undefined8 **)(param_14 + 2) = local_48;
  uVar4 = extraout_RDX;
  if (*(long *)(param_9 + 8) != 0) {
    outlet_anything(uVar5,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                    *(long **)(*(long *)(param_9 + 8) + 0x18),(undefined8 *)param_12,uVar2,
                    (int *)param_14,param_13,puVar3);
    puVar1 = param_14;
    uVar4 = extraout_RDX_00;
    param_10 = param_12;
    uVar5 = extraout_XMM0_Qa;
  }
  gpointer_unset(uVar5,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)local_48,
                 param_10,uVar4,puVar1,(char *)param_13,puVar3);
  return;
}


