// Function : get_sys_dacsr
// Namespace: 
// Entry    : 00542370
// Prototype: long get_sys_dacsr(void)
// Body     : 00542370 - 0054238d


long get_sys_dacsr(void)

{
  long *plVar1;
  
  plVar1 = (long *)__tls_get_addr(&PTR_007159b0);
  return *(long *)(*plVar1 + 0x50) + 0x30;
}


