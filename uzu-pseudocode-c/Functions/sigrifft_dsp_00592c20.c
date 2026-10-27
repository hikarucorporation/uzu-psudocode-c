// Function : sigrifft_dsp
// Namespace: 
// Entry    : 00592c20
// Prototype: undefined sigrifft_dsp(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long * param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14, undefined8 param_15)
// Body     : 00592c20 - 00592e1b


void sigrifft_dsp(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 long param_9,long *param_10,undefined8 param_11,undefined8 param_12,char *param_13,
                 undefined8 param_14,undefined8 param_15)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  long lVar9;
  undefined8 extraout_RDX_02;
  code *pcVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 extraout_XMM0_Qa;
  undefined8 in_stack_ffffffffffffffa8;
  
  uVar12 = param_10[1];
  uVar3 = *(uint *)*param_10;
  uVar5 = ((uint *)*param_10)[5];
  uVar4 = *(uint *)(uVar12 + 0x14);
  uVar13 = uVar4;
  if ((int)uVar5 < (int)uVar4) {
    uVar13 = uVar5;
  }
  if (uVar5 != uVar4) {
    param_1 = pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                       "rifft~ inputs have different channel counts - ignoring extras",param_11,
                       uVar12,param_13,param_14);
    param_11 = extraout_RDX;
  }
  uVar15 = signal_setmultiout(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                              param_10 + 2,(ulong)uVar13,param_11,uVar12,param_13,param_14);
  if ((int)uVar3 < 4) {
    uVar16 = pd_error(uVar15,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                      "fft: minimum 4 points",extraout_RDX_00,uVar12,param_13,param_14);
    uVar15 = extraout_RDX_01;
  }
  else {
    uVar5 = ilog2(uVar3);
    uVar12 = (ulong)uVar5;
    if (uVar3 == 1 << ((byte)uVar5 & 0x1f)) {
      if (0 < (int)uVar13) {
        lVar7 = (long)(((int)uVar3 >> 1) + 1);
        lVar6 = (long)(((int)uVar3 >> 1) + -1);
        uVar12 = (ulong)uVar13;
        lVar2 = (ulong)uVar3 * 4;
        lVar14 = 0;
        uVar15 = extraout_XMM0_Qa;
        do {
          lVar9 = *(long *)(*param_10 + 8) + lVar14;
          lVar8 = *(long *)(param_10[1] + 8);
          lVar11 = *(long *)(param_10[2] + 8);
          lVar1 = lVar14 + lVar11;
          if (lVar8 == lVar11) {
            uVar15 = dsp_add(uVar15,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                             sigrfft_flip,3,lVar14 + lVar11 + 4,lVar11 + lVar2 + lVar14,lVar6,
                             param_14,in_stack_ffffffffffffffa8);
            lVar8 = lVar1;
            pcVar10 = (code *)PTR_copy_perform_007158d8;
            lVar11 = lVar7;
          }
          else {
            if (*(long *)(*param_10 + 8) != lVar11) {
              uVar15 = dsp_add(uVar15,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                               PTR_copy_perform_007158d8,3,lVar9,lVar1,lVar7,param_14,
                               in_stack_ffffffffffffffa8);
            }
            lVar9 = lVar8 + lVar14 + 4;
            pcVar10 = sigrfft_flip;
            lVar8 = lVar11 + lVar2 + lVar14;
            lVar11 = lVar6;
          }
          uVar15 = dsp_add(uVar15,param_2,param_3,param_4,param_5,param_6,param_7,param_8,pcVar10,3,
                           lVar9,lVar8,lVar11,param_14,in_stack_ffffffffffffffa8);
          uVar15 = dsp_add(uVar15,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                           sigrifft_perform,2,lVar1,(ulong)uVar3,lVar11,param_14,
                           in_stack_ffffffffffffffa8);
          lVar14 = lVar14 + lVar2;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
      return;
    }
    uVar16 = pd_error(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                      param_9,"fft: blocksize (%d) not a power of 2",(ulong)uVar3,uVar12,param_13,
                      param_14);
    uVar15 = extraout_RDX_02;
  }
  dsp_add_zero(uVar16,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
               *(undefined8 *)(param_10[2] + 8),uVar13 * uVar3,uVar15,uVar12,param_13,param_14,
               param_15);
  return;
}


