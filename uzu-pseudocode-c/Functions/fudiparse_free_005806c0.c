// Function : fudiparse_free
// Namespace: 
// Entry    : 005806c0
// Prototype: undefined fudiparse_free(long param_1)
// Body     : 005806c0 - 005806d9


void fudiparse_free(long param_1)

{
  freebytes(*(void **)(param_1 + 0x38));
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  return;
}


