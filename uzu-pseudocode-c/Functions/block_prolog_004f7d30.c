// Function : block_prolog
// Namespace: 
// Entry    : 004f7d30
// Prototype: long block_prolog(long param_1)
// Body     : 004f7d30 - 004f7d75


long block_prolog(long param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  
  lVar1 = *(long *)(param_1 + 8);
  if (*(char *)(lVar1 + 0x55) != '\0') {
    if (*(int *)(lVar1 + 0x38) == 0) {
      *(undefined4 *)(lVar1 + 0x44) = *(undefined4 *)(lVar1 + 0x40);
      *(uint *)(lVar1 + 0x38) = (uint)(1 < *(int *)(lVar1 + 0x3c));
      return param_1 + 0x10;
    }
    iVar2 = *(int *)(lVar1 + 0x38) + 1;
    iVar3 = 0;
    if (iVar2 != *(int *)(lVar1 + 0x3c)) {
      iVar3 = iVar2;
    }
    *(int *)(lVar1 + 0x38) = iVar3;
  }
  return param_1 + (long)*(int *)(lVar1 + 0x4c) * 8;
}


