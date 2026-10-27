// Function : touchout_new
// Namespace: 
// Entry    : 00555220
// Prototype: long * touchout_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00555220 - 00555271


long * touchout_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                   char *param_13,undefined8 param_14)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  undefined8 extraout_RDX;
  uint uVar4;
  float local_18;
  
  plVar3 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,touchout_class,
                  param_10,param_11,param_12,param_13,param_14);
  uVar2 = DAT_005d9038;
  local_18 = (float)param_1;
  uVar4 = (uint)local_18 & -(uint)(0.0 < local_18);
  uVar1 = ~-(uint)(0.0 < local_18) & DAT_005d9038 | uVar4;
  *(uint *)(plVar3 + 6) = uVar1;
  floatinlet_new((ulong)uVar1,(ulong)uVar2,(ulong)uVar4,param_4,param_5,param_6,param_7,param_8,
                 (long)plVar3,(long)(plVar3 + 6),extraout_RDX,param_12,param_13,param_14);
  return plVar3;
}


