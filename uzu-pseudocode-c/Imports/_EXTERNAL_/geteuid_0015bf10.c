// Function : geteuid
// Namespace: _EXTERNAL_
// Entry    : 0015bf10
// Prototype: __uid_t geteuid(void)
// Body     : 0015bf10 - 0015bf15


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__uid_t geteuid(void)

{
  __uid_t _Var1;
  
  _Var1 = (*(code *)PTR_geteuid_00716788)();
  return _Var1;
}


