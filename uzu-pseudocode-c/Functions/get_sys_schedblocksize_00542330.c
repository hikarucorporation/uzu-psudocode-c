// Function : get_sys_schedblocksize
// Namespace: 
// Entry    : 00542330
// Prototype: long get_sys_schedblocksize(void)
// Body     : 00542330 - 0054234d


long get_sys_schedblocksize(void)

{
  long *plVar1;
  
  plVar1 = (long *)__tls_get_addr(&PTR_007159b0);
  return *(long *)(*plVar1 + 0x50) + 0x28;
}


