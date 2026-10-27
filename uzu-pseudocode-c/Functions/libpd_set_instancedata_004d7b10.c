// Function : libpd_set_instancedata
// Namespace: 
// Entry    : 004d7b10
// Prototype: undefined libpd_set_instancedata(undefined8 param_1, undefined8 param_2)
// Body     : 004d7b10 - 004d7b47


void libpd_set_instancedata(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
  lVar1 = *(long *)(*(long *)(*plVar2 + 0x50) + 0x60);
  *(undefined8 *)(lVar1 + 0x78) = param_1;
  *(undefined8 *)(lVar1 + 0x88) = param_2;
  return;
}


