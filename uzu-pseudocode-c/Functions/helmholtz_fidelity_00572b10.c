// Function : helmholtz_fidelity
// Namespace: 
// Entry    : 00572b10
// Prototype: undefined helmholtz_fidelity(float param_1, long param_2)
// Body     : 00572b10 - 00572b24


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* helmholtz_fidelity(t_helmholtz*, float) */

void __cdecl helmholtz_fidelity(float param_1,long param_2)

{
  float fVar1;
  
  if (DAT_005d9038 <= param_1) {
    param_1 = DAT_005d9038;
  }
  fVar1 = 0.0;
  if (0.0 <= param_1) {
    fVar1 = param_1;
  }
  *(float *)(param_2 + 0x58) = fVar1;
  return;
}


