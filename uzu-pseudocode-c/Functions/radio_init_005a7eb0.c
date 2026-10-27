// Function : radio_init
// Namespace: 
// Entry    : 005a7eb0
// Prototype: undefined radio_init(float param_1, long param_2)
// Body     : 005a7eb0 - 005a7ecc


void radio_init(float param_1,long param_2)

{
  *(uint *)(param_2 + 0x448) = *(uint *)(param_2 + 0x448) & 0xfffffffe | (uint)(param_1 != 0.0);
  return;
}


