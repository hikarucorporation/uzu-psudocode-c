// Function : pd_pushsym
// Namespace: 
// Entry    : 0053ab80
// Prototype: undefined pd_pushsym(undefined8 param_1)
// Body     : 0053ab80 - 0053abea


void pd_pushsym(undefined8 param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  
  puVar1 = getbytes(0x18);
  plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
  *puVar1 = *(undefined8 *)(*plVar2 + 0x128);
  puVar1[2] = gstack_head;
  puVar1[1] = pd_loadingabstraction;
  pd_loadingabstraction = 0;
  gstack_head = puVar1;
  *(undefined8 *)(*plVar2 + 0x128) = param_1;
  return;
}


