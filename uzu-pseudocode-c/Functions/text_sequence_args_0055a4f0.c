// Function : text_sequence_args
// Namespace: 
// Entry    : 0055a4f0
// Prototype: undefined text_sequence_args(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, uint param_11, undefined8 * param_12)
// Body     : 0055a4f0 - 0055a5cd


void text_sequence_args(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                       long param_9,undefined8 param_10,uint param_11,undefined8 *param_12)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  
  puVar4 = resizebytes(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                       *(void **)(param_9 + 0x80),(long)*(int *)(param_9 + 0x7c) << 4,
                       (long)(int)param_11 << 4);
  *(undefined8 **)(param_9 + 0x80) = puVar4;
  if (0 < (int)param_11) {
    uVar3 = param_12[1];
    *puVar4 = *param_12;
    puVar4[1] = uVar3;
    if (param_11 != 1) {
      lVar5 = 1;
      if (param_11 != 2) {
        lVar5 = 1;
        lVar6 = 0;
        do {
          puVar4 = (undefined8 *)((long)param_12 + lVar6 + 0x10);
          uVar3 = puVar4[1];
          puVar2 = (undefined8 *)(*(long *)(param_9 + 0x80) + 0x10 + lVar6);
          *puVar2 = *puVar4;
          puVar2[1] = uVar3;
          puVar4 = (undefined8 *)((long)param_12 + lVar6 + 0x20);
          uVar3 = puVar4[1];
          puVar2 = (undefined8 *)(*(long *)(param_9 + 0x80) + 0x20 + lVar6);
          *puVar2 = *puVar4;
          puVar2[1] = uVar3;
          lVar6 = lVar6 + 0x20;
          lVar1 = lVar5 - ((ulong)param_11 - 1 & 0xfffffffffffffffe);
          lVar5 = lVar5 + 2;
        } while (lVar1 != -1);
      }
      if (((ulong)param_11 - 1 & 1) != 0) {
        uVar3 = (param_12 + lVar5 * 2)[1];
        puVar4 = (undefined8 *)(*(long *)(param_9 + 0x80) + lVar5 * 0x10);
        *puVar4 = param_12[lVar5 * 2];
        puVar4[1] = uVar3;
      }
    }
  }
  *(uint *)(param_9 + 0x7c) = param_11;
  return;
}


