// Function : pd_getcanvaslist
// Namespace: 
// Entry    : 0053ae40
// Prototype: undefined8 pd_getcanvaslist(void)
// Body     : 0053ae40 - 0053ae59


undefined8 pd_getcanvaslist(void)

{
  long *plVar1;
  
  plVar1 = (long *)__tls_get_addr(&PTR_007159b0);
  return *(undefined8 *)(*plVar1 + 0x10);
}


