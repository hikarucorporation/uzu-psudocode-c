// Function : libpd_set_floathook
// Namespace: 
// Entry    : 004d7410
// Prototype: undefined libpd_set_floathook(undefined8 param_1)
// Body     : 004d7410 - 004d745a


void libpd_set_floathook(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  
  puVar2 = PTR_libpd_mainimp_00715cf0;
  if (s_initialized == '\x01') {
    plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
    lVar1 = *(long *)(*(long *)(*plVar3 + 0x50) + 0x60);
    *(undefined8 *)(lVar1 + 8) = param_1;
    *(undefined8 *)(lVar1 + 0x10) = 0;
    return;
  }
  *(undefined8 *)(PTR_libpd_mainimp_00715cf0 + 8) = param_1;
  *(undefined8 *)(puVar2 + 0x10) = 0;
  return;
}


