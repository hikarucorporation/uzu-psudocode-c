// Function : value_ff
// Namespace: 
// Entry    : 0054e9f0
// Prototype: undefined value_ff(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14, undefined1 param_15)
// Body     : 0054e9f0 - 0054ea4b


void value_ff(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,char *param_13
             ,undefined8 param_14,undefined1 param_15)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 extraout_RDX;
  long lVar4;
  undefined8 extraout_XMM0_Qa;
  
  puVar2 = *(undefined8 **)(param_9 + 0x30);
  lVar4 = vcommon_class;
  plVar3 = pd_findbyclass(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                          (long)puVar2,vcommon_class);
  if (plVar3 == (long *)0x0) {
    bug(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"value_release",
        lVar4,extraout_RDX,param_12,param_13,param_14,param_15);
    return;
  }
  plVar1 = plVar3 + 1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  if ((int)*plVar1 == 0) {
    pd_unbind(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar3,puVar2
              ,extraout_RDX,param_12,param_13,param_14);
    pd_free(plVar3);
    return;
  }
  return;
}


