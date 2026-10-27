// Function : binop1_times_bang
// Namespace: 
// Entry    : 00578570
// Prototype: undefined binop1_times_bang(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 00578570 - 00578585


void binop1_times_bang(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                      long param_9)

{
  outlet_float((ulong)(uint)(*(float *)(param_9 + 0x34) * *(float *)(param_9 + 0x30)),param_2,
               param_3,param_4,param_5,param_6,param_7,param_8,*(long **)(param_9 + 0x18));
  return;
}


