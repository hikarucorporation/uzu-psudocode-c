// Function : outlet_setstacklim
// Namespace: 
// Entry    : 005387d0
// Prototype: undefined8 outlet_setstacklim(void)
// Body     : 005387d0 - 0053881f


undefined8 outlet_setstacklim(void)

{
  void *pvVar1;
  undefined8 in_RAX;
  long lVar2;
  
  pvVar1 = backtracer_stack;
  while (pvVar1 != (void *)0x0) {
    backtracer_stack = *(void **)((long)pvVar1 + 0x68);
    freebytes(pvVar1);
    pvVar1 = backtracer_stack;
  }
  backtracer_stack = pvVar1;
  lVar2 = __tls_get_addr(&PTR_007153d8);
  *(undefined4 *)(lVar2 + 0xf0) = 0;
  *(int *)(lVar2 + 0xf4) = *(int *)(lVar2 + 0xf4) + 1;
  return in_RAX;
}


