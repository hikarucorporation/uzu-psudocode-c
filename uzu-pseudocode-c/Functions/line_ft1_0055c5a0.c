// Function : line_ft1
// Namespace: 
// Entry    : 0055c5a0
// Prototype: undefined line_ft1(float param_1, long param_2)
// Body     : 0055c5a0 - 0055c5b0


void line_ft1(float param_1,long param_2)

{
  *(double *)(param_2 + 0x68) = (double)param_1;
  *(undefined4 *)(param_2 + 0x54) = 1;
  return;
}


