// Function : clock_getlogicaltime
// Namespace: 
// Entry    : 0015ba10
// Prototype: undefined8 clock_getlogicaltime(void)
// Body     : 0015ba10 - 0015ba15


undefined8 clock_getlogicaltime(void)

{
  undefined8 uVar1;
  
  uVar1 = (*(code *)PTR_clock_getlogicaltime_00716508)();
  return uVar1;
}


