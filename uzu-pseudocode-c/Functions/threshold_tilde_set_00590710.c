// Function : threshold_tilde_set
// Namespace: 
// Entry    : 00590710
// Prototype: undefined threshold_tilde_set(float param_1, undefined4 param_2, float param_3, undefined4 param_4, long param_5)
// Body     : 00590710 - 00590728


void threshold_tilde_set(float param_1,undefined4 param_2,float param_3,undefined4 param_4,
                        long param_5)

{
  if (param_1 <= param_3) {
    param_3 = param_1;
  }
  *(float *)(param_5 + 0x50) = param_1;
  *(undefined4 *)(param_5 + 0x60) = param_2;
  *(float *)(param_5 + 0x54) = param_3;
  *(undefined4 *)(param_5 + 100) = param_4;
  return;
}


