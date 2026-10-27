// Function : inlet_bang
// Namespace: 
// Entry    : 00539c00
// Prototype: undefined inlet_bang(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, double param_5, double param_6, double param_7, undefined8 param_8, long param_9)
// Body     : 00539c00 - 00539d27


void inlet_bang(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               double param_5,double param_6,double param_7,undefined8 param_8,long param_9)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  uint *in_R8;
  uint *in_R9;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar4;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  double in_stack_00000008;
  
  puVar2 = *(undefined8 **)(param_9 + 0x20);
  plVar1 = (long *)__tls_get_addr(&PTR_007159b0);
  lVar3 = *plVar1;
  if (puVar2 == (undefined8 *)(lVar3 + 0xa8)) {
    pd_vmess(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
             *(long *)(param_9 + 0x18),*(undefined8 *)(param_9 + 0x28),0x5e2ee7,
             (undefined8 *)(lVar3 + 0xa8),in_R8,in_R9,in_stack_00000008);
    return;
  }
  if (puVar2 == (undefined8 *)0x0) {
    pd_bang(*(long **)(param_9 + 0x18));
    return;
  }
  if (puVar2 == (undefined8 *)(lVar3 + 0xc0)) {
    pd_typedmess(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                 *(long **)(param_9 + 0x18),*(undefined8 **)(param_9 + 0x28),0,(int *)0x0,in_R8,
                 in_R9);
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
               puVar2,0x6552a4,*plVar1 + 0xa8,in_R8,in_R9,in_stack_00000008);
      return;
    }
    plVar1 = (long *)__tls_get_addr(&PTR_007159b0);
    lVar3 = *plVar1;
    puVar2 = *(undefined8 **)(param_9 + 0x20);
    uVar4 = extraout_XMM0_Qa_01;
  }
  pd_error(uVar4,param_2,param_3,param_4,param_5,param_6,param_7,param_8,*(long *)(param_9 + 0x10),
           "inlet: expected \'%s\' but got \'%s\'",*puVar2,*(undefined8 *)(lVar3 + 0xa8),
           (char *)in_R8,in_R9);
  return;
}


