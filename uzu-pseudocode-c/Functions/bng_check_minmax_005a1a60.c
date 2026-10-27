// Function : bng_check_minmax
// Namespace: 
// Entry    : 005a1a60
// Prototype: undefined bng_check_minmax(long param_1, int param_2, int param_3)
// Body     : 005a1a60 - 005a1a8c


void bng_check_minmax(long param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_2;
  if (param_3 < param_2) {
    iVar2 = param_3;
    param_3 = param_2;
  }
  iVar1 = 10;
  if (10 < iVar2) {
    iVar1 = iVar2;
  }
  iVar2 = 0x32;
  if (0x32 < param_3) {
    iVar2 = param_3;
  }
  *(int *)(param_1 + 0x494) = iVar1;
  *(int *)(param_1 + 0x498) = iVar2;
  return;
}


