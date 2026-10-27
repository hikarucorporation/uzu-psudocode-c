// Function : adsr_free
// Namespace: 
// Entry    : 0056ee00
// Prototype: long adsr_free(long param_1)
// Body     : 0056ee00 - 0056eef8


long adsr_free(long param_1)

{
  freebytes(*(void **)(param_1 + 0x88));
  freebytes(*(void **)(param_1 + 0x90));
  freebytes(*(void **)(param_1 + 0x98));
  freebytes(*(void **)(param_1 + 0xa0));
  freebytes(*(void **)(param_1 + 0xa8));
  freebytes(*(void **)(param_1 + 0xb0));
  freebytes(*(void **)(param_1 + 0xb8));
  freebytes(*(void **)(param_1 + 0xc0));
  freebytes(*(void **)(param_1 + 200));
  freebytes(*(void **)(param_1 + 0xd0));
  freebytes(*(void **)(param_1 + 0xe0));
  freebytes(*(void **)(param_1 + 0xe8));
  return param_1;
}


