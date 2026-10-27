// Function : sys_getrecvbuf
// Namespace: 
// Entry    : 0053e600
// Prototype: long sys_getrecvbuf(undefined4 * param_1)
// Body     : 0053e600 - 0053e628


long sys_getrecvbuf(undefined4 *param_1)

{
  long *plVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0x10000;
  }
  plVar1 = (long *)__tls_get_addr(&PTR_007159b0);
  return *(long *)(*plVar1 + 0x38) + 0x78;
}


