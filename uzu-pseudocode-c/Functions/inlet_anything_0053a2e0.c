// Function : inlet_anything
// Namespace: 
// Entry    : 0053a2e0
// Prototype: undefined inlet_anything(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, double param_5, double param_6, double param_7, undefined8 param_8, long param_9, undefined8 * param_10, uint param_11, int * param_12, uint * param_13, uint * param_14)
// Body     : 0053a2e0 - 0053a3d7


void inlet_anything(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   double param_5,double param_6,double param_7,undefined8 param_8,long param_9,
                   undefined8 *param_10,uint param_11,int *param_12,uint *param_13,uint *param_14)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar5;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  
  puVar3 = *(undefined8 **)(param_9 + 0x20);
  if (puVar3 == param_10) {
    plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
    plVar1 = *(long **)(param_9 + 0x18);
    param_1 = extraout_XMM0_Qa_00;
    if ((undefined8 *)(*plVar2 + 0xf0) != param_10) {
      param_10 = *(undefined8 **)(param_9 + 0x28);
    }
  }
  else {
    if (puVar3 != (undefined8 *)0x0) {
      plVar1 = (long *)__tls_get_addr(&PTR_007159b0);
      uVar5 = extraout_XMM0_Qa;
      if (puVar3 == (undefined8 *)(*plVar1 + 0xf0)) {
        plVar1 = *(long **)(param_9 + 0x18);
        puVar3 = gensym("fwd");
        lVar4 = zgetfn(plVar1,(long)puVar3);
        if (lVar4 != 0) {
          inlet_fwd(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                    param_9,param_10,param_11,param_12,param_13,param_14);
          return;
        }
        puVar3 = *(undefined8 **)(param_9 + 0x20);
        uVar5 = extraout_XMM0_Qa_01;
      }
      pd_error(uVar5,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
               *(long *)(param_9 + 0x10),"inlet: expected \'%s\' but got \'%s\'",*puVar3,*param_10,
               (char *)param_13,param_14);
      return;
    }
    plVar1 = *(long **)(param_9 + 0x18);
  }
  pd_typedmess(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1,param_10,
               param_11,param_12,param_13,param_14);
  return;
}


