// Function : sigsamphold_reset
// Namespace: 
// Entry    : 005941c0
// Prototype: undefined sigsamphold_reset(long param_1, undefined8 param_2, int param_3, int * param_4)
// Body     : 005941c0 - 005941db


void sigsamphold_reset(long param_1,undefined8 param_2,int param_3,int *param_4)

{
  int iVar1;
  
  iVar1 = DAT_00652e0c;
  if ((0 < param_3) && (*param_4 == 1)) {
    iVar1 = param_4[2];
  }
  *(int *)(param_1 + 0x34) = iVar1;
  return;
}


