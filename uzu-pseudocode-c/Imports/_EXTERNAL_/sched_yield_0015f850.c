// Function : sched_yield
// Namespace: _EXTERNAL_
// Entry    : 0015f850
// Prototype: int sched_yield(void)
// Body     : 0015f850 - 0015f855


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sched_yield(void)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sched_yield_00718428)();
  return iVar1;
}


