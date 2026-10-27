// Function : delay_bang
// Namespace: 
// Entry    : 0055c180
// Prototype: undefined delay_bang(long param_1)
// Body     : 0055c180 - 0055c190


void delay_bang(long param_1)

{
  clock_delay(*(double *)(param_1 + 0x38),*(double **)(param_1 + 0x30));
  return;
}


