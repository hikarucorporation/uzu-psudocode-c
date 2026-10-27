// Function : message_free
// Namespace: 
// Entry    : 00564d50
// Prototype: undefined message_free(long param_1)
// Body     : 00564d50 - 00564d69


void message_free(long param_1)

{
  if (*(void **)(param_1 + 0x50) == (void *)0x0) {
    return;
  }
  freebytes(*(void **)(param_1 + 0x50));
  return;
}


