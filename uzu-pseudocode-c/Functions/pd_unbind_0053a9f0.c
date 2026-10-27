// Function : pd_unbind
// Namespace: 
// Entry    : 0053a9f0
// Prototype: undefined pd_unbind(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, undefined8 * param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0053a9f0 - 0053aab8


void pd_unbind(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
              long *param_9,undefined8 *param_10,undefined8 param_11,undefined8 param_12,
              char *param_13,undefined8 param_14)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  
  plVar1 = (long *)param_10[1];
  if (plVar1 == param_9) {
    param_10[1] = 0;
  }
  else {
    if ((plVar1 == (long *)0x0) || (*plVar1 != bindlist_class)) {
      pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)param_9,
               "%s: couldn\'t unbind",*param_10,param_12,param_13,param_14);
      return;
    }
    plVar4 = (long *)plVar1[1];
    if ((long *)*plVar4 == param_9) {
      plVar1[1] = plVar4[1];
    }
    else {
      do {
        plVar3 = plVar4;
        plVar4 = (long *)plVar3[1];
        if (plVar4 == (long *)0x0) goto LAB_0053aa86;
      } while ((long *)*plVar4 != param_9);
      plVar3[1] = plVar4[1];
    }
    *plVar4 = 0;
    plVar4[1] = 0;
    freebytes(plVar4);
LAB_0053aa86:
    puVar2 = (undefined8 *)plVar1[1];
    if (puVar2[1] == 0) {
      param_10[1] = *puVar2;
      freebytes(puVar2);
      plVar1[1] = 0;
      pd_free(plVar1);
      return;
    }
  }
  return;
}


