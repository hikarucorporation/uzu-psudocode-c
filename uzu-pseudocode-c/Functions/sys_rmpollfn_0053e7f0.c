// Function : sys_rmpollfn
// Namespace: 
// Entry    : 0053e7f0
// Prototype: undefined sys_rmpollfn(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, int param_9)
// Body     : 0053e7f0 - 0053e8d8


void sys_rmpollfn(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 int param_9)

{
  byte *pbVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  void *pvVar7;
  long lVar8;
  int iVar9;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 uVar10;
  
  plVar5 = (long *)__tls_get_addr(&PTR_007159b0);
  lVar8 = *plVar5;
  piVar3 = *(int **)(lVar8 + 0x38);
  iVar2 = *piVar3;
  pbVar1 = (byte *)(piVar3 + 0x12);
  *pbVar1 = *pbVar1 | 4;
  if (iVar2 != 0) {
    lVar8 = *(long *)(lVar8 + 0x38);
    lVar4 = *(long *)(lVar8 + 8);
    lVar6 = 0;
    iVar9 = iVar2;
    do {
      if (*(int *)(lVar4 + lVar6) == param_9) {
        uVar10 = extraout_XMM0_Qa;
        if (iVar9 != 1) {
          memmove((void *)(lVar4 + lVar6),(void *)(lVar4 + lVar6 + 0x18),
                  (ulong)(iVar2 - 1) * 0x18 - lVar6);
          plVar5 = (long *)__tls_get_addr(&PTR_007159b0);
          lVar8 = *(long *)(*plVar5 + 0x38);
          uVar10 = extraout_XMM0_Qa_00;
        }
        pvVar7 = resizebytes(uVar10,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                             *(void **)(lVar8 + 8),(long)(iVar2 * 0x18),(long)(iVar2 * 0x18) - 0x18)
        ;
        plVar5 = (long *)__tls_get_addr(&PTR_007159b0);
        piVar3 = *(int **)(*plVar5 + 0x38);
        *(void **)(piVar3 + 2) = pvVar7;
        *piVar3 = iVar2 + -1;
        return;
      }
      iVar9 = iVar9 + -1;
      lVar6 = lVar6 + 0x18;
    } while (iVar9 != 0);
  }
  post(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
       "warning: %d removed from poll list but not found");
  return;
}


