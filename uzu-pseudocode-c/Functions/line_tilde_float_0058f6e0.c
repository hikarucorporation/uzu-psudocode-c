// Function : line_tilde_float
// Namespace: 
// Entry    : 0058f6e0
// Prototype: undefined line_tilde_float(undefined4 param_1, long param_2)
// Body     : 0058f6e0 - 0058f71d


void line_tilde_float(undefined4 param_1,long param_2)

{
  if (0.0 < *(float *)(param_2 + 0x48)) {
    *(float *)(param_2 + 0x4c) = *(float *)(param_2 + 0x48);
    *(undefined4 *)(param_2 + 0x48) = 0;
    *(undefined4 *)(param_2 + 0x30) = param_1;
    *(undefined4 *)(param_2 + 0x54) = 1;
    return;
  }
  *(undefined4 *)(param_2 + 0x34) = param_1;
  *(undefined4 *)(param_2 + 0x50) = 0;
  *(undefined4 *)(param_2 + 0x30) = param_1;
  *(undefined4 *)(param_2 + 0x54) = 0;
  return;
}


