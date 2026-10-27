// Function : d_ugen_newpdinstance
// Namespace: 
// Entry    : 004f58f0
// Prototype: undefined d_ugen_newpdinstance(void)
// Body     : 004f58f0 - 004f5933


void d_ugen_newpdinstance(void)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  
  puVar2 = getbytes(0x140);
  plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
  *(undefined8 **)(*plVar3 + 0x40) = puVar2;
  *puVar2 = 0;
  lVar1 = *(long *)(*plVar3 + 0x40);
  *(undefined4 *)(lVar1 + 8) = 0;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  return;
}


