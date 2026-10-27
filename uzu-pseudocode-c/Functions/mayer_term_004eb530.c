// Function : mayer_term
// Namespace: 
// Entry    : 004eb530
// Prototype: undefined mayer_term(void)
// Body     : 004eb530 - 004eb5f5


void mayer_term(void)

{
  int *piVar1;
  long lVar2;
  
  lVar2 = __tls_get_addr(&PTR_007153d8);
  piVar1 = (int *)(lVar2 + 0xc0);
  *piVar1 = *piVar1 + -1;
  if ((*piVar1 == 0) && (*(int *)(lVar2 + 0xe0) != 0)) {
    freebytes(*(void **)(lVar2 + 0xd0));
    freebytes(*(void **)(lVar2 + 0xd8));
    freebytes(*(void **)(lVar2 + 200));
    *(undefined4 *)(lVar2 + 0xe0) = 0;
    *(undefined8 *)(lVar2 + 0xd0) = 0;
    *(undefined4 *)(lVar2 + 0xe4) = 0;
    *(undefined8 *)(lVar2 + 0xd8) = 0;
  }
  return;
}


