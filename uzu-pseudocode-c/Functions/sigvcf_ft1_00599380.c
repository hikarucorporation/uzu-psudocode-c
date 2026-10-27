// Function : sigvcf_ft1
// Namespace: 
// Entry    : 00599380
// Prototype: undefined sigvcf_ft1(float param_1, long param_2)
// Body     : 00599380 - 005993a5


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sigvcf_ft1(float param_1,long param_2)

{
  float fVar1;
  
  fVar1 = 0.0;
  if (0.0 <= param_1) {
    fVar1 = param_1;
  }
  if (_DAT_0065da50 < (double)fVar1) {
    fVar1 = DAT_0065da08;
  }
  *(float *)(param_2 + 0x38) = fVar1;
  return;
}


