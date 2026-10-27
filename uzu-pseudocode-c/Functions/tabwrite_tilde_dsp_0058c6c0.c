// Function : tabwrite_tilde_dsp
// Namespace: 
// Entry    : 0058c6c0
// Prototype: undefined tabwrite_tilde_dsp(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long * param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0058c6c0 - 0058c7a8


void tabwrite_tilde_dsp(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                       long param_9,long *param_10,undefined8 param_11,undefined8 param_12,
                       char *param_13,undefined8 param_14)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 extraout_XMM0_Qa;
  undefined8 in_stack_ffffffffffffffb8;
  char local_3c [4];
  undefined8 local_38;
  
  uVar1 = *(uint *)(param_9 + 0x30);
  uVar2 = *(uint *)(*param_10 + 0x14);
  if ((int)uVar1 <= (int)*(uint *)(*param_10 + 0x14)) {
    uVar2 = uVar1;
  }
  if (0 < (int)uVar1) {
    lVar4 = 0;
    lVar5 = 0;
    do {
      if (*(char *)**(undefined8 **)(*(long *)(param_9 + 0x38) + lVar4) != '\0') {
        dsparray_get_array(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                           (long *)(*(long *)(param_9 + 0x38) + lVar4),local_3c,&local_38,1,param_13
                           ,param_14);
        uVar1 = *(uint *)(param_9 + 0x30);
        param_1 = extraout_XMM0_Qa;
      }
      lVar5 = lVar5 + 1;
      lVar4 = lVar4 + 0x30;
    } while (lVar5 < (int)uVar1);
  }
  if (0 < (int)uVar2) {
    lVar4 = 0;
    iVar3 = 0;
    do {
      lVar5 = (long)*(int *)*param_10;
      param_1 = dsp_add(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                        tabwrite_tilde_perform,3,*(long *)(param_9 + 0x38) + lVar4,
                        lVar5 * iVar3 * 4 + *(long *)((int *)*param_10 + 2),lVar5,param_14,
                        in_stack_ffffffffffffffb8);
      iVar3 = iVar3 + 1;
      lVar4 = lVar4 + 0x30;
    } while ((ulong)uVar2 * 0x30 != lVar4);
  }
  return;
}


