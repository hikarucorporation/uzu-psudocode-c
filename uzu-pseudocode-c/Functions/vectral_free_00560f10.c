// Function : vectral_free
// Namespace: 
// Entry    : 00560f10
// Prototype: undefined vectral_free(long param_1)
// Body     : 00560f10 - 00560f42


void vectral_free(long param_1)

{
  if (*(void **)(param_1 + 0x48) != (void *)0x0) {
    freebytes(*(void **)(param_1 + 0x48));
  }
  if (*(void **)(param_1 + 0x50) == (void *)0x0) {
    return;
  }
  freebytes(*(void **)(param_1 + 0x50));
  return;
}


