// Function : bng_tick_lck
// Namespace: 
// Entry    : 005a3170
// Prototype: undefined bng_tick_lck(long param_1)
// Body     : 005a3170 - 005a3177


void bng_tick_lck(long param_1)

{
  *(byte *)(param_1 + 1099) = *(byte *)(param_1 + 1099) & 0xf7;
  return;
}


