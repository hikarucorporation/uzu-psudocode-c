// Function : ugen_getsortno
// Namespace: 
// Entry    : 004f6c50
// Prototype: undefined4 ugen_getsortno(void)
// Body     : 004f6c50 - 004f6c6c


undefined4 ugen_getsortno(void)

{
  long *plVar1;
  
  plVar1 = (long *)__tls_get_addr(&PTR_007159b0);
  return *(undefined4 *)(*(long *)(*plVar1 + 0x40) + 0x18);
}


