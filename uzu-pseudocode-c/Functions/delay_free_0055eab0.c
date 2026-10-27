// Function : delay_free
// Namespace: 
// Entry    : 0055eab0
// Prototype: undefined delay_free(long param_1)
// Body     : 0055eab0 - 0055ead0


void delay_free(long param_1)

{
  if (*(void **)(param_1 + 0x40) == (void *)(param_1 + 0x90)) {
    return;
  }
  freebytes(*(void **)(param_1 + 0x40));
  return;
}


