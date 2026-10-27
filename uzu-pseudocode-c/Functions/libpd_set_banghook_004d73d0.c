// Function : libpd_set_banghook
// Namespace: 
// Entry    : 004d73d0
// Prototype: undefined libpd_set_banghook(undefined8 param_1)
// Body     : 004d73d0 - 004d7408


void libpd_set_banghook(undefined8 param_1)

{
  long *plVar1;
  
  if (s_initialized == '\x01') {
    plVar1 = (long *)__tls_get_addr(&PTR_007159b0);
    **(undefined8 **)(*(long *)(*plVar1 + 0x50) + 0x60) = param_1;
    return;
  }
  *(undefined8 *)PTR_libpd_mainimp_00715cf0 = param_1;
  return;
}


