// Function : highpass_bypass
// Namespace: 
// Entry    : 005631c0
// Prototype: undefined highpass_bypass(float param_1, long param_2)
// Body     : 005631c0 - 005631ce


void highpass_bypass(float param_1,long param_2)

{
  *(uint *)(param_2 + 0x4c) = (uint)(param_1 != 0.0);
  return;
}


