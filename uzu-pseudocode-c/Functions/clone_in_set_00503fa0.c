// Function : clone_in_set
// Namespace: 
// Entry    : 00503fa0
// Prototype: undefined clone_in_set(float param_1, long param_2)
// Body     : 00503fa0 - 00503fb9


void clone_in_set(float param_1,long param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  if ((iVar1 < 0) || (*(int *)(*(long *)(param_2 + 8) + 0x38) <= iVar1)) {
    iVar1 = 0;
  }
  *(int *)(*(long *)(param_2 + 8) + 0x80) = iVar1;
  return;
}


