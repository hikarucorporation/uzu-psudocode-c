// Function : sys_init_fdpoll
// Namespace: 
// Entry    : 0053e780
// Prototype: undefined sys_init_fdpoll(void)
// Body     : 0053e780 - 0053e7ef


void sys_init_fdpoll(void)

{
  long *plVar1;
  void *pvVar2;
  undefined4 *puVar3;
  
  plVar1 = (long *)__tls_get_addr();
  if (*(long *)(*(long *)(*plVar1 + 0x38) + 8) == 0) {
    pvVar2 = getbytes(0);
    plVar1 = (long *)__tls_get_addr(&PTR_007159b0);
    puVar3 = *(undefined4 **)(*plVar1 + 0x38);
    *(void **)(puVar3 + 2) = pvVar2;
    *puVar3 = 0;
    puVar3 = binbuf_new();
    *(undefined4 **)(*(long *)(*plVar1 + 0x38) + 0x28) = puVar3;
    return;
  }
  return;
}


