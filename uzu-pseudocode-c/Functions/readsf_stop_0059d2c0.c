// Function : readsf_stop
// Namespace: 
// Entry    : 0059d2c0
// Prototype: undefined readsf_stop(long param_1)
// Body     : 0059d2c0 - 0059d307


void readsf_stop(long param_1)

{
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x2e8));
  *(undefined4 *)(param_1 + 0x260) = 0;
  *(undefined4 *)(param_1 + 0x268) = 2;
  pthread_cond_signal((pthread_cond_t *)(param_1 + 0x310));
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x2e8));
  return;
}


