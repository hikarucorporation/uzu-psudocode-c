// Function : metro_free
// Namespace: 
// Entry    : 0055c340
// Prototype: undefined metro_free(long param_1)
// Body     : 0055c340 - 0055c348


void metro_free(long param_1)

{
  clock_free(*(double **)(param_1 + 0x30));
  return;
}


