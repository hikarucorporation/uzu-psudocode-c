// Function : adc_free
// Namespace: 
// Entry    : 00590d80
// Prototype: undefined adc_free(long param_1)
// Body     : 00590d80 - 00590d93


void adc_free(long param_1)

{
  freebytes(*(void **)(param_1 + 0x38));
  return;
}


