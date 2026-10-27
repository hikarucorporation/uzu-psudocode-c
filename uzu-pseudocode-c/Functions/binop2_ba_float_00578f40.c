// Function : binop2_ba_float
// Namespace: 
// Entry    : 00578f40
// Prototype: undefined binop2_ba_float(float param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 00578f40 - 00578f62


void binop2_ba_float(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    long param_9)

{
  *(float *)(param_9 + 0x30) = param_1;
  outlet_float((ulong)(uint)(float)((int)*(float *)(param_9 + 0x34) & (int)param_1),param_2,param_3,
               param_4,param_5,param_6,param_7,param_8,*(long **)(param_9 + 0x18));
  return;
}


