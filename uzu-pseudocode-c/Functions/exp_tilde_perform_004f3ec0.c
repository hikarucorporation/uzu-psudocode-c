// Function : exp_tilde_perform
// Namespace: 
// Entry    : 004f3ec0
// Prototype: long exp_tilde_perform(long param_1)
// Body     : 004f3ec0 - 004f41d5


/* WARNING: Removing unreachable block (ram,0x004f41d4) */

long exp_tilde_perform(long param_1)

{
  float *pfVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  float *pfVar15;
  uint uVar16;
  long lVar17;
  uint uVar18;
  uint uVar19;
  ulong uVar20;
  ulong uVar21;
  float *pfVar22;
  double local_78;
  undefined8 uStack_70;
  double dStack_60;
  double dStack_50;
  
  uVar18 = (uint)*(ulong *)(param_1 + 0x18);
  if (uVar18 == 0) goto LAB_004f4190;
  pfVar15 = *(float **)(param_1 + 8);
  pfVar22 = *(float **)(param_1 + 0x10);
  if ((uVar18 - 1 < 3) ||
     ((pfVar22 < pfVar15 + (ulong)(uVar18 - 1) + 1 && (pfVar15 < pfVar22 + (ulong)(uVar18 - 1) + 1))
     )) {
    uVar12 = uVar18 - 1;
    uVar16 = uVar18 & 3;
    if ((*(ulong *)(param_1 + 0x18) & 3) != 0) {
LAB_004f3f28:
      uVar19 = 0;
      do {
        fVar2 = *pfVar15;
        pfVar15 = pfVar15 + 1;
        dVar9 = exp((double)fVar2);
        *pfVar22 = (float)dVar9;
        pfVar22 = pfVar22 + 1;
        uVar19 = uVar19 + 1;
      } while (uVar16 != uVar19);
      uVar18 = uVar18 - uVar19;
    }
  }
  else {
    uVar14 = (ulong)(uVar18 - 1) + 1;
    uVar13 = uVar14 & 0xfffffffffffffffc;
    uVar20 = (uVar13 - 4 >> 2) + 1;
    if (uVar13 - 4 == 0) {
      lVar17 = 0;
LAB_004f4115:
      dVar9 = (double)(float)*(undefined8 *)(pfVar15 + lVar17 + 2);
      dVar10 = (double)(float)((ulong)*(undefined8 *)(pfVar15 + lVar17 + 2) >> 0x20);
      auVar7._8_4_ = SUB84(dVar10,0);
      auVar7._0_8_ = dVar9;
      auVar7._12_4_ = (int)((ulong)dVar10 >> 0x20);
      dVar10 = (double)(float)*(undefined8 *)(pfVar15 + lVar17);
      dVar11 = (double)(float)((ulong)*(undefined8 *)(pfVar15 + lVar17) >> 0x20);
      auVar8._8_4_ = SUB84(dVar11,0);
      auVar8._0_8_ = dVar10;
      auVar8._12_4_ = (int)((ulong)dVar11 >> 0x20);
      local_78 = exp(dVar10);
      dStack_60 = auVar8._8_8_;
      dVar10 = exp(dStack_60);
      uStack_70._0_4_ = SUB84(dVar10,0);
      uStack_70._4_4_ = (int)((ulong)dVar10 >> 0x20);
      dVar9 = exp(dVar9);
      dStack_50 = auVar7._8_8_;
      dVar10 = exp(dStack_50);
      pfVar1 = pfVar22 + lVar17;
      *pfVar1 = (float)local_78;
      pfVar1[1] = (float)uStack_70;
      pfVar1[2] = (float)dVar9;
      pfVar1[3] = (float)dVar10;
    }
    else {
      uVar21 = uVar20 & 0xfffffffffffffffe;
      lVar17 = 0;
      do {
        dVar9 = (double)(float)*(undefined8 *)(pfVar15 + lVar17 + 2);
        dVar10 = (double)(float)((ulong)*(undefined8 *)(pfVar15 + lVar17 + 2) >> 0x20);
        auVar3._8_4_ = SUB84(dVar10,0);
        auVar3._0_8_ = dVar9;
        auVar3._12_4_ = (int)((ulong)dVar10 >> 0x20);
        dVar10 = (double)(float)*(undefined8 *)(pfVar15 + lVar17);
        dVar11 = (double)(float)((ulong)*(undefined8 *)(pfVar15 + lVar17) >> 0x20);
        auVar4._8_4_ = SUB84(dVar11,0);
        auVar4._0_8_ = dVar10;
        auVar4._12_4_ = (int)((ulong)dVar11 >> 0x20);
        local_78 = exp(dVar10);
        dStack_60 = auVar4._8_8_;
        dVar10 = exp(dStack_60);
        uStack_70._0_4_ = SUB84(dVar10,0);
        uStack_70._4_4_ = (int)((ulong)dVar10 >> 0x20);
        dVar9 = exp(dVar9);
        dStack_50 = auVar3._8_8_;
        dVar10 = exp(dStack_50);
        pfVar1 = pfVar22 + lVar17;
        *pfVar1 = (float)local_78;
        pfVar1[1] = (float)uStack_70;
        pfVar1[2] = (float)dVar9;
        pfVar1[3] = (float)dVar10;
        dVar9 = (double)(float)*(undefined8 *)(pfVar15 + lVar17 + 6);
        dVar10 = (double)(float)((ulong)*(undefined8 *)(pfVar15 + lVar17 + 6) >> 0x20);
        auVar5._8_4_ = SUB84(dVar10,0);
        auVar5._0_8_ = dVar9;
        auVar5._12_4_ = (int)((ulong)dVar10 >> 0x20);
        dVar10 = (double)(float)*(undefined8 *)(pfVar15 + lVar17 + 4);
        dVar11 = (double)(float)((ulong)*(undefined8 *)(pfVar15 + lVar17 + 4) >> 0x20);
        auVar6._8_4_ = SUB84(dVar11,0);
        auVar6._0_8_ = dVar10;
        auVar6._12_4_ = (int)((ulong)dVar11 >> 0x20);
        local_78 = exp(dVar10);
        dStack_60 = auVar6._8_8_;
        dVar10 = exp(dStack_60);
        uStack_70._0_4_ = SUB84(dVar10,0);
        uStack_70._4_4_ = (int)((ulong)dVar10 >> 0x20);
        dVar9 = exp(dVar9);
        dStack_50 = auVar5._8_8_;
        dVar10 = exp(dStack_50);
        pfVar1 = pfVar22 + lVar17 + 4;
        *pfVar1 = (float)local_78;
        pfVar1[1] = (float)uStack_70;
        pfVar1[2] = (float)dVar9;
        pfVar1[3] = (float)dVar10;
        lVar17 = lVar17 + 8;
        uVar21 = uVar21 - 2;
      } while (uVar21 != 0);
      if ((uVar20 & 1) != 0) goto LAB_004f4115;
    }
    if (uVar14 == uVar13) goto LAB_004f4190;
    uVar18 = uVar18 - (int)uVar13;
    pfVar22 = pfVar22 + uVar13;
    pfVar15 = pfVar15 + uVar13;
    uVar12 = uVar18 - 1;
    uVar16 = uVar18 & 3;
    if (uVar16 != 0) goto LAB_004f3f28;
  }
  if (2 < uVar12) {
    lVar17 = 0;
    do {
      dVar9 = exp((double)pfVar15[lVar17]);
      pfVar22[lVar17] = (float)dVar9;
      dVar9 = exp((double)pfVar15[lVar17 + 1]);
      pfVar22[lVar17 + 1] = (float)dVar9;
      dVar9 = exp((double)pfVar15[lVar17 + 2]);
      pfVar22[lVar17 + 2] = (float)dVar9;
      dVar9 = exp((double)pfVar15[lVar17 + 3]);
      pfVar22[lVar17 + 3] = (float)dVar9;
      lVar17 = lVar17 + 4;
    } while (uVar18 != (uint)lVar17);
  }
LAB_004f4190:
  return param_1 + 0x20;
}


