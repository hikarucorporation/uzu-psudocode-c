// Function : blocksize_free
// Namespace: 
// Entry    : 00562310
// Prototype: undefined blocksize_free(long param_1)
// Body     : 00562310 - 00562318


void blocksize_free(long param_1)

{
  clock_free(*(double **)(param_1 + 0x30));
  return;
}


