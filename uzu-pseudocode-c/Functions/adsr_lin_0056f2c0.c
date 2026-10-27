// Function : adsr_lin
// Namespace: 
// Entry    : 0056f2c0
// Prototype: undefined adsr_lin(long param_1)
// Body     : 0056f2c0 - 0056f2d1


void adsr_lin(long param_1)

{
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return;
}


