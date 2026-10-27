// Function : copy_perf8
// Namespace: 
// Entry    : 004f9070
// Prototype: long copy_perf8(long param_1)
// Body     : 004f9070 - 004f913a


long copy_perf8(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  uint uVar11;
  int iVar12;
  
  iVar12 = (int)*(undefined8 *)(param_1 + 0x18);
  if (iVar12 != 0) {
    puVar6 = *(undefined8 **)(param_1 + 8);
    puVar7 = *(undefined8 **)(param_1 + 0x10);
    uVar11 = iVar12 - 8;
    uVar8 = uVar11 >> 3;
    if ((uVar8 + 1 & 3) != 0) {
      iVar9 = 0;
      do {
        uVar3 = puVar6[1];
        uVar4 = puVar6[2];
        uVar5 = puVar6[3];
        *puVar7 = *puVar6;
        puVar7[1] = uVar3;
        puVar7[2] = uVar4;
        puVar7[3] = uVar5;
        puVar6 = puVar6 + 4;
        puVar7 = puVar7 + 4;
        iVar9 = iVar9 + 8;
      } while (((byte)((char)uVar8 + 1) & 3) << 3 != iVar9);
      iVar12 = iVar12 - iVar9;
    }
    if (0x17 < uVar11) {
      lVar10 = 0;
      do {
        puVar1 = (undefined8 *)((long)puVar6 + lVar10 * 4);
        uVar3 = puVar1[1];
        puVar2 = (undefined8 *)((long)puVar6 + lVar10 * 4 + 0x10);
        uVar4 = *puVar2;
        uVar5 = puVar2[1];
        puVar2 = (undefined8 *)((long)puVar7 + lVar10 * 4);
        *puVar2 = *puVar1;
        puVar2[1] = uVar3;
        puVar1 = (undefined8 *)((long)puVar7 + lVar10 * 4 + 0x10);
        *puVar1 = uVar4;
        puVar1[1] = uVar5;
        puVar1 = (undefined8 *)((long)puVar6 + lVar10 * 4 + 0x20);
        uVar3 = puVar1[1];
        puVar2 = (undefined8 *)((long)puVar6 + lVar10 * 4 + 0x30);
        uVar4 = *puVar2;
        uVar5 = puVar2[1];
        puVar2 = (undefined8 *)((long)puVar7 + lVar10 * 4 + 0x20);
        *puVar2 = *puVar1;
        puVar2[1] = uVar3;
        puVar1 = (undefined8 *)((long)puVar7 + lVar10 * 4 + 0x30);
        *puVar1 = uVar4;
        puVar1[1] = uVar5;
        puVar1 = (undefined8 *)((long)puVar6 + lVar10 * 4 + 0x40);
        uVar3 = puVar1[1];
        puVar2 = (undefined8 *)((long)puVar6 + lVar10 * 4 + 0x50);
        uVar4 = *puVar2;
        uVar5 = puVar2[1];
        puVar2 = (undefined8 *)((long)puVar7 + lVar10 * 4 + 0x40);
        *puVar2 = *puVar1;
        puVar2[1] = uVar3;
        puVar1 = (undefined8 *)((long)puVar7 + lVar10 * 4 + 0x50);
        *puVar1 = uVar4;
        puVar1[1] = uVar5;
        puVar1 = (undefined8 *)((long)puVar6 + lVar10 * 4 + 0x60);
        uVar3 = puVar1[1];
        puVar2 = (undefined8 *)((long)puVar6 + lVar10 * 4 + 0x70);
        uVar4 = *puVar2;
        uVar5 = puVar2[1];
        puVar2 = (undefined8 *)((long)puVar7 + lVar10 * 4 + 0x60);
        *puVar2 = *puVar1;
        puVar2[1] = uVar3;
        puVar1 = (undefined8 *)((long)puVar7 + lVar10 * 4 + 0x70);
        *puVar1 = uVar4;
        puVar1[1] = uVar5;
        lVar10 = lVar10 + 0x20;
      } while (iVar12 != (int)lVar10);
    }
  }
  return param_1 + 0x20;
}


