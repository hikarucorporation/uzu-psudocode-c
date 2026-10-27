// Function : poly_free
// Namespace: 
// Entry    : 00555730
// Prototype: undefined poly_free(long param_1)
// Body     : 00555730 - 00555743


void poly_free(long param_1)

{
  freebytes(*(void **)(param_1 + 0x38));
  return;
}


