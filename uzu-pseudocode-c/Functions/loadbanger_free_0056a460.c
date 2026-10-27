// Function : loadbanger_free
// Namespace: 
// Entry    : 0056a460
// Prototype: undefined loadbanger_free(long param_1)
// Body     : 0056a460 - 0056a487


void loadbanger_free(long param_1)

{
  if (*(void **)(param_1 + 0x48) != (void *)(param_1 + 0x50)) {
    freebytes(*(void **)(param_1 + 0x48));
  }
  clock_free(*(double **)(param_1 + 0x40));
  return;
}


