// Function : sigsend_free
// Namespace: 
// Entry    : 00596960
// Prototype: undefined sigsend_free(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00596960 - 00596989


void sigsend_free(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 long *param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                 char *param_13,undefined8 param_14)

{
  if (**(char **)param_9[6] != '\0') {
    pd_unbind(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
              (undefined8 *)param_9[6],param_11,param_12,param_13,param_14);
  }
  freebytes((void *)param_9[10]);
  return;
}


