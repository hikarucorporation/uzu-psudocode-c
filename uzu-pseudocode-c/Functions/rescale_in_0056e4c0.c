// Function : rescale_in
// Namespace: 
// Entry    : 0056e4c0
// Prototype: undefined rescale_in(undefined4 param_1, undefined4 param_2, long param_3)
// Body     : 0056e4c0 - 0056e4ca


void rescale_in(undefined4 param_1,undefined4 param_2,long param_3)

{
  *(undefined4 *)(param_3 + 0x44) = param_1;
  *(undefined4 *)(param_3 + 0x48) = param_2;
  return;
}


