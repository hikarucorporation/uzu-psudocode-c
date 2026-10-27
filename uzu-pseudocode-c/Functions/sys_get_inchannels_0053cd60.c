// Function : sys_get_inchannels
// Namespace: 
// Entry    : 0053cd60
// Prototype: undefined4 sys_get_inchannels(void)
// Body     : 0053cd60 - 0053cd7c


undefined4 sys_get_inchannels(void)

{
  long *plVar1;
  
  plVar1 = (long *)__tls_get_addr(&PTR_007159b0);
  return *(undefined4 *)(*(long *)(*plVar1 + 0x50) + 0x34);
}


