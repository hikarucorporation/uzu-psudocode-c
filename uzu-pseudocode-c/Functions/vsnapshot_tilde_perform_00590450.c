// Function : vsnapshot_tilde_perform
// Namespace: 
// Entry    : 00590450
// Prototype: long vsnapshot_tilde_perform(long param_1)
// Body     : 00590450 - 005905f3


long vsnapshot_tilde_perform(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  
  lVar5 = *(long *)(param_1 + 0x10);
  uVar4 = *(uint *)(lVar5 + 0x30);
  uVar16 = (ulong)uVar4;
  if (0 < (int)uVar4) {
    uVar6 = *(ulong *)(param_1 + 8);
    uVar7 = *(ulong *)(lVar5 + 0x38);
    if ((uVar4 < 8) || ((uVar7 < uVar6 + uVar16 * 4 && (uVar6 < uVar7 + uVar16 * 4)))) {
      uVar14 = 0;
    }
    else {
      uVar14 = (ulong)(uVar4 & 0xfffffff8);
      uVar11 = (uVar14 - 8 >> 3) + 1;
      uVar15 = (ulong)((uint)uVar11 & 3);
      if (uVar14 - 8 < 0x18) {
        lVar12 = 0;
      }
      else {
        uVar11 = uVar11 & 0xfffffffffffffffc;
        lVar12 = 0;
        do {
          puVar2 = (undefined8 *)(uVar6 + lVar12 * 4);
          uVar8 = puVar2[1];
          puVar3 = (undefined8 *)(uVar6 + 0x10 + lVar12 * 4);
          uVar9 = *puVar3;
          uVar10 = puVar3[1];
          puVar3 = (undefined8 *)(uVar7 + lVar12 * 4);
          *puVar3 = *puVar2;
          puVar3[1] = uVar8;
          puVar2 = (undefined8 *)(uVar7 + 0x10 + lVar12 * 4);
          *puVar2 = uVar9;
          puVar2[1] = uVar10;
          puVar2 = (undefined8 *)(uVar6 + 0x20 + lVar12 * 4);
          uVar8 = puVar2[1];
          puVar3 = (undefined8 *)(uVar6 + 0x30 + lVar12 * 4);
          uVar9 = *puVar3;
          uVar10 = puVar3[1];
          puVar3 = (undefined8 *)(uVar7 + 0x20 + lVar12 * 4);
          *puVar3 = *puVar2;
          puVar3[1] = uVar8;
          puVar2 = (undefined8 *)(uVar7 + 0x30 + lVar12 * 4);
          *puVar2 = uVar9;
          puVar2[1] = uVar10;
          puVar2 = (undefined8 *)(uVar6 + 0x40 + lVar12 * 4);
          uVar8 = puVar2[1];
          puVar3 = (undefined8 *)(uVar6 + 0x50 + lVar12 * 4);
          uVar9 = *puVar3;
          uVar10 = puVar3[1];
          puVar3 = (undefined8 *)(uVar7 + 0x40 + lVar12 * 4);
          *puVar3 = *puVar2;
          puVar3[1] = uVar8;
          puVar2 = (undefined8 *)(uVar7 + 0x50 + lVar12 * 4);
          *puVar2 = uVar9;
          puVar2[1] = uVar10;
          puVar2 = (undefined8 *)(uVar6 + 0x60 + lVar12 * 4);
          uVar8 = puVar2[1];
          puVar3 = (undefined8 *)(uVar6 + 0x70 + lVar12 * 4);
          uVar9 = *puVar3;
          uVar10 = puVar3[1];
          puVar3 = (undefined8 *)(uVar7 + 0x60 + lVar12 * 4);
          *puVar3 = *puVar2;
          puVar3[1] = uVar8;
          puVar2 = (undefined8 *)(uVar7 + 0x70 + lVar12 * 4);
          *puVar2 = uVar9;
          puVar2[1] = uVar10;
          lVar12 = lVar12 + 0x20;
          uVar11 = uVar11 - 4;
        } while (uVar11 != 0);
      }
      if (uVar15 != 0) {
        lVar1 = uVar7 + lVar12 * 4;
        lVar12 = uVar6 + lVar12 * 4;
        lVar13 = 0;
        do {
          puVar3 = (undefined8 *)(lVar12 + lVar13);
          uVar8 = puVar3[1];
          puVar2 = (undefined8 *)(lVar12 + 0x10 + lVar13);
          uVar9 = *puVar2;
          uVar10 = puVar2[1];
          puVar2 = (undefined8 *)(lVar1 + lVar13);
          *puVar2 = *puVar3;
          puVar2[1] = uVar8;
          puVar2 = (undefined8 *)(lVar1 + 0x10 + lVar13);
          *puVar2 = uVar9;
          puVar2[1] = uVar10;
          lVar13 = lVar13 + 0x20;
        } while (uVar15 * 0x20 != lVar13);
      }
      if (uVar14 == uVar16) goto LAB_005905d4;
    }
    uVar15 = ~uVar14;
    uVar11 = uVar16 & 3;
    if ((uVar4 & 3) != 0) {
      do {
        *(undefined4 *)(uVar7 + uVar14 * 4) = *(undefined4 *)(uVar6 + uVar14 * 4);
        uVar14 = uVar14 + 1;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    if (2 < uVar15 + uVar16) {
      do {
        *(undefined4 *)(uVar7 + uVar14 * 4) = *(undefined4 *)(uVar6 + uVar14 * 4);
        *(undefined4 *)(uVar7 + 4 + uVar14 * 4) = *(undefined4 *)(uVar6 + 4 + uVar14 * 4);
        *(undefined4 *)(uVar7 + 8 + uVar14 * 4) = *(undefined4 *)(uVar6 + 8 + uVar14 * 4);
        *(undefined4 *)(uVar7 + 0xc + uVar14 * 4) = *(undefined4 *)(uVar6 + 0xc + uVar14 * 4);
        uVar14 = uVar14 + 4;
      } while (uVar16 != uVar14);
    }
  }
LAB_005905d4:
  clock_getlogicaltime();
  *(ulong *)(lVar5 + 0x48) = CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
  *(undefined4 *)(lVar5 + 0x34) = 1;
  return param_1 + 0x18;
}


