// Function : random_seed
// Namespace: 
// Entry    : 00580ef0
// Prototype: undefined random_seed(float param_1, long param_2)
// Body     : 00580ef0 - 00580ef8


void random_seed(float param_1,long param_2)

{
  *(int *)(param_2 + 0x34) = (int)(long)param_1;
  return;
}


