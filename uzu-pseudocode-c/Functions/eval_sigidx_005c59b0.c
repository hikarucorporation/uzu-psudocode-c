// Function : eval_sigidx
// Namespace: 
// Entry    : 005c59b0
// Prototype: ulong * eval_sigidx(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long * param_10, float * param_11, undefined * param_12, char * param_13, undefined8 param_14)
// Body     : 005c59b0 - 005c5d7e


ulong * eval_sigidx(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   long param_9,long *param_10,float *param_11,undefined *param_12,char *param_13,
                   undefined8 param_14)

{
  float *pfVar1;
  ulong *puVar2;
  float *pfVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar9;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  float fVar10;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  undefined4 extraout_XMM0_Da_07;
  undefined4 extraout_XMM0_Db;
  undefined4 uVar12;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  ulong uVar11;
  undefined4 extraout_XMM0_Db_03;
  undefined4 extraout_XMM0_Db_04;
  undefined4 extraout_XMM0_Db_05;
  undefined4 extraout_XMM0_Db_06;
  undefined4 extraout_XMM0_Db_07;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  long local_68;
  long lStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48 [16];
  
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  lStack_60 = 0;
  puVar2 = ex_eval(0,param_2,param_5,param_6,param_7,param_8,param_9,(ulong *)(param_10 + 4),
                   (float *)&local_68,param_12,param_13,param_14);
  uVar11 = CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
  uVar14 = (undefined4)((ulong)param_2 >> 0x20);
  iVar8 = (int)param_12;
  if (lStack_60 == 1) {
    fVar10 = (float)local_68;
    lVar4 = local_68;
LAB_005c5b00:
    iVar6 = (int)lVar4;
    fVar16 = 0.0;
    param_11[2] = 2.8026e-45;
    param_11[3] = 0.0;
    lVar4 = param_10[1];
    if (lVar4 == 0x10) goto LAB_005c5a2f;
LAB_005c5b19:
    uVar9 = 0;
    if (lVar4 != 0x12) {
      *param_11 = 0.0;
      post(uVar11,CONCAT44(uVar14,fVar10),(ulong)(uint)fVar16,param_4,param_5,param_6,param_7,
           param_8,"fexpr~:eval_sigidx: internal error - unknown vector (%d)");
      return puVar2;
    }
    fVar17 = 0.0;
    uVar12 = 0;
    if (fVar10 <= 0.0) {
      fVar17 = fVar16;
    }
    else if ((*(uint *)(param_9 + 0x34) & 4) == 0) {
      *(uint *)(param_9 + 0x34) = *(uint *)(param_9 + 0x34) | 4;
      fVar16 = fVar16 + (float)iVar6;
      fVar13 = fVar10;
      uVar15 = uVar14;
      post((double)fVar16,CONCAT44(uVar14,fVar10),(ulong)(uint)fVar16,0,param_5,param_6,param_7,
           param_8,"expr: \'%s\' - input vector index > 0, (vector x%d[%f])");
      iVar6 = 0;
      post(CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_03),CONCAT44(uVar15,fVar13),
           CONCAT44(uVar9,fVar16),CONCAT44(uVar12,fVar17),param_5,param_6,param_7,param_8,
           "fexpr~: index assumed to be = 0");
      post(CONCAT44(extraout_XMM0_Db_04,extraout_XMM0_Da_04),CONCAT44(uVar15,fVar13),
           CONCAT44(uVar9,fVar16),CONCAT44(uVar12,fVar17),param_5,param_6,param_7,param_8,
           "fexpr~: no error report till next reset");
      fVar17 = 0.0;
    }
    else {
      iVar6 = 0;
    }
    uVar12 = 0;
    pfVar3 = *(float **)(param_9 + 0x698 + *param_10 * 0x20);
    uVar7 = iVar6 + iVar8;
    if (uVar7 == 0 || SCARRY4(iVar6,iVar8) != (int)uVar7 < 0) {
      iVar8 = *(int *)(param_9 + 0x28f8);
      pfVar1 = *(float **)(param_9 + 0x1f98 + *param_10 * 8);
      if (uVar7 == 0) {
        fVar10 = *pfVar3;
        if (fVar17 == 0.0) goto LAB_005c5c0c;
        pfVar3 = pfVar1 + (long)iVar8 + -1;
      }
      else {
        uVar5 = iVar8 + uVar7;
        if (uVar5 == 0 || SCARRY4(iVar8,uVar7) != (int)uVar5 < 0) {
          *param_11 = *pfVar1;
          if ((*(uint *)(param_9 + 0x34) & 4) == 0) {
            *(uint *)(param_9 + 0x34) = *(uint *)(param_9 + 0x34) | 4;
            post((double)fVar10,CONCAT44(uVar14,fVar10),CONCAT44(uVar9,fVar16),(ulong)(uint)fVar17,
                 param_5,param_6,param_7,param_8,
                 "expr: \'%s\' - input vector index <  -VectorSize, (vector x%d[%f])");
            post(CONCAT44(extraout_XMM0_Db_05,extraout_XMM0_Da_05),CONCAT44(uVar14,fVar10),
                 CONCAT44(uVar9,fVar16),CONCAT44(uVar12,fVar17),param_5,param_6,param_7,param_8,
                 "fexpr~: index assumed to be = -%d");
            post(CONCAT44(extraout_XMM0_Db_06,extraout_XMM0_Da_06),CONCAT44(uVar14,fVar10),
                 CONCAT44(uVar9,fVar16),CONCAT44(uVar12,fVar17),param_5,param_6,param_7,param_8,
                 "fexpr~: no error report till next reset");
            return puVar2;
          }
          return puVar2;
        }
        fVar10 = pfVar1[uVar5];
        if (fVar17 == 0.0) goto LAB_005c5c0c;
        pfVar3 = pfVar1 + (uVar5 - 1);
      }
    }
    else {
      fVar10 = pfVar3[uVar7];
      if (fVar17 == 0.0) goto LAB_005c5c0c;
      pfVar3 = pfVar3 + (uVar7 - 1);
    }
    fVar16 = (fVar10 - *pfVar3) * fVar17;
  }
  else {
    if (lStack_60 != 2) {
      uVar11 = post(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                    param_6,param_7,param_8,"eval_sigidx: bad res type (%d)");
      fVar10 = 0.0;
      uVar14 = 0;
      lVar4 = 0;
      goto LAB_005c5b00;
    }
    uVar14 = 0;
    iVar6 = (int)(float)local_68;
    uVar11 = (ulong)(uint)(float)(int)(float)local_68;
    fVar16 = (float)local_68 - (float)(int)(float)local_68;
    param_11[2] = 2.8026e-45;
    param_11[3] = 0.0;
    lVar4 = param_10[1];
    fVar10 = (float)local_68;
    if (lVar4 != 0x10) goto LAB_005c5b19;
LAB_005c5a2f:
    uVar15 = 0;
    uVar9 = 0;
    uVar12 = 0;
    if (0.0 <= fVar10) {
      iVar6 = -1;
      if ((*(uint *)(param_9 + 0x34) & 2) == 0) {
        *(uint *)(param_9 + 0x34) = *(uint *)(param_9 + 0x34) | 2;
        local_48 = ZEXT416((uint)fVar16);
        fVar17 = fVar10;
        uVar9 = uVar14;
        post((double)fVar10,CONCAT44(uVar14,fVar10),(ulong)(uint)fVar16,param_4,param_5,param_6,
             param_7,param_8,"fexpr~: \'%s\' - bad output index, (%f)");
        post(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),CONCAT44(uVar9,fVar17),
             CONCAT44(uVar15,fVar16),param_4,param_5,param_6,param_7,param_8,
             "fexpr~: no error report till next reset");
        post(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),CONCAT44(uVar9,fVar17),
             CONCAT44(uVar15,fVar16),param_4,param_5,param_6,param_7,param_8,
             "fexpr~: index assumed to be = -1");
        uVar9 = extraout_XMM0_Da_02;
        uVar12 = extraout_XMM0_Db_02;
        fVar16 = (float)local_48._0_4_;
        uVar15 = local_48._4_4_;
      }
    }
    lVar4 = *param_10;
    if (*(int *)(param_9 + 0x38) <= lVar4) {
      post(CONCAT44(uVar12,uVar9),CONCAT44(uVar14,fVar10),CONCAT44(uVar15,fVar16),param_4,param_5,
           param_6,param_7,param_8,"fexpr~: $y%d illegal: not that many expr\'s");
      *param_11 = 0.0;
      return puVar2;
    }
    pfVar3 = *(float **)(param_9 + 0x25d8 + lVar4 * 8);
    uVar7 = iVar6 + iVar8;
    if (uVar7 == 0 || SCARRY4(iVar6,iVar8) != (int)uVar7 < 0) {
      iVar8 = *(int *)(param_9 + 0x28f8);
      pfVar1 = *(float **)(param_9 + 0x22b8 + lVar4 * 8);
      if (uVar7 == 0) {
        fVar10 = *pfVar3;
        if (fVar16 == 0.0) goto LAB_005c5c0c;
        pfVar3 = pfVar1 + (long)iVar8 + -1;
      }
      else {
        uVar5 = iVar8 + uVar7;
        if (uVar5 == 0 || SCARRY4(iVar8,uVar7) != (int)uVar5 < 0) {
          *param_11 = *pfVar1;
          if ((*(uint *)(param_9 + 0x34) & 2) == 0) {
            *(uint *)(param_9 + 0x34) = *(uint *)(param_9 + 0x34) | 2;
            post((double)fVar10,CONCAT44(uVar14,fVar10),CONCAT44(uVar15,fVar16),param_4,param_5,
                 param_6,param_7,param_8,"fexpr~: \'%s\' - bad output index, (%f)");
            post(CONCAT44(extraout_XMM0_Db_07,extraout_XMM0_Da_07),CONCAT44(uVar14,fVar10),
                 CONCAT44(uVar15,fVar16),param_4,param_5,param_6,param_7,param_8,
                 "fexpr~: index assumed to be = -%d");
            return puVar2;
          }
          return puVar2;
        }
        fVar10 = pfVar1[uVar5];
        if (fVar16 == 0.0) goto LAB_005c5c0c;
        pfVar3 = pfVar1 + (uVar5 - 1);
      }
    }
    else {
      fVar10 = pfVar3[uVar7];
      if (fVar16 == 0.0) goto LAB_005c5c0c;
      pfVar3 = pfVar3 + (uVar7 - 1);
    }
    fVar16 = (fVar10 - *pfVar3) * fVar16;
  }
  fVar10 = fVar10 + fVar16;
LAB_005c5c0c:
  *param_11 = fVar10;
  return puVar2;
}


