// Function : get_sys_soundout
// Namespace: 
// Entry    : 005422d0
// Prototype: undefined8 get_sys_soundout(void)
// Body     : 005422d0 - 005422ed


undefined8 get_sys_soundout(void)

{
  long *plVar1;
  
  plVar1 = (long *)__tls_get_addr(&PTR_007159b0);
  return *(undefined8 *)(*(long *)(*plVar1 + 0x50) + 0x40);
}


