// Function : glob_ping
// Namespace: 
// Entry    : 0053f7a0
// Prototype: undefined8 glob_ping(void)
// Body     : 0053f7a0 - 0053f7bd


undefined8 glob_ping(void)

{
  byte *pbVar1;
  undefined8 in_RAX;
  long *plVar2;
  
  plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
  pbVar1 = (byte *)(*(long *)(*plVar2 + 0x38) + 0x48);
  *pbVar1 = *pbVar1 & 0xf7;
  return in_RAX;
}


