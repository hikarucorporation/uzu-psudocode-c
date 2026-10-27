// Function : sel1_float
// Namespace: 
// Entry    : 0054bc10
// Prototype: undefined sel1_float(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 0054bc10 - 0054bc2d


void sel1_float(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9)

{
  if ((*(int *)(param_9 + 0x30) == 1) && ((float)param_1 == *(float *)(param_9 + 0x38))) {
    outlet_bang(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                *(long **)(param_9 + 0x40));
    return;
  }
  outlet_float(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
               *(long **)(param_9 + 0x48));
  return;
}


