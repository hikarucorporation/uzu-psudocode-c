// Function : get_sys_soundin
// Namespace: 
// Entry    : 005422f0
// Prototype: undefined8 get_sys_soundin(void)
// Body     : 005422f0 - 0054230d


undefined8 get_sys_soundin(void)

{
  long *plVar1;
  
  plVar1 = (long *)__tls_get_addr(&PTR_007159b0);
  return *(undefined8 *)(*(long *)(*plVar1 + 0x50) + 0x48);
}


