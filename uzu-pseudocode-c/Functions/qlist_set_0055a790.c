// Function : qlist_set
// Namespace: 
// Entry    : 0055a790
// Prototype: undefined qlist_set(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, uint param_11, undefined8 * param_12, char * param_13, undefined8 param_14)
// Body     : 0055a790 - 0055a803


void qlist_set(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
              long param_9,undefined8 param_10,uint param_11,undefined8 *param_12,char *param_13,
              undefined8 param_14)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 local_28 [2];
  undefined4 local_20;
  
  *(undefined4 *)(param_9 + 0x58) = 0;
  puVar1 = param_12;
  if (*(double **)(param_9 + 0x60) != (double *)0x0) {
    param_1 = clock_unset(*(double **)(param_9 + 0x60));
  }
  *(undefined8 *)(param_9 + 0x70) = 0;
  *(undefined4 *)(param_9 + 0x7c) = 1;
  uVar2 = binbuf_clear(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                       *(int **)(param_9 + 0x30));
  local_28[0] = 4;
  local_20 = 0;
  uVar2 = binbuf_add(uVar2,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                     *(int **)(param_9 + 0x30),param_11,param_12,puVar1,param_13,param_14);
  binbuf_add(uVar2,param_2,param_3,param_4,param_5,param_6,param_7,param_8,*(int **)(param_9 + 0x30)
             ,1,(undefined8 *)local_28,puVar1,param_13,param_14);
  return;
}


