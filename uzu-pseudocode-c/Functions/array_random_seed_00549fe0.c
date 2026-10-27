// Function : array_random_seed
// Namespace: 
// Entry    : 00549fe0
// Prototype: undefined array_random_seed(float param_1, long param_2)
// Body     : 00549fe0 - 00549feb


void array_random_seed(float param_1,long param_2)

{
  *(int *)(param_2 + 0x80) = (int)(long)param_1;
  return;
}


