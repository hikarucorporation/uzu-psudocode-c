// Function : fixeddelay_free
// Namespace: 
// Entry    : 0056aa60
// Prototype: undefined fixeddelay_free(void * param_1)
// Body     : 0056aa60 - 0056aa81


void fixeddelay_free(void *param_1)

{
  freebytes(*(void **)((long)param_1 + 8));
  freebytes(param_1);
  return;
}


