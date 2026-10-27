// Function : slider_steady
// Namespace: 
// Entry    : 005ab6e0
// Prototype: undefined slider_steady(float param_1, long param_2)
// Body     : 005ab6e0 - 005ab6f1


void slider_steady(float param_1,long param_2)

{
  *(uint *)(param_2 + 0x49c) = (uint)(param_1 != 0.0);
  return;
}


