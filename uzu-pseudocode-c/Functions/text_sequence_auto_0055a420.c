// Function : text_sequence_auto
// Namespace: 
// Entry    : 0055a420
// Prototype: undefined text_sequence_auto(ulong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, double param_5, double param_6, double param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, int * param_12, char * param_13, uint * param_14)
// Body     : 0055a420 - 0055a4bd


void text_sequence_auto(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       double param_5,double param_6,double param_7,undefined8 param_8,long param_9,
                       undefined8 param_10,undefined8 param_11,int *param_12,char *param_13,
                       uint *param_14)

{
  float fVar1;
  
  *(undefined8 *)(param_9 + 0xa8) = 0;
  if (*(char *)(param_9 + 0xb2) != '\0') {
    param_1 = clock_unset(*(double **)(param_9 + 0x98));
  }
  *(undefined1 *)(param_9 + 0xb2) = 1;
  *(undefined8 *)(param_9 + 0xa8) = 0;
  while( true ) {
    *(undefined1 *)(param_9 + 0xb1) = 1;
    do {
      param_1 = text_sequence_doit(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                   param_9,(ulong)*(uint *)(param_9 + 0x7c),
                                   *(long *)(param_9 + 0x80),param_12,param_13,param_14);
    } while (*(char *)(param_9 + 0xb1) != '\0');
    fVar1 = *(float *)(param_9 + 0xa0);
    param_1 = (ulong)(uint)fVar1;
    param_2 = 0;
    if (0.0 < fVar1) break;
    if (*(char *)(param_9 + 0xb2) == '\0') {
      return;
    }
  }
  if (*(char *)(param_9 + 0xb2) == '\0') {
    return;
  }
  clock_delay((double)fVar1,*(double **)(param_9 + 0x98));
  return;
}


