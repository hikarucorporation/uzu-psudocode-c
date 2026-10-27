// Function : canvas_setargs
// Namespace: 
// Entry    : 004fd2a0
// Prototype: undefined canvas_setargs(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, int param_9, void * param_10)
// Body     : 004fd2a0 - 004fd322


void canvas_setargs(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   int param_9,void *param_10)

{
  long *plVar1;
  long lVar2;
  void *pvVar3;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 uVar4;
  
  plVar1 = (long *)__tls_get_addr(&PTR_007159b0);
  lVar2 = *(long *)(*plVar1 + 0x48);
  uVar4 = extraout_XMM0_Qa;
  if (*(void **)(lVar2 + 0x28) != (void *)0x0) {
    freebytes(*(void **)(lVar2 + 0x28));
    plVar1 = (long *)__tls_get_addr(&PTR_007159b0);
    lVar2 = *(long *)(*plVar1 + 0x48);
    uVar4 = extraout_XMM0_Qa_00;
  }
  *(int *)(lVar2 + 0x20) = param_9;
  pvVar3 = copybytes(uVar4,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_10,
                     (long)param_9 << 4);
  plVar1 = (long *)__tls_get_addr(&PTR_007159b0);
  *(void **)(*(long *)(*plVar1 + 0x48) + 0x28) = pvVar3;
  return;
}


