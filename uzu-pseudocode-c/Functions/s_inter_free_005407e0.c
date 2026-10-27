// Function : s_inter_free
// Namespace: 
// Entry    : 005407e0
// Prototype: undefined s_inter_free(undefined4 * param_1)
// Body     : 005407e0 - 00540834


void s_inter_free(undefined4 *param_1)

{
  if (*(long *)(param_1 + 2) != 0) {
    binbuf_free(*(void **)(param_1 + 10));
    *(undefined8 *)(param_1 + 10) = 0;
    freebytes(*(void **)(param_1 + 2));
    *(undefined8 *)(param_1 + 2) = 0;
    *param_1 = 0;
  }
  pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 0x14));
  freebytes(param_1);
  return;
}


