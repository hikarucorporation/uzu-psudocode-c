// Function : inlet_symbol
// Namespace: 
// Entry    : 00539ed0
// Prototype: undefined inlet_symbol(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14, double param_15)
// Body     : 00539ed0 - 0053a041


void inlet_symbol(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 double param_5,double param_6,double param_7,undefined8 param_8,long param_9,
                 undefined8 param_10,undefined8 param_11,undefined8 param_12,char *param_13,
                 uint *param_14,double param_15)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar4;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  double in_stack_ffffffffffffffc8;
  uint local_30 [2];
  undefined8 local_28;
  
  puVar2 = *(undefined8 **)(param_9 + 0x20);
  plVar1 = (long *)__tls_get_addr(&PTR_007159b0);
  lVar3 = *plVar1;
  if (puVar2 == (undefined8 *)(lVar3 + 0x90)) {
    pd_vmess(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
             *(long *)(param_9 + 0x18),*(undefined8 *)(param_9 + 0x28),0x6552a4,param_10,param_13,
             param_14,param_15);
    return;
  }
  if (puVar2 == (undefined8 *)0x0) {
    pd_symbol(*(long **)(param_9 + 0x18));
    return;
  }
  if (puVar2 == (undefined8 *)(lVar3 + 0xc0)) {
    local_30[0] = 2;
    local_28 = param_10;
    inlet_list(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
               (undefined8 *)(lVar3 + 0x90),1,local_30,(uint *)param_13,param_14,
               in_stack_ffffffffffffffc8);
    return;
  }
  uVar4 = extraout_XMM0_Qa;
  if (puVar2 == (undefined8 *)(lVar3 + 0xf0)) {
    plVar1 = *(long **)(param_9 + 0x18);
    puVar2 = gensym("fwd");
    lVar3 = zgetfn(plVar1,(long)puVar2);
    if (lVar3 != 0) {
      lVar3 = *(long *)(param_9 + 0x18);
      puVar2 = gensym("fwd");
      plVar1 = (long *)__tls_get_addr(&PTR_007159b0);
      pd_vmess(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,lVar3,
               puVar2,0x65470c,*plVar1 + 0x90,param_10,param_14,param_15);
      return;
    }
    plVar1 = (long *)__tls_get_addr(&PTR_007159b0);
    lVar3 = *plVar1;
    puVar2 = *(undefined8 **)(param_9 + 0x20);
    uVar4 = extraout_XMM0_Qa_01;
  }
  pd_error(uVar4,param_2,param_3,param_4,param_5,param_6,param_7,param_8,*(long *)(param_9 + 0x10),
           "inlet: expected \'%s\' but got \'%s\'",*puVar2,*(undefined8 *)(lVar3 + 0x90),param_13,
           param_14);
  return;
}


