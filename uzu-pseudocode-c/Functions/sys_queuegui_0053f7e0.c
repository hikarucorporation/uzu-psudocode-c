// Function : sys_queuegui
// Namespace: 
// Entry    : 0053f7e0
// Prototype: undefined sys_queuegui(long param_1, long param_2, long param_3)
// Body     : 0053f7e0 - 0053f871


void sys_queuegui(long param_1,long param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
  plVar3 = *(long **)(*(long *)(*plVar2 + 0x38) + 0x20);
  if (plVar3 == (long *)0x0) {
    plVar3 = (long *)(*(long *)(*plVar2 + 0x38) + 0x20);
LAB_0053f845:
    plVar2 = getbytes(0x20);
    *plVar2 = param_1;
    plVar2[1] = param_2;
    plVar2[2] = param_3;
    plVar2[3] = 0;
    *plVar3 = (long)plVar2;
  }
  else {
    do {
      if ((long *)plVar3[3] == (long *)0x0) {
        if (*plVar3 == param_1) {
          return;
        }
        plVar3 = plVar3 + 3;
        goto LAB_0053f845;
      }
      lVar1 = *plVar3;
      plVar3 = (long *)plVar3[3];
    } while (lVar1 != param_1);
  }
  return;
}


