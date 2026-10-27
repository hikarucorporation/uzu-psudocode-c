// Function : peak_linear
// Namespace: 
// Entry    : 00565f40
// Prototype: undefined peak_linear(float param_1, long param_2)
// Body     : 00565f40 - 00565f4e


void peak_linear(float param_1,long param_2)

{
  *(uint *)(param_2 + 0x60) = (uint)(param_1 == 0.0);
  return;
}


