// Function : qlist_print
// Namespace: 
// Entry    : 0055a9f0
// Prototype: undefined qlist_print(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, long param_12, char * param_13, undefined8 param_14)
// Body     : 0055a9f0 - 0055aa0b


void qlist_print(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                long param_9,undefined8 param_10,undefined8 param_11,long param_12,char *param_13,
                undefined8 param_14)

{
  undefined8 extraout_RDX;
  undefined8 uVar1;
  
  uVar1 = post(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
               "--------- textfile or qlist contents: -----------");
  binbuf_print(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
               *(int **)(param_9 + 0x30),param_10,extraout_RDX,param_12,param_13,param_14);
  return;
}


