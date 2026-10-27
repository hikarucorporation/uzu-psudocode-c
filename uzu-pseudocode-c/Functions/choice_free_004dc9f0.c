// Function : choice_free
// Namespace: 
// Entry    : 004dc9f0
// Prototype: undefined choice_free(long param_1)
// Body     : 004dc9f0 - 004dca03


void choice_free(long param_1)

{
  freebytes(*(void **)(param_1 + 0x30));
  return;
}


