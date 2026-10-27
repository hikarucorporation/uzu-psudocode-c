// Function : scaling
// Namespace: 
// Entry    : 0055e300
// Prototype: float scaling(float param_1, long param_2)
// Body     : 0055e300 - 0055e32c


float scaling(float param_1,long param_2)

{
  return ((param_1 - *(float *)(param_2 + 0x40)) *
         (*(float *)(param_2 + 0x4c) - *(float *)(param_2 + 0x48))) /
         (*(float *)(param_2 + 0x44) - *(float *)(param_2 + 0x40)) + *(float *)(param_2 + 0x48);
}


