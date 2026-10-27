// Function : sys_exit
// Namespace: 
// Entry    : 0053b580
// Prototype: undefined sys_exit(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, uint param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0053b580 - 0053b5d8


void sys_exit(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             uint param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,char *param_13
             ,undefined8 param_14)

{
  undefined8 extraout_XMM0_Qa;
  
  pthread_mutex_lock((pthread_mutex_t *)sched_mutex);
  if (sys_quit == 1) {
    pd_error(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
             "quit already called with exit code %d",(ulong)sys_exitcode,param_12,param_13,param_14)
    ;
  }
  else {
    sys_exitcode = param_9;
  }
  sys_quit = 1;
  pthread_cond_signal((pthread_cond_t *)sched_cond);
  pthread_mutex_unlock((pthread_mutex_t *)sched_mutex);
  return;
}


