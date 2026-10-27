// Function : glist_isvisible
// Namespace: 
// Entry    : 004fe620
// Prototype: uint glist_isvisible(long param_1)
// Body     : 004fe620 - 004fe63d


uint glist_isvisible(long param_1)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = 0;
  if ((*(byte *)(param_1 + 0xe8) & 8) == 0) {
    lVar2 = glist_getcanvas(param_1);
    uVar1 = *(uint *)(lVar2 + 0xe8) >> 1 & 1;
  }
  return uVar1;
}


