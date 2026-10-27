// Function : lowpass_bypass
// Namespace: 
// Entry    : 00564560
// Prototype: undefined lowpass_bypass(float param_1, long param_2)
// Body     : 00564560 - 0056456e


void lowpass_bypass(float param_1,long param_2)

{
  *(uint *)(param_2 + 0x54) = (uint)(param_1 != 0.0);
  return;
}


