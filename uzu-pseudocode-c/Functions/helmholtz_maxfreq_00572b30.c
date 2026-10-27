// Function : helmholtz_maxfreq
// Namespace: 
// Entry    : 00572b30
// Prototype: undefined helmholtz_maxfreq(float param_1, long param_2)
// Body     : 00572b30 - 00572b44


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* helmholtz_maxfreq(t_helmholtz*, float) */

void __cdecl helmholtz_maxfreq(float param_1,long param_2)

{
  float fVar1;
  
  if (DAT_0065b750 <= param_1) {
    param_1 = DAT_0065b750;
  }
  fVar1 = 0.0;
  if (0.0 <= param_1) {
    fVar1 = param_1;
  }
  *(float *)(param_2 + 0x60) = fVar1;
  return;
}


