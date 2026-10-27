// Function : dsp_addv
// Namespace: 
// Entry    : 004f6180
// Prototype: undefined dsp_addv(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, ulong param_10, ulong param_11)
// Body     : 004f6180 - 004f63b8


void dsp_addv(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,ulong param_10,ulong param_11)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  void *pvVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  uint uVar19;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  
  plVar10 = (long *)__tls_get_addr(&PTR_007159b0);
  iVar5 = *(int *)(*(undefined8 **)(*plVar10 + 0x40) + 1);
  uVar19 = (uint)param_10;
  lVar1 = (long)iVar5 + (long)(int)uVar19;
  pvVar11 = resizebytes(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                        param_6,param_7,param_8,(void *)**(undefined8 **)(*plVar10 + 0x40),
                        (long)iVar5 << 3,lVar1 * 8 + 8);
  **(undefined8 **)(*plVar10 + 0x40) = pvVar11;
  plVar10 = *(long **)(*plVar10 + 0x40);
  lVar6 = *plVar10;
  lVar18 = (long)(int)plVar10[1];
  *(undefined8 *)(lVar6 + -8 + lVar18 * 8) = param_9;
  if (0 < (int)uVar19) {
    uVar15 = param_10 & 0xffffffff;
    if ((uVar19 < 4) ||
       (((ulong)(lVar6 + lVar18 * 8) < param_11 + uVar15 * 8 &&
        (param_11 < lVar6 + (lVar18 + uVar15) * 8)))) {
      uVar17 = 0;
    }
    else {
      uVar17 = (ulong)(uVar19 & 0xfffffffc);
      uVar12 = (uVar17 - 4 >> 2) + 1;
      uVar14 = (ulong)((uint)uVar12 & 3);
      if (uVar17 - 4 < 0xc) {
        lVar13 = 0;
      }
      else {
        uVar12 = uVar12 & 0xfffffffffffffffc;
        lVar2 = lVar6 + lVar18 * 8;
        lVar13 = 0;
        do {
          puVar3 = (undefined8 *)(param_11 + lVar13 * 8);
          uVar7 = puVar3[1];
          puVar4 = (undefined8 *)(param_11 + 0x10 + lVar13 * 8);
          uVar8 = *puVar4;
          uVar9 = puVar4[1];
          puVar4 = (undefined8 *)(lVar2 + lVar13 * 8);
          *puVar4 = *puVar3;
          puVar4[1] = uVar7;
          puVar3 = (undefined8 *)(lVar2 + 0x10 + lVar13 * 8);
          *puVar3 = uVar8;
          puVar3[1] = uVar9;
          puVar3 = (undefined8 *)(param_11 + 0x20 + lVar13 * 8);
          uVar7 = puVar3[1];
          puVar4 = (undefined8 *)(param_11 + 0x30 + lVar13 * 8);
          uVar8 = *puVar4;
          uVar9 = puVar4[1];
          puVar4 = (undefined8 *)(lVar2 + 0x20 + lVar13 * 8);
          *puVar4 = *puVar3;
          puVar4[1] = uVar7;
          puVar3 = (undefined8 *)(lVar2 + 0x30 + lVar13 * 8);
          *puVar3 = uVar8;
          puVar3[1] = uVar9;
          puVar3 = (undefined8 *)(param_11 + 0x40 + lVar13 * 8);
          uVar7 = puVar3[1];
          puVar4 = (undefined8 *)(param_11 + 0x50 + lVar13 * 8);
          uVar8 = *puVar4;
          uVar9 = puVar4[1];
          puVar4 = (undefined8 *)(lVar2 + 0x40 + lVar13 * 8);
          *puVar4 = *puVar3;
          puVar4[1] = uVar7;
          puVar3 = (undefined8 *)(lVar2 + 0x50 + lVar13 * 8);
          *puVar3 = uVar8;
          puVar3[1] = uVar9;
          puVar3 = (undefined8 *)(param_11 + 0x60 + lVar13 * 8);
          uVar7 = puVar3[1];
          puVar4 = (undefined8 *)(param_11 + 0x70 + lVar13 * 8);
          uVar8 = *puVar4;
          uVar9 = puVar4[1];
          puVar4 = (undefined8 *)(lVar2 + 0x60 + lVar13 * 8);
          *puVar4 = *puVar3;
          puVar4[1] = uVar7;
          puVar3 = (undefined8 *)(lVar2 + 0x70 + lVar13 * 8);
          *puVar3 = uVar8;
          puVar3[1] = uVar9;
          lVar13 = lVar13 + 0x10;
          uVar12 = uVar12 - 4;
        } while (uVar12 != 0);
      }
      if (uVar14 != 0) {
        lVar2 = lVar6 + (lVar13 + lVar18) * 8;
        lVar13 = param_11 + lVar13 * 8;
        lVar16 = 0;
        do {
          puVar4 = (undefined8 *)(lVar13 + lVar16);
          uVar7 = puVar4[1];
          puVar3 = (undefined8 *)(lVar13 + 0x10 + lVar16);
          uVar8 = *puVar3;
          uVar9 = puVar3[1];
          puVar3 = (undefined8 *)(lVar2 + lVar16);
          *puVar3 = *puVar4;
          puVar3[1] = uVar7;
          puVar3 = (undefined8 *)(lVar2 + 0x10 + lVar16);
          *puVar3 = uVar8;
          puVar3[1] = uVar9;
          lVar16 = lVar16 + 0x20;
        } while (uVar14 * 0x20 != lVar16);
      }
      if (uVar17 == uVar15) goto LAB_004f6394;
    }
    uVar12 = ~uVar17;
    uVar14 = param_10 & 3;
    if (uVar14 != 0) {
      do {
        *(undefined8 *)(lVar6 + lVar18 * 8 + uVar17 * 8) = *(undefined8 *)(param_11 + uVar17 * 8);
        uVar17 = uVar17 + 1;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    if (2 < uVar12 + uVar15) {
      lVar18 = lVar6 + lVar18 * 8;
      do {
        *(undefined8 *)(lVar18 + uVar17 * 8) = *(undefined8 *)(param_11 + uVar17 * 8);
        *(undefined8 *)(lVar18 + 8 + uVar17 * 8) = *(undefined8 *)(param_11 + 8 + uVar17 * 8);
        *(undefined8 *)(lVar18 + 0x10 + uVar17 * 8) = *(undefined8 *)(param_11 + 0x10 + uVar17 * 8);
        *(undefined8 *)(lVar18 + 0x18 + uVar17 * 8) = *(undefined8 *)(param_11 + 0x18 + uVar17 * 8);
        uVar17 = uVar17 + 4;
      } while (uVar15 != uVar17);
    }
  }
LAB_004f6394:
  *(code **)(lVar6 + (long)(int)lVar1 * 8) = dsp_done;
  *(uint *)(plVar10 + 1) = iVar5 + uVar19 + 1;
  return;
}


