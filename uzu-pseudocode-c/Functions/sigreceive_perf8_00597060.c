// Function : sigreceive_perf8
// Namespace: 
// Entry    : 00597060
// Prototype: long sigreceive_perf8(long param_1)
// Body     : 00597060 - 00597117


long sigreceive_perf8(long param_1)

{
  void *__s;
  long lVar1;
  int iVar2;
  long lVar3;
  
  __s = *(void **)(param_1 + 0x10);
  lVar1 = *(long *)(*(long *)(param_1 + 8) + 0x38);
  iVar2 = (int)*(long *)(param_1 + 0x18);
  if (lVar1 == 0) {
    if (iVar2 != 0) {
      memset(__s,0,(*(long *)(param_1 + 0x18) * 4 + 0x3ffffffe0U & 0x3ffffffe0) + 0x20);
      return param_1 + 0x20;
    }
  }
  else if (iVar2 != 0) {
    lVar3 = 0;
    do {
      *(undefined4 *)((long)__s + lVar3 * 4) = *(undefined4 *)(lVar1 + lVar3 * 4);
      *(undefined4 *)((long)__s + lVar3 * 4 + 4) = *(undefined4 *)(lVar1 + 4 + lVar3 * 4);
      *(undefined4 *)((long)__s + lVar3 * 4 + 8) = *(undefined4 *)(lVar1 + 8 + lVar3 * 4);
      *(undefined4 *)((long)__s + lVar3 * 4 + 0xc) = *(undefined4 *)(lVar1 + 0xc + lVar3 * 4);
      *(undefined4 *)((long)__s + lVar3 * 4 + 0x10) = *(undefined4 *)(lVar1 + 0x10 + lVar3 * 4);
      *(undefined4 *)((long)__s + lVar3 * 4 + 0x14) = *(undefined4 *)(lVar1 + 0x14 + lVar3 * 4);
      *(undefined4 *)((long)__s + lVar3 * 4 + 0x18) = *(undefined4 *)(lVar1 + 0x18 + lVar3 * 4);
      *(undefined4 *)((long)__s + lVar3 * 4 + 0x1c) = *(undefined4 *)(lVar1 + 0x1c + lVar3 * 4);
      lVar3 = lVar3 + 8;
    } while (iVar2 != (int)lVar3);
  }
  return param_1 + 0x20;
}


