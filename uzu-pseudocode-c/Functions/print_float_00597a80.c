// Function : print_float
// Namespace: 
// Entry    : 00597a80
// Prototype: undefined print_float(float param_1, long param_2)
// Body     : 00597a80 - 00597a8e


void print_float(float param_1,long param_2)

{
  float fVar1;
  
  fVar1 = 0.0;
  if (0.0 <= param_1) {
    fVar1 = param_1;
  }
  *(int *)(param_2 + 0x40) = (int)fVar1;
  return;
}


