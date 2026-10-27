// Function : binop1_max_float
// Namespace: 
// Entry    : 00578810
// Prototype: undefined binop1_max_float(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 00578810 - 00578825


void binop1_max_float(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                     long param_9)

{
  float fVar1;
  
  fVar1 = (float)param_1;
  *(float *)(param_9 + 0x30) = fVar1;
  if (fVar1 <= *(float *)(param_9 + 0x34)) {
    fVar1 = *(float *)(param_9 + 0x34);
  }
  outlet_float(CONCAT44((int)((ulong)param_1 >> 0x20),fVar1),param_2,param_3,param_4,param_5,param_6
               ,param_7,param_8,*(long **)(param_9 + 0x18));
  return;
}


