// Function : glist_getindex
// Namespace: 
// Entry    : 005053b0
// Prototype: int glist_getindex(long param_1, long param_2)
// Body     : 005053b0 - 005053e1


int glist_getindex(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x30);
  iVar1 = 0;
  if ((lVar2 != 0) && (lVar2 != param_2)) {
    iVar1 = 0;
    do {
      iVar1 = iVar1 + 1;
      lVar2 = *(long *)(lVar2 + 8);
      if (lVar2 == 0) {
        return iVar1;
      }
    } while (lVar2 != param_2);
  }
  return iVar1;
}


