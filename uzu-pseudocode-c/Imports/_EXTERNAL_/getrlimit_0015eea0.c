// Function : getrlimit
// Namespace: _EXTERNAL_
// Entry    : 0015eea0
// Prototype: int getrlimit(__rlimit_resource_t __resource, rlimit * __rlimits)
// Body     : 0015eea0 - 0015eea5


/* WARNING: Enum "__rlimit_resource": Some values do not have unique names */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getrlimit(__rlimit_resource_t __resource,rlimit *__rlimits)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_getrlimit_00717f50)();
  return iVar1;
}


