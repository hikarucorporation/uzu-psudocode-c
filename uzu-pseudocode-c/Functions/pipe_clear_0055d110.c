// Function : pipe_clear
// Namespace: 
// Entry    : 0055d110
// Prototype: undefined pipe_clear(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0055d110 - 0055d1ac


void pipe_clear(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9,long param_10,undefined8 param_11,undefined8 param_12,char *param_13,
               undefined8 param_14)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  void *pvVar3;
  int iVar4;
  
  puVar1 = *(undefined8 **)(param_9 + 0x50);
  while (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_9 + 0x50) = puVar1[1];
    lVar2 = puVar1[2];
    pvVar3 = (void *)puVar1[3];
    iVar4 = *(int *)(lVar2 + 0x34);
    if (iVar4 != 0) {
      do {
        param_1 = gpointer_unset(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                 (long)pvVar3,param_10,param_11,param_12,param_13,param_14);
        pvVar3 = (void *)((long)pvVar3 + 0x18);
        iVar4 = iVar4 + -1;
        param_11 = extraout_RDX_00;
      } while (iVar4 != 0);
      pvVar3 = (void *)puVar1[3];
    }
    freebytes(pvVar3);
    clock_free((double *)*puVar1);
    param_10 = (long)*(int *)(lVar2 + 0x30) * 8 + 0x20;
    param_1 = freebytes(puVar1);
    param_11 = extraout_RDX;
    puVar1 = *(undefined8 **)(param_9 + 0x50);
  }
  return;
}


