// Function : pthread_attr_setschedparam
// Namespace: _EXTERNAL_
// Entry    : 0015d1c0
// Prototype: int pthread_attr_setschedparam(pthread_attr_t * __attr, sched_param * __param)
// Body     : 0015d1c0 - 0015d1c5


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_attr_setschedparam(pthread_attr_t *__attr,sched_param *__param)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_attr_setschedparam_007170e0)();
  return iVar1;
}


