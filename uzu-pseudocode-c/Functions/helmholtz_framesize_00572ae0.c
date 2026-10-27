// Function : helmholtz_framesize
// Namespace: 
// Entry    : 00572ae0
// Prototype: undefined helmholtz_framesize(float param_1, long param_2)
// Body     : 00572ae0 - 00572aec


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* helmholtz_framesize(t_helmholtz*, float) */

void __cdecl helmholtz_framesize(float param_1,long param_2)

{
  Helmholtz::setframesize(*(Helmholtz **)(param_2 + 0x68),(int)param_1);
  return;
}


