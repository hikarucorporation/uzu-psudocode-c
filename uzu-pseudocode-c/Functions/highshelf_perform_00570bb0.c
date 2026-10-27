// Function : highshelf_perform
// Namespace: 
// Entry    : 00570bb0
// Prototype: long highshelf_perform(long param_1)
// Body     : 00570bb0 - 00571123


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long highshelf_perform(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  long lVar6;
  long lVar7;
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  uint uVar17;
  long lVar18;
  uint uVar19;
  long lVar20;
  uint uVar21;
  undefined4 *puVar22;
  undefined4 *puVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  long lVar28;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  double dVar38;
  double dVar39;
  double local_88;
  double local_80;
  undefined1 local_78 [16];
  double local_68;
  double dStack_60;
  double local_58;
  undefined8 uStack_50;
  undefined1 local_48 [16];
  
  lVar6 = *(long *)(param_1 + 8);
  dVar4 = *(double *)(lVar6 + 0x60);
  local_58 = *(double *)(lVar6 + 0x68);
  uVar36 = 0;
  uVar37 = 0;
  dVar31 = *(double *)(lVar6 + 0x70);
  dStack_60 = 0.0;
  local_68 = *(double *)(lVar6 + 0x78);
  uVar19 = (uint)*(ulong *)(param_1 + 0x10);
  uVar17 = uVar19 - 1;
  if (uVar19 == 0) goto LAB_005710f1;
  puVar22 = *(undefined4 **)(param_1 + 0x18);
  puVar23 = *(undefined4 **)(param_1 + 0x38);
  if (*(int *)(lVar6 + 0x5c) == 0) {
    lVar18 = *(long *)(param_1 + 0x20);
    lVar20 = *(long *)(param_1 + 0x28);
    dVar8 = (double)*(float *)(lVar6 + 0x58) + DAT_0065b130;
    lVar7 = *(long *)(param_1 + 0x30);
    dVar39 = *(double *)(lVar6 + 0x80);
    dVar10 = *(double *)(lVar6 + 0xa8);
    dVar11 = *(double *)(lVar6 + 0xb0);
    dVar33 = *(double *)(lVar6 + 0x98);
    dVar30 = *(double *)(lVar6 + 0xa0);
    dVar5 = *(double *)(lVar6 + 0xb8);
    lVar28 = 0;
    dVar35 = local_68;
    dVar38 = _DAT_005d9000;
    local_48._0_8_ = local_58;
    do {
      fVar3 = (float)puVar22[lVar28];
      dVar34 = (double)*(float *)(lVar18 + lVar28 * 4);
      dVar32 = (double)*(float *)(lVar20 + lVar28 * 4);
      dVar29 = (double)*(float *)(lVar7 + lVar28 * 4);
      if (dVar34 <= DAT_006524a0) {
        dVar34 = DAT_006524a0;
      }
      if (dVar8 <= dVar34) {
        dVar34 = dVar8;
      }
      if (dVar32 <= DAT_00656ba0) {
        dVar32 = DAT_00656ba0;
      }
      if (dVar38 <= dVar32) {
        dVar32 = dVar38;
      }
      local_68 = dVar31;
      local_58 = dVar4;
      if ((dVar34 == dVar39) && (dVar32 == *(double *)(lVar6 + 0x88))) {
        uVar15 = 0;
        uVar16 = 0;
        if (dVar29 != *(double *)(lVar6 + 0x90)) goto LAB_00570d50;
      }
      else {
LAB_00570d50:
        *(double *)(lVar6 + 0x80) = dVar34;
        *(double *)(lVar6 + 0x88) = dVar32;
        *(double *)(lVar6 + 0x90) = dVar29;
        local_48._8_4_ = uVar36;
        local_48._12_4_ = uVar37;
        uStack_50 = 0;
        dVar4 = exp2(dVar29 * _DAT_0065b638);
        local_78._8_4_ = extraout_XMM0_Dc;
        local_78._0_8_ = dVar4;
        local_78._12_4_ = extraout_XMM0_Dd;
        sincos((dVar34 * DAT_00652e70) / (double)*(float *)(lVar6 + 0x58),&local_80,&local_88);
        dVar38 = _DAT_005d9000;
        dVar29 = (double)local_78._0_8_ + _DAT_005d9000;
        dVar39 = (double)local_78._0_8_ + DAT_00651e70;
        dVar4 = dVar29 - local_88 * dVar39;
        dVar31 = SQRT((double)local_78._0_8_ + (double)local_78._0_8_ +
                      (_DAT_005d9000 / dVar32 + DAT_00651e70) *
                      ((double)local_78._0_8_ * (double)local_78._0_8_ + _DAT_005d9000)) * local_80;
        dVar33 = local_88 * dVar39 + dVar29;
        dVar30 = _DAT_005d9000 / (dVar4 + dVar31);
        dVar5 = (dVar31 - dVar4) * dVar30;
        dVar10 = (double)local_78._0_8_ * (dVar33 - dVar31) * dVar30;
        dVar11 = DAT_0065ac98 * (dVar39 - dVar29 * local_88) * dVar30;
        dVar33 = dVar30 * (double)local_78._0_8_ * (dVar31 + dVar33);
        dVar30 = dVar30 * (double)local_78._0_8_ * DAT_0065b138 * (dVar39 + dVar29 * local_88);
        *(double *)(lVar6 + 0x98) = dVar33;
        *(double *)(lVar6 + 0xa0) = dVar30;
        auVar9._8_4_ = SUB84(dVar11,0);
        auVar9._0_8_ = dVar10;
        auVar9._12_4_ = (int)((ulong)dVar11 >> 0x20);
        *(undefined1 (*) [16])(lVar6 + 0xa8) = auVar9;
        *(double *)(lVar6 + 0xb8) = dVar5;
        uVar15 = (int)uStack_50;
        uVar16 = (int)((ulong)uStack_50 >> 0x20);
        dVar39 = dVar34;
      }
      uVar37 = uVar16;
      uVar36 = uVar15;
      dVar4 = (double)fVar3;
      dStack_60 = local_58 * dVar30 + local_68 * dVar11;
      dVar31 = dStack_60 + dVar4 * dVar33 + (double)local_48._0_8_ * dVar10 + dVar35 * dVar5;
      puVar23[lVar28] = (float)dVar31;
      lVar28 = lVar28 + 1;
      dVar35 = local_68;
      local_48._0_8_ = local_58;
    } while (uVar19 != (uint)lVar28);
    goto LAB_005710f1;
  }
  if ((uVar17 < 7) ||
     ((uVar26 = (ulong)uVar17, puVar23 < puVar22 + uVar26 + 1 && (puVar22 < puVar23 + uVar26 + 1))))
  {
    uVar19 = uVar19 & 7;
    uVar21 = uVar17;
    if ((*(ulong *)(param_1 + 0x10) & 7) != 0) {
LAB_00570c3a:
      uVar21 = 0;
      do {
        uVar36 = *puVar22;
        puVar22 = puVar22 + 1;
        *puVar23 = uVar36;
        puVar23 = puVar23 + 1;
        uVar21 = uVar21 + 1;
      } while (uVar19 != uVar21);
      uVar21 = uVar17 - uVar21;
    }
  }
  else {
    uVar25 = uVar26 + 1 & 0xfffffffffffffff8;
    uVar24 = (uVar25 - 8 >> 3) + 1;
    uVar27 = (ulong)((uint)uVar24 & 3);
    if (uVar25 - 8 < 0x18) {
      lVar18 = 0;
    }
    else {
      uVar24 = uVar24 & 0xfffffffffffffffc;
      lVar18 = 0;
      do {
        uVar12 = *(undefined8 *)((long)(puVar22 + lVar18) + 8);
        uVar13 = *(undefined8 *)(puVar22 + lVar18 + 4);
        uVar14 = *(undefined8 *)((long)(puVar22 + lVar18 + 4) + 8);
        *(undefined8 *)(puVar23 + lVar18) = *(undefined8 *)(puVar22 + lVar18);
        *(undefined8 *)((long)(puVar23 + lVar18) + 8) = uVar12;
        *(undefined8 *)(puVar23 + lVar18 + 4) = uVar13;
        *(undefined8 *)((long)(puVar23 + lVar18 + 4) + 8) = uVar14;
        uVar12 = *(undefined8 *)((long)(puVar22 + lVar18 + 8) + 8);
        uVar13 = *(undefined8 *)(puVar22 + lVar18 + 0xc);
        uVar14 = *(undefined8 *)((long)(puVar22 + lVar18 + 0xc) + 8);
        *(undefined8 *)(puVar23 + lVar18 + 8) = *(undefined8 *)(puVar22 + lVar18 + 8);
        *(undefined8 *)((long)(puVar23 + lVar18 + 8) + 8) = uVar12;
        *(undefined8 *)(puVar23 + lVar18 + 0xc) = uVar13;
        *(undefined8 *)((long)(puVar23 + lVar18 + 0xc) + 8) = uVar14;
        uVar12 = *(undefined8 *)((long)(puVar22 + lVar18 + 0x10) + 8);
        uVar13 = *(undefined8 *)(puVar22 + lVar18 + 0x14);
        uVar14 = *(undefined8 *)((long)(puVar22 + lVar18 + 0x14) + 8);
        *(undefined8 *)(puVar23 + lVar18 + 0x10) = *(undefined8 *)(puVar22 + lVar18 + 0x10);
        *(undefined8 *)((long)(puVar23 + lVar18 + 0x10) + 8) = uVar12;
        *(undefined8 *)(puVar23 + lVar18 + 0x14) = uVar13;
        *(undefined8 *)((long)(puVar23 + lVar18 + 0x14) + 8) = uVar14;
        uVar12 = *(undefined8 *)((long)(puVar22 + lVar18 + 0x18) + 8);
        uVar13 = *(undefined8 *)(puVar22 + lVar18 + 0x1c);
        uVar14 = *(undefined8 *)((long)(puVar22 + lVar18 + 0x1c) + 8);
        *(undefined8 *)(puVar23 + lVar18 + 0x18) = *(undefined8 *)(puVar22 + lVar18 + 0x18);
        *(undefined8 *)((long)(puVar23 + lVar18 + 0x18) + 8) = uVar12;
        *(undefined8 *)(puVar23 + lVar18 + 0x1c) = uVar13;
        *(undefined8 *)((long)(puVar23 + lVar18 + 0x1c) + 8) = uVar14;
        lVar18 = lVar18 + 0x20;
        uVar24 = uVar24 - 4;
      } while (uVar24 != 0);
    }
    if (uVar27 != 0) {
      lVar20 = 0;
      do {
        puVar2 = (undefined8 *)((long)puVar22 + lVar20 + lVar18 * 4);
        uVar12 = puVar2[1];
        puVar1 = (undefined8 *)((long)puVar22 + lVar20 + lVar18 * 4 + 0x10);
        uVar13 = *puVar1;
        uVar14 = puVar1[1];
        puVar1 = (undefined8 *)((long)puVar23 + lVar20 + lVar18 * 4);
        *puVar1 = *puVar2;
        puVar1[1] = uVar12;
        puVar1 = (undefined8 *)((long)puVar23 + lVar20 + lVar18 * 4 + 0x10);
        *puVar1 = uVar13;
        puVar1[1] = uVar14;
        lVar20 = lVar20 + 0x20;
      } while (uVar27 * 0x20 != lVar20);
    }
    if (uVar26 + 1 == uVar25) goto LAB_005710f1;
    uVar17 = uVar17 - (int)uVar25;
    puVar22 = puVar22 + uVar25;
    puVar23 = puVar23 + uVar25;
    uVar19 = uVar17 + 1 & 7;
    uVar21 = uVar17;
    if (uVar19 != 0) goto LAB_00570c3a;
  }
  if (6 < uVar17) {
    lVar18 = 0;
    do {
      puVar23[lVar18] = puVar22[lVar18];
      puVar23[lVar18 + 1] = puVar22[lVar18 + 1];
      puVar23[lVar18 + 2] = puVar22[lVar18 + 2];
      puVar23[lVar18 + 3] = puVar22[lVar18 + 3];
      puVar23[lVar18 + 4] = puVar22[lVar18 + 4];
      puVar23[lVar18 + 5] = puVar22[lVar18 + 5];
      puVar23[lVar18 + 6] = puVar22[lVar18 + 6];
      puVar23[lVar18 + 7] = puVar22[lVar18 + 7];
      lVar18 = lVar18 + 8;
    } while (uVar21 + 1 != (int)lVar18);
  }
LAB_005710f1:
  *(double *)(lVar6 + 0x60) = dVar4;
  *(double *)(lVar6 + 0x68) = local_58;
  *(double *)(lVar6 + 0x70) = dVar31;
  *(double *)(lVar6 + 0x78) = local_68;
  return param_1 + 0x40;
}


