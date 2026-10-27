// Function : bng_send
// Namespace: 
// Entry    : 005a2840
// Prototype: undefined bng_send(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, undefined8 * param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 005a2840 - 005a284a


void bng_send(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             long *param_9,undefined8 *param_10,undefined8 param_11,undefined8 param_12,
             char *param_13,undefined8 param_14)

{
  iemgui_send(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,(long)param_9,
              param_10,param_12,param_13,param_14);
  return;
}


