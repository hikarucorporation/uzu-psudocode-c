// Function : libpd_set_printhook
// Namespace: 
// Entry    : 004d7390
// Prototype: undefined libpd_set_printhook(undefined8 param_1)
// Body     : 004d7390 - 004d73c8


void libpd_set_printhook(undefined8 param_1)

{
  long *plVar1;
  
  if (s_initialized == '\x01') {
    plVar1 = (long *)__tls_get_addr(&PTR_007159b0);
    *(undefined8 *)(*(long *)(*plVar1 + 0x50) + 0x58) = param_1;
    return;
  }
  *(undefined8 *)PTR_sys_printhook_00715850 = param_1;
  return;
}


