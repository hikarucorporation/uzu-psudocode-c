// Function : libpd_this_instance
// Namespace: 
// Entry    : 004d7ad0
// Prototype: undefined8 libpd_this_instance(void)
// Body     : 004d7ad0 - 004d7ae5


undefined8 libpd_this_instance(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)__tls_get_addr(&PTR_007159b0);
  return *puVar1;
}


