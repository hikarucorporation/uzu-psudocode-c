// Function : libpd_get_instancedata
// Namespace: 
// Entry    : 004d7b50
// Prototype: undefined8 libpd_get_instancedata(void)
// Body     : 004d7b50 - 004d7b71


undefined8 libpd_get_instancedata(void)

{
  long *plVar1;
  
  plVar1 = (long *)__tls_get_addr(&PTR_007159b0);
  return *(undefined8 *)(*(long *)(*(long *)(*plVar1 + 0x50) + 0x60) + 0x78);
}


