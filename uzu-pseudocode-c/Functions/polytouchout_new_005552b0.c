// Function : polytouchout_new
// Namespace: 
// Entry    : 005552b0
// Prototype: long * polytouchout_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 005552b0 - 0055531b


long * polytouchout_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                       undefined8 param_9,undefined8 param_10,undefined8 param_11,
                       undefined8 param_12,char *param_13,undefined8 param_14)

{
  uint uVar1;
  long *plVar2;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_XMM0_Qa;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float local_28;
  
  plVar2 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,polytouchout_class
                  ,param_10,param_11,param_12,param_13,param_14);
  uVar4 = DAT_005d9038;
  local_28 = (float)param_1;
  uVar3 = (uint)local_28 & -(uint)(0.0 < local_28);
  uVar5 = 0;
  uVar6 = 0;
  uVar1 = ~-(uint)(0.0 < local_28) & DAT_005d9038 | uVar3;
  *(uint *)(plVar2 + 6) = uVar1;
  *(undefined4 *)((long)plVar2 + 0x34) = 0;
  floatinlet_new((ulong)uVar1,(ulong)uVar4,(ulong)uVar3,param_4,param_5,param_6,param_7,param_8,
                 (long)plVar2,(long)plVar2 + 0x34,extraout_RDX,param_12,param_13,param_14);
  floatinlet_new(extraout_XMM0_Qa,CONCAT44(uVar6,uVar4),CONCAT44(uVar5,uVar3),param_4,param_5,
                 param_6,param_7,param_8,(long)plVar2,(long)(plVar2 + 6),extraout_RDX_00,param_12,
                 param_13,param_14);
  return plVar2;
}


