// Function : binbuf_free
// Namespace: 
// Entry    : 0052f150
// Prototype: undefined binbuf_free(void * param_1)
// Body     : 0052f150 - 0052f171


void binbuf_free(void *param_1)

{
  freebytes(*(void **)((long)param_1 + 8));
  freebytes(param_1);
  return;
}


