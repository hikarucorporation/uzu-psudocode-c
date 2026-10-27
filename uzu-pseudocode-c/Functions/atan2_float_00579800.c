// Function : atan2_float
// Namespace: 
// Entry    : 00579800
// Prototype: undefined atan2_float(float param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 00579800 - 00579835


void atan2_float(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                long param_9)

{
  long *plVar1;
  undefined4 extraout_XMM0_Db;
  float __x;
  undefined4 uVar2;
  float fVar3;
  undefined4 uVar4;
  
  *(float *)(param_9 + 0x30) = param_1;
  plVar1 = *(long **)(param_9 + 0x18);
  fVar3 = 0.0;
  uVar4 = 0;
  __x = *(float *)(param_9 + 0x34);
  uVar2 = 0;
  if (param_1 != 0.0 || __x != 0.0) {
    fVar3 = atan2f(param_1,__x);
    uVar4 = extraout_XMM0_Db;
  }
  outlet_float(CONCAT44(uVar4,fVar3),CONCAT44(uVar2,__x),CONCAT44(uVar4,fVar3),param_4,param_5,
               param_6,param_7,param_8,plVar1);
  return;
}


