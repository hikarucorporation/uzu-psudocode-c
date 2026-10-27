// Function : clone_free
// Namespace: 
// Entry    : 00503290
// Prototype: undefined clone_free(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, ulong param_10, undefined8 param_11, undefined8 param_12, long param_13, ulong param_14)
// Body     : 00503290 - 00503433


void clone_free(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9,ulong param_10,undefined8 param_11,undefined8 param_12,long param_13,
               ulong param_14)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  undefined4 *puVar5;
  long lVar6;
  ulong extraout_RDX;
  ulong uVar7;
  ulong extraout_RDX_00;
  long lVar8;
  undefined4 uVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  void *pvVar13;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar14;
  
  pvVar13 = *(void **)(param_9 + 0x40);
  if (pvVar13 == (void *)0x0) {
    return;
  }
  plVar4 = (long *)__tls_get_addr(&PTR_007159b0);
  lVar6 = *(long *)(*(long *)(*plVar4 + 0x48) + 0x30);
  uVar1 = *(uint *)(param_9 + 0x38);
  uVar7 = extraout_RDX;
  if (lVar6 == 0) {
    uVar9 = 0xffffffff;
  }
  else {
    if ((int)uVar1 < 1) {
      uVar9 = 0xffffffff;
      goto LAB_005033c3;
    }
    if ((ulong)uVar1 - 1 < 3) {
      uVar10 = 0xffffffff;
      param_10 = 0;
    }
    else {
      param_14 = (ulong)(uVar1 & 0xfffffffc);
      plVar4 = (long *)((long)pvVar13 + 0x30);
      uVar10 = 0xffffffff;
      param_10 = 0;
      do {
        if (plVar4[-6] == lVar6) {
          uVar10 = param_10 & 0xffffffff;
        }
        iVar2 = (int)param_10;
        uVar7 = (ulong)(iVar2 + 1);
        if (plVar4[-4] != lVar6) {
          uVar7 = uVar10;
        }
        uVar11 = iVar2 + 2;
        if (plVar4[-2] != lVar6) {
          uVar11 = (uint)uVar7;
        }
        uVar3 = iVar2 + 3;
        if (*plVar4 != lVar6) {
          uVar3 = uVar11;
        }
        uVar10 = (ulong)uVar3;
        param_10 = param_10 + 4;
        plVar4 = plVar4 + 8;
      } while (param_10 != param_14);
    }
    uVar9 = (undefined4)uVar10;
    param_13 = 0;
    if ((ulong)(uVar1 & 3) != 0) {
      lVar12 = param_10 * 0x10;
      param_13 = (ulong)(uVar1 & 3) * 0x10;
      lVar8 = 0;
      do {
        if (*(long *)((long)pvVar13 + lVar8 + lVar12) == lVar6) {
          uVar10 = param_10 & 0xffffffff;
        }
        uVar9 = (undefined4)uVar10;
        param_10 = (ulong)((int)param_10 + 1);
        lVar8 = lVar8 + 0x10;
      } while (param_13 != lVar8);
    }
  }
  if (0 < (int)uVar1) {
    lVar12 = 1;
    lVar8 = 0;
    uVar14 = extraout_XMM0_Qa;
    while( true ) {
      canvas_closebang(uVar14,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                       *(long *)((long)pvVar13 + lVar8),param_10,uVar7,lVar6,param_13,param_14);
      pd_free(*(long **)((long)pvVar13 + lVar8));
      param_10 = (long)*(int *)(param_9 + 0x58) * 0x18;
      uVar14 = freebytes(*(void **)((long)pvVar13 + lVar8 + 8));
      if (*(int *)(param_9 + 0x38) <= lVar12) break;
      pvVar13 = *(void **)(param_9 + 0x40);
      lVar8 = lVar8 + 0x10;
      lVar12 = lVar12 + 1;
      uVar7 = extraout_RDX_00;
    }
    pvVar13 = *(void **)(param_9 + 0x40);
  }
LAB_005033c3:
  freebytes(pvVar13);
  freebytes(*(void **)(param_9 + 0x78));
  freebytes(*(void **)(param_9 + 0x50));
  freebytes(*(void **)(param_9 + 0x60));
  puVar5 = (undefined4 *)__tls_get_addr(&PTR_007153d8);
  *puVar5 = uVar9;
  return;
}


