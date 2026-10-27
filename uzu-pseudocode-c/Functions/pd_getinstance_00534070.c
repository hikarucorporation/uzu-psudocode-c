// Function : pd_getinstance
// Namespace: 
// Entry    : 00534070
// Prototype: undefined8 pd_getinstance(void)
// Body     : 00534070 - 00534085


undefined8 pd_getinstance(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)__tls_get_addr(&PTR_007159b0);
  return *puVar1;
}


