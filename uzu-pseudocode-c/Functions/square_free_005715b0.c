// Function : square_free
// Namespace: 
// Entry    : 005715b0
// Prototype: long square_free(long param_1)
// Body     : 005715b0 - 0057162a


long square_free(long param_1)

{
  inlet_free(*(void **)(param_1 + 0xa8));
  inlet_free(*(void **)(param_1 + 0xb8));
  inlet_free(*(void **)(param_1 + 0xb0));
  outlet_free(*(long **)(param_1 + 0xc0));
  freebytes(*(void **)(param_1 + 0x30));
  freebytes(*(void **)(param_1 + 0x38));
  freebytes(*(void **)(param_1 + 0x88));
  free(*(void **)(param_1 + 0x90));
  return param_1;
}


