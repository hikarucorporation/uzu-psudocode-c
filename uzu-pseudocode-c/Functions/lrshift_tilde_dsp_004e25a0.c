// Function : lrshift_tilde_dsp
// Namespace: 
// Entry    : 004e25a0
// Prototype: undefined lrshift_tilde_dsp(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long * param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 004e25a0 - 004e26ac


void lrshift_tilde_dsp(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                      long param_9,long *param_10,undefined8 param_11,undefined8 param_12,
                      char *param_13,undefined8 param_14)

{
  uint uVar1;
  uint uVar2;
  undefined8 in_RAX;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  undefined8 uVar8;
  
  uVar1 = *(uint *)*param_10;
  lVar6 = (long)(int)uVar1;
  uVar2 = *(uint *)(param_9 + 0x30);
  if ((int)uVar1 < (int)*(uint *)(param_9 + 0x30)) {
    uVar2 = uVar1;
  }
  uVar7 = -uVar1;
  if ((int)-uVar1 <= (int)uVar2) {
    uVar7 = uVar2;
  }
  uVar8 = signal_setmultiout(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                             param_10 + 1,(ulong)((uint *)*param_10)[5],param_11,(ulong)uVar2,
                             param_13,param_14);
  lVar3 = *param_10;
  if (0 < *(int *)(lVar3 + 0x14)) {
    if ((int)uVar7 < 0) {
      lVar5 = 0;
      lVar4 = lVar6 * 4;
      do {
        uVar8 = dsp_add(uVar8,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                        rightshift_perform,4,*(long *)(lVar3 + 8) + lVar4,
                        *(long *)(param_10[1] + 8) + lVar4,lVar6,(ulong)-uVar7,in_RAX);
        lVar5 = lVar5 + 1;
        lVar3 = *param_10;
        lVar4 = lVar4 + lVar6 * 4;
      } while (lVar5 < *(int *)(lVar3 + 0x14));
    }
    else {
      lVar4 = 0;
      lVar5 = 0;
      do {
        uVar8 = dsp_add(uVar8,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                        leftshift_perform,4,*(long *)(lVar3 + 8) + lVar4,
                        *(long *)(param_10[1] + 8) + lVar4,lVar6,(ulong)uVar7,in_RAX);
        lVar5 = lVar5 + 1;
        lVar3 = *param_10;
        lVar4 = lVar4 + lVar6 * 4;
      } while (lVar5 < *(int *)(lVar3 + 0x14));
    }
  }
  return;
}


