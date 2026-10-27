// Function : canvas_getindex
// Namespace: 
// Entry    : 004fe2e0
// Prototype: int canvas_getindex(long param_1, long param_2)
// Body     : 004fe2e0 - 004fe311


int canvas_getindex(long param_1,long param_2)

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


