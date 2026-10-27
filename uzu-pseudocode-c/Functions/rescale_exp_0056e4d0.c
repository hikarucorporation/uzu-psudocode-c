// Function : rescale_exp
// Namespace: 
// Entry    : 0056e4d0
// Prototype: undefined rescale_exp(undefined4 param_1, long param_2)
// Body     : 0056e4d0 - 0056e4d5


void rescale_exp(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x54) = param_1;
  return;
}


