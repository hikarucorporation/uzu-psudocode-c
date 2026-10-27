// Function : dac_free
// Namespace: 
// Entry    : 00590a10
// Prototype: undefined dac_free(long param_1)
// Body     : 00590a10 - 00590a20


void dac_free(long param_1)

{
  freebytes(*(void **)(param_1 + 0x38));
  return;
}


