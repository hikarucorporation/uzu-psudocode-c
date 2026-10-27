// Function : env_tilde_ff
// Namespace: 
// Entry    : 0058ed50
// Prototype: undefined env_tilde_ff(long param_1)
// Body     : 0058ed50 - 0058ed78


void env_tilde_ff(long param_1)

{
  clock_free(*(double **)(param_1 + 0x38));
  freebytes(*(void **)(param_1 + 0x40));
  return;
}


