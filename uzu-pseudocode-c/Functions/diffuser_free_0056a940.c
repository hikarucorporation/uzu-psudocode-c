// Function : diffuser_free
// Namespace: 
// Entry    : 0056a940
// Prototype: undefined diffuser_free(void * param_1)
// Body     : 0056a940 - 0056a961


void diffuser_free(void *param_1)

{
  freebytes(*(void **)((long)param_1 + 0x10));
  freebytes(param_1);
  return;
}


