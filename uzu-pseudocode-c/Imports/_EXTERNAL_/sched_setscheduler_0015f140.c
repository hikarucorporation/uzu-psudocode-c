// Function : sched_setscheduler
// Namespace: _EXTERNAL_
// Entry    : 0015f140
// Prototype: int sched_setscheduler(__pid_t __pid, int __policy, sched_param * __param)
// Body     : 0015f140 - 0015f145


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sched_setscheduler(__pid_t __pid,int __policy,sched_param *__param)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sched_setscheduler_007180a0)();
  return iVar1;
}


