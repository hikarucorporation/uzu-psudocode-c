// Function : metro_stop
// Namespace: 
// Entry    : 0055c390
// Prototype: undefined metro_stop(long param_1)
// Body     : 0055c390 - 0055c3a5


void metro_stop(long param_1)

{
  clock_unset(*(double **)(param_1 + 0x30));
  *(undefined4 *)(param_1 + 0x40) = 1;
  return;
}


