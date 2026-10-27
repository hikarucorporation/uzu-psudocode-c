// Function : biquads_bypass
// Namespace: 
// Entry    : 00566a80
// Prototype: undefined biquads_bypass(float param_1, long param_2)
// Body     : 00566a80 - 00566a92


void biquads_bypass(float param_1,long param_2)

{
  *(ulong *)(param_2 + 0x680) = (ulong)(param_1 != 0.0);
  return;
}


