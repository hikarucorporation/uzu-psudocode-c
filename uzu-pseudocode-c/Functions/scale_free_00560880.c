// Function : scale_free
// Namespace: 
// Entry    : 00560880
// Prototype: long scale_free(long param_1)
// Body     : 00560880 - 005608b5


long scale_free(long param_1)

{
  inlet_free(*(void **)(param_1 + 0x30));
  inlet_free(*(void **)(param_1 + 0x38));
  inlet_free(*(void **)(param_1 + 0x40));
  inlet_free(*(void **)(param_1 + 0x48));
  inlet_free(*(void **)(param_1 + 0x50));
  return param_1;
}


