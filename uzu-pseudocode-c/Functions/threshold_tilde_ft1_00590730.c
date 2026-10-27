// Function : threshold_tilde_ft1
// Namespace: 
// Entry    : 00590730
// Prototype: undefined threshold_tilde_ft1(float param_1, long param_2)
// Body     : 00590730 - 00590745


void threshold_tilde_ft1(float param_1,long param_2)

{
  *(uint *)(param_2 + 0x4c) = (uint)(param_1 != 0.0);
  *(undefined4 *)(param_2 + 0x58) = 0;
  return;
}


