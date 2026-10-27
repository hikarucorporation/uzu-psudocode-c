// Function : setrlimit
// Namespace: _EXTERNAL_
// Entry    : 0015dae0
// Prototype: int setrlimit(__rlimit_resource_t __resource, rlimit * __rlimits)
// Body     : 0015dae0 - 0015dae5


/* WARNING: Enum "__rlimit_resource": Some values do not have unique names */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setrlimit(__rlimit_resource_t __resource,rlimit *__rlimits)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_setrlimit_00717570)();
  return iVar1;
}


