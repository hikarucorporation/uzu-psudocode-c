// Function : message_free
// Namespace: 
// Entry    : 0052cd10
// Prototype: undefined message_free(long param_1)
// Body     : 0052cd10 - 0052cd18


void message_free(long param_1)

{
  clock_free(*(double **)(param_1 + 0x48));
  return;
}


