// Function : white_clip
// Namespace: 
// Entry    : 00572280
// Prototype: undefined white_clip(float param_1, long param_2)
// Body     : 00572280 - 0057228e


void white_clip(float param_1,long param_2)

{
  *(uint *)(param_2 + 0x30) = (uint)(param_1 != 0.0);
  return;
}


