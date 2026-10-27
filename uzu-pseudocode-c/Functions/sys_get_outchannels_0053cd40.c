// Function : sys_get_outchannels
// Namespace: 
// Entry    : 0053cd40
// Prototype: undefined4 sys_get_outchannels(void)
// Body     : 0053cd40 - 0053cd5c


undefined4 sys_get_outchannels(void)

{
  long *plVar1;
  
  plVar1 = (long *)__tls_get_addr(&PTR_007159b0);
  return *(undefined4 *)(*(long *)(*plVar1 + 0x50) + 0x38);
}


