// Function : pthread_setaffinity_np
// Namespace: _EXTERNAL_
// Entry    : 0015d510
// Prototype: int pthread_setaffinity_np(pthread_t __th, size_t __cpusetsize, cpu_set_t * __cpuset)
// Body     : 0015d510 - 0015d515


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_setaffinity_np(pthread_t __th,size_t __cpusetsize,cpu_set_t *__cpuset)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_setaffinity_np_00717288)();
  return iVar1;
}


