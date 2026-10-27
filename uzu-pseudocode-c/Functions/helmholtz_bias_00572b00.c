// Function : helmholtz_bias
// Namespace: 
// Entry    : 00572b00
// Prototype: undefined helmholtz_bias(float param_1, long param_2)
// Body     : 00572b00 - 00572b08


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* helmholtz_bias(t_helmholtz*, float) */

void __cdecl helmholtz_bias(float param_1,long param_2)

{
  Helmholtz::setbias(param_1,*(Helmholtz **)(param_2 + 0x68));
  return;
}


