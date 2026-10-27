// Function : ex_mkvector
// Namespace: 
// Entry    : 005b30e0
// Prototype: undefined ex_mkvector(undefined4 param_1, long param_2, int param_3)
// Body     : 005b30e0 - 005b31fd


void ex_mkvector(undefined4 param_1,long param_2,int param_3)

{
  undefined4 *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_3 != 0) {
    if (6 < param_3 - 1U) {
      uVar7 = (ulong)(param_3 - 1U) + 1;
      uVar6 = uVar7 & 0xfffffffffffffff8;
      uVar4 = (uVar6 - 8 >> 3) + 1;
      uVar2 = (ulong)((uint)uVar4 & 7);
      if (uVar6 - 8 < 0x38) {
        lVar3 = 0;
      }
      else {
        uVar4 = uVar4 & 0xfffffffffffffff8;
        lVar3 = 0;
        do {
          puVar1 = (undefined4 *)(param_2 + lVar3 * 4);
          *puVar1 = param_1;
          puVar1[1] = param_1;
          puVar1[2] = param_1;
          puVar1[3] = param_1;
          puVar1 = (undefined4 *)(param_2 + 0x10 + lVar3 * 4);
          *puVar1 = param_1;
          puVar1[1] = param_1;
          puVar1[2] = param_1;
          puVar1[3] = param_1;
          puVar1 = (undefined4 *)(param_2 + 0x20 + lVar3 * 4);
          *puVar1 = param_1;
          puVar1[1] = param_1;
          puVar1[2] = param_1;
          puVar1[3] = param_1;
          puVar1 = (undefined4 *)(param_2 + 0x30 + lVar3 * 4);
          *puVar1 = param_1;
          puVar1[1] = param_1;
          puVar1[2] = param_1;
          puVar1[3] = param_1;
          puVar1 = (undefined4 *)(param_2 + 0x40 + lVar3 * 4);
          *puVar1 = param_1;
          puVar1[1] = param_1;
          puVar1[2] = param_1;
          puVar1[3] = param_1;
          puVar1 = (undefined4 *)(param_2 + 0x50 + lVar3 * 4);
          *puVar1 = param_1;
          puVar1[1] = param_1;
          puVar1[2] = param_1;
          puVar1[3] = param_1;
          puVar1 = (undefined4 *)(param_2 + 0x60 + lVar3 * 4);
          *puVar1 = param_1;
          puVar1[1] = param_1;
          puVar1[2] = param_1;
          puVar1[3] = param_1;
          puVar1 = (undefined4 *)(param_2 + 0x70 + lVar3 * 4);
          *puVar1 = param_1;
          puVar1[1] = param_1;
          puVar1[2] = param_1;
          puVar1[3] = param_1;
          puVar1 = (undefined4 *)(param_2 + 0x80 + lVar3 * 4);
          *puVar1 = param_1;
          puVar1[1] = param_1;
          puVar1[2] = param_1;
          puVar1[3] = param_1;
          puVar1 = (undefined4 *)(param_2 + 0x90 + lVar3 * 4);
          *puVar1 = param_1;
          puVar1[1] = param_1;
          puVar1[2] = param_1;
          puVar1[3] = param_1;
          puVar1 = (undefined4 *)(param_2 + 0xa0 + lVar3 * 4);
          *puVar1 = param_1;
          puVar1[1] = param_1;
          puVar1[2] = param_1;
          puVar1[3] = param_1;
          puVar1 = (undefined4 *)(param_2 + 0xb0 + lVar3 * 4);
          *puVar1 = param_1;
          puVar1[1] = param_1;
          puVar1[2] = param_1;
          puVar1[3] = param_1;
          puVar1 = (undefined4 *)(param_2 + 0xc0 + lVar3 * 4);
          *puVar1 = param_1;
          puVar1[1] = param_1;
          puVar1[2] = param_1;
          puVar1[3] = param_1;
          puVar1 = (undefined4 *)(param_2 + 0xd0 + lVar3 * 4);
          *puVar1 = param_1;
          puVar1[1] = param_1;
          puVar1[2] = param_1;
          puVar1[3] = param_1;
          puVar1 = (undefined4 *)(param_2 + 0xe0 + lVar3 * 4);
          *puVar1 = param_1;
          puVar1[1] = param_1;
          puVar1[2] = param_1;
          puVar1[3] = param_1;
          puVar1 = (undefined4 *)(param_2 + 0xf0 + lVar3 * 4);
          *puVar1 = param_1;
          puVar1[1] = param_1;
          puVar1[2] = param_1;
          puVar1[3] = param_1;
          lVar3 = lVar3 + 0x40;
          uVar4 = uVar4 - 8;
        } while (uVar4 != 0);
      }
      if (uVar2 != 0) {
        lVar3 = param_2 + lVar3 * 4;
        lVar5 = 0;
        do {
          puVar1 = (undefined4 *)(lVar3 + lVar5);
          *puVar1 = param_1;
          puVar1[1] = param_1;
          puVar1[2] = param_1;
          puVar1[3] = param_1;
          puVar1 = (undefined4 *)(lVar3 + 0x10 + lVar5);
          *puVar1 = param_1;
          puVar1[1] = param_1;
          puVar1[2] = param_1;
          puVar1[3] = param_1;
          lVar5 = lVar5 + 0x20;
        } while (uVar2 * 0x20 != lVar5);
      }
      if (uVar7 == uVar6) {
        return;
      }
      param_3 = param_3 - (int)uVar6;
      param_2 = param_2 + uVar6 * 4;
    }
    lVar3 = 0;
    do {
      *(undefined4 *)(param_2 + lVar3 * 4) = param_1;
      lVar3 = lVar3 + 1;
    } while (param_3 != (int)lVar3);
  }
  return;
}


