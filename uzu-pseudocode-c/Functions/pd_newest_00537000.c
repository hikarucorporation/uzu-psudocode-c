// Function : pd_newest
// Namespace: 
// Entry    : 00537000
// Prototype: undefined8 pd_newest(void)
// Body     : 00537000 - 00537019


undefined8 pd_newest(void)

{
  long *plVar1;
  
  plVar1 = (long *)__tls_get_addr(&PTR_007159b0);
  return *(undefined8 *)(*plVar1 + 0x58);
}


