// Function : setitimer
// Namespace: _EXTERNAL_
// Entry    : 0015dfc0
// Prototype: int setitimer(__itimer_which_t __which, itimerval * __new, itimerval * __old)
// Body     : 0015dfc0 - 0015dfc5


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setitimer(__itimer_which_t __which,itimerval *__new,itimerval *__old)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_setitimer_007177e0)();
  return iVar1;
}


