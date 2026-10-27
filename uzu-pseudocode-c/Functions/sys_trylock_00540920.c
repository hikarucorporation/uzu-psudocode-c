// Function : sys_trylock
// Namespace: 
// Entry    : 00540920
// Prototype: int sys_trylock(void)
// Body     : 00540920 - 00540986


int sys_trylock(void)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
  iVar1 = pthread_mutex_trylock((pthread_mutex_t *)(*(long *)(*plVar2 + 0x38) + 0x50));
  if (iVar1 != 0) {
    return iVar1;
  }
  iVar1 = pthread_rwlock_tryrdlock((pthread_rwlock_t *)sys_rwlock);
  if (iVar1 == 0) {
    return 0;
  }
  plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
  pthread_mutex_unlock((pthread_mutex_t *)(*(long *)(*plVar2 + 0x38) + 0x50));
  return iVar1;
}


