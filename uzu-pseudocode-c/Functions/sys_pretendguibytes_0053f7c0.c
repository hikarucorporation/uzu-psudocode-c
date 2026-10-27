// Function : sys_pretendguibytes
// Namespace: 
// Entry    : 0053f7c0
// Prototype: undefined sys_pretendguibytes(int param_1)
// Body     : 0053f7c0 - 0053f7de


void sys_pretendguibytes(int param_1)

{
  int *piVar1;
  long *plVar2;
  
  plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
  piVar1 = (int *)(*(long *)(*plVar2 + 0x38) + 0x44);
  *piVar1 = *piVar1 + param_1;
  return;
}


