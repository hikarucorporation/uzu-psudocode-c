// Function : obj_noutlets
// Namespace: 
// Entry    : 00539310
// Prototype: int obj_noutlets(long param_1)
// Body     : 00539310 - 0053932c


int obj_noutlets(long param_1)

{
  long lVar1;
  int iVar2;
  
  iVar2 = 0;
  for (lVar1 = *(long *)(param_1 + 0x18); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}


