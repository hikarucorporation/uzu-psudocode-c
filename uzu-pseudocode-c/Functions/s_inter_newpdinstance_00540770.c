// Function : s_inter_newpdinstance
// Namespace: 
// Entry    : 00540770
// Prototype: undefined s_inter_newpdinstance(void)
// Body     : 00540770 - 005407d8


void s_inter_newpdinstance(void)

{
  byte *pbVar1;
  long lVar2;
  void *pvVar3;
  long *plVar4;
  
  pvVar3 = getbytes(0x10078);
  plVar4 = (long *)__tls_get_addr(&PTR_007159b0);
  *(void **)(*plVar4 + 0x38) = pvVar3;
  pthread_mutex_init((pthread_mutex_t *)((long)pvVar3 + 0x50),(pthread_mutexattr_t *)0x0);
  lVar2 = *plVar4;
  *(undefined4 *)(lVar2 + 0x180) = 0;
  pbVar1 = (byte *)(*(long *)(lVar2 + 0x38) + 0x48);
  *pbVar1 = *pbVar1 & 0xfd;
  pbVar1 = (byte *)(*(long *)(lVar2 + 0x38) + 0x48);
  *pbVar1 = *pbVar1 & 0xfe;
  *(undefined4 *)(*(long *)(lVar2 + 0x38) + 0x14) = 0xffffffff;
  return;
}


