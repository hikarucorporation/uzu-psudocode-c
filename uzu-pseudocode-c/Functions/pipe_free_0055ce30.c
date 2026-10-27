// Function : pipe_free
// Namespace: 
// Entry    : 0055ce30
// Prototype: undefined pipe_free(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0055ce30 - 0055cef5


void pipe_free(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
              long param_9,long param_10,undefined8 param_11,undefined8 param_12,char *param_13,
              undefined8 param_14)

{
  long lVar1;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  void *pvVar2;
  int iVar3;
  undefined8 *puVar4;
  
  puVar4 = *(undefined8 **)(param_9 + 0x50);
  while (puVar4 != (undefined8 *)0x0) {
    *(undefined8 *)(param_9 + 0x50) = puVar4[1];
    lVar1 = puVar4[2];
    pvVar2 = (void *)puVar4[3];
    iVar3 = *(int *)(lVar1 + 0x34);
    if (iVar3 != 0) {
      do {
        param_1 = gpointer_unset(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                 (long)pvVar2,param_10,param_11,param_12,param_13,param_14);
        pvVar2 = (void *)((long)pvVar2 + 0x18);
        iVar3 = iVar3 + -1;
        param_11 = extraout_RDX_00;
      } while (iVar3 != 0);
      pvVar2 = (void *)puVar4[3];
    }
    freebytes(pvVar2);
    clock_free((double *)*puVar4);
    param_10 = (long)*(int *)(lVar1 + 0x30) * 8 + 0x20;
    param_1 = freebytes(puVar4);
    param_11 = extraout_RDX;
    puVar4 = *(undefined8 **)(param_9 + 0x50);
  }
  freebytes(*(void **)(param_9 + 0x40));
  freebytes(*(void **)(param_9 + 0x48));
  return;
}


