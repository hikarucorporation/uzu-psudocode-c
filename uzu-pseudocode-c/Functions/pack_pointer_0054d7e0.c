// Function : pack_pointer
// Namespace: 
// Entry    : 0054d7e0
// Prototype: undefined pack_pointer(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 * param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0054d7e0 - 0054d82e


void pack_pointer(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 long param_9,undefined8 *param_10,undefined8 param_11,undefined8 param_12,
                 char *param_13,undefined8 param_14)

{
  undefined1 in_AL;
  undefined8 extraout_RDX;
  undefined8 uVar1;
  
  if (**(int **)(param_9 + 0x30) == 3) {
    uVar1 = gpointer_unset(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                           *(long *)(param_9 + 0x38),param_10,param_11,param_12,param_13,param_14);
    uVar1 = gpointer_copy(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_10,
                          *(undefined8 **)(param_9 + 0x38),extraout_RDX,param_12,param_13,param_14,
                          in_AL);
    pack_bang(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
    return;
  }
  pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
           "pack_pointer: wrong type",param_11,param_12,param_13,param_14);
  return;
}


