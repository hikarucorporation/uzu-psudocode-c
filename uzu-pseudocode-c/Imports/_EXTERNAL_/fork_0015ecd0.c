// Function : fork
// Namespace: _EXTERNAL_
// Entry    : 0015ecd0
// Prototype: __pid_t fork(void)
// Body     : 0015ecd0 - 0015ecd5


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t fork(void)

{
  __pid_t _Var1;
  
  _Var1 = (*(code *)PTR_fork_00717e68)();
  return _Var1;
}


