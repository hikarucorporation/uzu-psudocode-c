// Function : helmholtz_overlap
// Namespace: 
// Entry    : 00572af0
// Prototype: undefined helmholtz_overlap(float param_1, long param_2)
// Body     : 00572af0 - 00572afc


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* helmholtz_overlap(t_helmholtz*, float) */

void __cdecl helmholtz_overlap(float param_1,long param_2)

{
  Helmholtz::setoverlap(*(Helmholtz **)(param_2 + 0x68),(int)param_1);
  return;
}


