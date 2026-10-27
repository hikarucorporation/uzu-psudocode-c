// Function : fold_free
// Namespace: 
// Entry    : 00572550
// Prototype: long fold_free(long param_1)
// Body     : 00572550 - 0057256a


long fold_free(long param_1)

{
  inlet_free(*(void **)(param_1 + 0x30));
  inlet_free(*(void **)(param_1 + 0x38));
  return param_1;
}


