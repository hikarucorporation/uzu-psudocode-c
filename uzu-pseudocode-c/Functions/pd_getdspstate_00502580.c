// Function : pd_getdspstate
// Namespace: 
// Entry    : 00502580
// Prototype: undefined4 pd_getdspstate(void)
// Body     : 00502580 - 0050259c


undefined4 pd_getdspstate(void)

{
  long *plVar1;
  
  plVar1 = (long *)__tls_get_addr(&PTR_007159b0);
  return *(undefined4 *)(*(long *)(*plVar1 + 0x48) + 0x38);
}


