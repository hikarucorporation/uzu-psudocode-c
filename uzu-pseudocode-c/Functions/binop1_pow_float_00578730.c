// Function : binop1_pow_float
// Namespace: 
// Entry    : 00578730
// Prototype: undefined binop1_pow_float(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 00578730 - 00578787


void binop1_pow_float(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                     ulong param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                     long param_9)

{
  float fVar1;
  undefined4 extraout_XMM0_Db;
  float __y;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  ulong uVar5;
  
  fVar1 = (float)param_1;
  *(float *)(param_9 + 0x30) = fVar1;
  __y = *(float *)(param_9 + 0x34);
  uVar2 = 0;
  if (fVar1 == 0.0) {
    fVar3 = 0.0;
    param_4 = 0;
    if (__y < 0.0) goto LAB_00578751;
  }
  uVar5 = param_5;
  if (fVar1 < 0.0) {
    fVar3 = (float)(int)__y;
    param_4 = (ulong)(uint)fVar3;
    fVar4 = __y - fVar3;
    uVar5 = (ulong)(uint)fVar4;
    param_5 = (ulong)(uint)fVar4;
    if (fVar4 != 0.0) {
LAB_00578751:
      outlet_float(0,(ulong)(uint)__y,param_1,(ulong)(uint)fVar3,param_5,param_6,param_7,param_8,
                   *(long **)(param_9 + 0x18));
      return;
    }
  }
  fVar1 = powf(fVar1,__y);
  outlet_float(CONCAT44(extraout_XMM0_Db,fVar1),CONCAT44(uVar2,__y),param_1,param_4,uVar5,param_6,
               param_7,param_8,*(long **)(param_9 + 0x18));
  return;
}


