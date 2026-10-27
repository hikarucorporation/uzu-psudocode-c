// Function : pdint_float
// Namespace: 
// Entry    : 0054b5d0
// Prototype: undefined pdint_float(float param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 0054b5d0 - 0054b5ed


void pdint_float(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                long param_9)

{
  *(float *)(param_9 + 0x30) = param_1;
  outlet_float((ulong)(uint)(float)(long)param_1,param_2,param_3,param_4,param_5,param_6,param_7,
               param_8,*(long **)(param_9 + 0x18));
  return;
}


