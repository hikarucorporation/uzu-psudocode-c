// Function : allpass_2nd_bypass
// Namespace: 
// Entry    : 00561bb0
// Prototype: undefined allpass_2nd_bypass(float param_1, long param_2)
// Body     : 00561bb0 - 00561bbe


void allpass_2nd_bypass(float param_1,long param_2)

{
  *(uint *)(param_2 + 0x54) = (uint)(param_1 != 0.0);
  return;
}


