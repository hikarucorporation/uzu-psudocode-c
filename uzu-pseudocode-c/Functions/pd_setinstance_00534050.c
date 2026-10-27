// Function : pd_setinstance
// Namespace: 
// Entry    : 00534050
// Prototype: undefined pd_setinstance(undefined8 param_1)
// Body     : 00534050 - 00534068


void pd_setinstance(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)__tls_get_addr(&PTR_007159b0);
  *puVar1 = param_1;
  return;
}


