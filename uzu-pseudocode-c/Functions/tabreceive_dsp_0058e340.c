// Function : tabreceive_dsp
// Namespace: 
// Entry    : 0058e340
// Prototype: undefined tabreceive_dsp(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 * param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0058e340 - 0058e41a


void tabreceive_dsp(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
                             param_10,(ulong)*(uint *)(param_9 + 0x30),param_11,param_12,param_13,
                             param_14);
  iVar1 = *(int *)(param_9 + 0x30);
  if (0 < iVar1) {
    lVar2 = 0;
    lVar3 = 0;
    do {
      if (*(char *)**(undefined8 **)(*(long *)(param_9 + 0x38) + lVar2) != '\0') {
        dsparray_get_array(uVar5,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                           (long *)(*(long *)(param_9 + 0x38) + lVar2),local_3c,&local_38,1,param_13
                           ,param_14);
        iVar1 = *(int *)(param_9 + 0x30);
        uVar5 = extraout_XMM0_Qa;
      }
      lVar3 = lVar3 + 1;
      lVar2 = lVar2 + 0x30;
    } while (lVar3 < iVar1);
    if (0 < iVar1) {
      lVar2 = 0;
      lVar3 = 0;
      do {
        lVar4 = (long)*(int *)*param_10;
        uVar5 = dsp_add(uVar5,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                        tabreceive_perform,3,*(long *)(param_9 + 0x38) + lVar2,
                        (int)lVar3 * lVar4 * 4 + *(long *)((int *)*param_10 + 2),lVar4,param_14,
                        in_stack_ffffffffffffffb8);
        lVar3 = lVar3 + 1;
        lVar2 = lVar2 + 0x30;
      } while (lVar3 < *(int *)(param_9 + 0x30));
    }
  }
  return;
}


