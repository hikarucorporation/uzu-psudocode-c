// Function : helmholtz_free
// Namespace: 
// Entry    : 00572a60
// Prototype: undefined helmholtz_free(long param_1)
// Body     : 00572a60 - 00572a98


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* helmholtz_free(t_helmholtz*) */

void __cdecl helmholtz_free(long param_1)

{
  Helmholtz *this;
  
  this = *(Helmholtz **)(param_1 + 0x68);
  if (this != (Helmholtz *)0x0) {
    Helmholtz::~Helmholtz(this);
    operator_delete(this);
  }
  if (*(double **)(param_1 + 0x38) == (double *)0x0) {
    return;
  }
  clock_free(*(double **)(param_1 + 0x38));
  return;
}


