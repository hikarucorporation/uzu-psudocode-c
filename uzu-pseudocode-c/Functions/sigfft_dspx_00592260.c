// Function : sigfft_dspx
// Namespace: 
// Entry    : 00592260
// Prototype: undefined sigfft_dspx(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long * param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14, undefined8 param_15)
// Body     : 00592260 - 00592480


void sigfft_dspx(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                long param_9,long *param_10,undefined8 param_11,undefined8 param_12,char *param_13,
                undefined8 param_14,undefined8 param_15)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  long lVar11;
  undefined8 extraout_RDX_03;
  undefined8 extraout_RDX_04;
  ulong uVar12;
  uint uVar13;
  code *pcVar14;
  long lVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 extraout_XMM0_Qa;
  undefined8 in_stack_ffffffffffffffa8;
  ulong uVar19;
  
  uVar9 = param_10[1];
  uVar3 = *(uint *)*param_10;
  uVar12 = (ulong)uVar3;
  uVar8 = ((uint *)*param_10)[5];
  uVar4 = *(uint *)(uVar9 + 0x14);
  uVar13 = uVar4;
  if ((int)uVar8 < (int)uVar4) {
    uVar13 = uVar8;
  }
  uVar17 = param_11;
  if (uVar8 != uVar4) {
    param_1 = pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                       "FFT inputs have different channel counts - ignoring extras",param_11,uVar9,
                       param_13,param_14);
    uVar17 = extraout_RDX;
  }
  uVar17 = signal_setmultiout(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                              param_10 + 2,(ulong)uVar13,uVar17,uVar9,param_13,param_14);
  uVar17 = signal_setmultiout(uVar17,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                              param_10 + 3,(ulong)uVar13,extraout_RDX_00,uVar9,param_13,param_14);
  if ((int)uVar3 < 4) {
    uVar18 = pd_error(uVar17,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                      "fft: minimum 4 points",extraout_RDX_01,uVar9,param_13,param_14);
    uVar17 = extraout_RDX_02;
  }
  else {
    uVar8 = ilog2(uVar3);
    uVar9 = (ulong)uVar8;
    if (uVar3 == 1 << ((byte)uVar8 & 0x1f)) {
      if (0 < (int)uVar13) {
        uVar16 = (ulong)uVar13;
        lVar15 = 0;
        uVar17 = extraout_XMM0_Qa;
        uVar9 = uVar12;
        do {
          lVar11 = *(long *)(*param_10 + 8);
          lVar5 = *(long *)(param_10[1] + 8);
          lVar6 = *(long *)(param_10[2] + 8);
          lVar1 = lVar6 + lVar15;
          lVar7 = *(long *)(param_10[3] + 8);
          lVar2 = lVar7 + lVar15;
          lVar10 = lVar2;
          uVar19 = uVar9;
          if ((lVar6 == lVar5) && (lVar7 == lVar11)) {
            lVar11 = lVar1;
            pcVar14 = sigfft_swap;
LAB_00592336:
            uVar17 = dsp_add(uVar17,param_2,param_3,param_4,param_5,param_6,param_7,param_8,pcVar14,
                             3,lVar11,lVar10,uVar9,param_14,uVar19);
          }
          else {
            if (lVar6 == lVar5) {
              uVar17 = dsp_add(uVar17,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                               PTR_copy_perform_007158d8,3,lVar5 + lVar15,lVar2,uVar9,param_14,uVar9
                              );
              lVar10 = lVar1;
              lVar11 = lVar11 + lVar15;
              pcVar14 = (code *)PTR_copy_perform_007158d8;
              goto LAB_00592336;
            }
            if (lVar6 != lVar11) {
              uVar17 = dsp_add(uVar17,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                               PTR_copy_perform_007158d8,3,lVar11 + lVar15,lVar1,uVar9,param_14,
                               uVar9);
            }
            uVar19 = uVar9;
            if (lVar7 != lVar5) {
              lVar11 = lVar5 + lVar15;
              pcVar14 = (code *)PTR_copy_perform_007158d8;
              goto LAB_00592336;
            }
          }
          uVar17 = dsp_add(uVar17,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_11,3
                           ,lVar1,lVar2,uVar9,param_14,uVar19);
          lVar15 = lVar15 + uVar12 * 4;
          uVar16 = uVar16 - 1;
          uVar9 = uVar19;
        } while (uVar16 != 0);
      }
      return;
    }
    uVar18 = pd_error(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                      param_9,"fft: blocksize (%d) not a power of 2",uVar12,uVar9,param_13,param_14)
    ;
    uVar17 = extraout_RDX_03;
  }
  uVar17 = dsp_add_zero(uVar18,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                        *(undefined8 *)(param_10[2] + 8),uVar13 * uVar3,uVar17,uVar9,param_13,
                        param_14,in_stack_ffffffffffffffa8);
  dsp_add_zero(uVar17,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
               *(undefined8 *)(param_10[3] + 8),uVar13 * uVar3,extraout_RDX_04,uVar9,param_13,
               param_14,param_15);
  return;
}


