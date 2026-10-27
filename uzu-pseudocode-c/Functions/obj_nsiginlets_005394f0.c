// Function : obj_nsiginlets
// Namespace: 
// Entry    : 005394f0
// Prototype: int obj_nsiginlets(long * param_1)
// Body     : 005394f0 - 00539564


int obj_nsiginlets(long *param_1)

{
  long *plVar1;
  byte bVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  
  lVar5 = param_1[4];
  if (lVar5 == 0) {
    iVar3 = 0;
    lVar5 = *param_1;
    bVar2 = *(byte *)(lVar5 + 0x94);
  }
  else {
    plVar4 = (long *)__tls_get_addr(&PTR_007159b0);
    iVar3 = 0;
    do {
      plVar1 = (long *)(lVar5 + 0x20);
      lVar5 = *(long *)(lVar5 + 8);
      iVar3 = iVar3 + (uint)(*plVar1 == *plVar4 + 0xf0);
    } while (lVar5 != 0);
    lVar5 = *param_1;
    bVar2 = *(byte *)(lVar5 + 0x94);
  }
  if ((bVar2 & 4) != 0) {
    iVar3 = (iVar3 + 1) - (uint)(*(int *)(lVar5 + 0x90) == 0);
  }
  return iVar3;
}


