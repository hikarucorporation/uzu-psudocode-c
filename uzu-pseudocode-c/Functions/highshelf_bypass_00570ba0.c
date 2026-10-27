// Function : highshelf_bypass
// Namespace: 
// Entry    : 00570ba0
// Prototype: undefined highshelf_bypass(float param_1, long param_2)
// Body     : 00570ba0 - 00570bae


void highshelf_bypass(float param_1,long param_2)

{
  *(uint *)(param_2 + 0x5c) = (uint)(param_1 != 0.0);
  return;
}


