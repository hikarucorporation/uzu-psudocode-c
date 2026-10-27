// Function : qlist_add
// Namespace: 
// Entry    : 0055a850
// Prototype: undefined qlist_add(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, uint param_11, undefined8 * param_12, char * param_13, undefined8 param_14)
// Body     : 0055a850 - 0055a88b


void qlist_add(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
              long param_9,undefined8 param_10,uint param_11,undefined8 *param_12,char *param_13,
              undefined8 param_14)

{
  undefined8 uVar1;
  undefined4 local_18 [2];
  undefined4 local_10;
  
  local_18[0] = 4;
  local_10 = 0;
  uVar1 = binbuf_add(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                     *(int **)(param_9 + 0x30),param_11,param_12,param_12,param_13,param_14);
  binbuf_add(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,*(int **)(param_9 + 0x30)
             ,1,(undefined8 *)local_18,param_12,param_13,param_14);
  return;
}


