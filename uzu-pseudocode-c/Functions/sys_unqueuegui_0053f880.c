// Function : sys_unqueuegui
// Namespace: 
// Entry    : 0053f880
// Prototype: undefined sys_unqueuegui(long param_1)
// Body     : 0053f880 - 0053f915


void sys_unqueuegui(long param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
  lVar1 = *(long *)(*plVar2 + 0x38);
  plVar2 = *(long **)(lVar1 + 0x20);
  while( true ) {
    if (plVar2 == (long *)0x0) {
      return;
    }
    if (*plVar2 != param_1) break;
    *(long *)(lVar1 + 0x20) = plVar2[3];
    freebytes(plVar2);
    plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
    lVar1 = *(long *)(*plVar2 + 0x38);
    plVar2 = *(long **)(lVar1 + 0x20);
  }
  do {
    plVar3 = plVar2;
    plVar2 = (long *)plVar3[3];
    if (plVar2 == (long *)0x0) {
      return;
    }
  } while (*plVar2 != param_1);
  plVar3[3] = plVar2[3];
  freebytes(plVar2);
  return;
}


