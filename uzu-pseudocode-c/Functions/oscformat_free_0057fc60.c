// Function : oscformat_free
// Namespace: 
// Entry    : 0057fc60
// Prototype: undefined oscformat_free(long param_1)
// Body     : 0057fc60 - 0057fc6f


void oscformat_free(long param_1)

{
  freebytes(*(void **)(param_1 + 0x30));
  return;
}


