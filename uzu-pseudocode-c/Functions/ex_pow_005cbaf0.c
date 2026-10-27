// Function : ex_pow
// Namespace: 
// Entry    : 005cbaf0
// Prototype: undefined ex_pow(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, float * param_11, float * param_12, undefined8 param_13, undefined8 param_14)
// Body     : 005cbaf0 - 005cd1b3


void ex_pow(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
           undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9,
           undefined8 param_10,float *param_11,float *param_12,undefined8 param_13,
           undefined8 param_14)

{
  uint uVar1;
  float *pfVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  double dVar23;
  double dVar24;
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double dVar33;
  double dVar34;
  undefined1 auVar35 [16];
  float *pfVar36;
  undefined8 uVar37;
  ulong uVar38;
  int iVar39;
  ulong uVar40;
  long lVar41;
  float *pfVar42;
  long lVar43;
  uint uVar44;
  long lVar45;
  ulong uVar46;
  char *pcVar47;
  ulong uVar48;
  undefined1 uVar49;
  undefined7 uVar50;
  float *pfVar51;
  uint uVar52;
  float fVar53;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  double local_a8;
  undefined8 uStack_a0;
  double dStack_90;
  double dStack_80;
  double dStack_70;
  double dStack_60;
  
  uVar49 = (undefined1)param_13;
  uVar50 = (undefined7)((ulong)param_13 >> 8);
  lVar45 = *(long *)(param_11 + 2);
  if (lVar45 - 0xeU < 2) {
    if (*(long *)(param_12 + 2) == 0xf) {
      pfVar36 = *(float **)param_12;
    }
    else {
      if (*(long *)(param_12 + 2) == 0xe) {
LAB_005cd19c:
        post(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"expr~: Int. error %d")
        ;
                    /* WARNING: Subroutine does not return */
        abort();
      }
      param_12[2] = 2.10195e-44;
      param_12[3] = 0.0;
      pfVar36 = (float *)ex_malloc((long)*(int *)(param_9 + 0x28f8) << 2);
      param_1 = CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
      *(float **)param_12 = pfVar36;
    }
    pfVar42 = *(float **)param_11;
    lVar45 = *(long *)(param_11 + 10);
    if (lVar45 - 0xeU < 2) {
      uVar52 = *(uint *)(param_9 + 0x28f8);
      if (uVar52 == 0) {
        return;
      }
      pfVar51 = *(float **)(param_11 + 8);
      uVar40 = (ulong)(uVar52 - 1);
      if (2 < uVar52 - 1) {
        if ((pfVar42 + uVar40 + 1 <= pfVar36 || pfVar36 + uVar40 + 1 <= pfVar42) &&
           (pfVar51 + uVar40 + 1 <= pfVar36 || pfVar36 + uVar40 + 1 <= pfVar51)) {
          uVar38 = uVar40 + 1 & 0xfffffffffffffffc;
          uVar52 = uVar52 - (int)uVar38;
          uVar46 = 0;
          do {
            dVar23 = (double)(float)*(undefined8 *)(pfVar42 + uVar46 + 2);
            dVar33 = (double)(float)((ulong)*(undefined8 *)(pfVar42 + uVar46 + 2) >> 0x20);
            auVar21._8_4_ = SUB84(dVar33,0);
            auVar21._0_8_ = dVar23;
            auVar21._12_4_ = (int)((ulong)dVar33 >> 0x20);
            dVar24 = (double)(float)*(undefined8 *)(pfVar42 + uVar46);
            dVar33 = (double)(float)((ulong)*(undefined8 *)(pfVar42 + uVar46) >> 0x20);
            auVar35._8_4_ = SUB84(dVar33,0);
            auVar35._0_8_ = dVar24;
            auVar35._12_4_ = (int)((ulong)dVar33 >> 0x20);
            dVar33 = (double)(float)*(undefined8 *)(pfVar51 + uVar46 + 2);
            dVar25 = (double)(float)((ulong)*(undefined8 *)(pfVar51 + uVar46 + 2) >> 0x20);
            auVar22._8_4_ = SUB84(dVar25,0);
            auVar22._0_8_ = dVar33;
            auVar22._12_4_ = (int)((ulong)dVar25 >> 0x20);
            dVar25 = (double)(float)*(undefined8 *)(pfVar51 + uVar46);
            dVar34 = (double)(float)((ulong)*(undefined8 *)(pfVar51 + uVar46) >> 0x20);
            auVar32._8_4_ = SUB84(dVar34,0);
            auVar32._0_8_ = dVar25;
            auVar32._12_4_ = (int)((ulong)dVar34 >> 0x20);
            local_a8 = pow(dVar24,dVar25);
            dStack_60 = auVar35._8_8_;
            dStack_90 = auVar32._8_8_;
            dVar25 = pow(dStack_60,dStack_90);
            uStack_a0._0_4_ = SUB84(dVar25,0);
            uStack_a0._4_4_ = (int)((ulong)dVar25 >> 0x20);
            dVar23 = pow(dVar23,dVar33);
            dStack_70 = auVar21._8_8_;
            dStack_80 = auVar22._8_8_;
            dVar33 = pow(dStack_70,dStack_80);
            pfVar2 = pfVar36 + uVar46;
            *pfVar2 = (float)local_a8;
            pfVar2[1] = (float)uStack_a0;
            pfVar2[2] = (float)dVar23;
            pfVar2[3] = (float)dVar33;
            uVar46 = uVar46 + 4;
          } while (uVar38 != uVar46);
          pfVar42 = pfVar42 + uVar38;
          pfVar51 = pfVar51 + uVar38;
          pfVar36 = pfVar36 + uVar38;
          if (uVar40 + 1 == uVar38) {
            return;
          }
        }
      }
      uVar1 = uVar52;
      if ((uVar52 & 1) != 0) {
        dVar23 = pow((double)*pfVar42,(double)*pfVar51);
        *pfVar36 = (float)dVar23;
        pfVar36 = pfVar36 + 1;
        pfVar51 = pfVar51 + 1;
        pfVar42 = pfVar42 + 1;
        uVar1 = uVar52 - 1;
      }
      if (uVar52 != 1) {
        lVar45 = 0;
        do {
          dVar23 = pow((double)pfVar42[lVar45],(double)pfVar51[lVar45]);
          pfVar36[lVar45] = (float)dVar23;
          dVar23 = pow((double)pfVar42[lVar45 + 1],(double)pfVar51[lVar45 + 1]);
          pfVar36[lVar45 + 1] = (float)dVar23;
          lVar45 = lVar45 + 2;
        } while (uVar1 != (uint)lVar45);
      }
      return;
    }
    if (lVar45 == 2) {
      uVar52 = *(uint *)(param_9 + 0x28f8);
      if (uVar52 == 0) {
        return;
      }
      dVar23 = (double)param_11[8];
      uVar40 = (ulong)(uVar52 - 1);
      if ((2 < uVar52 - 1) &&
         ((pfVar42 + uVar40 + 1 <= pfVar36 || (pfVar36 + uVar40 + 1 <= pfVar42)))) {
        uVar38 = uVar40 + 1 & 0xfffffffffffffffc;
        uVar46 = (uVar38 - 4 >> 2) + 1;
        if (uVar38 - 4 == 0) {
          lVar45 = 0;
        }
        else {
          uVar48 = uVar46 & 0xfffffffffffffffe;
          lVar45 = 0;
          do {
            dVar33 = (double)(float)*(undefined8 *)(pfVar42 + lVar45 + 2);
            dVar25 = (double)(float)((ulong)*(undefined8 *)(pfVar42 + lVar45 + 2) >> 0x20);
            auVar15._8_4_ = SUB84(dVar25,0);
            auVar15._0_8_ = dVar33;
            auVar15._12_4_ = (int)((ulong)dVar25 >> 0x20);
            dVar25 = (double)(float)*(undefined8 *)(pfVar42 + lVar45);
            dVar34 = (double)(float)((ulong)*(undefined8 *)(pfVar42 + lVar45) >> 0x20);
            auVar16._8_4_ = SUB84(dVar34,0);
            auVar16._0_8_ = dVar25;
            auVar16._12_4_ = (int)((ulong)dVar34 >> 0x20);
            dVar25 = pow(dVar25,dVar23);
            dStack_90 = auVar16._8_8_;
            dVar34 = pow(dStack_90,dVar23);
            dVar33 = pow(dVar33,dVar23);
            dStack_80 = auVar15._8_8_;
            dVar24 = pow(dStack_80,dVar23);
            pfVar51 = pfVar36 + lVar45;
            *pfVar51 = (float)dVar25;
            pfVar51[1] = (float)dVar34;
            pfVar51[2] = (float)dVar33;
            pfVar51[3] = (float)dVar24;
            dVar33 = (double)(float)*(undefined8 *)(pfVar42 + lVar45 + 6);
            dVar25 = (double)(float)((ulong)*(undefined8 *)(pfVar42 + lVar45 + 6) >> 0x20);
            auVar17._8_4_ = SUB84(dVar25,0);
            auVar17._0_8_ = dVar33;
            auVar17._12_4_ = (int)((ulong)dVar25 >> 0x20);
            dVar25 = (double)(float)*(undefined8 *)(pfVar42 + lVar45 + 4);
            dVar34 = (double)(float)((ulong)*(undefined8 *)(pfVar42 + lVar45 + 4) >> 0x20);
            auVar18._8_4_ = SUB84(dVar34,0);
            auVar18._0_8_ = dVar25;
            auVar18._12_4_ = (int)((ulong)dVar34 >> 0x20);
            dVar25 = pow(dVar25,dVar23);
            dStack_90 = auVar18._8_8_;
            dVar34 = pow(dStack_90,dVar23);
            dVar33 = pow(dVar33,dVar23);
            dStack_80 = auVar17._8_8_;
            dVar24 = pow(dStack_80,dVar23);
            pfVar51 = pfVar36 + lVar45 + 4;
            *pfVar51 = (float)dVar25;
            pfVar51[1] = (float)dVar34;
            pfVar51[2] = (float)dVar33;
            pfVar51[3] = (float)dVar24;
            lVar45 = lVar45 + 8;
            uVar48 = uVar48 - 2;
          } while (uVar48 != 0);
        }
        if ((uVar46 & 1) != 0) {
          dVar33 = (double)(float)*(undefined8 *)(pfVar42 + lVar45 + 2);
          dVar25 = (double)(float)((ulong)*(undefined8 *)(pfVar42 + lVar45 + 2) >> 0x20);
          auVar19._8_4_ = SUB84(dVar25,0);
          auVar19._0_8_ = dVar33;
          auVar19._12_4_ = (int)((ulong)dVar25 >> 0x20);
          dVar25 = (double)(float)*(undefined8 *)(pfVar42 + lVar45);
          dVar34 = (double)(float)((ulong)*(undefined8 *)(pfVar42 + lVar45) >> 0x20);
          auVar20._8_4_ = SUB84(dVar34,0);
          auVar20._0_8_ = dVar25;
          auVar20._12_4_ = (int)((ulong)dVar34 >> 0x20);
          dVar25 = pow(dVar25,dVar23);
          dStack_90 = auVar20._8_8_;
          dVar34 = pow(dStack_90,dVar23);
          dVar33 = pow(dVar33,dVar23);
          dStack_80 = auVar19._8_8_;
          dVar24 = pow(dStack_80,dVar23);
          pfVar51 = pfVar36 + lVar45;
          *pfVar51 = (float)dVar25;
          pfVar51[1] = (float)dVar34;
          pfVar51[2] = (float)dVar33;
          pfVar51[3] = (float)dVar24;
        }
        if (uVar40 + 1 == uVar38) {
          return;
        }
        uVar52 = uVar52 - (int)uVar38;
        pfVar42 = pfVar42 + uVar38;
        pfVar36 = pfVar36 + uVar38;
      }
      uVar1 = uVar52 - 1;
      if ((uVar52 & 3) != 0) {
        uVar44 = 0;
        do {
          dVar33 = pow((double)*pfVar42,dVar23);
          *pfVar36 = (float)dVar33;
          pfVar36 = pfVar36 + 1;
          pfVar42 = pfVar42 + 1;
          uVar44 = uVar44 + 1;
        } while ((uVar52 & 3) != uVar44);
        uVar52 = uVar52 - uVar44;
      }
      if (uVar1 < 3) {
        return;
      }
      lVar45 = 0;
      do {
        dVar33 = pow((double)pfVar42[lVar45],dVar23);
        pfVar36[lVar45] = (float)dVar33;
        dVar33 = pow((double)pfVar42[lVar45 + 1],dVar23);
        pfVar36[lVar45 + 1] = (float)dVar33;
        dVar33 = pow((double)pfVar42[lVar45 + 2],dVar23);
        pfVar36[lVar45 + 2] = (float)dVar33;
        dVar33 = pow((double)pfVar42[lVar45 + 3],dVar23);
        pfVar36[lVar45 + 3] = (float)dVar33;
        lVar45 = lVar45 + 4;
      } while (uVar52 != (uint)lVar45);
      return;
    }
    if (lVar45 == 1) {
      uVar52 = *(uint *)(param_9 + 0x28f8);
      if (uVar52 == 0) {
        return;
      }
      dVar23 = (double)*(long *)(param_11 + 8);
      uVar40 = (ulong)(uVar52 - 1);
      if ((2 < uVar52 - 1) &&
         ((pfVar42 + uVar40 + 1 <= pfVar36 || (pfVar36 + uVar40 + 1 <= pfVar42)))) {
        uVar38 = uVar40 + 1 & 0xfffffffffffffffc;
        uVar46 = (uVar38 - 4 >> 2) + 1;
        if (uVar38 - 4 == 0) {
          lVar45 = 0;
        }
        else {
          uVar48 = uVar46 & 0xfffffffffffffffe;
          lVar45 = 0;
          do {
            dVar33 = (double)(float)*(undefined8 *)(pfVar42 + lVar45 + 2);
            dVar25 = (double)(float)((ulong)*(undefined8 *)(pfVar42 + lVar45 + 2) >> 0x20);
            auVar9._8_4_ = SUB84(dVar25,0);
            auVar9._0_8_ = dVar33;
            auVar9._12_4_ = (int)((ulong)dVar25 >> 0x20);
            dVar25 = (double)(float)*(undefined8 *)(pfVar42 + lVar45);
            dVar34 = (double)(float)((ulong)*(undefined8 *)(pfVar42 + lVar45) >> 0x20);
            auVar10._8_4_ = SUB84(dVar34,0);
            auVar10._0_8_ = dVar25;
            auVar10._12_4_ = (int)((ulong)dVar34 >> 0x20);
            dVar25 = pow(dVar25,dVar23);
            dStack_90 = auVar10._8_8_;
            dVar34 = pow(dStack_90,dVar23);
            dVar33 = pow(dVar33,dVar23);
            dStack_80 = auVar9._8_8_;
            dVar24 = pow(dStack_80,dVar23);
            pfVar51 = pfVar36 + lVar45;
            *pfVar51 = (float)dVar25;
            pfVar51[1] = (float)dVar34;
            pfVar51[2] = (float)dVar33;
            pfVar51[3] = (float)dVar24;
            dVar33 = (double)(float)*(undefined8 *)(pfVar42 + lVar45 + 6);
            dVar25 = (double)(float)((ulong)*(undefined8 *)(pfVar42 + lVar45 + 6) >> 0x20);
            auVar11._8_4_ = SUB84(dVar25,0);
            auVar11._0_8_ = dVar33;
            auVar11._12_4_ = (int)((ulong)dVar25 >> 0x20);
            dVar25 = (double)(float)*(undefined8 *)(pfVar42 + lVar45 + 4);
            dVar34 = (double)(float)((ulong)*(undefined8 *)(pfVar42 + lVar45 + 4) >> 0x20);
            auVar12._8_4_ = SUB84(dVar34,0);
            auVar12._0_8_ = dVar25;
            auVar12._12_4_ = (int)((ulong)dVar34 >> 0x20);
            dVar25 = pow(dVar25,dVar23);
            dStack_90 = auVar12._8_8_;
            dVar34 = pow(dStack_90,dVar23);
            dVar33 = pow(dVar33,dVar23);
            dStack_80 = auVar11._8_8_;
            dVar24 = pow(dStack_80,dVar23);
            pfVar51 = pfVar36 + lVar45 + 4;
            *pfVar51 = (float)dVar25;
            pfVar51[1] = (float)dVar34;
            pfVar51[2] = (float)dVar33;
            pfVar51[3] = (float)dVar24;
            lVar45 = lVar45 + 8;
            uVar48 = uVar48 - 2;
          } while (uVar48 != 0);
        }
        if ((uVar46 & 1) != 0) {
          dVar33 = (double)(float)*(undefined8 *)(pfVar42 + lVar45 + 2);
          dVar25 = (double)(float)((ulong)*(undefined8 *)(pfVar42 + lVar45 + 2) >> 0x20);
          auVar13._8_4_ = SUB84(dVar25,0);
          auVar13._0_8_ = dVar33;
          auVar13._12_4_ = (int)((ulong)dVar25 >> 0x20);
          dVar25 = (double)(float)*(undefined8 *)(pfVar42 + lVar45);
          dVar34 = (double)(float)((ulong)*(undefined8 *)(pfVar42 + lVar45) >> 0x20);
          auVar14._8_4_ = SUB84(dVar34,0);
          auVar14._0_8_ = dVar25;
          auVar14._12_4_ = (int)((ulong)dVar34 >> 0x20);
          dVar25 = pow(dVar25,dVar23);
          dStack_90 = auVar14._8_8_;
          dVar34 = pow(dStack_90,dVar23);
          dVar33 = pow(dVar33,dVar23);
          dStack_80 = auVar13._8_8_;
          dVar24 = pow(dStack_80,dVar23);
          pfVar51 = pfVar36 + lVar45;
          *pfVar51 = (float)dVar25;
          pfVar51[1] = (float)dVar34;
          pfVar51[2] = (float)dVar33;
          pfVar51[3] = (float)dVar24;
        }
        if (uVar40 + 1 == uVar38) {
          return;
        }
        uVar52 = uVar52 - (int)uVar38;
        pfVar42 = pfVar42 + uVar38;
        pfVar36 = pfVar36 + uVar38;
      }
      uVar1 = uVar52 - 1;
      if ((uVar52 & 3) != 0) {
        uVar44 = 0;
        do {
          dVar33 = pow((double)*pfVar42,dVar23);
          *pfVar36 = (float)dVar33;
          pfVar36 = pfVar36 + 1;
          pfVar42 = pfVar42 + 1;
          uVar44 = uVar44 + 1;
        } while ((uVar52 & 3) != uVar44);
        uVar52 = uVar52 - uVar44;
      }
      if (uVar1 < 3) {
        return;
      }
      lVar45 = 0;
      do {
        dVar33 = pow((double)pfVar42[lVar45],dVar23);
        pfVar36[lVar45] = (float)dVar33;
        dVar33 = pow((double)pfVar42[lVar45 + 1],dVar23);
        pfVar36[lVar45 + 1] = (float)dVar33;
        dVar33 = pow((double)pfVar42[lVar45 + 2],dVar23);
        pfVar36[lVar45 + 2] = (float)dVar33;
        dVar33 = pow((double)pfVar42[lVar45 + 3],dVar23);
        pfVar36[lVar45 + 3] = (float)dVar33;
        lVar45 = lVar45 + 4;
      } while (uVar52 != (uint)lVar45);
      return;
    }
  }
  else if (lVar45 == 2) {
    lVar45 = *(long *)(param_11 + 10);
    if (lVar45 - 0xeU < 2) {
      if (*(long *)(param_12 + 2) != 0xf) {
        if (*(long *)(param_12 + 2) == 0xe) goto LAB_005cd19c;
        param_12[2] = 2.10195e-44;
        param_12[3] = 0.0;
        uVar37 = ex_malloc((long)*(int *)(param_9 + 0x28f8) << 2);
        *(undefined8 *)param_12 = uVar37;
      }
      uVar52 = *(uint *)(param_9 + 0x28f8);
      if (uVar52 == 0) {
        return;
      }
      pfVar42 = *(float **)param_12;
      pfVar36 = *(float **)(param_11 + 8);
      dVar23 = (double)*param_11;
      uVar40 = (ulong)(uVar52 - 1);
      if ((2 < uVar52 - 1) &&
         ((pfVar36 + uVar40 + 1 <= pfVar42 || (pfVar42 + uVar40 + 1 <= pfVar36)))) {
        uVar38 = uVar40 + 1 & 0xfffffffffffffffc;
        uVar46 = (uVar38 - 4 >> 2) + 1;
        if (uVar38 - 4 == 0) {
          lVar45 = 0;
        }
        else {
          uVar48 = uVar46 & 0xfffffffffffffffe;
          lVar45 = 0;
          do {
            dVar33 = (double)(float)*(undefined8 *)(pfVar36 + lVar45 + 2);
            dVar25 = (double)(float)((ulong)*(undefined8 *)(pfVar36 + lVar45 + 2) >> 0x20);
            auVar6._8_4_ = SUB84(dVar25,0);
            auVar6._0_8_ = dVar33;
            auVar6._12_4_ = (int)((ulong)dVar25 >> 0x20);
            dVar25 = (double)(float)*(undefined8 *)(pfVar36 + lVar45);
            dVar34 = (double)(float)((ulong)*(undefined8 *)(pfVar36 + lVar45) >> 0x20);
            auVar29._8_4_ = SUB84(dVar34,0);
            auVar29._0_8_ = dVar25;
            auVar29._12_4_ = (int)((ulong)dVar34 >> 0x20);
            dVar25 = pow(dVar23,dVar25);
            dStack_90 = auVar29._8_8_;
            dVar34 = pow(dVar23,dStack_90);
            dVar33 = pow(dVar23,dVar33);
            dStack_80 = auVar6._8_8_;
            dVar24 = pow(dVar23,dStack_80);
            pfVar51 = pfVar42 + lVar45;
            *pfVar51 = (float)dVar25;
            pfVar51[1] = (float)dVar34;
            pfVar51[2] = (float)dVar33;
            pfVar51[3] = (float)dVar24;
            dVar33 = (double)(float)*(undefined8 *)(pfVar36 + lVar45 + 6);
            dVar25 = (double)(float)((ulong)*(undefined8 *)(pfVar36 + lVar45 + 6) >> 0x20);
            auVar7._8_4_ = SUB84(dVar25,0);
            auVar7._0_8_ = dVar33;
            auVar7._12_4_ = (int)((ulong)dVar25 >> 0x20);
            dVar25 = (double)(float)*(undefined8 *)(pfVar36 + lVar45 + 4);
            dVar34 = (double)(float)((ulong)*(undefined8 *)(pfVar36 + lVar45 + 4) >> 0x20);
            auVar30._8_4_ = SUB84(dVar34,0);
            auVar30._0_8_ = dVar25;
            auVar30._12_4_ = (int)((ulong)dVar34 >> 0x20);
            dVar25 = pow(dVar23,dVar25);
            dStack_90 = auVar30._8_8_;
            dVar34 = pow(dVar23,dStack_90);
            dVar33 = pow(dVar23,dVar33);
            dStack_80 = auVar7._8_8_;
            dVar24 = pow(dVar23,dStack_80);
            pfVar51 = pfVar42 + lVar45 + 4;
            *pfVar51 = (float)dVar25;
            pfVar51[1] = (float)dVar34;
            pfVar51[2] = (float)dVar33;
            pfVar51[3] = (float)dVar24;
            lVar45 = lVar45 + 8;
            uVar48 = uVar48 - 2;
          } while (uVar48 != 0);
        }
        if ((uVar46 & 1) != 0) {
          dVar33 = (double)(float)*(undefined8 *)(pfVar36 + lVar45 + 2);
          dVar25 = (double)(float)((ulong)*(undefined8 *)(pfVar36 + lVar45 + 2) >> 0x20);
          auVar8._8_4_ = SUB84(dVar25,0);
          auVar8._0_8_ = dVar33;
          auVar8._12_4_ = (int)((ulong)dVar25 >> 0x20);
          dVar25 = (double)(float)*(undefined8 *)(pfVar36 + lVar45);
          dVar34 = (double)(float)((ulong)*(undefined8 *)(pfVar36 + lVar45) >> 0x20);
          auVar31._8_4_ = SUB84(dVar34,0);
          auVar31._0_8_ = dVar25;
          auVar31._12_4_ = (int)((ulong)dVar34 >> 0x20);
          dVar25 = pow(dVar23,dVar25);
          dStack_90 = auVar31._8_8_;
          dVar34 = pow(dVar23,dStack_90);
          dVar33 = pow(dVar23,dVar33);
          dStack_80 = auVar8._8_8_;
          dVar24 = pow(dVar23,dStack_80);
          pfVar51 = pfVar42 + lVar45;
          *pfVar51 = (float)dVar25;
          pfVar51[1] = (float)dVar34;
          pfVar51[2] = (float)dVar33;
          pfVar51[3] = (float)dVar24;
        }
        if (uVar40 + 1 == uVar38) {
          return;
        }
        uVar52 = uVar52 - (int)uVar38;
        pfVar36 = pfVar36 + uVar38;
        pfVar42 = pfVar42 + uVar38;
      }
      uVar1 = uVar52 - 1;
      if ((uVar52 & 3) != 0) {
        uVar44 = 0;
        do {
          dVar33 = pow(dVar23,(double)*pfVar36);
          *pfVar42 = (float)dVar33;
          pfVar42 = pfVar42 + 1;
          pfVar36 = pfVar36 + 1;
          uVar44 = uVar44 + 1;
        } while ((uVar52 & 3) != uVar44);
        uVar52 = uVar52 - uVar44;
      }
      if (uVar1 < 3) {
        return;
      }
      lVar45 = 0;
      do {
        dVar33 = pow(dVar23,(double)pfVar36[lVar45]);
        pfVar42[lVar45] = (float)dVar33;
        dVar33 = pow(dVar23,(double)pfVar36[lVar45 + 1]);
        pfVar42[lVar45 + 1] = (float)dVar33;
        dVar33 = pow(dVar23,(double)pfVar36[lVar45 + 2]);
        pfVar42[lVar45 + 2] = (float)dVar33;
        dVar33 = pow(dVar23,(double)pfVar36[lVar45 + 3]);
        pfVar42[lVar45 + 3] = (float)dVar33;
        lVar45 = lVar45 + 4;
      } while (uVar52 != (uint)lVar45);
      return;
    }
    if (lVar45 == 2) {
      if (*(long *)(param_12 + 2) == 0xf) {
        dVar23 = pow((double)*param_11,(double)param_11[8]);
        iVar39 = *(int *)(param_9 + 0x28f8);
        if (iVar39 == 0) {
          return;
        }
        fVar53 = (float)dVar23;
        lVar45 = *(long *)param_12;
        if (6 < iVar39 - 1U) {
          uVar40 = (ulong)(iVar39 - 1U) + 1;
          uVar46 = uVar40 & 0x1fffffff8;
          uVar48 = (uVar46 - 8 >> 3) + 1;
          uVar38 = (ulong)((uint)uVar48 & 7);
          if (uVar46 - 8 < 0x38) {
            lVar41 = 0;
          }
          else {
            uVar48 = uVar48 & 0xfffffffffffffff8;
            lVar41 = 0;
            do {
              pfVar36 = (float *)(lVar45 + lVar41 * 4);
              *pfVar36 = fVar53;
              pfVar36[1] = fVar53;
              pfVar36[2] = fVar53;
              pfVar36[3] = fVar53;
              pfVar36 = (float *)(lVar45 + 0x10 + lVar41 * 4);
              *pfVar36 = fVar53;
              pfVar36[1] = fVar53;
              pfVar36[2] = fVar53;
              pfVar36[3] = fVar53;
              pfVar36 = (float *)(lVar45 + 0x20 + lVar41 * 4);
              *pfVar36 = fVar53;
              pfVar36[1] = fVar53;
              pfVar36[2] = fVar53;
              pfVar36[3] = fVar53;
              pfVar36 = (float *)(lVar45 + 0x30 + lVar41 * 4);
              *pfVar36 = fVar53;
              pfVar36[1] = fVar53;
              pfVar36[2] = fVar53;
              pfVar36[3] = fVar53;
              pfVar36 = (float *)(lVar45 + 0x40 + lVar41 * 4);
              *pfVar36 = fVar53;
              pfVar36[1] = fVar53;
              pfVar36[2] = fVar53;
              pfVar36[3] = fVar53;
              pfVar36 = (float *)(lVar45 + 0x50 + lVar41 * 4);
              *pfVar36 = fVar53;
              pfVar36[1] = fVar53;
              pfVar36[2] = fVar53;
              pfVar36[3] = fVar53;
              pfVar36 = (float *)(lVar45 + 0x60 + lVar41 * 4);
              *pfVar36 = fVar53;
              pfVar36[1] = fVar53;
              pfVar36[2] = fVar53;
              pfVar36[3] = fVar53;
              pfVar36 = (float *)(lVar45 + 0x70 + lVar41 * 4);
              *pfVar36 = fVar53;
              pfVar36[1] = fVar53;
              pfVar36[2] = fVar53;
              pfVar36[3] = fVar53;
              pfVar36 = (float *)(lVar45 + 0x80 + lVar41 * 4);
              *pfVar36 = fVar53;
              pfVar36[1] = fVar53;
              pfVar36[2] = fVar53;
              pfVar36[3] = fVar53;
              pfVar36 = (float *)(lVar45 + 0x90 + lVar41 * 4);
              *pfVar36 = fVar53;
              pfVar36[1] = fVar53;
              pfVar36[2] = fVar53;
              pfVar36[3] = fVar53;
              pfVar36 = (float *)(lVar45 + 0xa0 + lVar41 * 4);
              *pfVar36 = fVar53;
              pfVar36[1] = fVar53;
              pfVar36[2] = fVar53;
              pfVar36[3] = fVar53;
              pfVar36 = (float *)(lVar45 + 0xb0 + lVar41 * 4);
              *pfVar36 = fVar53;
              pfVar36[1] = fVar53;
              pfVar36[2] = fVar53;
              pfVar36[3] = fVar53;
              pfVar36 = (float *)(lVar45 + 0xc0 + lVar41 * 4);
              *pfVar36 = fVar53;
              pfVar36[1] = fVar53;
              pfVar36[2] = fVar53;
              pfVar36[3] = fVar53;
              pfVar36 = (float *)(lVar45 + 0xd0 + lVar41 * 4);
              *pfVar36 = fVar53;
              pfVar36[1] = fVar53;
              pfVar36[2] = fVar53;
              pfVar36[3] = fVar53;
              pfVar36 = (float *)(lVar45 + 0xe0 + lVar41 * 4);
              *pfVar36 = fVar53;
              pfVar36[1] = fVar53;
              pfVar36[2] = fVar53;
              pfVar36[3] = fVar53;
              pfVar36 = (float *)(lVar45 + 0xf0 + lVar41 * 4);
              *pfVar36 = fVar53;
              pfVar36[1] = fVar53;
              pfVar36[2] = fVar53;
              pfVar36[3] = fVar53;
              lVar41 = lVar41 + 0x40;
              uVar48 = uVar48 - 8;
            } while (uVar48 != 0);
          }
          if (uVar38 != 0) {
            lVar41 = lVar45 + lVar41 * 4;
            lVar43 = 0;
            do {
              pfVar36 = (float *)(lVar41 + lVar43);
              *pfVar36 = fVar53;
              pfVar36[1] = fVar53;
              pfVar36[2] = fVar53;
              pfVar36[3] = fVar53;
              pfVar36 = (float *)(lVar41 + 0x10 + lVar43);
              *pfVar36 = fVar53;
              pfVar36[1] = fVar53;
              pfVar36[2] = fVar53;
              pfVar36[3] = fVar53;
              lVar43 = lVar43 + 0x20;
            } while (uVar38 * 0x20 != lVar43);
          }
          if (uVar40 == uVar46) {
            return;
          }
          iVar39 = iVar39 - (int)uVar46;
          lVar45 = lVar45 + uVar46 * 4;
        }
        lVar41 = 0;
        do {
          *(float *)(lVar45 + lVar41 * 4) = fVar53;
          lVar41 = lVar41 + 1;
        } while (iVar39 != (int)lVar41);
        return;
      }
      param_12[2] = 2.8026e-45;
      param_12[3] = 0.0;
      fVar53 = param_11[8];
      dVar23 = (double)*param_11;
LAB_005cc7d4:
      dVar33 = (double)fVar53;
LAB_005cc7d8:
      dVar23 = pow(dVar23,dVar33);
      *param_12 = (float)dVar23;
      return;
    }
    if (lVar45 == 1) {
      if (*(long *)(param_12 + 2) == 0xf) {
        dVar23 = pow((double)*param_11,(double)*(long *)(param_11 + 8));
        iVar39 = *(int *)(param_9 + 0x28f8);
        if (iVar39 == 0) {
          return;
        }
        fVar53 = (float)dVar23;
        lVar45 = *(long *)param_12;
        if (6 < iVar39 - 1U) {
          uVar40 = (ulong)(iVar39 - 1U) + 1;
          uVar46 = uVar40 & 0x1fffffff8;
          uVar48 = (uVar46 - 8 >> 3) + 1;
          uVar38 = (ulong)((uint)uVar48 & 7);
          if (uVar46 - 8 < 0x38) {
            lVar41 = 0;
          }
          else {
            uVar48 = uVar48 & 0xfffffffffffffff8;
            lVar41 = 0;
            do {
              pfVar36 = (float *)(lVar45 + lVar41 * 4);
              *pfVar36 = fVar53;
              pfVar36[1] = fVar53;
              pfVar36[2] = fVar53;
              pfVar36[3] = fVar53;
              pfVar36 = (float *)(lVar45 + 0x10 + lVar41 * 4);
              *pfVar36 = fVar53;
              pfVar36[1] = fVar53;
              pfVar36[2] = fVar53;
              pfVar36[3] = fVar53;
              pfVar36 = (float *)(lVar45 + 0x20 + lVar41 * 4);
              *pfVar36 = fVar53;
              pfVar36[1] = fVar53;
              pfVar36[2] = fVar53;
              pfVar36[3] = fVar53;
              pfVar36 = (float *)(lVar45 + 0x30 + lVar41 * 4);
              *pfVar36 = fVar53;
              pfVar36[1] = fVar53;
              pfVar36[2] = fVar53;
              pfVar36[3] = fVar53;
              pfVar36 = (float *)(lVar45 + 0x40 + lVar41 * 4);
              *pfVar36 = fVar53;
              pfVar36[1] = fVar53;
              pfVar36[2] = fVar53;
              pfVar36[3] = fVar53;
              pfVar36 = (float *)(lVar45 + 0x50 + lVar41 * 4);
              *pfVar36 = fVar53;
              pfVar36[1] = fVar53;
              pfVar36[2] = fVar53;
              pfVar36[3] = fVar53;
              pfVar36 = (float *)(lVar45 + 0x60 + lVar41 * 4);
              *pfVar36 = fVar53;
              pfVar36[1] = fVar53;
              pfVar36[2] = fVar53;
              pfVar36[3] = fVar53;
              pfVar36 = (float *)(lVar45 + 0x70 + lVar41 * 4);
              *pfVar36 = fVar53;
              pfVar36[1] = fVar53;
              pfVar36[2] = fVar53;
              pfVar36[3] = fVar53;
              pfVar36 = (float *)(lVar45 + 0x80 + lVar41 * 4);
              *pfVar36 = fVar53;
              pfVar36[1] = fVar53;
              pfVar36[2] = fVar53;
              pfVar36[3] = fVar53;
              pfVar36 = (float *)(lVar45 + 0x90 + lVar41 * 4);
              *pfVar36 = fVar53;
              pfVar36[1] = fVar53;
              pfVar36[2] = fVar53;
              pfVar36[3] = fVar53;
              pfVar36 = (float *)(lVar45 + 0xa0 + lVar41 * 4);
              *pfVar36 = fVar53;
              pfVar36[1] = fVar53;
              pfVar36[2] = fVar53;
              pfVar36[3] = fVar53;
              pfVar36 = (float *)(lVar45 + 0xb0 + lVar41 * 4);
              *pfVar36 = fVar53;
              pfVar36[1] = fVar53;
              pfVar36[2] = fVar53;
              pfVar36[3] = fVar53;
              pfVar36 = (float *)(lVar45 + 0xc0 + lVar41 * 4);
              *pfVar36 = fVar53;
              pfVar36[1] = fVar53;
              pfVar36[2] = fVar53;
              pfVar36[3] = fVar53;
              pfVar36 = (float *)(lVar45 + 0xd0 + lVar41 * 4);
              *pfVar36 = fVar53;
              pfVar36[1] = fVar53;
              pfVar36[2] = fVar53;
              pfVar36[3] = fVar53;
              pfVar36 = (float *)(lVar45 + 0xe0 + lVar41 * 4);
              *pfVar36 = fVar53;
              pfVar36[1] = fVar53;
              pfVar36[2] = fVar53;
              pfVar36[3] = fVar53;
              pfVar36 = (float *)(lVar45 + 0xf0 + lVar41 * 4);
              *pfVar36 = fVar53;
              pfVar36[1] = fVar53;
              pfVar36[2] = fVar53;
              pfVar36[3] = fVar53;
              lVar41 = lVar41 + 0x40;
              uVar48 = uVar48 - 8;
            } while (uVar48 != 0);
          }
          if (uVar38 != 0) {
            lVar41 = lVar45 + lVar41 * 4;
            lVar43 = 0;
            do {
              pfVar36 = (float *)(lVar41 + lVar43);
              *pfVar36 = fVar53;
              pfVar36[1] = fVar53;
              pfVar36[2] = fVar53;
              pfVar36[3] = fVar53;
              pfVar36 = (float *)(lVar41 + 0x10 + lVar43);
              *pfVar36 = fVar53;
              pfVar36[1] = fVar53;
              pfVar36[2] = fVar53;
              pfVar36[3] = fVar53;
              lVar43 = lVar43 + 0x20;
            } while (uVar38 * 0x20 != lVar43);
          }
          if (uVar40 == uVar46) {
            return;
          }
          iVar39 = iVar39 - (int)uVar46;
          lVar45 = lVar45 + uVar46 * 4;
        }
        lVar41 = 0;
        do {
          *(float *)(lVar45 + lVar41 * 4) = fVar53;
          lVar41 = lVar41 + 1;
        } while (iVar39 != (int)lVar41);
        return;
      }
      param_12[2] = 2.8026e-45;
      param_12[3] = 0.0;
      dVar23 = (double)*param_11;
      dVar33 = (double)*(long *)(param_11 + 8);
      goto LAB_005cc7d8;
    }
  }
  else {
    if (lVar45 != 1) {
      pcVar47 = "expr: FUNC_EVAL(%d): bad left type %ld\n";
      goto LAB_005cbeaf;
    }
    lVar45 = *(long *)(param_11 + 10);
    if (lVar45 - 0xeU < 2) {
      if (*(long *)(param_12 + 2) != 0xf) {
        if (*(long *)(param_12 + 2) == 0xe) goto LAB_005cd19c;
        param_12[2] = 2.10195e-44;
        param_12[3] = 0.0;
        uVar37 = ex_malloc((long)*(int *)(param_9 + 0x28f8) << 2);
        *(undefined8 *)param_12 = uVar37;
      }
      uVar52 = *(uint *)(param_9 + 0x28f8);
      if (uVar52 == 0) {
        return;
      }
      pfVar42 = *(float **)param_12;
      pfVar36 = *(float **)(param_11 + 8);
      dVar23 = (double)*(long *)param_11;
      uVar40 = (ulong)(uVar52 - 1);
      if ((2 < uVar52 - 1) &&
         ((pfVar36 + uVar40 + 1 <= pfVar42 || (pfVar42 + uVar40 + 1 <= pfVar36)))) {
        uVar38 = uVar40 + 1 & 0xfffffffffffffffc;
        uVar46 = (uVar38 - 4 >> 2) + 1;
        if (uVar38 - 4 == 0) {
          lVar45 = 0;
        }
        else {
          uVar48 = uVar46 & 0xfffffffffffffffe;
          lVar45 = 0;
          do {
            dVar33 = (double)(float)*(undefined8 *)(pfVar36 + lVar45 + 2);
            dVar25 = (double)(float)((ulong)*(undefined8 *)(pfVar36 + lVar45 + 2) >> 0x20);
            auVar3._8_4_ = SUB84(dVar25,0);
            auVar3._0_8_ = dVar33;
            auVar3._12_4_ = (int)((ulong)dVar25 >> 0x20);
            dVar25 = (double)(float)*(undefined8 *)(pfVar36 + lVar45);
            dVar34 = (double)(float)((ulong)*(undefined8 *)(pfVar36 + lVar45) >> 0x20);
            auVar26._8_4_ = SUB84(dVar34,0);
            auVar26._0_8_ = dVar25;
            auVar26._12_4_ = (int)((ulong)dVar34 >> 0x20);
            dVar25 = pow(dVar23,dVar25);
            dStack_90 = auVar26._8_8_;
            dVar34 = pow(dVar23,dStack_90);
            dVar33 = pow(dVar23,dVar33);
            dStack_80 = auVar3._8_8_;
            dVar24 = pow(dVar23,dStack_80);
            pfVar51 = pfVar42 + lVar45;
            *pfVar51 = (float)dVar25;
            pfVar51[1] = (float)dVar34;
            pfVar51[2] = (float)dVar33;
            pfVar51[3] = (float)dVar24;
            dVar33 = (double)(float)*(undefined8 *)(pfVar36 + lVar45 + 6);
            dVar25 = (double)(float)((ulong)*(undefined8 *)(pfVar36 + lVar45 + 6) >> 0x20);
            auVar4._8_4_ = SUB84(dVar25,0);
            auVar4._0_8_ = dVar33;
            auVar4._12_4_ = (int)((ulong)dVar25 >> 0x20);
            dVar25 = (double)(float)*(undefined8 *)(pfVar36 + lVar45 + 4);
            dVar34 = (double)(float)((ulong)*(undefined8 *)(pfVar36 + lVar45 + 4) >> 0x20);
            auVar27._8_4_ = SUB84(dVar34,0);
            auVar27._0_8_ = dVar25;
            auVar27._12_4_ = (int)((ulong)dVar34 >> 0x20);
            dVar25 = pow(dVar23,dVar25);
            dStack_90 = auVar27._8_8_;
            dVar34 = pow(dVar23,dStack_90);
            dVar33 = pow(dVar23,dVar33);
            dStack_80 = auVar4._8_8_;
            dVar24 = pow(dVar23,dStack_80);
            pfVar51 = pfVar42 + lVar45 + 4;
            *pfVar51 = (float)dVar25;
            pfVar51[1] = (float)dVar34;
            pfVar51[2] = (float)dVar33;
            pfVar51[3] = (float)dVar24;
            lVar45 = lVar45 + 8;
            uVar48 = uVar48 - 2;
          } while (uVar48 != 0);
        }
        if ((uVar46 & 1) != 0) {
          dVar33 = (double)(float)*(undefined8 *)(pfVar36 + lVar45 + 2);
          dVar25 = (double)(float)((ulong)*(undefined8 *)(pfVar36 + lVar45 + 2) >> 0x20);
          auVar5._8_4_ = SUB84(dVar25,0);
          auVar5._0_8_ = dVar33;
          auVar5._12_4_ = (int)((ulong)dVar25 >> 0x20);
          dVar25 = (double)(float)*(undefined8 *)(pfVar36 + lVar45);
          dVar34 = (double)(float)((ulong)*(undefined8 *)(pfVar36 + lVar45) >> 0x20);
          auVar28._8_4_ = SUB84(dVar34,0);
          auVar28._0_8_ = dVar25;
          auVar28._12_4_ = (int)((ulong)dVar34 >> 0x20);
          dVar25 = pow(dVar23,dVar25);
          dStack_90 = auVar28._8_8_;
          dVar34 = pow(dVar23,dStack_90);
          dVar33 = pow(dVar23,dVar33);
          dStack_80 = auVar5._8_8_;
          dVar24 = pow(dVar23,dStack_80);
          pfVar51 = pfVar42 + lVar45;
          *pfVar51 = (float)dVar25;
          pfVar51[1] = (float)dVar34;
          pfVar51[2] = (float)dVar33;
          pfVar51[3] = (float)dVar24;
        }
        if (uVar40 + 1 == uVar38) {
          return;
        }
        uVar52 = uVar52 - (int)uVar38;
        pfVar36 = pfVar36 + uVar38;
        pfVar42 = pfVar42 + uVar38;
      }
      uVar1 = uVar52 - 1;
      if ((uVar52 & 3) != 0) {
        uVar44 = 0;
        do {
          dVar33 = pow(dVar23,(double)*pfVar36);
          *pfVar42 = (float)dVar33;
          pfVar42 = pfVar42 + 1;
          pfVar36 = pfVar36 + 1;
          uVar44 = uVar44 + 1;
        } while ((uVar52 & 3) != uVar44);
        uVar52 = uVar52 - uVar44;
      }
      if (uVar1 < 3) {
        return;
      }
      lVar45 = 0;
      do {
        dVar33 = pow(dVar23,(double)pfVar36[lVar45]);
        pfVar42[lVar45] = (float)dVar33;
        dVar33 = pow(dVar23,(double)pfVar36[lVar45 + 1]);
        pfVar42[lVar45 + 1] = (float)dVar33;
        dVar33 = pow(dVar23,(double)pfVar36[lVar45 + 2]);
        pfVar42[lVar45 + 2] = (float)dVar33;
        dVar33 = pow(dVar23,(double)pfVar36[lVar45 + 3]);
        pfVar42[lVar45 + 3] = (float)dVar33;
        lVar45 = lVar45 + 4;
      } while (uVar52 != (uint)lVar45);
      return;
    }
    if (lVar45 == 2) {
      if (*(long *)(param_12 + 2) == 0xf) {
        dVar23 = pow((double)*(long *)param_11,(double)param_11[8]);
        iVar39 = *(int *)(param_9 + 0x28f8);
        if (iVar39 == 0) {
          return;
        }
        fVar53 = (float)dVar23;
        lVar45 = *(long *)param_12;
        if (6 < iVar39 - 1U) {
          uVar40 = (ulong)(iVar39 - 1U) + 1;
          uVar46 = uVar40 & 0x1fffffff8;
          uVar48 = (uVar46 - 8 >> 3) + 1;
          uVar38 = (ulong)((uint)uVar48 & 7);
          if (uVar46 - 8 < 0x38) {
            lVar41 = 0;
          }
          else {
            uVar48 = uVar48 & 0xfffffffffffffff8;
            lVar41 = 0;
            do {
              pfVar36 = (float *)(lVar45 + lVar41 * 4);
              *pfVar36 = fVar53;
              pfVar36[1] = fVar53;
              pfVar36[2] = fVar53;
              pfVar36[3] = fVar53;
              pfVar36 = (float *)(lVar45 + 0x10 + lVar41 * 4);
              *pfVar36 = fVar53;
              pfVar36[1] = fVar53;
              pfVar36[2] = fVar53;
              pfVar36[3] = fVar53;
              pfVar36 = (float *)(lVar45 + 0x20 + lVar41 * 4);
              *pfVar36 = fVar53;
              pfVar36[1] = fVar53;
              pfVar36[2] = fVar53;
              pfVar36[3] = fVar53;
              pfVar36 = (float *)(lVar45 + 0x30 + lVar41 * 4);
              *pfVar36 = fVar53;
              pfVar36[1] = fVar53;
              pfVar36[2] = fVar53;
              pfVar36[3] = fVar53;
              pfVar36 = (float *)(lVar45 + 0x40 + lVar41 * 4);
              *pfVar36 = fVar53;
              pfVar36[1] = fVar53;
              pfVar36[2] = fVar53;
              pfVar36[3] = fVar53;
              pfVar36 = (float *)(lVar45 + 0x50 + lVar41 * 4);
              *pfVar36 = fVar53;
              pfVar36[1] = fVar53;
              pfVar36[2] = fVar53;
              pfVar36[3] = fVar53;
              pfVar36 = (float *)(lVar45 + 0x60 + lVar41 * 4);
              *pfVar36 = fVar53;
              pfVar36[1] = fVar53;
              pfVar36[2] = fVar53;
              pfVar36[3] = fVar53;
              pfVar36 = (float *)(lVar45 + 0x70 + lVar41 * 4);
              *pfVar36 = fVar53;
              pfVar36[1] = fVar53;
              pfVar36[2] = fVar53;
              pfVar36[3] = fVar53;
              pfVar36 = (float *)(lVar45 + 0x80 + lVar41 * 4);
              *pfVar36 = fVar53;
              pfVar36[1] = fVar53;
              pfVar36[2] = fVar53;
              pfVar36[3] = fVar53;
              pfVar36 = (float *)(lVar45 + 0x90 + lVar41 * 4);
              *pfVar36 = fVar53;
              pfVar36[1] = fVar53;
              pfVar36[2] = fVar53;
              pfVar36[3] = fVar53;
              pfVar36 = (float *)(lVar45 + 0xa0 + lVar41 * 4);
              *pfVar36 = fVar53;
              pfVar36[1] = fVar53;
              pfVar36[2] = fVar53;
              pfVar36[3] = fVar53;
              pfVar36 = (float *)(lVar45 + 0xb0 + lVar41 * 4);
              *pfVar36 = fVar53;
              pfVar36[1] = fVar53;
              pfVar36[2] = fVar53;
              pfVar36[3] = fVar53;
              pfVar36 = (float *)(lVar45 + 0xc0 + lVar41 * 4);
              *pfVar36 = fVar53;
              pfVar36[1] = fVar53;
              pfVar36[2] = fVar53;
              pfVar36[3] = fVar53;
              pfVar36 = (float *)(lVar45 + 0xd0 + lVar41 * 4);
              *pfVar36 = fVar53;
              pfVar36[1] = fVar53;
              pfVar36[2] = fVar53;
              pfVar36[3] = fVar53;
              pfVar36 = (float *)(lVar45 + 0xe0 + lVar41 * 4);
              *pfVar36 = fVar53;
              pfVar36[1] = fVar53;
              pfVar36[2] = fVar53;
              pfVar36[3] = fVar53;
              pfVar36 = (float *)(lVar45 + 0xf0 + lVar41 * 4);
              *pfVar36 = fVar53;
              pfVar36[1] = fVar53;
              pfVar36[2] = fVar53;
              pfVar36[3] = fVar53;
              lVar41 = lVar41 + 0x40;
              uVar48 = uVar48 - 8;
            } while (uVar48 != 0);
          }
          if (uVar38 != 0) {
            lVar41 = lVar45 + lVar41 * 4;
            lVar43 = 0;
            do {
              pfVar36 = (float *)(lVar41 + lVar43);
              *pfVar36 = fVar53;
              pfVar36[1] = fVar53;
              pfVar36[2] = fVar53;
              pfVar36[3] = fVar53;
              pfVar36 = (float *)(lVar41 + 0x10 + lVar43);
              *pfVar36 = fVar53;
              pfVar36[1] = fVar53;
              pfVar36[2] = fVar53;
              pfVar36[3] = fVar53;
              lVar43 = lVar43 + 0x20;
            } while (uVar38 * 0x20 != lVar43);
          }
          if (uVar40 == uVar46) {
            return;
          }
          iVar39 = iVar39 - (int)uVar46;
          lVar45 = lVar45 + uVar46 * 4;
        }
        lVar41 = 0;
        do {
          *(float *)(lVar45 + lVar41 * 4) = fVar53;
          lVar41 = lVar41 + 1;
        } while (iVar39 != (int)lVar41);
        return;
      }
      param_12[2] = 2.8026e-45;
      param_12[3] = 0.0;
      dVar23 = (double)*(long *)param_11;
      fVar53 = param_11[8];
      goto LAB_005cc7d4;
    }
    if (lVar45 == 1) {
      if (*(long *)(param_12 + 2) == 0xf) {
        dVar23 = pow((double)*(long *)param_11,(double)*(long *)(param_11 + 8));
        iVar39 = *(int *)(param_9 + 0x28f8);
        if (iVar39 == 0) {
          return;
        }
        fVar53 = (float)dVar23;
        lVar45 = *(long *)param_12;
        if (6 < iVar39 - 1U) {
          uVar40 = (ulong)(iVar39 - 1U) + 1;
          uVar46 = uVar40 & 0x1fffffff8;
          uVar48 = (uVar46 - 8 >> 3) + 1;
          uVar38 = (ulong)((uint)uVar48 & 7);
          if (uVar46 - 8 < 0x38) {
            lVar41 = 0;
          }
          else {
            uVar48 = uVar48 & 0xfffffffffffffff8;
            lVar41 = 0;
            do {
              pfVar36 = (float *)(lVar45 + lVar41 * 4);
              *pfVar36 = fVar53;
              pfVar36[1] = fVar53;
              pfVar36[2] = fVar53;
              pfVar36[3] = fVar53;
              pfVar36 = (float *)(lVar45 + 0x10 + lVar41 * 4);
              *pfVar36 = fVar53;
              pfVar36[1] = fVar53;
              pfVar36[2] = fVar53;
              pfVar36[3] = fVar53;
              pfVar36 = (float *)(lVar45 + 0x20 + lVar41 * 4);
              *pfVar36 = fVar53;
              pfVar36[1] = fVar53;
              pfVar36[2] = fVar53;
              pfVar36[3] = fVar53;
              pfVar36 = (float *)(lVar45 + 0x30 + lVar41 * 4);
              *pfVar36 = fVar53;
              pfVar36[1] = fVar53;
              pfVar36[2] = fVar53;
              pfVar36[3] = fVar53;
              pfVar36 = (float *)(lVar45 + 0x40 + lVar41 * 4);
              *pfVar36 = fVar53;
              pfVar36[1] = fVar53;
              pfVar36[2] = fVar53;
              pfVar36[3] = fVar53;
              pfVar36 = (float *)(lVar45 + 0x50 + lVar41 * 4);
              *pfVar36 = fVar53;
              pfVar36[1] = fVar53;
              pfVar36[2] = fVar53;
              pfVar36[3] = fVar53;
              pfVar36 = (float *)(lVar45 + 0x60 + lVar41 * 4);
              *pfVar36 = fVar53;
              pfVar36[1] = fVar53;
              pfVar36[2] = fVar53;
              pfVar36[3] = fVar53;
              pfVar36 = (float *)(lVar45 + 0x70 + lVar41 * 4);
              *pfVar36 = fVar53;
              pfVar36[1] = fVar53;
              pfVar36[2] = fVar53;
              pfVar36[3] = fVar53;
              pfVar36 = (float *)(lVar45 + 0x80 + lVar41 * 4);
              *pfVar36 = fVar53;
              pfVar36[1] = fVar53;
              pfVar36[2] = fVar53;
              pfVar36[3] = fVar53;
              pfVar36 = (float *)(lVar45 + 0x90 + lVar41 * 4);
              *pfVar36 = fVar53;
              pfVar36[1] = fVar53;
              pfVar36[2] = fVar53;
              pfVar36[3] = fVar53;
              pfVar36 = (float *)(lVar45 + 0xa0 + lVar41 * 4);
              *pfVar36 = fVar53;
              pfVar36[1] = fVar53;
              pfVar36[2] = fVar53;
              pfVar36[3] = fVar53;
              pfVar36 = (float *)(lVar45 + 0xb0 + lVar41 * 4);
              *pfVar36 = fVar53;
              pfVar36[1] = fVar53;
              pfVar36[2] = fVar53;
              pfVar36[3] = fVar53;
              pfVar36 = (float *)(lVar45 + 0xc0 + lVar41 * 4);
              *pfVar36 = fVar53;
              pfVar36[1] = fVar53;
              pfVar36[2] = fVar53;
              pfVar36[3] = fVar53;
              pfVar36 = (float *)(lVar45 + 0xd0 + lVar41 * 4);
              *pfVar36 = fVar53;
              pfVar36[1] = fVar53;
              pfVar36[2] = fVar53;
              pfVar36[3] = fVar53;
              pfVar36 = (float *)(lVar45 + 0xe0 + lVar41 * 4);
              *pfVar36 = fVar53;
              pfVar36[1] = fVar53;
              pfVar36[2] = fVar53;
              pfVar36[3] = fVar53;
              pfVar36 = (float *)(lVar45 + 0xf0 + lVar41 * 4);
              *pfVar36 = fVar53;
              pfVar36[1] = fVar53;
              pfVar36[2] = fVar53;
              pfVar36[3] = fVar53;
              lVar41 = lVar41 + 0x40;
              uVar48 = uVar48 - 8;
            } while (uVar48 != 0);
          }
          if (uVar38 != 0) {
            lVar41 = lVar45 + lVar41 * 4;
            lVar43 = 0;
            do {
              pfVar36 = (float *)(lVar41 + lVar43);
              *pfVar36 = fVar53;
              pfVar36[1] = fVar53;
              pfVar36[2] = fVar53;
              pfVar36[3] = fVar53;
              pfVar36 = (float *)(lVar41 + 0x10 + lVar43);
              *pfVar36 = fVar53;
              pfVar36[1] = fVar53;
              pfVar36[2] = fVar53;
              pfVar36[3] = fVar53;
              lVar43 = lVar43 + 0x20;
            } while (uVar38 * 0x20 != lVar43);
          }
          if (uVar40 == uVar46) {
            return;
          }
          iVar39 = iVar39 - (int)uVar46;
          lVar45 = lVar45 + uVar46 * 4;
        }
        lVar41 = 0;
        do {
          *(float *)(lVar45 + lVar41 * 4) = fVar53;
          lVar41 = lVar41 + 1;
        } while (iVar39 != (int)lVar41);
        return;
      }
      param_12[2] = 2.8026e-45;
      param_12[3] = 0.0;
      dVar23 = (double)*(long *)param_11;
      dVar33 = (double)*(long *)(param_11 + 8);
      goto LAB_005cc7d8;
    }
  }
  pcVar47 = "expr: FUNC_EVAL(%d): bad right type %ld\n";
LAB_005cbeaf:
  pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,pcVar47,0x2a2,
           lVar45,(char *)CONCAT71(uVar50,uVar49),param_14);
  return;
}


