// Function : time
// Namespace: _EXTERNAL_
// Entry    : 0015db00
// Prototype: time_t time(time_t * __timer)
// Body     : 0015db00 - 0015db05


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

time_t time(time_t *__timer)

{
  time_t tVar1;
  
  tVar1 = (*(code *)PTR_time_00717580)();
  return tVar1;
}


