// Function : nyquist_free
// Namespace: 
// Entry    : 00565920
// Prototype: undefined nyquist_free(long param_1)
// Body     : 00565920 - 00565928


void nyquist_free(long param_1)

{
  clock_free(*(double **)(param_1 + 0x30));
  return;
}


