// Function : snake_out_tilde_dsp
// Namespace: 
// Entry    : 00597d70
// Prototype: undefined snake_out_tilde_dsp(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long * param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00597d70 - 00597e0f


void snake_out_tilde_dsp(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                        ,undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8
                        ,long param_9,long *param_10,undefined8 param_11,undefined8 param_12,
                        char *param_13,undefined8 param_14)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  undefined8 in_RAX;
  uint uVar4;
  ulong uVar5;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  uVar2 = *(uint *)(param_9 + 0x34);
  if (0 < (int)uVar2) {
    uVar3 = *(uint *)(*param_10 + 0x14);
    if ((int)uVar2 < (int)*(uint *)(*param_10 + 0x14)) {
      uVar3 = uVar2;
    }
    uVar5 = (ulong)uVar3;
    lVar6 = 8;
    lVar7 = 0;
    do {
      lVar1 = lVar7 + 1;
      uVar8 = signal_setmultiout(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                 (undefined8 *)((long)param_10 + lVar6),1,param_11,uVar5,param_13,
                                 param_14);
      if (lVar7 < (int)uVar3) {
        uVar2 = *(uint *)*param_10;
        uVar4 = (int)lVar7 * uVar2;
        uVar5 = (ulong)uVar4;
        param_1 = dsp_add_copy(uVar8,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                               (long)(int)uVar4 * 4 + *(long *)((uint *)*param_10 + 2),
                               *(undefined8 *)(param_10[lVar7 + 1] + 8),uVar2,uVar5,param_13,
                               param_14,in_RAX);
        param_11 = extraout_RDX_01;
      }
      else {
        param_1 = dsp_add_zero(uVar8,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                               *(undefined8 *)(param_10[lVar7 + 1] + 8),*(uint *)*param_10,
                               extraout_RDX_00,uVar5,param_13,param_14,in_RAX);
        param_11 = extraout_RDX;
      }
      lVar6 = lVar6 + 8;
      lVar7 = lVar1;
    } while (lVar1 < *(int *)(param_9 + 0x34));
  }
  return;
}


