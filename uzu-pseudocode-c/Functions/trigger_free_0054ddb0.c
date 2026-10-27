// Function : trigger_free
// Namespace: 
// Entry    : 0054ddb0
// Prototype: undefined trigger_free(long param_1)
// Body     : 0054ddb0 - 0054ddc0


void trigger_free(long param_1)

{
  freebytes(*(void **)(param_1 + 0x38));
  return;
}


