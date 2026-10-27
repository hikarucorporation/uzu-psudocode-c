// Function : delay_ft1
// Namespace: 
// Entry    : 0055c1b0
// Prototype: undefined delay_ft1(float param_1, long param_2)
// Body     : 0055c1b0 - 0055c1c3


void delay_ft1(float param_1,long param_2)

{
  float fVar1;
  
  fVar1 = 0.0;
  if (0.0 <= param_1) {
    fVar1 = param_1;
  }
  *(double *)(param_2 + 0x38) = (double)fVar1;
  return;
}


