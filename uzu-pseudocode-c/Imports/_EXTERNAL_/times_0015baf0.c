// Function : times
// Namespace: _EXTERNAL_
// Entry    : 0015baf0
// Prototype: clock_t times(tms * __buffer)
// Body     : 0015baf0 - 0015baf5


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

clock_t times(tms *__buffer)

{
  clock_t cVar1;
  
  cVar1 = (*(code *)PTR_times_00716578)();
  return cVar1;
}


