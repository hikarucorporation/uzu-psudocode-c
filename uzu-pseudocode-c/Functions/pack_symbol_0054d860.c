// Function : pack_symbol
// Namespace: 
// Entry    : 0054d860
// Prototype: undefined pack_symbol(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0054d860 - 0054d87f


void pack_symbol(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                char *param_13,undefined8 param_14)

{
  if (**(int **)(param_9 + 0x30) == 2) {
    *(undefined8 *)(*(int **)(param_9 + 0x30) + 2) = param_10;
    pack_bang(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
    return;
  }
  pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
           "pack_symbol: wrong type",param_11,param_12,param_13,param_14);
  return;
}


