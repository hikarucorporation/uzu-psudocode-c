// Function : guiconnect_signoff
// Namespace: 
// Entry    : 00519270
// Prototype: undefined guiconnect_signoff(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00519270 - 00519299


void guiconnect_signoff(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                       long *param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                       char *param_13,undefined8 param_14)

{
  if (param_9[6] == 0) {
    pd_free(param_9);
    return;
  }
  pd_unbind(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
            (undefined8 *)param_9[7],param_11,param_12,param_13,param_14);
  param_9[7] = 0;
  return;
}


