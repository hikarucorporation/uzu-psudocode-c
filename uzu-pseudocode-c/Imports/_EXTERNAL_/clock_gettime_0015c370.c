// Function : clock_gettime
// Namespace: _EXTERNAL_
// Entry    : 0015c370
// Prototype: int clock_gettime(clockid_t __clock_id, timespec * __tp)
// Body     : 0015c370 - 0015c375


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int clock_gettime(clockid_t __clock_id,timespec *__tp)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_clock_gettime_007169b8)();
  return iVar1;
}


