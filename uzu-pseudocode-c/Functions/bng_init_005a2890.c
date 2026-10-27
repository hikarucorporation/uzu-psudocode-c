// Function : bng_init
// Namespace: 
// Entry    : 005a2890
// Prototype: undefined bng_init(float param_1, long param_2)
// Body     : 005a2890 - 005a28ac


void bng_init(float param_1,long param_2)

{
  *(uint *)(param_2 + 0x448) = *(uint *)(param_2 + 0x448) & 0xfffffffe | (uint)(param_1 != 0.0);
  return;
}


