// Function : list_prepend_free
// Namespace: 
// Entry    : 005516a0
// Prototype: undefined list_prepend_free(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 005516a0 - 0055170c


void list_prepend_free(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                      long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                      char *param_13,undefined8 param_14)

{
  long lVar1;
  int iVar2;
  undefined8 extraout_RDX;
  long lVar3;
  long lVar4;
  
  iVar2 = *(int *)(param_9 + 0x38);
  if (0 < iVar2) {
    lVar3 = 8;
    lVar4 = 0;
    do {
      lVar1 = *(long *)(param_9 + 0x40);
      if (*(int *)(lVar1 + -8 + lVar3) == 3) {
        param_1 = gpointer_unset(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                 *(long *)(lVar1 + lVar3),param_10,param_11,lVar1,param_13,param_14)
        ;
        iVar2 = *(int *)(param_9 + 0x38);
        param_11 = extraout_RDX;
      }
      lVar4 = lVar4 + 1;
      lVar3 = lVar3 + 0x28;
    } while (lVar4 < iVar2);
  }
  if (*(void **)(param_9 + 0x40) == (void *)0x0) {
    return;
  }
  freebytes(*(void **)(param_9 + 0x40));
  return;
}


