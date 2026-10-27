// Function : sigmund_list
// Namespace: 
// Entry    : 004e6750
// Prototype: undefined sigmund_list(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, int param_11, int * param_12, char * param_13, undefined8 param_14)
// Body     : 004e6750 - 004e6a08


void sigmund_list(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 long param_9,undefined8 param_10,int param_11,int *param_12,char *param_13,
                 undefined8 param_14)

{
  long lVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  undefined8 *puVar10;
  float *pfVar11;
  long *plVar12;
  undefined8 uVar13;
  ulong uVar14;
  int *piVar15;
  ulong extraout_RDX;
  ulong uVar16;
  undefined8 extraout_RDX_00;
  ulong uVar17;
  char *pcVar18;
  ulong uVar19;
  ulong uVar20;
  uint uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined4 uVar25;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 uVar26;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  undefined4 uVar27;
  int local_3c;
  long local_38;
  
  piVar15 = param_12;
  puVar10 = (undefined8 *)atom_getsymbolarg(0,param_11,(long)param_12);
  fVar22 = (float)atom_getfloatarg(1,param_11,(long)param_12);
  fVar23 = (float)atom_getfloatarg(2,param_11,(long)param_12);
  fVar24 = (float)atom_getfloatarg(3,param_11,(long)param_12);
  uVar25 = atom_getfloatarg(4,param_11,(long)param_12);
  local_38 = 0;
  if (param_11 < 4) {
    post(CONCAT44(extraout_XMM0_Db,uVar25),param_2,param_3,param_4,param_5,param_6,param_7,param_8,
         "sigmund~: array-name, npts, array-onset, samplerate, [optional debug flag]");
    return;
  }
  uVar21 = (uint)fVar22;
  uVar16 = extraout_RDX;
  uVar26 = extraout_XMM0_Db;
  if (0x3f < (int)uVar21) {
    uVar9 = ilog2(uVar21);
    piVar15 = (int *)(ulong)uVar9;
    uVar9 = 1 << ((byte)uVar9 & 0x1f);
    uVar16 = (ulong)uVar9;
    uVar25 = extraout_XMM0_Da;
    uVar26 = extraout_XMM0_Db_00;
    if (uVar9 == uVar21) {
      uVar9 = (uint)fVar23;
      if (-1 < (int)uVar9) {
        uVar25 = 0;
        uVar26 = 0;
        uVar27 = 0;
        param_2 = (ulong)(uint)fVar24;
        if (fVar24 <= 0.0) {
          pcVar18 = "sigmund~: bad samplerate";
          goto LAB_004e68ba;
        }
        fVar22 = fVar24;
        pfVar11 = getbytes((long)(int)(uVar21 * 4));
        plVar12 = pd_findbyclass(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_00),
                                 CONCAT44(uVar27,fVar22),param_3,param_4,param_5,param_6,param_7,
                                 param_8,(long)puVar10,*(long *)PTR_garray_class_00715780);
        uVar25 = extraout_XMM0_Da_01;
        uVar26 = extraout_XMM0_Db_02;
        if (plVar12 != (long *)0x0) {
          uVar13 = garray_getfloatwords
                             (CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_01),
                              CONCAT44(uVar27,fVar22),param_3,param_4,param_5,param_6,param_7,
                              param_8,(long)plVar12,&local_3c,&local_38,piVar15,param_13,param_14);
          uVar25 = extraout_XMM0_Da_02;
          uVar26 = extraout_XMM0_Db_03;
          if ((int)uVar13 != 0) {
            piVar15 = (int *)(ulong)(uVar9 + uVar21);
            if ((int)(uVar9 + uVar21) <= local_3c) {
              if (local_3c < (int)uVar21) {
                pd_error(CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_02),CONCAT44(uVar27,fVar22),
                         param_3,param_4,param_5,param_6,param_7,param_8,0,
                         "sigmund~: too few points in array",extraout_RDX_00,piVar15,param_13,
                         param_14);
              }
              else {
                uVar16 = (ulong)uVar9;
                uVar17 = (ulong)uVar21;
                if ((uVar21 < 9) ||
                   ((pfVar11 < (float *)(local_38 + (uVar16 + uVar17) * 8 + -4) &&
                    ((float *)(local_38 + uVar16 * 8) < pfVar11 + uVar17)))) {
                  uVar19 = 0;
                }
                else {
                  uVar19 = 8;
                  if ((ulong)(uVar21 & 7) != 0) {
                    uVar19 = (ulong)(uVar21 & 7);
                  }
                  uVar19 = uVar17 - uVar19;
                  lVar1 = local_38 + uVar16 * 8;
                  uVar14 = 0;
                  do {
                    pfVar2 = (float *)(lVar1 + uVar14 * 8);
                    fVar22 = pfVar2[2];
                    pfVar3 = (float *)(lVar1 + 0x10 + uVar14 * 8);
                    fVar23 = *pfVar3;
                    fVar4 = pfVar3[2];
                    pfVar3 = (float *)(lVar1 + 0x20 + uVar14 * 8);
                    fVar5 = *pfVar3;
                    fVar6 = pfVar3[2];
                    pfVar3 = (float *)(lVar1 + 0x30 + uVar14 * 8);
                    fVar7 = *pfVar3;
                    fVar8 = pfVar3[2];
                    pfVar3 = pfVar11 + uVar14;
                    *pfVar3 = *pfVar2;
                    pfVar3[1] = fVar22;
                    pfVar3[2] = fVar23;
                    pfVar3[3] = fVar4;
                    pfVar3 = pfVar11 + uVar14 + 4;
                    *pfVar3 = fVar5;
                    pfVar3[1] = fVar6;
                    pfVar3[2] = fVar7;
                    pfVar3[3] = fVar8;
                    uVar14 = uVar14 + 8;
                  } while (uVar19 != uVar14);
                }
                uVar9 = uVar21 - (int)uVar19;
                uVar20 = ~uVar19;
                uVar14 = (ulong)uVar9 & 3;
                if ((uVar9 & 3) != 0) {
                  do {
                    pfVar11[uVar19] = *(float *)(local_38 + uVar16 * 8 + uVar19 * 8);
                    uVar19 = uVar19 + 1;
                    uVar14 = uVar14 - 1;
                  } while (uVar14 != 0);
                }
                if (2 < uVar20 + uVar17) {
                  lVar1 = local_38 + uVar16 * 8;
                  do {
                    pfVar11[uVar19] = *(float *)(lVar1 + uVar19 * 8);
                    pfVar11[uVar19 + 1] = *(float *)(lVar1 + 8 + uVar19 * 8);
                    pfVar11[uVar19 + 2] = *(float *)(lVar1 + 0x10 + uVar19 * 8);
                    pfVar11[uVar19 + 3] = *(float *)(lVar1 + 0x18 + uVar19 * 8);
                    uVar19 = uVar19 + 4;
                  } while (uVar17 != uVar19);
                }
                sigmund_doit(fVar24,param_9,uVar21,pfVar11);
              }
              goto LAB_004e6899;
            }
          }
        }
        pd_error(CONCAT44(uVar26,uVar25),CONCAT44(uVar27,fVar22),param_3,param_4,param_5,param_6,
                 param_7,param_8,0,"sigmund~: \'%s\' array missing or too small",*puVar10,piVar15,
                 param_13,param_14);
LAB_004e6899:
        freebytes(pfVar11);
        return;
      }
      pcVar18 = "sigmund~: negative onset";
      goto LAB_004e68ba;
    }
  }
  pcVar18 = "sigmund~: bad npoints";
LAB_004e68ba:
  pd_error(CONCAT44(uVar26,uVar25),param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,pcVar18
           ,uVar16,piVar15,param_13,param_14);
  return;
}


