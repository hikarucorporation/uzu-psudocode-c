// Function : sys_close_audio
// Namespace: 
// Entry    : 0053b620
// Prototype: undefined sys_close_audio(void)
// Body     : 0053b620 - 0053b658


void sys_close_audio(void)

{
  pthread_mutex_lock((pthread_mutex_t *)sched_mutex);
  if (sys_quit != 1) {
    sys_quit = 3;
  }
  pthread_cond_signal((pthread_cond_t *)sched_cond);
  pthread_mutex_unlock((pthread_mutex_t *)sched_mutex);
  return;
}


