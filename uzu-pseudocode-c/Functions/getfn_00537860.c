// Function : getfn
// Namespace: 
// Entry    : 00537860
// Prototype: undefined * getfn(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, undefined8 * param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00537860 - 005378df


undefined *
getfn(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
     ,undefined8 param_6,undefined8 param_7,undefined8 param_8,long *param_9,undefined8 *param_10,
     undefined8 param_11,undefined8 param_12,char *param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 extraout_XMM0_Qa;
  
  puVar1 = (undefined8 *)*param_9;
  iVar5 = *(int *)(puVar1 + 5);
  if (iVar5 != 0) {
    lVar2 = puVar1[4];
    plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
    puVar4 = (undefined8 *)(*(long *)(lVar2 + (long)*(int *)(*plVar3 + 0x20) * 8) + 8);
    do {
      if ((undefined8 *)puVar4[-1] == param_10) {
        return (undefined *)*puVar4;
      }
      iVar5 = iVar5 + -1;
      puVar4 = puVar4 + 3;
      param_1 = extraout_XMM0_Qa;
    } while (iVar5 != 0);
  }
  pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)param_9,
           "%s: no method for message \'%s\'",*(undefined8 *)*puVar1,*param_10,param_13,param_14);
  return PTR_nullfn_00715950;
}


