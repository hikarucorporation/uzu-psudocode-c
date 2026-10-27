// Function : ooura_init
// Namespace: 
// Entry    : 004ebe90
// Prototype: undefined8 ooura_init(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, uint param_9)
// Body     : 004ebe90 - 004ec02c


undefined8
ooura_init(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,uint param_9)

{
  int iVar1;
  long lVar2;
  undefined4 *puVar3;
  void *pvVar4;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 uVar5;
  uint uVar6;
  char *in_R8;
  undefined8 in_R9;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  
  iVar1 = ilog2(param_9);
  uVar6 = 1 << ((byte)iVar1 & 0x1f);
  if ((int)uVar6 < 4) {
    return 0;
  }
  lVar2 = __tls_get_addr(&PTR_007153d8);
  if ((int)uVar6 <= *(int *)(lVar2 + 0xe0)) {
    return 1;
  }
  if (*(int *)(lVar2 + 0xe0) != 0) {
    freebytes(*(void **)(lVar2 + 0xd0));
    freebytes(*(void **)(lVar2 + 0xd8));
    freebytes(*(void **)(lVar2 + 200));
  }
  iVar1 = ilog2(uVar6);
  iVar1 = (4 << ((byte)((uint)(iVar1 - (iVar1 >> 0x1f)) >> 1) & 0x1f)) + 8;
  *(int *)(lVar2 + 0xe4) = iVar1;
  puVar3 = getbytes((long)iVar1);
  *(undefined4 **)(lVar2 + 0xd0) = puVar3;
  *puVar3 = 0;
  pvVar4 = getbytes((ulong)uVar6 * 4);
  *(void **)(lVar2 + 0xd8) = pvVar4;
  if (pvVar4 == (void *)0x0) {
    pd_error(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
             "out of memory allocating FFT buffer",extraout_RDX,0,in_R8,in_R9);
    pvVar4 = *(void **)(lVar2 + 0xd0);
  }
  else {
    pvVar4 = getbytes((ulong)uVar6 << 3);
    *(void **)(lVar2 + 200) = pvVar4;
    if (pvVar4 != (void *)0x0) {
      *(uint *)(lVar2 + 0xe0) = uVar6;
      puVar3 = *(undefined4 **)(lVar2 + 0xd0);
      uVar5 = 1;
      goto LAB_004ec01a;
    }
    pd_error(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
             "out of memory allocating FFT buffer",extraout_RDX_00,0,in_R8,in_R9);
    freebytes(*(void **)(lVar2 + 0xd0));
    pvVar4 = *(void **)(lVar2 + 0xd8);
  }
  uVar5 = 0;
  freebytes(pvVar4);
  puVar3 = (undefined4 *)(lVar2 + 0xe0);
LAB_004ec01a:
  *puVar3 = 0;
  return uVar5;
}


