// Function : initmess_free
// Namespace: 
// Entry    : 0056d7a0
// Prototype: undefined initmess_free(long param_1)
// Body     : 0056d7a0 - 0056d7b9


void initmess_free(long param_1)

{
  if (*(void **)(param_1 + 0x48) == (void *)0x0) {
    return;
  }
  freebytes(*(void **)(param_1 + 0x48));
  return;
}


