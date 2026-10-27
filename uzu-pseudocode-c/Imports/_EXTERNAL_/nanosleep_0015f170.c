// Function : nanosleep
// Namespace: _EXTERNAL_
// Entry    : 0015f170
// Prototype: int nanosleep(timespec * __requested_time, timespec * __remaining)
// Body     : 0015f170 - 0015f175


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int nanosleep(timespec *__requested_time,timespec *__remaining)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_nanosleep_007180b8)();
  return iVar1;
}


