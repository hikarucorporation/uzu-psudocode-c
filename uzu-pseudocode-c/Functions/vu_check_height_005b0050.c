// Function : vu_check_height
// Namespace: 
// Entry    : 005b0050
// Prototype: undefined vu_check_height(long param_1, int param_2)
// Body     : 005b0050 - 005b008f


void vu_check_height(long param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 2;
  if (2 < param_2 / 0x28) {
    iVar1 = param_2 / 0x28;
  }
  *(int *)(param_1 + 0x490) = iVar1 + -1;
  *(int *)(param_1 + 0x40) = iVar1 * *(int *)(*(long *)(param_1 + 0x30) + 0xec) * 0x28;
  return;
}


