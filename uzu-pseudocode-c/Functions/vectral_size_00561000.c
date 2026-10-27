// Function : vectral_size
// Namespace: 
// Entry    : 00561000
// Prototype: undefined vectral_size(float param_1, long param_2)
// Body     : 00561000 - 00561012


void vectral_size(float param_1,long param_2)

{
  int iVar1;
  
  iVar1 = 0x40;
  if (0x40 < (int)param_1) {
    iVar1 = (int)param_1;
  }
  *(int *)(param_2 + 0x40) = iVar1;
  return;
}


