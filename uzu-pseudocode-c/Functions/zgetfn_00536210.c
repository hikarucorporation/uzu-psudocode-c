// Function : zgetfn
// Namespace: 
// Entry    : 00536210
// Prototype: undefined8 zgetfn(long * param_1, long param_2)
// Body     : 00536210 - 00536274


undefined8 zgetfn(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  int iVar4;
  
  iVar4 = *(int *)(*param_1 + 0x28);
  if (iVar4 == 0) {
    return 0;
  }
  lVar1 = *(long *)(*param_1 + 0x20);
  plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
  puVar3 = (undefined8 *)(*(long *)(lVar1 + (long)*(int *)(*plVar2 + 0x20) * 8) + 8);
  do {
    if (puVar3[-1] == param_2) {
      return *puVar3;
    }
    iVar4 = iVar4 + -1;
    puVar3 = puVar3 + 3;
  } while (iVar4 != 0);
  return 0;
}


