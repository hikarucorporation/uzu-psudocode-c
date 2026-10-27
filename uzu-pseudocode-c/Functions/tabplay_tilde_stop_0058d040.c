// Function : tabplay_tilde_stop
// Namespace: 
// Entry    : 0058d040
// Prototype: undefined tabplay_tilde_stop(long param_1)
// Body     : 0058d040 - 0058d0d0


void tabplay_tilde_stop(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined4 *puVar5;
  
  uVar1 = *(uint *)(param_1 + 0x48);
  if (0 < (int)uVar1) {
    lVar2 = *(long *)(param_1 + 0x50);
    if ((ulong)uVar1 - 1 < 3) {
      uVar4 = 0;
    }
    else {
      puVar5 = (undefined4 *)(lVar2 + 0xb0);
      uVar4 = 0;
      do {
        puVar5[-0x24] = 0x7fffffff;
        puVar5[-0x18] = 0x7fffffff;
        puVar5[-0xc] = 0x7fffffff;
        *puVar5 = 0x7fffffff;
        uVar4 = uVar4 + 4;
        puVar5 = puVar5 + 0x30;
      } while ((uVar1 & 0xfffffffc) != uVar4);
    }
    if ((ulong)(uVar1 & 3) != 0) {
      lVar3 = 0;
      do {
        *(undefined4 *)(lVar2 + uVar4 * 0x30 + 0x20 + lVar3) = 0x7fffffff;
        lVar3 = lVar3 + 0x30;
      } while ((ulong)(uVar1 & 3) * 0x30 != lVar3);
    }
  }
  return;
}


