// Function : sigmund_quality
// Namespace: 
// Entry    : 004e7120
// Prototype: undefined sigmund_quality(float param_1, long param_2)
// Body     : 004e7120 - 004e7144


void sigmund_quality(float param_1,long param_2)

{
  float fVar1;
  
  fVar1 = 0.0;
  if ((0.0 < param_1) && (fVar1 = param_1, DAT_005d9038 < param_1)) {
    fVar1 = DAT_005d9038;
  }
  *(float *)(param_2 + 0xdc) = fVar1;
  return;
}


