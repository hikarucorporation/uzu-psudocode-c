// Function : get_sys_time
// Namespace: 
// Entry    : 00542350
// Prototype: undefined8 get_sys_time(void)
// Body     : 00542350 - 00542365


undefined8 get_sys_time(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)__tls_get_addr(&PTR_007159b0);
  return *puVar1;
}


