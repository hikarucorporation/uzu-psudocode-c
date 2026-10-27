// Function : sigmund_minpower
// Namespace: 
// Entry    : 004e6d80
// Prototype: undefined sigmund_minpower(float param_1, long param_2)
// Body     : 004e6d80 - 004e6d8f


void sigmund_minpower(float param_1,long param_2)

{
  float fVar1;
  
  fVar1 = 0.0;
  if (0.0 <= param_1) {
    fVar1 = param_1;
  }
  *(float *)(param_2 + 0x8c) = fVar1;
  return;
}


