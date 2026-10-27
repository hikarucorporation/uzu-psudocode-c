// Function : append_free
// Namespace: 
// Entry    : 005afdf0
// Prototype: undefined append_free(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 005afdf0 - 005afe11


void append_free(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                char *param_13,undefined8 param_14)

{
  undefined8 extraout_RDX;
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = (long)*(int *)(param_9 + 0x50) << 4;
  uVar2 = freebytes(*(void **)(param_9 + 0x58));
  gpointer_unset(uVar2,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9 + 0x30,lVar1,
                 extraout_RDX,param_12,param_13,param_14);
  return;
}


