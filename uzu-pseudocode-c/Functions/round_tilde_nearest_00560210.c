// Function : round_tilde_nearest
// Namespace: 
// Entry    : 00560210
// Prototype: undefined round_tilde_nearest(float param_1, long param_2)
// Body     : 00560210 - 00560228


void round_tilde_nearest(float param_1,long param_2)

{
  *(uint *)(param_2 + 0x30) = DAT_005d9038 & -(uint)(0.0 < param_1);
  return;
}


