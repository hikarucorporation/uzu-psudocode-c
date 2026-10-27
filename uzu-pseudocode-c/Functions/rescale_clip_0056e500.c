// Function : rescale_clip
// Namespace: 
// Entry    : 0056e500
// Prototype: undefined rescale_clip(float param_1, long param_2)
// Body     : 0056e500 - 0056e50e


void rescale_clip(float param_1,long param_2)

{
  *(uint *)(param_2 + 0x38) = (uint)(param_1 != 0.0);
  return;
}


