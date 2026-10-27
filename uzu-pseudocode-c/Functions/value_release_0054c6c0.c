// Function : value_release
// Namespace: 
// Entry    : 0054c6c0
// Prototype: undefined value_release(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 * param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14, undefined1 param_15)
// Body     : 0054c6c0 - 0054c717


void value_release(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 *param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  char *param_13,undefined8 param_14,undefined1 param_15)

{
  long *plVar1;
  long *plVar2;
  undefined8 extraout_RDX;
  long lVar3;
  undefined8 extraout_XMM0_Qa;
  
  lVar3 = vcommon_class;
  plVar2 = pd_findbyclass(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                          (long)param_9,vcommon_class);
  if (plVar2 == (long *)0x0) {
    bug(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"value_release",
        lVar3,extraout_RDX,param_12,param_13,param_14,param_15);
    return;
  }
  plVar1 = plVar2 + 1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  if ((int)*plVar1 == 0) {
    pd_unbind(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2,
              param_9,extraout_RDX,param_12,param_13,param_14);
    pd_free(plVar2);
    return;
  }
  return;
}


