// Function : sys_setchsr
// Namespace: 
// Entry    : 0053c1b0
// Prototype: undefined sys_setchsr(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, int param_9, int param_10, int param_11, undefined8 param_12, undefined8 param_13, undefined8 param_14)
// Body     : 0053c1b0 - 0053c3a0


void sys_setchsr(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                int param_9,int param_10,int param_11,undefined8 param_12,undefined8 param_13,
                undefined8 param_14)

{
  float fVar1;
  int iVar2;
  long lVar3;
  bool bVar4;
  long *plVar5;
  void *pvVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float extraout_XMM0_Da;
  float fVar10;
  undefined4 extraout_XMM0_Db;
  undefined4 uVar11;
  float fVar12;
  undefined4 uVar13;
  undefined1 in_stack_ffffffffffffffb8;
  
  plVar5 = (long *)__tls_get_addr(&PTR_007159b0);
  lVar3 = *(long *)(*plVar5 + 0x50);
  iVar2 = *(int *)(lVar3 + 0x38);
  iVar7 = param_9 << 8;
  if (param_9 == 0) {
    iVar7 = 0x200;
  }
  iVar8 = param_10 << 8;
  if (param_10 == 0) {
    iVar8 = 0x200;
  }
  pvVar6 = *(void **)(lVar3 + 0x48);
  if ((pvVar6 == (void *)0x0) || (*(int *)(lVar3 + 0x34) != param_9)) {
    if (pvVar6 != (void *)0x0) {
      freebytes(pvVar6);
    }
    pvVar6 = getbytes((long)iVar7);
    plVar5 = (long *)__tls_get_addr(&PTR_007159b0);
    lVar3 = *(long *)(*plVar5 + 0x50);
    *(void **)(lVar3 + 0x48) = pvVar6;
    *(int *)(lVar3 + 0x34) = param_9;
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  memset(pvVar6,0,(long)iVar7);
  plVar5 = (long *)__tls_get_addr(&PTR_007159b0);
  pvVar6 = *(void **)(*(long *)(*plVar5 + 0x50) + 0x40);
  if ((pvVar6 == (void *)0x0) || (iVar2 != param_10)) {
    if (pvVar6 != (void *)0x0) {
      freebytes(pvVar6);
    }
    pvVar6 = getbytes((long)iVar8);
    plVar5 = (long *)__tls_get_addr(&PTR_007159b0);
    lVar3 = *(long *)(*plVar5 + 0x50);
    *(void **)(lVar3 + 0x40) = pvVar6;
    *(int *)(lVar3 + 0x38) = param_10;
    bVar4 = true;
  }
  memset(pvVar6,0,(long)iVar8);
  plVar5 = (long *)__tls_get_addr();
  lVar3 = *(long *)(*plVar5 + 0x50);
  fVar9 = (float)param_11;
  fVar1 = *(float *)(lVar3 + 0x30);
  uVar13 = 0;
  *(float *)(lVar3 + 0x30) = fVar9;
  fVar12 = fVar1;
  logpost((ulong)(uint)fVar9,(ulong)(uint)fVar1,param_3,param_4,param_5,param_6,param_7,param_8,0,4,
          "input channels = %d, output channels = %d",(ulong)*(uint *)(lVar3 + 0x34),
          (ulong)*(uint *)(lVar3 + 0x38),param_14,in_stack_ffffffffffffffb8);
  fVar10 = extraout_XMM0_Da;
  uVar11 = extraout_XMM0_Db;
  if (!bVar4) {
    uVar11 = 0;
    fVar10 = fVar1;
    if (fVar1 == fVar9) {
      return;
    }
  }
  canvas_update_dsp(CONCAT44(uVar11,fVar10),CONCAT44(uVar13,fVar12),param_3,param_4,param_5,param_6,
                    param_7,param_8);
  return;
}


