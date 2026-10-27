// Function : ex_dzdetect
// Namespace: 
// Entry    : 005b3200
// Prototype: undefined ex_dzdetect(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 005b3200 - 005b3262


void ex_dzdetect(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                long param_9)

{
  uint uVar1;
  
  if (*(int *)(param_9 + 0x34) != 0) {
    return;
  }
  uVar1 = *(uint *)(param_9 + 0x30);
  if ((((uVar1 & 6) != 0) && ((uVar1 & 5) != 0)) && ((uVar1 & 3) != 0)) {
    param_1 = post(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                   "expr -- ex_dzdetect internal error");
  }
  post(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
       "%s divide by zero detected - \'%s\'");
  *(byte *)(param_9 + 0x34) = *(byte *)(param_9 + 0x34) | 1;
  return;
}


