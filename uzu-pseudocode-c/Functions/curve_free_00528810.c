// Function : curve_free
// Namespace: 
// Entry    : 00528810
// Prototype: undefined curve_free(long param_1)
// Body     : 00528810 - 0052882d


void curve_free(long param_1)

{
  freebytes(*(void **)(param_1 + 0xe0));
  return;
}


