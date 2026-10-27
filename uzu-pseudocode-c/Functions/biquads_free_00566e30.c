// Function : biquads_free
// Namespace: 
// Entry    : 00566e30
// Prototype: long biquads_free(long param_1)
// Body     : 00566e30 - 00566e41


long biquads_free(long param_1)

{
  outlet_free(*(long **)(param_1 + 0x38));
  return param_1;
}


