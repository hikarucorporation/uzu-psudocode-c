// Function : bonk_bang
// Namespace: 
// Entry    : 004da1f0
// Prototype: undefined bonk_bang(long param_1)
// Body     : 004da1f0 - 004da31d


void bonk_bang(long param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  long lVar7;
  
  *(undefined4 *)(param_1 + 0x2660) = 0;
  iVar1 = *(int *)(param_1 + 0x2630);
  if ((0 < iVar1) && (uVar2 = *(uint *)(param_1 + 0x50), 0 < (int)uVar2)) {
    puVar4 = *(undefined4 **)(param_1 + 0x2628);
    iVar3 = 0;
    do {
      puVar5 = puVar4;
      if (6 < uVar2 - 1) {
        uVar6 = uVar2 & 0xfffffff8;
        do {
          puVar5[2] = *puVar5;
          puVar5[0xe] = puVar5[0xc];
          puVar5[0x1a] = puVar5[0x18];
          puVar5[0x26] = puVar5[0x24];
          puVar5[0x32] = puVar5[0x30];
          puVar5[0x3e] = puVar5[0x3c];
          puVar5[0x4a] = puVar5[0x48];
          puVar5[0x56] = puVar5[0x54];
          puVar5 = puVar5 + 0x60;
          uVar6 = uVar6 - 8;
        } while (uVar6 != 0);
      }
      if ((uVar2 & 7) != 0) {
        lVar7 = 0;
        do {
          *(undefined4 *)((long)puVar5 + lVar7 + 8) = *(undefined4 *)((long)puVar5 + lVar7);
          lVar7 = lVar7 + 0x30;
        } while ((uVar2 & 7) * 0x30 != (int)lVar7);
      }
      iVar3 = iVar3 + 1;
      puVar4 = puVar4 + 0x966;
    } while (iVar3 != iVar1);
  }
  bonk_tick(param_1);
  return;
}


