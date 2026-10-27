// Function : slider_init
// Namespace: 
// Entry    : 005ab6c0
// Prototype: undefined slider_init(float param_1, long param_2)
// Body     : 005ab6c0 - 005ab6dc


void slider_init(float param_1,long param_2)

{
  *(uint *)(param_2 + 0x448) = *(uint *)(param_2 + 0x448) & 0xfffffffe | (uint)(param_1 != 0.0);
  return;
}


