// Function : radio_delta
// Namespace: 
// Entry    : 005a7e30
// Prototype: undefined radio_delta(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, ulong param_11, char * param_12, undefined8 param_13, undefined8 param_14)
// Body     : 005a7e30 - 005a7e3f


void radio_delta(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                long param_9,undefined8 param_10,ulong param_11,char *param_12,undefined8 param_13,
                undefined8 param_14)

{
  iemgui_delta(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_9,
               param_10,param_11 & 0xffffffff,param_12,param_14);
  return;
}


