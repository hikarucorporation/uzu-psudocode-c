// Function : qlist_add2
// Namespace: 
// Entry    : 0055a890
// Prototype: undefined qlist_add2(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, uint param_11, undefined8 * param_12, char * param_13, undefined8 param_14)
// Body     : 0055a890 - 0055a89d


void qlist_add2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9,undefined8 param_10,uint param_11,undefined8 *param_12,char *param_13,
               undefined8 param_14)

{
  binbuf_add(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
             *(int **)(param_9 + 0x30),param_11,param_12,param_12,param_13,param_14);
  return;
}


