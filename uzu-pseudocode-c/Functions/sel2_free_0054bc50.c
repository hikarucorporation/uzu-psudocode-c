// Function : sel2_free
// Namespace: 
// Entry    : 0054bc50
// Prototype: undefined sel2_free(long param_1)
// Body     : 0054bc50 - 0054bc60


void sel2_free(long param_1)

{
  freebytes(*(void **)(param_1 + 0x40));
  return;
}


