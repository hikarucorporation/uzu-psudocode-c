// Function : adsr_rel
// Namespace: 
// Entry    : 0056f2f0
// Prototype: undefined adsr_rel(float param_1, long param_2)
// Body     : 0056f2f0 - 0056f2fe


void adsr_rel(float param_1,long param_2)

{
  *(uint *)(param_2 + 0x3c) = (uint)(param_1 != 0.0);
  return;
}


