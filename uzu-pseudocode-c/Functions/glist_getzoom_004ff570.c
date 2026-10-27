// Function : glist_getzoom
// Namespace: 
// Entry    : 004ff570
// Prototype: undefined4 glist_getzoom(long param_1)
// Body     : 004ff570 - 004ff597


undefined4 glist_getzoom(long param_1)

{
  long lVar1;
  
  do {
    lVar1 = param_1;
    if ((*(ushort *)(lVar1 + 0xe8) & 0x101) != 0x100) break;
    param_1 = *(long *)(lVar1 + 0x48);
  } while (*(long *)(lVar1 + 0x48) != 0);
  return *(undefined4 *)(lVar1 + 0xec);
}


