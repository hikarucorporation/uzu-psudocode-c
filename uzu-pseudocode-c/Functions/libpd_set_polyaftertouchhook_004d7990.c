// Function : libpd_set_polyaftertouchhook
// Namespace: 
// Entry    : 004d7990
// Prototype: undefined libpd_set_polyaftertouchhook(undefined8 param_1)
// Body     : 004d7990 - 004d79ca


void libpd_set_polyaftertouchhook(undefined8 param_1)

{
  long *plVar1;
  
  if (s_initialized == '\x01') {
    plVar1 = (long *)__tls_get_addr(&PTR_007159b0);
    *(undefined8 *)(*(long *)(*(long *)(*plVar1 + 0x50) + 0x60) + 0x58) = param_1;
    return;
  }
  *(undefined8 *)(PTR_libpd_mainimp_00715cf0 + 0x58) = param_1;
  return;
}


