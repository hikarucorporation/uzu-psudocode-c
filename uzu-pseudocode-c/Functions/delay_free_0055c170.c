// Function : delay_free
// Namespace: 
// Entry    : 0055c170
// Prototype: undefined delay_free(long param_1)
// Body     : 0055c170 - 0055c178


void delay_free(long param_1)

{
  clock_free(*(double **)(param_1 + 0x30));
  return;
}


