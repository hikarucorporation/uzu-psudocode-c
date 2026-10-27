// Function : rescale_rlog
// Namespace: 
// Entry    : 0056e4f0
// Prototype: undefined rescale_rlog(float param_1, long param_2)
// Body     : 0056e4f0 - 0056e4fe


void rescale_rlog(float param_1,long param_2)

{
  *(uint *)(param_2 + 0x40) = (uint)(param_1 != 0.0);
  return;
}


