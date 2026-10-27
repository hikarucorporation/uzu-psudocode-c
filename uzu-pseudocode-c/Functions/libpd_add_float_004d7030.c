// Function : libpd_add_float
// Namespace: 
// Entry    : 004d7030
// Prototype: undefined8 libpd_add_float(undefined4 param_1)
// Body     : 004d7030 - 004d706e


undefined8 libpd_add_float(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 in_EAX;
  long lVar2;
  undefined8 uStack_8;
  
  uStack_8 = CONCAT44(param_1,in_EAX);
  lVar2 = __tls_get_addr(&PTR_007153d8);
  puVar1 = *(undefined4 **)(lVar2 + 0xb8);
  *puVar1 = 1;
  puVar1[2] = param_1;
  *(undefined4 **)(lVar2 + 0xb8) = puVar1 + 4;
  *(int *)(lVar2 + 0xb0) = *(int *)(lVar2 + 0xb0) + 1;
  return uStack_8;
}


