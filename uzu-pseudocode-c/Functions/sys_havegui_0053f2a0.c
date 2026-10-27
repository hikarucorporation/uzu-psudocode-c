// Function : sys_havegui
// Namespace: 
// Entry    : 0053f2a0
// Prototype: uint sys_havegui(void)
// Body     : 0053f2a0 - 0053f2c1


uint sys_havegui(void)

{
  long *plVar1;
  
  plVar1 = (long *)__tls_get_addr(&PTR_007159b0);
  return *(uint *)(*(long *)(*plVar1 + 0x38) + 0x48) >> 1 & 1;
}


