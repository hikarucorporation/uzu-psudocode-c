// Function : getpid
// Namespace: _EXTERNAL_
// Entry    : 0015f610
// Prototype: __pid_t getpid(void)
// Body     : 0015f610 - 0015f615


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t getpid(void)

{
  __pid_t _Var1;
  
  _Var1 = (*(code *)PTR_getpid_00718308)();
  return _Var1;
}


