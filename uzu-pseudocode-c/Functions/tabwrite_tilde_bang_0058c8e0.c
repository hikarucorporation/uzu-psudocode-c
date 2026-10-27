// Function : tabwrite_tilde_bang
// Namespace: 
// Entry    : 0058c8e0
// Prototype: undefined tabwrite_tilde_bang(long param_1)
// Body     : 0058c8e0 - 0058c970


void tabwrite_tilde_bang(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined4 *puVar5;
  
  uVar1 = *(uint *)(param_1 + 0x30);
  if (0 < (int)uVar1) {
    lVar2 = *(long *)(param_1 + 0x38);
    if ((ulong)uVar1 - 1 < 3) {
      uVar4 = 0;
    }
    else {
      puVar5 = (undefined4 *)(lVar2 + 0xb0);
      uVar4 = 0;
      do {
        puVar5[-0x24] = 0;
        puVar5[-0x18] = 0;
        puVar5[-0xc] = 0;
        *puVar5 = 0;
        uVar4 = uVar4 + 4;
        puVar5 = puVar5 + 0x30;
      } while ((uVar1 & 0xfffffffc) != uVar4);
    }
    if ((ulong)(uVar1 & 3) != 0) {
      lVar3 = 0;
      do {
        *(undefined4 *)(lVar2 + uVar4 * 0x30 + 0x20 + lVar3) = 0;
        lVar3 = lVar3 + 0x30;
      } while ((ulong)(uVar1 & 3) * 0x30 != lVar3);
    }
  }
  return;
}


