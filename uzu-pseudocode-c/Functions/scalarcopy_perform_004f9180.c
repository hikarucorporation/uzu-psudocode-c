// Function : scalarcopy_perform
// Namespace: 
// Entry    : 004f9180
// Prototype: long scalarcopy_perform(long param_1)
// Body     : 004f9180 - 004f92c1


long scalarcopy_perform(long param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  ulong uVar10;
  
  iVar9 = (int)*(undefined8 *)(param_1 + 0x18);
  if (iVar9 != 0) {
    uVar2 = **(undefined4 **)(param_1 + 8);
    lVar3 = *(long *)(param_1 + 0x10);
    if (6 < iVar9 - 1U) {
      uVar10 = (ulong)(iVar9 - 1U) + 1;
      uVar8 = uVar10 & 0xfffffffffffffff8;
      uVar6 = (uVar8 - 8 >> 3) + 1;
      uVar4 = (ulong)((uint)uVar6 & 7);
      if (uVar8 - 8 < 0x38) {
        lVar5 = 0;
      }
      else {
        uVar6 = uVar6 & 0xfffffffffffffff8;
        lVar5 = 0;
        do {
          puVar1 = (undefined4 *)(lVar3 + lVar5 * 4);
          *puVar1 = uVar2;
          puVar1[1] = uVar2;
          puVar1[2] = uVar2;
          puVar1[3] = uVar2;
          puVar1 = (undefined4 *)(lVar3 + 0x10 + lVar5 * 4);
          *puVar1 = uVar2;
          puVar1[1] = uVar2;
          puVar1[2] = uVar2;
          puVar1[3] = uVar2;
          puVar1 = (undefined4 *)(lVar3 + 0x20 + lVar5 * 4);
          *puVar1 = uVar2;
          puVar1[1] = uVar2;
          puVar1[2] = uVar2;
          puVar1[3] = uVar2;
          puVar1 = (undefined4 *)(lVar3 + 0x30 + lVar5 * 4);
          *puVar1 = uVar2;
          puVar1[1] = uVar2;
          puVar1[2] = uVar2;
          puVar1[3] = uVar2;
          puVar1 = (undefined4 *)(lVar3 + 0x40 + lVar5 * 4);
          *puVar1 = uVar2;
          puVar1[1] = uVar2;
          puVar1[2] = uVar2;
          puVar1[3] = uVar2;
          puVar1 = (undefined4 *)(lVar3 + 0x50 + lVar5 * 4);
          *puVar1 = uVar2;
          puVar1[1] = uVar2;
          puVar1[2] = uVar2;
          puVar1[3] = uVar2;
          puVar1 = (undefined4 *)(lVar3 + 0x60 + lVar5 * 4);
          *puVar1 = uVar2;
          puVar1[1] = uVar2;
          puVar1[2] = uVar2;
          puVar1[3] = uVar2;
          puVar1 = (undefined4 *)(lVar3 + 0x70 + lVar5 * 4);
          *puVar1 = uVar2;
          puVar1[1] = uVar2;
          puVar1[2] = uVar2;
          puVar1[3] = uVar2;
          puVar1 = (undefined4 *)(lVar3 + 0x80 + lVar5 * 4);
          *puVar1 = uVar2;
          puVar1[1] = uVar2;
          puVar1[2] = uVar2;
          puVar1[3] = uVar2;
          puVar1 = (undefined4 *)(lVar3 + 0x90 + lVar5 * 4);
          *puVar1 = uVar2;
          puVar1[1] = uVar2;
          puVar1[2] = uVar2;
          puVar1[3] = uVar2;
          puVar1 = (undefined4 *)(lVar3 + 0xa0 + lVar5 * 4);
          *puVar1 = uVar2;
          puVar1[1] = uVar2;
          puVar1[2] = uVar2;
          puVar1[3] = uVar2;
          puVar1 = (undefined4 *)(lVar3 + 0xb0 + lVar5 * 4);
          *puVar1 = uVar2;
          puVar1[1] = uVar2;
          puVar1[2] = uVar2;
          puVar1[3] = uVar2;
          puVar1 = (undefined4 *)(lVar3 + 0xc0 + lVar5 * 4);
          *puVar1 = uVar2;
          puVar1[1] = uVar2;
          puVar1[2] = uVar2;
          puVar1[3] = uVar2;
          puVar1 = (undefined4 *)(lVar3 + 0xd0 + lVar5 * 4);
          *puVar1 = uVar2;
          puVar1[1] = uVar2;
          puVar1[2] = uVar2;
          puVar1[3] = uVar2;
          puVar1 = (undefined4 *)(lVar3 + 0xe0 + lVar5 * 4);
          *puVar1 = uVar2;
          puVar1[1] = uVar2;
          puVar1[2] = uVar2;
          puVar1[3] = uVar2;
          puVar1 = (undefined4 *)(lVar3 + 0xf0 + lVar5 * 4);
          *puVar1 = uVar2;
          puVar1[1] = uVar2;
          puVar1[2] = uVar2;
          puVar1[3] = uVar2;
          lVar5 = lVar5 + 0x40;
          uVar6 = uVar6 - 8;
        } while (uVar6 != 0);
      }
      if (uVar4 != 0) {
        lVar5 = lVar3 + lVar5 * 4;
        lVar7 = 0;
        do {
          puVar1 = (undefined4 *)(lVar5 + lVar7);
          *puVar1 = uVar2;
          puVar1[1] = uVar2;
          puVar1[2] = uVar2;
          puVar1[3] = uVar2;
          puVar1 = (undefined4 *)(lVar5 + 0x10 + lVar7);
          *puVar1 = uVar2;
          puVar1[1] = uVar2;
          puVar1[2] = uVar2;
          puVar1[3] = uVar2;
          lVar7 = lVar7 + 0x20;
        } while (uVar4 * 0x20 != lVar7);
      }
      if (uVar10 == uVar8) goto LAB_004f92bd;
      iVar9 = iVar9 - (int)uVar8;
      lVar3 = lVar3 + uVar8 * 4;
    }
    lVar5 = 0;
    do {
      *(undefined4 *)(lVar3 + lVar5 * 4) = uVar2;
      lVar5 = lVar5 + 1;
    } while (iVar9 != (int)lVar5);
  }
LAB_004f92bd:
  return param_1 + 0x20;
}


