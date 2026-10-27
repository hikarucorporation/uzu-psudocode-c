// Function : vectral_clear
// Namespace: 
// Entry    : 00561020
// Prototype: undefined vectral_clear(long param_1)
// Body     : 00561020 - 00561035


void vectral_clear(long param_1)

{
  memset(*(void **)(param_1 + 0x50),0,(long)*(int *)(param_1 + 0x40) << 2);
  return;
}


