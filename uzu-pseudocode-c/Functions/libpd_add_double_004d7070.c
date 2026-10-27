// Function : libpd_add_double
// Namespace: 
// Entry    : 004d7070
// Prototype: double libpd_add_double(double param_1)
// Body     : 004d7070 - 004d70b0


double libpd_add_double(double param_1)

{
  undefined4 *puVar1;
  long lVar2;
  
  lVar2 = __tls_get_addr(&PTR_007153d8);
  puVar1 = *(undefined4 **)(lVar2 + 0xb8);
  *puVar1 = 1;
  puVar1[2] = (float)param_1;
  *(undefined4 **)(lVar2 + 0xb8) = puVar1 + 4;
  *(int *)(lVar2 + 0xb0) = *(int *)(lVar2 + 0xb0) + 1;
  return param_1;
}


