// Function : tabwrite_tilde_start
// Namespace: 
// Entry    : 0058c850
// Prototype: undefined tabwrite_tilde_start(float param_1, long param_2)
// Body     : 0058c850 - 0058c8dc


void tabwrite_tilde_start(float param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  int *piVar4;
  long lVar5;
  ulong uVar6;
  
  uVar1 = *(uint *)(param_2 + 0x30);
  if (0 < (int)uVar1) {
    if (param_1 <= 0.0) {
      param_1 = 0.0;
    }
    iVar3 = (int)param_1;
    lVar2 = *(long *)(param_2 + 0x38);
    if ((ulong)uVar1 - 1 < 3) {
      uVar6 = 0;
    }
    else {
      piVar4 = (int *)(lVar2 + 0xb0);
      uVar6 = 0;
      do {
        piVar4[-0x24] = iVar3;
        piVar4[-0x18] = iVar3;
        piVar4[-0xc] = iVar3;
        *piVar4 = iVar3;
        uVar6 = uVar6 + 4;
        piVar4 = piVar4 + 0x30;
      } while ((uVar1 & 0xfffffffc) != uVar6);
    }
    if ((ulong)(uVar1 & 3) != 0) {
      lVar5 = 0;
      do {
        *(int *)(uVar6 * 0x30 + lVar2 + 0x20 + lVar5) = iVar3;
        lVar5 = lVar5 + 0x30;
      } while ((ulong)(uVar1 & 3) * 0x30 != lVar5);
    }
  }
  return;
}


