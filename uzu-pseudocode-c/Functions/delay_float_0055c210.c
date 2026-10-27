// Function : delay_float
// Namespace: 
// Entry    : 0055c210
// Prototype: undefined delay_float(float param_1, long param_2)
// Body     : 0055c210 - 0055c22b


void delay_float(float param_1,long param_2)

{
  float fVar1;
  
  fVar1 = 0.0;
  if (0.0 <= param_1) {
    fVar1 = param_1;
  }
  *(double *)(param_2 + 0x38) = (double)fVar1;
  clock_delay((double)fVar1,*(double **)(param_2 + 0x30));
  return;
}


