// Function : g_template_newpdinstance
// Namespace: 
// Entry    : 005265c0
// Prototype: undefined g_template_newpdinstance(void)
// Body     : 005265c0 - 005265ea


void g_template_newpdinstance(void)

{
  void *pvVar1;
  long *plVar2;
  
  pvVar1 = getbytes(0x110);
  plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
  *(void **)(*(long *)(*plVar2 + 0x48) + 8) = pvVar1;
  return;
}


