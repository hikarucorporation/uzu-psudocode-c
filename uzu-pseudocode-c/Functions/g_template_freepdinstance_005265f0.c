// Function : g_template_freepdinstance
// Namespace: 
// Entry    : 005265f0
// Prototype: undefined g_template_freepdinstance(void)
// Body     : 005265f0 - 00526616


void g_template_freepdinstance(void)

{
  long *plVar1;
  
  plVar1 = (long *)__tls_get_addr(&PTR_007159b0);
  freebytes(*(void **)(*(long *)(*plVar1 + 0x48) + 8));
  return;
}


