// Function : x_midi_freepdinstance
// Namespace: 
// Entry    : 005542c0
// Prototype: undefined x_midi_freepdinstance(void)
// Body     : 005542c0 - 005542e2


void x_midi_freepdinstance(void)

{
  long *plVar1;
  
  plVar1 = (long *)__tls_get_addr(&PTR_007159b0);
  freebytes(*(void **)(*plVar1 + 0x30));
  return;
}


