// Function : mayer_init
// Namespace: 
// Entry    : 004eb510
// Prototype: undefined8 mayer_init(void)
// Body     : 004eb510 - 004eb525


undefined8 mayer_init(void)

{
  undefined8 in_RAX;
  long lVar1;
  
  lVar1 = __tls_get_addr(&PTR_007153d8);
  *(int *)(lVar1 + 0xc0) = *(int *)(lVar1 + 0xc0) + 1;
  return in_RAX;
}


