// Function : text_sequence_free
// Namespace: 
// Entry    : 0055a300
// Prototype: undefined text_sequence_free(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0055a300 - 0055a330


void text_sequence_free(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                       long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                       char *param_13,undefined8 param_14)

{
  undefined8 extraout_RDX;
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = (long)*(int *)(param_9 + 0x7c) << 4;
  freebytes(*(void **)(param_9 + 0x80));
  uVar2 = clock_free(*(double **)(param_9 + 0x98));
  gpointer_unset(uVar2,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9 + 0x38,lVar1,
                 extraout_RDX,param_12,param_13,param_14);
  return;
}


