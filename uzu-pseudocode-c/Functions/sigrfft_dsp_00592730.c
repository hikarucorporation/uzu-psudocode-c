// Function : sigrfft_dsp
// Namespace: 
// Entry    : 00592730
// Prototype: undefined sigrfft_dsp(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long * param_10, undefined8 param_11, ulong param_12, char * param_13, undefined8 param_14, undefined8 param_15)
// Body     : 00592730 - 00592966


void sigrfft_dsp(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                long param_9,long *param_10,undefined8 param_11,ulong param_12,char *param_13,
                undefined8 param_14,undefined8 param_15)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined8 extraout_RDX_04;
  undefined8 extraout_RDX_05;
  undefined8 extraout_RDX_06;
  undefined8 extraout_RDX_07;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  char *pcVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 extraout_XMM0_Qa;
  undefined8 in_stack_ffffffffffffff78;
  
  uVar4 = *(uint *)*param_10;
  pcVar12 = (char *)(ulong)uVar4;
  uVar6 = ((uint *)*param_10)[5];
  uVar9 = (ulong)uVar6;
  uVar13 = signal_setmultiout(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                              param_10 + 1,(ulong)uVar6,param_11,param_12,param_13,param_14);
  uVar13 = signal_setmultiout(uVar13,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                              param_10 + 2,(ulong)uVar6,extraout_RDX,param_12,param_13,param_14);
  if ((int)uVar4 < 4) {
    uVar14 = pd_error(uVar13,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                      "fft: minimum 4 points",extraout_RDX_00,param_12,param_13,param_14);
    uVar13 = extraout_RDX_01;
  }
  else {
    uVar3 = ilog2(uVar4);
    param_12 = (ulong)uVar3;
    if (uVar4 == 1 << ((byte)uVar3 & 0x1f)) {
      if (0 < (int)uVar6) {
        uVar4 = (int)uVar4 >> 1;
        lVar5 = (long)(int)uVar4;
        uVar6 = uVar4 - 1;
        lVar11 = 0;
        uVar13 = extraout_XMM0_Qa;
        do {
          lVar1 = *(long *)(param_10[1] + 8);
          lVar2 = *(long *)(param_10[2] + 8);
          if (*(long *)(*param_10 + 8) != lVar1) {
            param_13 = pcVar12;
            uVar13 = dsp_add(uVar13,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                             PTR_copy_perform_007158d8,3,*(long *)(*param_10 + 8) + lVar11,
                             lVar1 + lVar11,pcVar12,param_14,in_stack_ffffffffffffff78);
          }
          uVar13 = dsp_add(uVar13,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                           sigrfft_perform,2,lVar1 + lVar11,pcVar12,param_13,param_14,
                           in_stack_ffffffffffffff78);
          lVar8 = lVar5 * 4 + 4 + lVar1 + lVar11;
          lVar10 = lVar2 + lVar5 * 4 + lVar11;
          lVar7 = lVar10;
          param_13 = (char *)(long)(int)uVar6;
          uVar13 = dsp_add(uVar13,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                           sigrfft_flip,3,lVar8,lVar10,(char *)(long)(int)uVar6,param_14,
                           in_stack_ffffffffffffff78);
          uVar13 = dsp_add_zero(uVar13,param_2,param_3,param_4,param_5,param_6,param_7,param_8,lVar8
                                ,uVar6 & 0xfffffff8,extraout_RDX_02,lVar7,param_13,param_14,
                                in_stack_ffffffffffffff78);
          uVar13 = dsp_add_zero(uVar13,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                lVar1 + (long)(int)(uVar6 & 0xfffffff8) * 4 + lVar5 * 4 + 4 + lVar11
                                ,uVar6 & 7,extraout_RDX_03,lVar7,param_13,param_14,
                                in_stack_ffffffffffffff78);
          uVar13 = dsp_add_zero(uVar13,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                lVar10,uVar4,extraout_RDX_04,lVar7,param_13,param_14,
                                in_stack_ffffffffffffff78);
          uVar13 = dsp_add_zero(uVar13,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                lVar2 + lVar11,1,extraout_RDX_05,lVar7,param_13,param_14,
                                in_stack_ffffffffffffff78);
          lVar11 = lVar11 + (long)pcVar12 * 4;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      return;
    }
    uVar14 = pd_error(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                      param_9,"fft: blocksize (%d) not a power of 2",(ulong)uVar4,param_12,param_13,
                      param_14);
    uVar13 = extraout_RDX_06;
  }
  uVar13 = dsp_add_zero(uVar14,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                        *(undefined8 *)(param_10[1] + 8),uVar4 * uVar6,uVar13,param_12,param_13,
                        param_14,in_stack_ffffffffffffff78);
  dsp_add_zero(uVar13,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
               *(undefined8 *)(param_10[2] + 8),uVar4 * uVar6,extraout_RDX_07,param_12,param_13,
               param_14,param_15);
  return;
}


