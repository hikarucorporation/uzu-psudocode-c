// Function : sigmund_vibrato
// Namespace: 
// Entry    : 004e6d50
// Prototype: undefined sigmund_vibrato(float param_1, long param_2)
// Body     : 004e6d50 - 004e6d5f


void sigmund_vibrato(float param_1,long param_2)

{
  float fVar1;
  
  fVar1 = 0.0;
  if (0.0 <= param_1) {
    fVar1 = param_1;
  }
  *(float *)(param_2 + 0x80) = fVar1;
  return;
}


