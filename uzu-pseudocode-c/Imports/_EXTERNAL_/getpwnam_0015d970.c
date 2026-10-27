// Function : getpwnam
// Namespace: _EXTERNAL_
// Entry    : 0015d970
// Prototype: passwd * getpwnam(char * __name)
// Body     : 0015d970 - 0015d975


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

passwd * getpwnam(char *__name)

{
  passwd *ppVar1;
  
  ppVar1 = (passwd *)(*(code *)PTR_getpwnam_007174b8)();
  return ppVar1;
}


