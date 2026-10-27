// Function : bang_tilde_perform
// Namespace: 
// Entry    : 00597bc0
// Prototype: long bang_tilde_perform(long param_1)
// Body     : 00597bc0 - 00597bdc


long bang_tilde_perform(long param_1)

{
  clock_delay(0.0,*(double **)(*(long *)(param_1 + 8) + 0x30));
  return param_1 + 0x10;
}


