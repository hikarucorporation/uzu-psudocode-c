// Function : sys_havetkproc
// Namespace: 
// Entry    : 0053f2d0
// Prototype: byte sys_havetkproc(void)
// Body     : 0053f2d0 - 0053f2f0


byte sys_havetkproc(void)

{
  long *plVar1;
  
  plVar1 = (long *)__tls_get_addr(&PTR_007159b0);
  return *(byte *)(*(long *)(*plVar1 + 0x38) + 0x48) & 1;
}


