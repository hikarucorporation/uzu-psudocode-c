// Function : fudiformat_free
// Namespace: 
// Entry    : 00581210
// Prototype: undefined fudiformat_free(long param_1)
// Body     : 00581210 - 0058122d


void fudiformat_free(long param_1)

{
  freebytes(*(void **)(param_1 + 0x38));
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  return;
}


