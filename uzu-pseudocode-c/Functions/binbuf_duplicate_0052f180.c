// Function : binbuf_duplicate
// Namespace: 
// Entry    : 0052f180
// Prototype: int * binbuf_duplicate(int * param_1)
// Body     : 0052f180 - 0052f1c3


int * binbuf_duplicate(int *param_1)

{
  int iVar1;
  int *piVar2;
  void *__dest;
  
  piVar2 = getbytes(0x10);
  iVar1 = *param_1;
  *piVar2 = iVar1;
  __dest = getbytes((long)iVar1 << 4);
  *(void **)(piVar2 + 2) = __dest;
  memcpy(__dest,*(void **)(param_1 + 2),(long)*piVar2 << 4);
  return piVar2;
}


