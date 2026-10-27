// Function : tabplay_tilde_dsp
// Namespace: 
// Entry    : 0058cf60
// Prototype: undefined tabplay_tilde_dsp(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 * param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0058cf60 - 0058d03d


void tabplay_tilde_dsp(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                      long param_9,undefined8 *param_10,undefined8 param_11,undefined8 param_12,
                      char *param_13,undefined8 param_14)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 extraout_XMM0_Qa;
  undefined8 in_stack_ffffffffffffffb8;
  char local_3c [4];
  undefined8 local_38;
  
  uVar5 = signal_setmultiout(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                             param_10,(ulong)*(uint *)(param_9 + 0x48),param_11,param_12,param_13,
                             param_14);
  iVar1 = *(int *)(param_9 + 0x48);
  if (0 < iVar1) {
    lVar2 = 0;
    lVar3 = 0;
    do {
      if (*(char *)**(undefined8 **)(*(long *)(param_9 + 0x50) + lVar2) != '\0') {
        dsparray_get_array(uVar5,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                           (long *)(*(long *)(param_9 + 0x50) + lVar2),local_3c,&local_38,1,param_13
                           ,param_14);
        iVar1 = *(int *)(param_9 + 0x48);
        uVar5 = extraout_XMM0_Qa;
      }
      lVar3 = lVar3 + 1;
      lVar2 = lVar2 + 0x30;
    } while (lVar3 < iVar1);
    if (0 < iVar1) {
      lVar3 = 0;
      lVar2 = 0;
      do {
        lVar4 = (long)*(int *)*param_10;
        uVar5 = dsp_add(uVar5,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                        tabplay_tilde_perform,4,param_9,*(long *)(param_9 + 0x50) + lVar3,
                        (int)lVar2 * lVar4 * 4 + *(long *)((int *)*param_10 + 2),lVar4,
                        in_stack_ffffffffffffffb8);
        lVar2 = lVar2 + 1;
        lVar3 = lVar3 + 0x30;
      } while (lVar2 < *(int *)(param_9 + 0x48));
    }
  }
  return;
}


