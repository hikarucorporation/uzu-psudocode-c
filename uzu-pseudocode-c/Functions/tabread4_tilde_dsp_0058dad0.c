// Function : tabread4_tilde_dsp
// Namespace: 
// Entry    : 0058dad0
// Prototype: undefined tabread4_tilde_dsp(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long * param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0058dad0 - 0058dc03


void tabread4_tilde_dsp(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                       long param_9,long *param_10,undefined8 param_11,undefined8 param_12,
                       char *param_13,undefined8 param_14)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 extraout_XMM0_Qa;
  char local_3c [4];
  undefined8 local_38;
  
  iVar1 = *(int *)*param_10;
  lVar6 = (long)iVar1;
  uVar8 = signal_setmultiout(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                             param_10 + 2,(ulong)*(uint *)(param_9 + 0x30),param_11,param_12,
                             param_13,param_14);
  iVar2 = *(int *)(param_9 + 0x30);
  if (0 < iVar2) {
    lVar5 = 0;
    lVar7 = 0;
    do {
      if (*(char *)**(undefined8 **)(*(long *)(param_9 + 0x38) + lVar5) != '\0') {
        dsparray_get_array(uVar8,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                           (long *)(*(long *)(param_9 + 0x38) + lVar5),local_3c,&local_38,1,param_13
                           ,param_14);
        iVar2 = *(int *)(param_9 + 0x30);
        uVar8 = extraout_XMM0_Qa;
      }
      lVar7 = lVar7 + 1;
      lVar5 = lVar5 + 0x30;
    } while (lVar7 < iVar2);
    if (0 < iVar2) {
      lVar7 = 0;
      lVar5 = 0;
      uVar4 = 0;
      do {
        uVar3 = (int)uVar4 >> 0x1f;
        uVar8 = dsp_add(uVar8,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                        tabread4_tilde_perform,5,*(long *)(param_9 + 0x38) + lVar7,
                        (long)((int)((long)((ulong)uVar3 << 0x20 | uVar4 & 0xffffffff) %
                                    (long)*(int *)(*param_10 + 0x14)) * iVar1) * 4 +
                        *(long *)(*param_10 + 8),
                        (int)((long)((ulong)uVar3 << 0x20 | uVar4 & 0xffffffff) %
                             (long)*(int *)(param_10[1] + 0x14)) * lVar6 * 4 +
                        *(long *)(param_10[1] + 8),*(long *)(param_10[2] + 8) + lVar5,lVar6);
        uVar4 = uVar4 + 1;
        lVar5 = lVar5 + lVar6 * 4;
        lVar7 = lVar7 + 0x30;
      } while ((long)uVar4 < (long)*(int *)(param_9 + 0x30));
    }
  }
  return;
}


