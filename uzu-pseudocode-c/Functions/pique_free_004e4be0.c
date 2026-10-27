// Function : pique_free
// Namespace: 
// Entry    : 004e4be0
// Prototype: undefined pique_free(long param_1)
// Body     : 004e4be0 - 004e4c25


void pique_free(long param_1)

{
  freebytes(*(void **)(param_1 + 0x38));
  freebytes(*(void **)(param_1 + 0x40));
  freebytes(*(void **)(param_1 + 0x48));
  freebytes(*(void **)(param_1 + 0x50));
  return;
}


