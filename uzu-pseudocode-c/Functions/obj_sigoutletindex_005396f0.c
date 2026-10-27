// Function : obj_sigoutletindex
// Namespace: 
// Entry    : 005396f0
// Prototype: int obj_sigoutletindex(long param_1, int param_2)
// Body     : 005396f0 - 00539755


int obj_sigoutletindex(long param_1,int param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 != 0) {
    plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
    iVar1 = 0;
    do {
      if (*(long *)(lVar3 + 0x18) == *plVar2 + 0xf0) {
        if (param_2 == 0) {
          return iVar1;
        }
        iVar1 = iVar1 + 1;
      }
      param_2 = param_2 + -1;
      lVar3 = *(long *)(lVar3 + 8);
    } while (lVar3 != 0);
  }
  return -1;
}


