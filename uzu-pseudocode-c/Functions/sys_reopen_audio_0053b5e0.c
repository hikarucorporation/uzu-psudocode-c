// Function : sys_reopen_audio
// Namespace: 
// Entry    : 0053b5e0
// Prototype: undefined sys_reopen_audio(void)
// Body     : 0053b5e0 - 0053b618


void sys_reopen_audio(void)

{
  pthread_mutex_lock((pthread_mutex_t *)sched_mutex);
  if (sys_quit != 1) {
    sys_quit = 2;
  }
  pthread_cond_signal((pthread_cond_t *)sched_cond);
  pthread_mutex_unlock((pthread_mutex_t *)sched_mutex);
  return;
}


