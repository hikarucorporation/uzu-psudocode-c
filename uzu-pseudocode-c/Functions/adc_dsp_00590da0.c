// Function : adc_dsp
// Namespace: 
// Entry    : 00590da0
// Prototype: undefined adc_dsp(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 * param_10, undefined8 param_11, long param_12, char * param_13, undefined8 param_14)
// Body     : 00590da0 - 00590ee7


void adc_dsp(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9
            ,undefined8 *param_10,undefined8 param_11,long param_12,char *param_13,
            undefined8 param_14)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 uVar4;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 unaff_RBX;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  
  if (*(int *)(param_9 + 0x40) == 0) {
    if (0 < (int)*(uint *)(param_9 + 0x30)) {
      lVar6 = 0;
      puVar5 = param_10;
      do {
        param_1 = signal_setmultiout(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8
                                     ,puVar5,1,param_11,param_12,param_13,param_14);
        lVar6 = lVar6 + 1;
        puVar5 = puVar5 + 1;
        param_11 = extraout_RDX;
      } while (lVar6 < *(int *)(param_9 + 0x30));
    }
  }
  else {
    param_1 = signal_setmultiout(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                 param_10,(ulong)*(uint *)(param_9 + 0x30),param_11,param_12,
                                 param_13,param_14);
  }
  if (*(uint *)*param_10 != 0x40) {
    pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
             "adc~: local vector size %d doesn\'t match system (%d)",(ulong)*(uint *)*param_10,0x40,
             param_13,param_14);
    return;
  }
  if (0 < *(int *)(param_9 + 0x30)) {
    lVar6 = 0;
    uVar4 = 0x40;
    do {
      while( true ) {
        if (*(int *)(param_9 + 0x40) == 0) {
          lVar7 = *(long *)(param_10[lVar6] + 8);
          iVar1 = *(int *)(*(long *)(param_9 + 0x38) + lVar6 * 4);
        }
        else {
          param_12 = (long)*(int *)*param_10;
          lVar7 = (int)lVar6 * param_12 * 4 + *(long *)((int *)*param_10 + 2);
          iVar1 = *(int *)(*(long *)(param_9 + 0x38) + lVar6 * 4);
        }
        if ((0 < iVar1) &&
           (iVar2 = sys_get_inchannels(), uVar4 = extraout_RDX_01, param_1 = extraout_XMM0_Qa,
           iVar1 <= iVar2)) break;
        param_1 = dsp_add_zero(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,lVar7
                               ,0x40,uVar4,param_12,param_13,param_14,unaff_RBX);
        lVar6 = lVar6 + 1;
        uVar4 = extraout_RDX_00;
        if (*(int *)(param_9 + 0x30) <= lVar6) {
          return;
        }
      }
      plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
      param_1 = dsp_add_copy(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,
                             param_8,(long)(iVar1 * 0x40 + -0x40) * 4 +
                                     *(long *)(*(long *)(*plVar3 + 0x50) + 0x48),lVar7,0x40,param_12
                             ,param_13,param_14,unaff_RBX);
      lVar6 = lVar6 + 1;
      uVar4 = extraout_RDX_02;
    } while (lVar6 < *(int *)(param_9 + 0x30));
  }
  return;
}


