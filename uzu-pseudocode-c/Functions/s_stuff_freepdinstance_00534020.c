// Function : s_stuff_freepdinstance
// Namespace: 
// Entry    : 00534020
// Prototype: undefined s_stuff_freepdinstance(void)
// Body     : 00534020 - 00534042


void s_stuff_freepdinstance(void)

{
  long *plVar1;
  
  plVar1 = (long *)__tls_get_addr(&PTR_007159b0);
  freebytes(*(void **)(*plVar1 + 0x50));
  return;
}


