// Function : text_define_bang
// Namespace: 
// Entry    : 00555dc0
// Prototype: undefined text_define_bang(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00555dc0 - 00555ded


void text_define_bang(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                     long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                     char *param_13,undefined8 param_14)

{
  undefined8 uVar1;
  
  uVar1 = gpointer_setglist(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                            (undefined8 *)(param_9 + 0x70),*(long *)(param_9 + 0x38),
                            *(undefined8 *)(param_9 + 0x68),param_12,param_13,param_14);
  outlet_pointer(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                 *(long **)(param_9 + 0x50));
  return;
}


