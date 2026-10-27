// Function : change_float
// Namespace: 
// Entry    : 0054c640
// Prototype: undefined change_float(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 0054c640 - 0054c654


void change_float(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 long param_9)

{
  if ((float)param_1 == *(float *)(param_9 + 0x30)) {
    return;
  }
  *(float *)(param_9 + 0x30) = (float)param_1;
  outlet_float(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
               *(long **)(param_9 + 0x18));
  return;
}


