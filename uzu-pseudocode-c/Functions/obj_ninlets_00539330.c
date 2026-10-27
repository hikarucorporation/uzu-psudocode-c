// Function : obj_ninlets
// Namespace: 
// Entry    : 00539330
// Prototype: int obj_ninlets(long * param_1)
// Body     : 00539330 - 0053935d


int obj_ninlets(long *param_1)

{
  long lVar1;
  int iVar2;
  
  iVar2 = 0;
  for (lVar1 = param_1[4]; lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
    iVar2 = iVar2 + 1;
  }
  return (*(uint *)(*param_1 + 0x94) >> 2 & 1) + iVar2;
}


