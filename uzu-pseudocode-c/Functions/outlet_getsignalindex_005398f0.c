// Function : outlet_getsignalindex
// Namespace: 
// Entry    : 005398f0
// Prototype: int outlet_getsignalindex(long * param_1)
// Body     : 005398f0 - 00539952


int outlet_getsignalindex(long *param_1)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  
  plVar4 = *(long **)(*param_1 + 0x18);
  iVar2 = 0;
  if ((plVar4 != (long *)0x0) && (plVar4 != param_1)) {
    plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
    iVar2 = 0;
    do {
      plVar1 = plVar4 + 3;
      plVar4 = (long *)plVar4[1];
      iVar2 = (uint)(*plVar1 == *plVar3 + 0xf0) + iVar2;
      if (plVar4 == (long *)0x0) {
        return iVar2;
      }
    } while (plVar4 != param_1);
  }
  return iVar2;
}


