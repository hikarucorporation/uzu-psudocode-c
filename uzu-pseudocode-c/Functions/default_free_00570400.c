// Function : default_free
// Namespace: 
// Entry    : 00570400
// Prototype: undefined default_free(long param_1)
// Body     : 00570400 - 00570419


void default_free(long param_1)

{
  if (*(void **)(param_1 + 0x50) == (void *)0x0) {
    return;
  }
  freebytes(*(void **)(param_1 + 0x50));
  return;
}


