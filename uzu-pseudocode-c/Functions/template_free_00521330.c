// Function : template_free
// Namespace: 
// Entry    : 00521330
// Prototype: undefined template_free(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00521330 - 005213af


void template_free(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long *param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  char *param_13,undefined8 param_14)

{
  long *plVar1;
  long *plVar2;
  
  if (**(char **)param_9[2] != '\0') {
    pd_unbind(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
              (undefined8 *)param_9[2],param_11,param_12,param_13,param_14);
  }
  freebytes((void *)param_9[4]);
  plVar1 = (long *)__tls_get_addr(&PTR_007159b0);
  plVar2 = *(long **)(*plVar1 + 0x18);
  if (plVar2 == param_9) {
    *(long *)(*plVar1 + 0x18) = param_9[5];
    return;
  }
  do {
    plVar1 = (long *)plVar2[5];
    if (plVar1 == param_9) {
      plVar2[5] = param_9[5];
      return;
    }
    plVar2 = plVar1;
  } while (plVar1 != (long *)0x0);
  return;
}


