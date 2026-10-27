// Function : args_free
// Namespace: 
// Entry    : 00569b20
// Prototype: undefined args_free(long param_1)
// Body     : 00569b20 - 00569b36


void args_free(long param_1)

{
  if (*(int *)(param_1 + 0x38) == 0) {
    return;
  }
  freebytes(*(void **)(param_1 + 0x40));
  return;
}


