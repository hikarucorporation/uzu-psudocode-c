// Function : sigmund_growth
// Namespace: 
// Entry    : 004e6d70
// Prototype: undefined sigmund_growth(float param_1, long param_2)
// Body     : 004e6d70 - 004e6d7f


void sigmund_growth(float param_1,long param_2)

{
  float fVar1;
  
  fVar1 = 0.0;
  if (0.0 <= param_1) {
    fVar1 = param_1;
  }
  *(float *)(param_2 + 0x88) = fVar1;
  return;
}


