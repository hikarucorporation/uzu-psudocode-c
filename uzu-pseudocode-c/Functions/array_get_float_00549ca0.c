// Function : array_get_float
// Namespace: 
// Entry    : 00549ca0
// Prototype: undefined array_get_float(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 00549ca0 - 00549ca9


void array_get_float(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    long param_9)

{
  *(int *)(param_9 + 0x68) = (int)param_1;
  array_get_bang(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  return;
}


