// Function : block_epilog
// Namespace: 
// Entry    : 004f8b30
// Prototype: long block_epilog(long param_1)
// Body     : 004f8b30 - 004f8b72


long block_epilog(long param_1)

{
  long lVar1;
  int iVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  if (*(int *)(lVar1 + 0x60) != 0) {
    return 0;
  }
  if (*(char *)(lVar1 + 0x56) == '\0') {
    return param_1 + (long)*(int *)(lVar1 + 0x50) * 8 + 0x10;
  }
  iVar2 = *(int *)(lVar1 + 0x44) + -1;
  if (iVar2 == 0) {
    return param_1 + 0x10;
  }
  *(int *)(lVar1 + 0x44) = iVar2;
  return param_1 + (long)*(int *)(lVar1 + 0x4c) * -8 + 0x20;
}


