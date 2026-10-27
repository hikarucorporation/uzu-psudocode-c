// Function : white_seed
// Namespace: 
// Entry    : 00572230
// Prototype: undefined white_seed(long param_1, undefined8 param_2, int param_3, int * param_4)
// Body     : 00572230 - 00572254


void white_seed(long param_1,undefined8 param_2,int param_3,int *param_4)

{
  ulong uVar1;
  
  uVar1 = cyget_seed(param_2,param_3,param_4,*(int *)(param_1 + 0x40));
  cyrandom_init((uint *)(param_1 + 0x34),(int)uVar1);
  return;
}


