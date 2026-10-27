// Function : waitpid
// Namespace: _EXTERNAL_
// Entry    : 0015e810
// Prototype: __pid_t waitpid(__pid_t __pid, int * __stat_loc, int __options)
// Body     : 0015e810 - 0015e815


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t waitpid(__pid_t __pid,int *__stat_loc,int __options)

{
  __pid_t _Var1;
  
  _Var1 = (*(code *)PTR_waitpid_00717c08)();
  return _Var1;
}


