// Function : get_free
// Namespace: 
// Entry    : 005aeb30
// Prototype: undefined get_free(long param_1)
// Body     : 005aeb30 - 005aeb43


void get_free(long param_1)

{
  freebytes(*(void **)(param_1 + 0x40));
  return;
}


