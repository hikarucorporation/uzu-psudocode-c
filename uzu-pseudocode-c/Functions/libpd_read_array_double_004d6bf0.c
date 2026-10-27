// Function : libpd_read_array_double
// Namespace: 
// Entry    : 004d6bf0
// Prototype: undefined8 libpd_read_array_double(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, double * param_9, char * param_10, uint param_11, uint param_12, char * param_13, undefined8 param_14)
// Body     : 004d6bf0 - 004d6dba


undefined8
libpd_read_array_double
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
          double *param_9,char *param_10,uint param_11,uint param_12,char *param_13,
          undefined8 param_14)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  undefined1 auVar4 [16];
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  int iVar8;
  uint uVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  int *piVar13;
  float *pfVar14;
  uint uVar15;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  ulong uVar16;
  long lVar17;
  double *pdVar18;
  ulong uVar19;
  uint uVar20;
  long lVar21;
  ulong uVar22;
  undefined8 uVar23;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  
  sys_lock();
  puVar10 = gensym(param_10);
  lVar12 = *(long *)PTR_garray_class_00715780;
  piVar13 = (int *)PTR_garray_class_00715780;
  plVar11 = pd_findbyclass(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,
                           param_5,param_6,param_7,param_8,(long)puVar10,lVar12);
  if (plVar11 == (long *)0x0) {
    uVar23 = 0xffffffff;
  }
  else {
    if ((int)(param_12 | param_11) < 0) {
      return 0xfffffffe;
    }
    iVar8 = garray_npoints(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4
                           ,param_5,param_6,param_7,param_8,(long)plVar11,lVar12,extraout_RDX,
                           piVar13,param_13,param_14);
    if (iVar8 < (int)(param_12 + param_11)) {
      return 0xfffffffe;
    }
    lVar12 = garray_vec(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),param_2,param_3,param_4,
                        param_5,param_6,param_7,param_8,(long)plVar11,lVar12,extraout_RDX_00,piVar13
                        ,param_13,param_14);
    if ((int)param_12 < 1) {
      uVar23 = 0;
    }
    else {
      lVar21 = (long)(int)param_11;
      pfVar14 = (float *)(lVar12 + lVar21 * 8);
      uVar22 = (ulong)(param_12 - 1);
      lVar17 = 0;
      pdVar18 = param_9;
      if ((3 < param_12 - 1) &&
         (((double *)(lVar12 + (lVar21 + uVar22) * 8 + 4) <= param_9 ||
          (param_9 + uVar22 + 1 <= (double *)(lVar12 + lVar21 * 8))))) {
        uVar16 = (ulong)((uint)(uVar22 + 1) & 3);
        uVar19 = 4;
        if (uVar16 != 0) {
          uVar19 = uVar16;
        }
        lVar17 = (uVar22 + 1) - uVar19;
        pfVar14 = pfVar14 + lVar17 * 2;
        pdVar18 = param_9 + lVar17;
        lVar12 = lVar12 + lVar21 * 8;
        lVar21 = 0;
        do {
          pfVar2 = (float *)(lVar12 + lVar21 * 8);
          pfVar1 = (float *)(lVar12 + 0x10 + lVar21 * 8);
          fVar3 = *pfVar1;
          dVar5 = (double)pfVar2[2];
          dVar7 = (double)pfVar1[2];
          auVar4._8_4_ = SUB84(dVar5,0);
          auVar4._0_8_ = (double)*pfVar2;
          auVar4._12_4_ = (int)((ulong)dVar5 >> 0x20);
          *(undefined1 (*) [16])(param_9 + lVar21) = auVar4;
          auVar6._8_4_ = SUB84(dVar7,0);
          auVar6._0_8_ = (double)fVar3;
          auVar6._12_4_ = (int)((ulong)dVar7 >> 0x20);
          *(undefined1 (*) [16])(param_9 + lVar21 + 2) = auVar6;
          lVar21 = lVar21 + 4;
        } while (lVar17 != lVar21);
      }
      uVar15 = (uint)lVar17;
      uVar9 = ~uVar15;
      uVar20 = param_12 - uVar15 & 3;
      if (uVar20 != 0) {
        iVar8 = 0;
        do {
          fVar3 = *pfVar14;
          pfVar14 = pfVar14 + 2;
          *pdVar18 = (double)fVar3;
          pdVar18 = pdVar18 + 1;
          iVar8 = iVar8 + -1;
        } while (-uVar20 != iVar8);
        uVar15 = uVar15 - iVar8;
      }
      uVar23 = 0;
      if (2 < uVar9 + param_12) {
        uVar23 = 0;
        lVar12 = 0;
        do {
          pdVar18[lVar12] = (double)pfVar14[lVar12 * 2];
          pdVar18[lVar12 + 1] = (double)pfVar14[lVar12 * 2 + 2];
          pdVar18[lVar12 + 2] = (double)pfVar14[lVar12 * 2 + 4];
          pdVar18[lVar12 + 3] = (double)pfVar14[lVar12 * 2 + 6];
          lVar12 = lVar12 + 4;
        } while (param_12 - uVar15 != (int)lVar12);
      }
    }
  }
  sys_unlock();
  return uVar23;
}


