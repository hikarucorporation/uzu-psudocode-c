// Function : snake_in_tilde_dsp
// Namespace: 
// Entry    : 00597c80
// Prototype: undefined snake_in_tilde_dsp(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 * param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00597c80 - 00597cea


void snake_in_tilde_dsp(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                       long param_9,undefined8 *param_10,undefined8 param_11,undefined8 param_12,
                       char *param_13,undefined8 param_14)

{
  ulong uVar1;
  uint uVar2;
  undefined8 unaff_RBX;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = signal_setmultiout(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                             param_10 + *(int *)(param_9 + 0x34),(long)*(int *)(param_9 + 0x34),
                             param_11,param_12,param_13,param_14);
  uVar1 = (ulong)*(uint *)(param_9 + 0x34);
  if (0 < (int)*(uint *)(param_9 + 0x34)) {
    lVar3 = 0;
    do {
      uVar2 = (int)lVar3 * *(uint *)*param_10;
      uVar4 = dsp_add_copy(uVar4,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                           *(undefined8 *)(param_10[lVar3] + 8),
                           (long)(int)uVar2 * 4 + *(long *)(param_10[(int)uVar1] + 8),
                           *(uint *)*param_10,(ulong)uVar2,param_13,param_14,unaff_RBX);
      lVar3 = lVar3 + 1;
      uVar1 = (ulong)*(int *)(param_9 + 0x34);
    } while (lVar3 < (long)uVar1);
  }
  return;
}


