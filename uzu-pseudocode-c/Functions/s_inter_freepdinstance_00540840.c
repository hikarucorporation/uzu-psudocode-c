// Function : s_inter_freepdinstance
// Namespace: 
// Entry    : 00540840
// Prototype: undefined s_inter_freepdinstance(void)
// Body     : 00540840 - 005408a8


void s_inter_freepdinstance(void)

{
  undefined4 *puVar1;
  long *plVar2;
  
  plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
  puVar1 = *(undefined4 **)(*plVar2 + 0x38);
  if (*(long *)(puVar1 + 2) != 0) {
    binbuf_free(*(void **)(puVar1 + 10));
    *(undefined8 *)(puVar1 + 10) = 0;
    freebytes(*(void **)(puVar1 + 2));
    *(undefined8 *)(puVar1 + 2) = 0;
    *puVar1 = 0;
  }
  pthread_mutex_destroy((pthread_mutex_t *)(puVar1 + 0x14));
  freebytes(puVar1);
  return;
}


