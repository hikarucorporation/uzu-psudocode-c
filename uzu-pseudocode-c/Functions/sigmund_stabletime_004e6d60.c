// Function : sigmund_stabletime
// Namespace: 
// Entry    : 004e6d60
// Prototype: undefined sigmund_stabletime(float param_1, long param_2)
// Body     : 004e6d60 - 004e6d6f


void sigmund_stabletime(float param_1,long param_2)

{
  float fVar1;
  
  fVar1 = 0.0;
  if (0.0 <= param_1) {
    fVar1 = param_1;
  }
  *(float *)(param_2 + 0x84) = fVar1;
  return;
}


