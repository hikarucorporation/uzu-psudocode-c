// Function : binop1_max_bang
// Namespace: 
// Entry    : 005787f0
// Prototype: undefined binop1_max_bang(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 005787f0 - 00578805


void binop1_max_bang(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    long param_9)

{
  float fVar1;
  
  fVar1 = *(float *)(param_9 + 0x30);
  if (*(float *)(param_9 + 0x30) <= *(float *)(param_9 + 0x34)) {
    fVar1 = *(float *)(param_9 + 0x34);
  }
  outlet_float((ulong)(uint)fVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
               *(long **)(param_9 + 0x18));
  return;
}


