// Function : getpwuid
// Namespace: _EXTERNAL_
// Entry    : 0015bb10
// Prototype: passwd * getpwuid(__uid_t __uid)
// Body     : 0015bb10 - 0015bb15


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

passwd * getpwuid(__uid_t __uid)

{
  passwd *ppVar1;
  
  ppVar1 = (passwd *)(*(code *)PTR_getpwuid_00716588)();
  return ppVar1;
}


