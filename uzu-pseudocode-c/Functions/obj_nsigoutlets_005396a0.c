// Function : obj_nsigoutlets
// Namespace: 
// Entry    : 005396a0
// Prototype: int obj_nsigoutlets(long param_1)
// Body     : 005396a0 - 005396ec


int obj_nsigoutlets(long param_1)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x18);
  if (lVar4 == 0) {
    return 0;
  }
  plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
  iVar2 = 0;
  do {
    plVar1 = (long *)(lVar4 + 0x18);
    lVar4 = *(long *)(lVar4 + 8);
    iVar2 = iVar2 + (uint)(*plVar1 == *plVar3 + 0xf0);
  } while (lVar4 != 0);
  return iVar2;
}


