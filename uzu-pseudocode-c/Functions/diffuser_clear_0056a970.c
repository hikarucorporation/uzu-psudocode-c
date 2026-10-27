// Function : diffuser_clear
// Namespace: 
// Entry    : 0056a970
// Prototype: undefined diffuser_clear(int * param_1)
// Body     : 0056a970 - 0056a984


void diffuser_clear(int *param_1)

{
  memset(*(void **)(param_1 + 4),0,(long)*param_1 << 2);
  return;
}


