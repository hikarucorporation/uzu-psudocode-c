// Function : writesf_free
// Namespace: 
// Entry    : 0059eb30
// Prototype: undefined writesf_free(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0059eb30 - 0059ec02


void writesf_free(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                 char *param_13,undefined8 param_14)

{
  pthread_mutex_t *__mutex;
  pthread_cond_t *__cond;
  int iVar1;
  undefined8 extraout_RDX;
  undefined8 extraout_XMM0_Qa;
  void *pvStack_28;
  
  __mutex = (pthread_mutex_t *)(param_9 + 0x2e8);
  pthread_mutex_lock(__mutex);
  *(undefined4 *)(param_9 + 0x268) = 3;
  __cond = (pthread_cond_t *)(param_9 + 0x310);
  pthread_cond_signal(__cond);
  if (*(int *)(param_9 + 0x268) != 0) {
    do {
      pthread_cond_signal(__cond);
      pthread_cond_wait((pthread_cond_t *)(param_9 + 0x340),__mutex);
    } while (*(int *)(param_9 + 0x268) != 0);
  }
  pthread_mutex_unlock(__mutex);
  iVar1 = pthread_join(*(pthread_t *)(param_9 + 0x370),&pvStack_28);
  if (iVar1 != 0) {
    pd_error(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
             "[writesf~] free: join failed",extraout_RDX,param_12,param_13,param_14);
  }
  pthread_cond_destroy(__cond);
  pthread_cond_destroy((pthread_cond_t *)(param_9 + 0x340));
  pthread_mutex_destroy(__mutex);
  freebytes(*(void **)(param_9 + 0x40));
  return;
}


