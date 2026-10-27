// Function : binop1_pow_bang
// Namespace: 
// Entry    : 005786d0
// Prototype: undefined binop1_pow_bang(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 005786d0 - 00578728


void binop1_pow_bang(undefined8 param_1,ulong param_2,undefined8 param_3,ulong param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    long param_9)

{
  float fVar1;
  undefined4 extraout_XMM0_Db;
  float __y;
  undefined4 uVar2;
  float fVar3;
  ulong uVar4;
  
  fVar1 = *(float *)(param_9 + 0x30);
  if ((fVar1 == 0.0) && (*(float *)(param_9 + 0x34) <= 0.0 && *(float *)(param_9 + 0x34) != 0.0)) {
LAB_00578707:
    outlet_float(0,param_2,0,param_4,param_5,param_6,param_7,param_8,*(long **)(param_9 + 0x18));
    return;
  }
  __y = *(float *)(param_9 + 0x34);
  uVar2 = 0;
  param_2 = (ulong)(uint)__y;
  uVar4 = param_4;
  if (fVar1 < 0.0) {
    fVar3 = __y - (float)(int)__y;
    uVar4 = (ulong)(uint)fVar3;
    param_4 = (ulong)(uint)fVar3;
    if (fVar3 != 0.0) goto LAB_00578707;
  }
  fVar1 = powf(fVar1,__y);
  outlet_float(CONCAT44(extraout_XMM0_Db,fVar1),CONCAT44(uVar2,__y),CONCAT44(extraout_XMM0_Db,fVar1)
               ,uVar4,param_5,param_6,param_7,param_8,*(long **)(param_9 + 0x18));
  return;
}


