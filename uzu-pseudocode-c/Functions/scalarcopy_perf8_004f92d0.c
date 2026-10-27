// Function : scalarcopy_perf8
// Namespace: 
// Entry    : 004f92d0
// Prototype: long scalarcopy_perf8(long param_1)
// Body     : 004f92d0 - 004f93b3


long scalarcopy_perf8(long param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  
  iVar4 = (int)*(undefined8 *)(param_1 + 0x18);
  if (iVar4 != 0) {
    uVar2 = **(undefined4 **)(param_1 + 8);
    puVar3 = *(undefined4 **)(param_1 + 0x10);
    uVar8 = iVar4 - 8;
    uVar5 = uVar8 >> 3;
    if ((uVar5 + 1 & 7) != 0) {
      iVar6 = 0;
      do {
        *puVar3 = uVar2;
        puVar3[1] = uVar2;
        puVar3[2] = uVar2;
        puVar3[3] = uVar2;
        puVar3[4] = uVar2;
        puVar3[5] = uVar2;
        puVar3[6] = uVar2;
        puVar3[7] = uVar2;
        puVar3 = puVar3 + 8;
        iVar6 = iVar6 + 8;
      } while (((byte)((char)uVar5 + 1) & 7) * 8 != iVar6);
      iVar4 = iVar4 - iVar6;
    }
    if (0x37 < uVar8) {
      lVar7 = 0;
      do {
        puVar1 = puVar3 + lVar7;
        *puVar1 = uVar2;
        puVar1[1] = uVar2;
        puVar1[2] = uVar2;
        puVar1[3] = uVar2;
        puVar1 = puVar3 + lVar7 + 4;
        *puVar1 = uVar2;
        puVar1[1] = uVar2;
        puVar1[2] = uVar2;
        puVar1[3] = uVar2;
        puVar1 = puVar3 + lVar7 + 8;
        *puVar1 = uVar2;
        puVar1[1] = uVar2;
        puVar1[2] = uVar2;
        puVar1[3] = uVar2;
        puVar1 = puVar3 + lVar7 + 0xc;
        *puVar1 = uVar2;
        puVar1[1] = uVar2;
        puVar1[2] = uVar2;
        puVar1[3] = uVar2;
        puVar1 = puVar3 + lVar7 + 0x10;
        *puVar1 = uVar2;
        puVar1[1] = uVar2;
        puVar1[2] = uVar2;
        puVar1[3] = uVar2;
        puVar1 = puVar3 + lVar7 + 0x14;
        *puVar1 = uVar2;
        puVar1[1] = uVar2;
        puVar1[2] = uVar2;
        puVar1[3] = uVar2;
        puVar1 = puVar3 + lVar7 + 0x18;
        *puVar1 = uVar2;
        puVar1[1] = uVar2;
        puVar1[2] = uVar2;
        puVar1[3] = uVar2;
        puVar1 = puVar3 + lVar7 + 0x1c;
        *puVar1 = uVar2;
        puVar1[1] = uVar2;
        puVar1[2] = uVar2;
        puVar1[3] = uVar2;
        puVar1 = puVar3 + lVar7 + 0x20;
        *puVar1 = uVar2;
        puVar1[1] = uVar2;
        puVar1[2] = uVar2;
        puVar1[3] = uVar2;
        puVar1 = puVar3 + lVar7 + 0x24;
        *puVar1 = uVar2;
        puVar1[1] = uVar2;
        puVar1[2] = uVar2;
        puVar1[3] = uVar2;
        puVar1 = puVar3 + lVar7 + 0x28;
        *puVar1 = uVar2;
        puVar1[1] = uVar2;
        puVar1[2] = uVar2;
        puVar1[3] = uVar2;
        puVar1 = puVar3 + lVar7 + 0x2c;
        *puVar1 = uVar2;
        puVar1[1] = uVar2;
        puVar1[2] = uVar2;
        puVar1[3] = uVar2;
        puVar1 = puVar3 + lVar7 + 0x30;
        *puVar1 = uVar2;
        puVar1[1] = uVar2;
        puVar1[2] = uVar2;
        puVar1[3] = uVar2;
        puVar1 = puVar3 + lVar7 + 0x34;
        *puVar1 = uVar2;
        puVar1[1] = uVar2;
        puVar1[2] = uVar2;
        puVar1[3] = uVar2;
        puVar1 = puVar3 + lVar7 + 0x38;
        *puVar1 = uVar2;
        puVar1[1] = uVar2;
        puVar1[2] = uVar2;
        puVar1[3] = uVar2;
        puVar1 = puVar3 + lVar7 + 0x3c;
        *puVar1 = uVar2;
        puVar1[1] = uVar2;
        puVar1[2] = uVar2;
        puVar1[3] = uVar2;
        lVar7 = lVar7 + 0x40;
      } while (iVar4 != (int)lVar7);
    }
  }
  return param_1 + 0x20;
}


