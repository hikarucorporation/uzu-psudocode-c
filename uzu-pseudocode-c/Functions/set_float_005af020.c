// Function : set_float
// Namespace: 
// Entry    : 005af020
// Prototype: undefined set_float(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 005af020 - 005af044


void set_float(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
              long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
              char *param_13,undefined8 param_14)

{
  if ((*(int *)(param_9 + 0x50) == 0) || (*(int *)(param_9 + 0x54) != 0)) {
    pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
             "set: type mismatch or no field specified",param_11,param_12,param_13,param_14);
    return;
  }
  *(int *)(*(long *)(param_9 + 0x58) + 8) = (int)param_1;
  set_bang(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11
           ,param_12,param_13,param_14);
  return;
}


