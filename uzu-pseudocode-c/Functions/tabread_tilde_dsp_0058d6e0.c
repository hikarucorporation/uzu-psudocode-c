// Function : tabread_tilde_dsp
// Namespace: 
// Entry    : 0058d6e0
// Prototype: undefined tabread_tilde_dsp(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 * param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0058d6e0 - 0058d7da


void tabread_tilde_dsp(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                      long param_9,undefined8 *param_10,undefined8 param_11,undefined8 param_12,
                      char *param_13,undefined8 param_14)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 extraout_XMM0_Qa;
  undefined8 in_stack_ffffffffffffffb8;
  char local_3c [4];
  undefined8 local_38;
  
  uVar6 = signal_setmultiout(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                             param_10 + 1,(ulong)*(uint *)(param_9 + 0x30),param_11,param_12,
                             param_13,param_14);
  iVar2 = *(int *)(param_9 + 0x30);
  if (0 < iVar2) {
    lVar3 = 0;
    lVar5 = 0;
    do {
      if (*(char *)**(undefined8 **)(*(long *)(param_9 + 0x38) + lVar3) != '\0') {
        dsparray_get_array(uVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                           (long *)(*(long *)(param_9 + 0x38) + lVar3),local_3c,&local_38,1,param_13
                           ,param_14);
        iVar2 = *(int *)(param_9 + 0x30);
        uVar6 = extraout_XMM0_Qa;
      }
      lVar5 = lVar5 + 1;
      lVar3 = lVar3 + 0x30;
    } while (lVar5 < iVar2);
    if (0 < iVar2) {
      lVar3 = 0;
      uVar4 = 0;
      do {
        piVar1 = (int *)*param_10;
        iVar2 = *piVar1;
        uVar6 = dsp_add(uVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                        tabread_tilde_perform,4,*(long *)(param_9 + 0x38) + lVar3,
                        (long)((int)((long)((ulong)(uint)((int)uVar4 >> 0x1f) << 0x20 |
                                           uVar4 & 0xffffffff) % (long)piVar1[5]) * iVar2) * 4 +
                        *(long *)(piVar1 + 2),
                        (long)(iVar2 * (int)uVar4) * 4 + *(long *)(param_10[1] + 8),(long)iVar2,
                        in_stack_ffffffffffffffb8);
        uVar4 = uVar4 + 1;
        lVar3 = lVar3 + 0x30;
      } while ((long)uVar4 < (long)*(int *)(param_9 + 0x30));
    }
  }
  return;
}


