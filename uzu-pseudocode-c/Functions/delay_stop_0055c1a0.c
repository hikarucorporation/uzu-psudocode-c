// Function : delay_stop
// Namespace: 
// Entry    : 0055c1a0
// Prototype: undefined delay_stop(long param_1)
// Body     : 0055c1a0 - 0055c1a8


void delay_stop(long param_1)

{
  clock_unset(*(double **)(param_1 + 0x30));
  return;
}


