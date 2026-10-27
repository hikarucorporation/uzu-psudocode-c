// Function : unpack_free
// Namespace: 
// Entry    : 0054da40
// Prototype: undefined unpack_free(long param_1)
// Body     : 0054da40 - 0054da50


void unpack_free(long param_1)

{
  freebytes(*(void **)(param_1 + 0x38));
  return;
}


