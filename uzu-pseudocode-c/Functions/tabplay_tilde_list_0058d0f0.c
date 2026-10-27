// Function : tabplay_tilde_list
// Namespace: 
// Entry    : 0058d0f0
// Prototype: undefined tabplay_tilde_list(long param_1, undefined8 param_2, int param_3, long param_4)
// Body     : 0058d0f0 - 0058d1c4


void tabplay_tilde_list(long param_1,undefined8 param_2,int param_3,long param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  float fVar8;
  float fVar9;
  
  fVar8 = (float)atom_getfloatarg(0,param_3,param_4);
  fVar9 = (float)atom_getfloatarg(1,param_3,param_4);
  lVar5 = 0;
  if (-1 < (long)fVar8) {
    lVar5 = (long)fVar8;
  }
  iVar2 = (int)lVar5;
  iVar3 = 0x7fffffff;
  if (0 < (long)fVar9) {
    iVar3 = (int)(long)fVar9 + iVar2;
  }
  *(int *)(param_1 + 0x38) = iVar3;
  uVar1 = *(uint *)(param_1 + 0x48);
  if (0 < (int)uVar1) {
    lVar5 = *(long *)(param_1 + 0x50);
    if ((ulong)uVar1 - 1 < 3) {
      uVar6 = 0;
    }
    else {
      piVar7 = (int *)(lVar5 + 0xb0);
      uVar6 = 0;
      do {
        piVar7[-0x24] = iVar2;
        piVar7[-0x18] = iVar2;
        piVar7[-0xc] = iVar2;
        *piVar7 = iVar2;
        uVar6 = uVar6 + 4;
        piVar7 = piVar7 + 0x30;
      } while ((uVar1 & 0xfffffffc) != uVar6);
    }
    if ((ulong)(uVar1 & 3) != 0) {
      lVar4 = 0;
      do {
        *(int *)(lVar5 + uVar6 * 0x30 + 0x20 + lVar4) = iVar2;
        lVar4 = lVar4 + 0x30;
      } while ((ulong)(uVar1 & 3) * 0x30 != lVar4);
    }
  }
  return;
}


