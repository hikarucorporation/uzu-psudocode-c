// Function : libpd_start_message
// Namespace: 
// Entry    : 004d5610
// Prototype: undefined8 libpd_start_message(int param_1)
// Body     : 004d5610 - 004d568b


undefined8 libpd_start_message(int param_1)

{
  long lVar1;
  void *pvVar2;
  
  lVar1 = __tls_get_addr(&PTR_007153d8);
  if (*(int *)(lVar1 + 0xa0) < param_1) {
    pvVar2 = realloc(*(void **)(lVar1 + 0xa8),(long)param_1 << 4);
    if (pvVar2 == (void *)0x0) {
      return 0xffffffff;
    }
    *(void **)(lVar1 + 0xa8) = pvVar2;
    *(int *)(lVar1 + 0xa0) = param_1;
  }
  else {
    pvVar2 = *(void **)(lVar1 + 0xa8);
  }
  *(undefined4 *)(lVar1 + 0xb0) = 0;
  *(void **)(lVar1 + 0xb8) = pvVar2;
  return 0;
}


