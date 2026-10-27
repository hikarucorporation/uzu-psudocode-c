// Function : square_dsp
// Namespace: 
// Entry    : 00571630
// Prototype: undefined square_dsp(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long * param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00571630 - 0057182a


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void square_dsp(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9,long *param_10,undefined8 param_11,undefined8 param_12,char *param_13,
               undefined8 param_14)

{
  uint uVar1;
  int *piVar2;
  long *plVar3;
  undefined8 uVar4;
  void *pvVar5;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 unaff_RBX;
  int iVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  undefined8 uVar10;
  double dVar11;
  
  piVar2 = (int *)*param_10;
  *(long *)(param_9 + 0x48) = (long)*piVar2;
  dVar11 = _DAT_005d9000 / (double)(float)piVar2[4];
  *(double *)(param_9 + 200) = dVar11;
  *(long *)(param_9 + 0x60) = (long)*(int *)(param_10[1] + 0x14);
  *(long *)(param_9 + 0x68) = (long)*(int *)(param_10[2] + 0x14);
  *(long *)(param_9 + 0x70) = (long)*(int *)(param_10[3] + 0x14);
  uVar4 = *(undefined8 *)(param_9 + 0xd0);
  plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
  uVar4 = else_magic_inlet_connection
                    (extraout_XMM0_Qa,dVar11,param_3,param_4,param_5,param_6,param_7,param_8,param_9
                     ,uVar4,0,*plVar3 + 0xf0);
  *(long *)(param_9 + 0x50) = (long)(int)uVar4;
  lVar8 = *plVar3 + 0xf0;
  uVar4 = else_magic_inlet_connection
                    (extraout_XMM0_Qa_00,dVar11,param_3,param_4,param_5,param_6,param_7,param_8,
                     param_9,*(undefined8 *)(param_9 + 0xd0),2,lVar8);
  *(long *)(param_9 + 0x58) = (long)(int)uVar4;
  uVar4 = extraout_RDX;
  uVar10 = extraout_XMM0_Qa_01;
  if (*(long *)(param_9 + 0x50) == 0) {
    uVar9 = *(ulong *)(param_9 + 0x98);
    uVar1 = *(uint *)(param_9 + 0x40);
    if (uVar1 == (uint)uVar9) goto LAB_00571754;
  }
  else {
    uVar9 = (ulong)*(uint *)(*param_10 + 0x14);
    uVar1 = *(uint *)(param_9 + 0x40);
    if (uVar1 == *(uint *)(*param_10 + 0x14)) goto LAB_00571754;
  }
  uVar7 = (long)(int)uVar9 << 3;
  pvVar5 = resizebytes(extraout_XMM0_Qa_01,dVar11,param_3,param_4,param_5,param_6,param_7,param_8,
                       *(void **)(param_9 + 0x30),(long)(int)uVar1 << 3,uVar7);
  *(void **)(param_9 + 0x30) = pvVar5;
  pvVar5 = resizebytes(extraout_XMM0_Qa_02,dVar11,param_3,param_4,param_5,param_6,param_7,param_8,
                       *(void **)(param_9 + 0x38),(long)*(int *)(param_9 + 0x40) << 3,uVar7);
  *(void **)(param_9 + 0x38) = pvVar5;
  pvVar5 = resizebytes(extraout_XMM0_Qa_03,dVar11,param_3,param_4,param_5,param_6,param_7,param_8,
                       *(void **)(param_9 + 0x88),(long)*(int *)(param_9 + 0x40) << 3,uVar7);
  *(void **)(param_9 + 0x88) = pvVar5;
  *(int *)(param_9 + 0x40) = (int)uVar9;
  uVar4 = extraout_RDX_00;
  uVar10 = extraout_XMM0_Qa_04;
LAB_00571754:
  uVar4 = signal_setmultiout(uVar10,dVar11,param_3,param_4,param_5,param_6,param_7,param_8,
                             param_10 + 4,uVar9 & 0xffffffff,uVar4,lVar8,param_13,param_14);
  if ((((*(long *)(param_9 + 0x60) < 2) ||
       (iVar6 = *(int *)(param_9 + 0x40), *(long *)(param_9 + 0x60) == (long)iVar6)) &&
      ((*(long *)(param_9 + 0x68) < 2 ||
       (iVar6 = *(int *)(param_9 + 0x40), *(long *)(param_9 + 0x68) == (long)iVar6)))) &&
     ((*(long *)(param_9 + 0x70) < 2 ||
      (iVar6 = *(int *)(param_9 + 0x40), *(long *)(param_9 + 0x70) == (long)iVar6)))) {
    dsp_add(uVar4,dVar11,param_3,param_4,param_5,param_6,param_7,param_8,square_perform,6,param_9,
            *(undefined8 *)(*param_10 + 8),*(undefined8 *)(param_10[1] + 8),
            *(undefined8 *)(param_10[2] + 8),*(undefined8 *)(param_10[3] + 8));
    return;
  }
  uVar4 = dsp_add_zero(uVar4,dVar11,param_3,param_4,param_5,param_6,param_7,param_8,
                       *(undefined8 *)(param_10[4] + 8),iVar6 * *(int *)(param_9 + 0x48),
                       extraout_RDX_01,lVar8,param_13,param_14,unaff_RBX);
  pd_error(uVar4,dVar11,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
           "[square~]: channel sizes mismatch",extraout_RDX_02,lVar8,param_13,param_14);
  return;
}


