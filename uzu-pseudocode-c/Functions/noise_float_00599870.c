// Function : noise_float
// Namespace: 
// Entry    : 00599870
// Prototype: undefined noise_float(float param_1, long param_2)
// Body     : 00599870 - 00599877


void noise_float(float param_1,long param_2)

{
  *(int *)(param_2 + 0x30) = (int)param_1;
  return;
}


