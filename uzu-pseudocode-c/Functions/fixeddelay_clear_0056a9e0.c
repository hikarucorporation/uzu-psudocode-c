// Function : fixeddelay_clear
// Namespace: 
// Entry    : 0056a9e0
// Prototype: undefined fixeddelay_clear(int * param_1)
// Body     : 0056a9e0 - 0056a9f4


void fixeddelay_clear(int *param_1)

{
  memset(*(void **)(param_1 + 2),0,(long)*param_1 << 2);
  return;
}


