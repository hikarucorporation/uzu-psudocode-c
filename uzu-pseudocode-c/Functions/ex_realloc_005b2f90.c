// Function : ex_realloc
// Namespace: 
// Entry    : 005b2f90
// Prototype: undefined ex_realloc(void * param_1, size_t param_2)
// Body     : 005b2f90 - 005b2fb9


void ex_realloc(void *param_1,size_t param_2)

{
  printf("realloc called with %zu bytes\n",param_2);
  realloc(param_1,param_2);
  return;
}


