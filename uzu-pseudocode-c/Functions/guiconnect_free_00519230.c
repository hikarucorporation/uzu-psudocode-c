// Function : guiconnect_free
// Namespace: 
// Entry    : 00519230
// Prototype: undefined guiconnect_free(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00519230 - 00519255


void guiconnect_free(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    long *param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                    char *param_13,undefined8 param_14)

{
  if ((undefined8 *)param_9[7] != (undefined8 *)0x0) {
    pd_unbind(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
              (undefined8 *)param_9[7],param_11,param_12,param_13,param_14);
  }
  if ((double *)param_9[8] == (double *)0x0) {
    return;
  }
  clock_free((double *)param_9[8]);
  return;
}


