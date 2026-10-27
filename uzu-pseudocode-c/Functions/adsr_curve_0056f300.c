// Function : adsr_curve
// Namespace: 
// Entry    : 0056f300
// Prototype: undefined adsr_curve(float param_1, long param_2)
// Body     : 0056f300 - 0056f317


void adsr_curve(float param_1,long param_2)

{
  *(float *)(param_2 + 0xd8) = param_1 * DAT_0065b5a8;
  *(undefined4 *)(param_2 + 0x38) = 0;
  return;
}


