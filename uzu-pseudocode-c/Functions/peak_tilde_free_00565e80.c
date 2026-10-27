// Function : peak_tilde_free
// Namespace: 
// Entry    : 00565e80
// Prototype: undefined peak_tilde_free(long param_1)
// Body     : 00565e80 - 00565e88


void peak_tilde_free(long param_1)

{
  clock_free(*(double **)(param_1 + 0x38));
  return;
}


