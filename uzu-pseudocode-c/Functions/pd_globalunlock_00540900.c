// Function : pd_globalunlock
// Namespace: 
// Entry    : 00540900
// Prototype: undefined pd_globalunlock(void)
// Body     : 00540900 - 00540918


void pd_globalunlock(void)

{
  pthread_rwlock_unlock((pthread_rwlock_t *)sys_rwlock);
  pthread_rwlock_rdlock((pthread_rwlock_t *)sys_rwlock);
  return;
}


