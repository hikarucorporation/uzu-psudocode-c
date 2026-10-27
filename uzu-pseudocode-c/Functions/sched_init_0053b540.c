// Function : sched_init
// Namespace: 
// Entry    : 0053b540
// Prototype: undefined sched_init(void)
// Body     : 0053b540 - 0053b55d


void sched_init(void)

{
  pthread_mutex_init((pthread_mutex_t *)sched_mutex,(pthread_mutexattr_t *)0x0);
  pthread_cond_init((pthread_cond_t *)sched_cond,(pthread_condattr_t *)0x0);
  return;
}


