// Function : dial_new
// Namespace: 
// Entry    : 005a82d0
// Prototype: undefined dial_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 * param_9, undefined8 param_10, int * param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 005a82d0 - 005a82d6


void dial_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 *param_9,undefined8 param_10,int *param_11,undefined8 param_12,
             char *param_13,undefined8 param_14)

{
  radio_donew(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
              param_11,(undefined8 *)0x1,param_13,param_14);
  return;
}


