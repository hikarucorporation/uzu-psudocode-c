// Function : scale_classic
// Namespace: 
// Entry    : 00560930
// Prototype: undefined scale_classic(float param_1, long param_2)
// Body     : 00560930 - 0056093a


void scale_classic(float param_1,long param_2)

{
  *(long *)(param_2 + 0x58) = (long)(int)param_1;
  return;
}


