// Function : tabplay_tilde_free
// Namespace: 
// Entry    : 0058cef0
// Prototype: undefined tabplay_tilde_free(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0058cef0 - 0058cf54


void tabplay_tilde_free(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                       long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                       char *param_13,undefined8 param_14)

{
  undefined8 extraout_RDX;
  undefined8 uVar1;
  undefined8 extraout_RDX_00;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = clock_free(*(double **)(param_9 + 0x40));
  if (0 < *(int *)(param_9 + 0x48)) {
    lVar3 = 8;
    lVar2 = 0;
    uVar1 = extraout_RDX;
    do {
      uVar4 = gpointer_unset(uVar4,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                             *(long *)(param_9 + 0x50) + lVar3,param_10,uVar1,param_12,param_13,
                             param_14);
      lVar2 = lVar2 + 1;
      lVar3 = lVar3 + 0x30;
      uVar1 = extraout_RDX_00;
    } while (lVar2 < *(int *)(param_9 + 0x48));
  }
  freebytes(*(void **)(param_9 + 0x50));
  return;
}


