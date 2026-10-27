// Function : d_ugen_freepdinstance
// Namespace: 
// Entry    : 004f5940
// Prototype: undefined d_ugen_freepdinstance(void)
// Body     : 004f5940 - 004f5962


void d_ugen_freepdinstance(void)

{
  long *plVar1;
  
  plVar1 = (long *)__tls_get_addr(&PTR_007159b0);
  freebytes(*(void **)(*plVar1 + 0x40));
  return;
}


