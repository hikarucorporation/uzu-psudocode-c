// Function : sel1_symbol
// Namespace: 
// Entry    : 0054bc30
// Prototype: undefined sel1_symbol(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long param_10)
// Body     : 0054bc30 - 0054bc4d


void sel1_symbol(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                long param_9,long param_10)

{
  if ((*(int *)(param_9 + 0x30) == 2) && (*(long *)(param_9 + 0x38) == param_10)) {
    outlet_bang(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                *(long **)(param_9 + 0x40));
    return;
  }
  outlet_symbol(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                *(long **)(param_9 + 0x48));
  return;
}


