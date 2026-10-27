// Function : writesf_stop
// Namespace: 
// Entry    : 0059ec40
// Prototype: undefined writesf_stop(long param_1)
// Body     : 0059ec40 - 0059ec87


void writesf_stop(long param_1)

{
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x2e8));
  *(undefined4 *)(param_1 + 0x260) = 0;
  *(undefined4 *)(param_1 + 0x268) = 2;
  pthread_cond_signal((pthread_cond_t *)(param_1 + 0x310));
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x2e8));
  return;
}


