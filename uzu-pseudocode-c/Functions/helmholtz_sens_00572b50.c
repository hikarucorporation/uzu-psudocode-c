// Function : helmholtz_sens
// Namespace: 
// Entry    : 00572b50
// Prototype: undefined helmholtz_sens(float param_1, long param_2)
// Body     : 00572b50 - 00572b8d


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* helmholtz_sens(t_helmholtz*, float) */

void __cdecl helmholtz_sens(float param_1,long param_2)

{
  Helmholtz *this;
  float fVar1;
  
  if (DAT_005d94c4 <= param_1) {
    param_1 = DAT_005d94c4;
  }
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  dbtorms(param_1);
  this = *(Helmholtz **)(param_2 + 0x68);
  fVar1 = dbtorms(param_1);
  Helmholtz::setminRMS(fVar1,this);
  return;
}


