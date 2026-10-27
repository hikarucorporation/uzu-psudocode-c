// Function : vsnapshot_tilde_ff
// Namespace: 
// Entry    : 00590340
// Prototype: undefined vsnapshot_tilde_ff(long param_1)
// Body     : 00590340 - 00590359


void vsnapshot_tilde_ff(long param_1)

{
  if (*(void **)(param_1 + 0x38) == (void *)0x0) {
    return;
  }
  freebytes(*(void **)(param_1 + 0x38));
  return;
}


