// Function : sys_lock
// Namespace: 
// Entry    : 0053e260
// Prototype: undefined sys_lock(void)
// Body     : 0053e260 - 0053e29e


void sys_lock(void)

{
  long *plVar1;
  
  plVar1 = (long *)__tls_get_addr(&PTR_007159b0);
  pthread_mutex_lock((pthread_mutex_t *)(*(long *)(*plVar1 + 0x38) + 0x50));
  pthread_rwlock_rdlock((pthread_rwlock_t *)sys_rwlock);
  *(undefined4 *)(*plVar1 + 0x180) = 1;
  return;
}


