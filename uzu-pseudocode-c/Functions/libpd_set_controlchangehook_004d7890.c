// Function : libpd_set_controlchangehook
// Namespace: 
// Entry    : 004d7890
// Prototype: undefined libpd_set_controlchangehook(undefined8 param_1)
// Body     : 004d7890 - 004d78ca


void libpd_set_controlchangehook(undefined8 param_1)

{
  long *plVar1;
  
  if (s_initialized == '\x01') {
    plVar1 = (long *)__tls_get_addr(&PTR_007159b0);
    *(undefined8 *)(*(long *)(*(long *)(*plVar1 + 0x50) + 0x60) + 0x38) = param_1;
    return;
  }
  *(undefined8 *)(PTR_libpd_mainimp_00715cf0 + 0x38) = param_1;
  return;
}


