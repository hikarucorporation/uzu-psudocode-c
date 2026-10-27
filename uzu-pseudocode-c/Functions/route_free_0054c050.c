// Function : route_free
// Namespace: 
// Entry    : 0054c050
// Prototype: undefined route_free(long param_1)
// Body     : 0054c050 - 0054c063


void route_free(long param_1)

{
  freebytes(*(void **)(param_1 + 0x38));
  return;
}


