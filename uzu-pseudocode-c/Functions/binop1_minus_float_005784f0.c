// Function : binop1_minus_float
// Namespace: 
// Entry    : 005784f0
// Prototype: undefined binop1_minus_float(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 005784f0 - 00578505


void binop1_minus_float(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                       long param_9)

{
  *(float *)(param_9 + 0x30) = (float)param_1;
  outlet_float(CONCAT44((int)((ulong)param_1 >> 0x20),(float)param_1 - *(float *)(param_9 + 0x34)),
               param_2,param_3,param_4,param_5,param_6,param_7,param_8,*(long **)(param_9 + 0x18));
  return;
}


