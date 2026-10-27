// Function : readsf_float
// Namespace: 
// Entry    : 0059d200
// Prototype: undefined readsf_float(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0059d200 - 0059d282


void readsf_float(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                 char *param_13,undefined8 param_14)

{
  if ((float)param_1 == 0.0) {
    pthread_mutex_lock((pthread_mutex_t *)(param_9 + 0x2e8));
    *(undefined4 *)(param_9 + 0x260) = 0;
    *(undefined4 *)(param_9 + 0x268) = 2;
    pthread_cond_signal((pthread_cond_t *)(param_9 + 0x310));
    pthread_mutex_unlock((pthread_mutex_t *)(param_9 + 0x2e8));
    return;
  }
  if (*(int *)(param_9 + 0x260) == 1) {
    *(undefined4 *)(param_9 + 0x260) = 2;
    return;
  }
  pd_error(param_1,0,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
           "[readsf~]: start requested with no prior \'open\'",param_11,param_12,param_13,param_14);
  return;
}


