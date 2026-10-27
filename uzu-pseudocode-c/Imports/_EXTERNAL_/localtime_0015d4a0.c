// Function : localtime
// Namespace: _EXTERNAL_
// Entry    : 0015d4a0
// Prototype: tm * localtime(time_t * __timer)
// Body     : 0015d4a0 - 0015d4a5


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

tm * localtime(time_t *__timer)

{
  tm *ptVar1;
  
  ptVar1 = (tm *)(*(code *)PTR_localtime_00717250)();
  return ptVar1;
}


