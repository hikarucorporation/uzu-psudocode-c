// Function : rescale_log
// Namespace: 
// Entry    : 0056e4e0
// Prototype: undefined rescale_log(float param_1, long param_2)
// Body     : 0056e4e0 - 0056e4ee


void rescale_log(float param_1,long param_2)

{
  *(uint *)(param_2 + 0x3c) = (uint)(param_1 != 0.0);
  return;
}


