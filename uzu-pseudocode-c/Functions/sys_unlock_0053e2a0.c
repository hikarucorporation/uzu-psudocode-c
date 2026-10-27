// Function : sys_unlock
// Namespace: 
// Entry    : 0053e2a0
// Prototype: undefined sys_unlock(void)
// Body     : 0053e2a0 - 0053e2dd


void sys_unlock(void)

{
  long *plVar1;
  
  plVar1 = (long *)__tls_get_addr(&PTR_007159b0);
  *(undefined4 *)(*plVar1 + 0x180) = 0;
  pthread_rwlock_unlock((pthread_rwlock_t *)sys_rwlock);
  pthread_mutex_unlock((pthread_mutex_t *)(*(long *)(*plVar1 + 0x38) + 0x50));
  return;
}


