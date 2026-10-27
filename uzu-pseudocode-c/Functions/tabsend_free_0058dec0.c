// Function : tabsend_free
// Namespace: 
// Entry    : 0058dec0
// Prototype: undefined tabsend_free(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0058dec0 - 0058df14


void tabsend_free(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                 char *param_13,undefined8 param_14)

{
  undefined8 extraout_RDX;
  long lVar1;
  long lVar2;
  
  if (0 < *(int *)(param_9 + 0x30)) {
    lVar2 = 8;
    lVar1 = 0;
    do {
      param_1 = gpointer_unset(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                               *(long *)(param_9 + 0x38) + lVar2,param_10,param_11,param_12,param_13
                               ,param_14);
      lVar1 = lVar1 + 1;
      lVar2 = lVar2 + 0x30;
      param_11 = extraout_RDX;
    } while (lVar1 < *(int *)(param_9 + 0x30));
  }
  freebytes(*(void **)(param_9 + 0x38));
  return;
}


