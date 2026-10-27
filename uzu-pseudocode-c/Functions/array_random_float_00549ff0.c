// Function : array_random_float
// Namespace: 
// Entry    : 00549ff0
// Prototype: undefined array_random_float(undefined8 param_1, undefined8 param_2, double param_3, double param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 00549ff0 - 00549ff6


void array_random_float(undefined8 param_1,undefined8 param_2,double param_3,double param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                       long param_9)

{
  *(int *)(param_9 + 0x68) = (int)param_1;
  array_random_bang(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  return;
}


