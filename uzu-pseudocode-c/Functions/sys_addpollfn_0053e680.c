// Function : sys_addpollfn
// Namespace: 
// Entry    : 0053e680
// Prototype: undefined sys_addpollfn(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, int param_9, undefined8 param_10, undefined8 param_11)
// Body     : 0053e680 - 0053e777


void sys_addpollfn(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  int param_9,undefined8 param_10,undefined8 param_11)

{
  int iVar1;
  long *plVar2;
  void *pvVar3;
  undefined4 *puVar4;
  int *piVar5;
  long lVar6;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 uVar7;
  
  plVar2 = (long *)__tls_get_addr();
  piVar5 = *(int **)(*plVar2 + 0x38);
  uVar7 = extraout_XMM0_Qa;
  if (*(long *)(piVar5 + 2) == 0) {
    pvVar3 = getbytes(0);
    plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
    puVar4 = *(undefined4 **)(*plVar2 + 0x38);
    *(void **)(puVar4 + 2) = pvVar3;
    *puVar4 = 0;
    puVar4 = binbuf_new();
    piVar5 = *(int **)(*plVar2 + 0x38);
    *(undefined4 **)(piVar5 + 10) = puVar4;
    uVar7 = extraout_XMM0_Qa_00;
  }
  iVar1 = *piVar5;
  lVar6 = (long)iVar1;
  pvVar3 = resizebytes(uVar7,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                       *(void **)(piVar5 + 2),(long)(iVar1 * 0x18),(long)(iVar1 * 0x18) + 0x18);
  plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
  *(void **)(*(long *)(*plVar2 + 0x38) + 8) = pvVar3;
  *(int *)((long)pvVar3 + lVar6 * 0x18) = param_9;
  *(undefined8 *)((long)pvVar3 + lVar6 * 0x18 + 8) = param_10;
  *(undefined8 *)((long)pvVar3 + lVar6 * 0x18 + 0x10) = param_11;
  piVar5 = *(int **)(*plVar2 + 0x38);
  *piVar5 = iVar1 + 1;
  if (piVar5[4] <= param_9) {
    piVar5[4] = param_9 + 1;
  }
  *(byte *)(piVar5 + 0x12) = *(byte *)(piVar5 + 0x12) | 4;
  return;
}


