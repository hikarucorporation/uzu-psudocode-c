// Function : voutlet_dsp
// Namespace: 
// Entry    : 0051b0d0
// Prototype: undefined voutlet_dsp(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long * param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14, undefined8 param_15)
// Body     : 0051b0d0 - 0051b203


void voutlet_dsp(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                long param_9,long *param_10,undefined8 param_11,undefined8 param_12,char *param_13,
                undefined8 param_14,undefined8 param_15)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 extraout_RDX;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  
  if (*(long *)(param_9 + 0x68) != 0) {
    uVar6 = (ulong)*(uint *)(param_9 + 0x40);
    uVar10 = reblocker_resize(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                              (long *)(param_9 + 0x68),*(uint *)(param_9 + 0x60),
                              *(int *)(*param_10 + 0x14),*(uint *)(param_9 + 0x40));
    puVar2 = (undefined4 *)*param_10;
    uVar1 = puVar2[5];
    *(uint *)(param_9 + 0x60) = uVar1;
    puVar3 = *(undefined8 **)(param_9 + 0x58);
    if ((*(byte *)(param_9 + 0x70) & 2) != 0) {
      signal_setborrowed(uVar10,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                         (undefined4 *)*puVar3,puVar2,extraout_RDX,uVar6,param_13,param_14);
      return;
    }
    if (puVar3 != (undefined8 *)0x0) {
      uVar10 = signal_setmultiout(uVar10,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                  puVar3,(ulong)uVar1,extraout_RDX,uVar6,param_13,param_14);
      puVar5 = PTR_voutlet_perform_007156a8;
      if ((*(byte *)(param_9 + 0x70) & 1) != 0) {
        piVar4 = (int *)*param_10;
        dsp_add_copy(uVar10,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                     *(undefined8 *)(piVar4 + 2),*(undefined8 *)(**(long **)(param_9 + 0x58) + 8),
                     piVar4[5] * *piVar4,**(long **)(param_9 + 0x58),param_13,param_14,param_15);
        return;
      }
      uVar6 = (ulong)*(uint *)(param_9 + 0x60);
      if (0 < (int)*(uint *)(param_9 + 0x60)) {
        lVar9 = 0;
        uVar7 = 0;
        do {
          lVar8 = (long)*(int *)*param_10;
          uVar10 = dsp_add(uVar10,param_2,param_3,param_4,param_5,param_6,param_7,param_8,puVar5,5,
                           param_9,(int)uVar7 * lVar8 * 4 + *(long *)((int *)*param_10 + 2),
                           *(undefined8 *)(*(long *)(param_9 + 0x68) + lVar9),
                           (ulong)(uVar7 == (int)uVar6 - 1),lVar8);
          uVar7 = uVar7 + 1;
          uVar6 = (ulong)*(int *)(param_9 + 0x60);
          lVar9 = lVar9 + 0x48;
        } while ((long)uVar7 < (long)uVar6);
      }
    }
  }
  return;
}


