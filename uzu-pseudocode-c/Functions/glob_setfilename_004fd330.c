// Function : glob_setfilename
// Namespace: 
// Entry    : 004fd330
// Prototype: undefined glob_setfilename(undefined8 param_1, undefined8 param_2, undefined8 param_3)
// Body     : 004fd330 - 004fd360


void glob_setfilename(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
  lVar1 = *(long *)(*plVar2 + 0x48);
  *(undefined8 *)(lVar1 + 0x10) = param_2;
  *(undefined8 *)(lVar1 + 0x18) = param_3;
  return;
}


