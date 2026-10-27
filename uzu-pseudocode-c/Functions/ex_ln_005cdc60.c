// Function : ex_ln
// Namespace: 
// Entry    : 005cdc60
// Prototype: undefined ex_ln(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, float * param_11, float * param_12, char * param_13, undefined8 param_14)
// Body     : 005cdc60 - 005ce052


/* WARNING: Removing unreachable block (ram,0x005ce04e) */

void ex_ln(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9,
          undefined8 param_10,float *param_11,float *param_12,char *param_13,undefined8 param_14)

{
  uint uVar1;
  float *pfVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  float *pfVar13;
  ulong uVar14;
  float *pfVar15;
  uint uVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  uint uVar20;
  ulong uVar21;
  double dStack_70;
  double local_68;
  undefined8 uStack_60;
  double dStack_50;
  
  lVar17 = *(long *)(param_11 + 2);
  if (1 < lVar17 - 0xeU) {
    if (lVar17 == 2) {
      if (*(long *)(param_12 + 2) == 0xf) {
        lVar17 = *(long *)param_12;
        dVar10 = (double)*param_11;
        goto LAB_005cdcde;
      }
      param_12[2] = 2.8026e-45;
      param_12[3] = 0.0;
      dVar10 = (double)*param_11;
    }
    else {
      if (lVar17 != 1) {
        pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                 "expr: FUNV_EVAL_UNARY(%d): bad left type %ld\n",0x2e6,lVar17,param_13,param_14);
        return;
      }
      if (*(long *)(param_12 + 2) == 0xf) {
        lVar17 = *(long *)param_12;
        dVar10 = (double)*(long *)param_11;
LAB_005cdcde:
        dVar10 = log(dVar10);
        ex_mkvector((float)dVar10,lVar17,*(int *)(param_9 + 0x28f8));
        return;
      }
      param_12[2] = 2.8026e-45;
      param_12[3] = 0.0;
      dVar10 = (double)*(long *)param_11;
    }
    dVar10 = log(dVar10);
    *param_12 = (float)dVar10;
    return;
  }
  if (*(long *)(param_12 + 2) == 0xf) {
    pfVar13 = *(float **)param_12;
    uVar20 = *(uint *)(param_9 + 0x28f8);
  }
  else {
    param_12[2] = 2.10195e-44;
    param_12[3] = 0.0;
    pfVar13 = (float *)ex_malloc((long)*(int *)(param_9 + 0x28f8) << 2);
    *(float **)param_12 = pfVar13;
    uVar20 = *(uint *)(param_9 + 0x28f8);
  }
  if (uVar20 == 0) {
    return;
  }
  pfVar15 = *(float **)param_11;
  uVar21 = (ulong)(uVar20 - 1);
  if ((uVar20 - 1 < 3) || ((pfVar13 < pfVar15 + uVar21 + 1 && (pfVar15 < pfVar13 + uVar21 + 1))))
  goto LAB_005cdf40;
  uVar14 = uVar21 + 1 & 0xfffffffffffffffc;
  uVar18 = (uVar14 - 4 >> 2) + 1;
  if (uVar14 - 4 == 0) {
    lVar17 = 0;
LAB_005cdeb6:
    dVar10 = (double)(float)*(undefined8 *)(pfVar15 + lVar17 + 2);
    dVar11 = (double)(float)((ulong)*(undefined8 *)(pfVar15 + lVar17 + 2) >> 0x20);
    auVar8._8_4_ = SUB84(dVar11,0);
    auVar8._0_8_ = dVar10;
    auVar8._12_4_ = (int)((ulong)dVar11 >> 0x20);
    dVar11 = (double)(float)*(undefined8 *)(pfVar15 + lVar17);
    dVar12 = (double)(float)((ulong)*(undefined8 *)(pfVar15 + lVar17) >> 0x20);
    auVar9._8_4_ = SUB84(dVar12,0);
    auVar9._0_8_ = dVar11;
    auVar9._12_4_ = (int)((ulong)dVar12 >> 0x20);
    local_68 = log(dVar11);
    dStack_70 = auVar9._8_8_;
    dVar11 = log(dStack_70);
    uStack_60._0_4_ = SUB84(dVar11,0);
    uStack_60._4_4_ = (int)((ulong)dVar11 >> 0x20);
    dVar10 = log(dVar10);
    dStack_50 = auVar8._8_8_;
    dVar11 = log(dStack_50);
    pfVar2 = pfVar13 + lVar17;
    *pfVar2 = (float)local_68;
    pfVar2[1] = (float)uStack_60;
    pfVar2[2] = (float)dVar10;
    pfVar2[3] = (float)dVar11;
  }
  else {
    uVar19 = uVar18 & 0xfffffffffffffffe;
    lVar17 = 0;
    do {
      dVar10 = (double)(float)*(undefined8 *)(pfVar15 + lVar17 + 2);
      dVar11 = (double)(float)((ulong)*(undefined8 *)(pfVar15 + lVar17 + 2) >> 0x20);
      auVar4._8_4_ = SUB84(dVar11,0);
      auVar4._0_8_ = dVar10;
      auVar4._12_4_ = (int)((ulong)dVar11 >> 0x20);
      dVar11 = (double)(float)*(undefined8 *)(pfVar15 + lVar17);
      dVar12 = (double)(float)((ulong)*(undefined8 *)(pfVar15 + lVar17) >> 0x20);
      auVar5._8_4_ = SUB84(dVar12,0);
      auVar5._0_8_ = dVar11;
      auVar5._12_4_ = (int)((ulong)dVar12 >> 0x20);
      local_68 = log(dVar11);
      dStack_70 = auVar5._8_8_;
      dVar11 = log(dStack_70);
      uStack_60._0_4_ = SUB84(dVar11,0);
      uStack_60._4_4_ = (int)((ulong)dVar11 >> 0x20);
      dVar10 = log(dVar10);
      dStack_50 = auVar4._8_8_;
      dVar11 = log(dStack_50);
      pfVar2 = pfVar13 + lVar17;
      *pfVar2 = (float)local_68;
      pfVar2[1] = (float)uStack_60;
      pfVar2[2] = (float)dVar10;
      pfVar2[3] = (float)dVar11;
      dVar10 = (double)(float)*(undefined8 *)(pfVar15 + lVar17 + 6);
      dVar11 = (double)(float)((ulong)*(undefined8 *)(pfVar15 + lVar17 + 6) >> 0x20);
      auVar6._8_4_ = SUB84(dVar11,0);
      auVar6._0_8_ = dVar10;
      auVar6._12_4_ = (int)((ulong)dVar11 >> 0x20);
      dVar11 = (double)(float)*(undefined8 *)(pfVar15 + lVar17 + 4);
      dVar12 = (double)(float)((ulong)*(undefined8 *)(pfVar15 + lVar17 + 4) >> 0x20);
      auVar7._8_4_ = SUB84(dVar12,0);
      auVar7._0_8_ = dVar11;
      auVar7._12_4_ = (int)((ulong)dVar12 >> 0x20);
      local_68 = log(dVar11);
      dStack_70 = auVar7._8_8_;
      dVar11 = log(dStack_70);
      uStack_60._0_4_ = SUB84(dVar11,0);
      uStack_60._4_4_ = (int)((ulong)dVar11 >> 0x20);
      dVar10 = log(dVar10);
      dStack_50 = auVar6._8_8_;
      dVar11 = log(dStack_50);
      pfVar2 = pfVar13 + lVar17 + 4;
      *pfVar2 = (float)local_68;
      pfVar2[1] = (float)uStack_60;
      pfVar2[2] = (float)dVar10;
      pfVar2[3] = (float)dVar11;
      lVar17 = lVar17 + 8;
      uVar19 = uVar19 - 2;
    } while (uVar19 != 0);
    if ((uVar18 & 1) != 0) goto LAB_005cdeb6;
  }
  if (uVar21 + 1 == uVar14) {
    return;
  }
  uVar20 = uVar20 - (int)uVar14;
  pfVar13 = pfVar13 + uVar14;
  pfVar15 = pfVar15 + uVar14;
LAB_005cdf40:
  uVar1 = uVar20 - 1;
  if ((uVar20 & 3) != 0) {
    uVar16 = 0;
    do {
      fVar3 = *pfVar15;
      pfVar15 = pfVar15 + 1;
      dVar10 = log((double)fVar3);
      *pfVar13 = (float)dVar10;
      pfVar13 = pfVar13 + 1;
      uVar16 = uVar16 + 1;
    } while ((uVar20 & 3) != uVar16);
    uVar20 = uVar20 - uVar16;
  }
  if (2 < uVar1) {
    lVar17 = 0;
    do {
      dVar10 = log((double)pfVar15[lVar17]);
      pfVar13[lVar17] = (float)dVar10;
      dVar10 = log((double)pfVar15[lVar17 + 1]);
      pfVar13[lVar17 + 1] = (float)dVar10;
      dVar10 = log((double)pfVar15[lVar17 + 2]);
      pfVar13[lVar17 + 2] = (float)dVar10;
      dVar10 = log((double)pfVar15[lVar17 + 3]);
      pfVar13[lVar17 + 3] = (float)dVar10;
      lVar17 = lVar17 + 4;
    } while (uVar20 != (uint)lVar17);
  }
  return;
}


