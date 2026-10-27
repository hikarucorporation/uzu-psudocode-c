// Function : phasor_ft1
// Namespace: 
// Entry    : 005989f0
// Prototype: undefined phasor_ft1(float param_1, long param_2)
// Body     : 005989f0 - 005989f9


void phasor_ft1(float param_1,long param_2)

{
  *(double *)(param_2 + 0x30) = (double)param_1;
  return;
}


