// Function : sched_term
// Namespace: 
// Entry    : 0053b560
// Prototype: undefined sched_term(void)
// Body     : 0053b560 - 0053b579


void sched_term(void)

{
  pthread_mutex_destroy((pthread_mutex_t *)sched_mutex);
  pthread_cond_destroy((pthread_cond_t *)sched_cond);
  return;
}


