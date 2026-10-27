// Function : gpointer_copy
// Namespace: 
// Entry    : 0051f1b0
// Prototype: undefined gpointer_copy(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 * param_9, undefined8 * param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14, undefined1 param_15)
// Body     : 0051f1b0 - 0051f1d5


void gpointer_copy(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 *param_9,undefined8 *param_10,undefined8 param_11,undefined8 param_12,
                  char *param_13,undefined8 param_14,undefined1 param_15)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_9[2];
  param_10[2] = lVar1;
  uVar2 = *param_9;
  uVar3 = param_9[1];
  *param_10 = uVar2;
  param_10[1] = uVar3;
  if (lVar1 == 0) {
    bug(uVar2,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"gpointer_copy",param_10,
        param_11,param_12,param_13,param_14,param_15);
    return;
  }
  *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
  return;
}


