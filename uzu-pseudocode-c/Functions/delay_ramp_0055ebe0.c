// Function : delay_ramp
// Namespace: 
// Entry    : 0055ebe0
// Prototype: undefined delay_ramp(float param_1, long param_2)
// Body     : 0055ebe0 - 0055ebec


void delay_ramp(float param_1,long param_2)

{
  float fVar1;
  
  fVar1 = 0.0;
  if (0.0 <= param_1) {
    fVar1 = param_1;
  }
  *(float *)(param_2 + 0x6c) = fVar1;
  return;
}


