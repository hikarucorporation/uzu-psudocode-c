// Function : word_free
// Namespace: 
// Entry    : 0051f610
// Prototype: undefined word_free(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0051f610 - 0051f66e


void word_free(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
              long param_9,long param_10,undefined8 param_11,undefined8 param_12,char *param_13,
              undefined8 param_14)

{
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  long lVar1;
  long lVar2;
  int *piVar3;
  
  if (0 < *(int *)(param_10 + 0x18)) {
    piVar3 = *(int **)(param_10 + 0x20);
    lVar1 = 0;
    lVar2 = param_10;
    do {
      if (*piVar3 == 2) {
        param_1 = binbuf_free(*(void **)(param_9 + lVar1 * 8));
        param_11 = extraout_RDX;
      }
      else if (*piVar3 == 3) {
        param_1 = array_free(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                             *(int **)(param_9 + lVar1 * 8),lVar2,param_11,param_12,param_13,
                             param_14);
        param_11 = extraout_RDX_00;
      }
      lVar1 = lVar1 + 1;
      piVar3 = piVar3 + 6;
    } while (lVar1 < *(int *)(param_10 + 0x18));
  }
  return;
}


