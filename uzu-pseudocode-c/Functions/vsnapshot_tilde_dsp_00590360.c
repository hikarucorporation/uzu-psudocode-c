// Function : vsnapshot_tilde_dsp
// Namespace: 
// Entry    : 00590360
// Prototype: undefined vsnapshot_tilde_dsp(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 * param_10, undefined8 param_11, undefined8 param_12, undefined8 param_13, undefined8 param_14, undefined8 param_15)
// Body     : 00590360 - 005903e1


void vsnapshot_tilde_dsp(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                        ,undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8
                        ,long param_9,undefined8 *param_10,undefined8 param_11,undefined8 param_12,
                        undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  int iVar1;
  void *pvVar2;
  int *piVar3;
  float fVar4;
  
  piVar3 = (int *)*param_10;
  iVar1 = *piVar3;
  if (iVar1 != *(int *)(param_9 + 0x30)) {
    if (*(void **)(param_9 + 0x38) != (void *)0x0) {
      freebytes(*(void **)(param_9 + 0x38));
    }
    pvVar2 = getbytes((long)iVar1 << 2);
    *(void **)(param_9 + 0x38) = pvVar2;
    *(undefined4 *)(param_9 + 0x34) = 0;
    *(int *)(param_9 + 0x30) = iVar1;
    piVar3 = (int *)*param_10;
  }
  fVar4 = (float)piVar3[4] * DAT_005d908c;
  *(float *)(param_9 + 0x44) = fVar4;
  dsp_add((ulong)(uint)fVar4,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
          vsnapshot_tilde_perform,2,*(undefined8 *)(piVar3 + 2),param_9,param_13,param_14,param_15);
  return;
}


