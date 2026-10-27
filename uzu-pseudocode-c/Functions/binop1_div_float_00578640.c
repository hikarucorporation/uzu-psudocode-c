// Function : binop1_div_float
// Namespace: 
// Entry    : 00578640
// Prototype: undefined binop1_div_float(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 00578640 - 00578667


void binop1_div_float(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                     long param_9)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  
  *(float *)(param_9 + 0x30) = (float)param_1;
  fVar1 = *(float *)(param_9 + 0x34);
  fVar2 = 0.0;
  uVar3 = 0;
  if (fVar1 != 0.0) {
    fVar2 = (float)param_1 / fVar1;
    uVar3 = (int)((ulong)param_1 >> 0x20);
  }
  outlet_float(CONCAT44(uVar3,fVar2),CONCAT44(uVar3,fVar2),(ulong)(uint)fVar1,param_4,param_5,
               param_6,param_7,param_8,*(long **)(param_9 + 0x18));
  return;
}


