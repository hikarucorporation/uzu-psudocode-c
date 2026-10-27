// Function : gettimeofday
// Namespace: _EXTERNAL_
// Entry    : 0015cb90
// Prototype: int gettimeofday(timeval * __tv, __timezone_ptr_t __tz)
// Body     : 0015cb90 - 0015cb95


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int gettimeofday(timeval *__tv,__timezone_ptr_t __tz)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_gettimeofday_00716dc8)();
  return iVar1;
}


