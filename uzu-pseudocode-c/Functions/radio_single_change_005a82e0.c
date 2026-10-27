// Function : radio_single_change
// Namespace: 
// Entry    : 005a82e0
// Prototype: undefined radio_single_change(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 005a82e0 - 005a8301


void radio_single_change(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                        ,undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8
                        ,long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                        char *param_13,undefined8 param_14)

{
  if (*(int *)(param_9 + 0x4ac) == 0) {
    pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
             "radio: no method for \'single_change\'",param_11,param_12,param_13,param_14);
    return;
  }
  *(undefined4 *)(param_9 + 0x498) = 0;
  return;
}


