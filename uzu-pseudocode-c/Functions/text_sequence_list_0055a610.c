// Function : text_sequence_list
// Namespace: 
// Entry    : 0055a610
// Prototype: undefined text_sequence_list(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, double param_5, double param_6, double param_7, undefined8 param_8, long param_9, undefined8 param_10, uint param_11, int * param_12, char * param_13, uint * param_14)
// Body     : 0055a610 - 0055a66f


void text_sequence_list(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       double param_5,double param_6,double param_7,undefined8 param_8,long param_9,
                       undefined8 param_10,uint param_11,int *param_12,char *param_13,uint *param_14
                       )

{
  int *piVar1;
  
  *(undefined1 *)(param_9 + 0xb1) = 1;
  piVar1 = param_12;
  if (param_11 == 0) {
    do {
      param_1 = text_sequence_doit(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                   param_9,(ulong)*(uint *)(param_9 + 0x7c),
                                   *(long *)(param_9 + 0x80),param_12,param_13,param_14);
    } while (*(char *)(param_9 + 0xb1) != '\0');
  }
  else {
    do {
      param_1 = text_sequence_doit(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                   param_9,(ulong)param_11,(long)param_12,piVar1,param_13,param_14);
    } while (*(char *)(param_9 + 0xb1) != '\0');
  }
  return;
}


