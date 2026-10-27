// Function : soundfiler_dowrite
// Namespace: 
// Entry    : 0059a380
// Prototype: int * soundfiler_dowrite(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, double param_5, double param_6, double param_7, undefined8 param_8, long param_9, long param_10, uint param_11, int * param_12, int * param_13, undefined8 * param_14)
// Body     : 0059a380 - 0059af7f


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * soundfiler_dowrite(undefined8 param_1,ulong param_2,undefined8 param_3,double param_4,
                        double param_5,double param_6,double param_7,undefined8 param_8,long param_9
                        ,long param_10,uint param_11,int *param_12,int *param_13,
                        undefined8 *param_14)

{
  uint uVar1;
  long lVar2;
  char *pcVar3;
  int iVar4;
  undefined8 uVar5;
  long *plVar6;
  size_t sVar7;
  ulong uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  undefined1 *puVar13;
  ulong extraout_RDX;
  ulong extraout_RDX_00;
  ulong extraout_RDX_01;
  ulong extraout_RDX_02;
  undefined8 extraout_RDX_03;
  float *pfVar14;
  long *plVar15;
  int *piVar16;
  float *pfVar17;
  int *piVar18;
  long *plVar19;
  undefined8 *puVar20;
  long lVar21;
  ulong uVar22;
  undefined8 *puVar23;
  undefined1 *puVar24;
  float *pfVar25;
  ulong uVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  undefined1 *puVar30;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  undefined4 extraout_XMM0_Da_07;
  undefined4 uVar31;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined8 uVar32;
  undefined4 extraout_XMM0_Db_03;
  undefined4 extraout_XMM0_Db_04;
  undefined4 extraout_XMM0_Db_05;
  undefined4 extraout_XMM0_Db_06;
  undefined4 extraout_XMM0_Db_07;
  undefined4 uVar33;
  float fVar34;
  float fVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  float fVar38;
  undefined4 uVar39;
  double dVar40;
  double dVar41;
  int *local_730;
  uint local_704;
  int *local_700;
  float local_6f4;
  float local_6f0;
  float local_6ec;
  undefined8 *local_6e8;
  undefined8 uStack_6e0;
  undefined8 local_6d8;
  undefined8 uStack_6d0;
  int *local_6c8;
  int *piStack_6c0;
  undefined8 local_6b8;
  undefined8 *local_6a8;
  ulong local_6a0;
  long local_698;
  int *local_690;
  undefined8 *local_688;
  ulong local_680;
  int *local_678;
  int *local_670;
  uint local_668;
  long *local_660;
  undefined8 local_658;
  undefined4 local_650;
  undefined8 local_648;
  float local_640;
  long local_638 [64];
  undefined4 local_438;
  undefined1 auStack_434 [1028];
  
  local_6c8 = (int *)0x0;
  piStack_6c0 = (int *)0x0;
  local_6d8 = 0;
  uStack_6d0 = 0;
  local_6e8 = (undefined8 *)0x0;
  uStack_6e0 = 0;
  local_6b8 = 0;
  param_13[0] = 0;
  param_13[1] = 0;
  param_13[2] = 0;
  param_13[3] = 0;
  param_13[8] = 0;
  param_13[9] = 0;
  param_13[10] = 0;
  param_13[0xb] = 0;
  param_13[4] = 0;
  param_13[5] = 0;
  param_13[6] = 0;
  param_13[7] = 0;
  *param_13 = -1;
  param_13[0xc] = -1;
  param_13[0xd] = 0x7fffffff;
  piVar18 = param_13;
  local_704 = param_11;
  local_690 = param_12;
  uVar5 = soundfiler_parsewriteargs
                    (0,param_2,param_3,param_4,param_5,param_6,param_7,param_8,&local_704,&local_690
                     ,&local_6e8);
  uVar8 = extraout_RDX;
  uVar32 = CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
  if ((int)uVar5 == 0) {
    iVar4 = local_6b8._4_4_;
    if (local_6b8._4_4_ == 0) {
      uVar32 = uStack_6e0;
    }
    else {
      uVar32 = 0;
    }
    *(undefined8 *)(param_13 + 2) = uVar32;
    param_13[5] = local_704;
    param_13[4] = (int)local_6d8;
    param_13[6] = local_6d8._4_4_;
    param_13[10] = (int)uStack_6d0;
    uVar8 = (ulong)(local_6d8._4_4_ * local_704);
    param_13[0xb] = local_6d8._4_4_ * local_704;
    param_12 = (int *)(ulong)(local_704 - 0x41);
    uVar32 = CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
    if (0xffffffbf < local_704 - 0x41) {
      fVar35 = extraout_XMM0_Da;
      uVar36 = extraout_XMM0_Db;
      if ((int)local_6d8 < 1) {
        sys_getsr();
        uVar32 = CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00);
        param_13[4] = (int)extraout_XMM0_Da_00;
        local_668 = param_13[5];
        uVar8 = extraout_RDX_00;
        fVar35 = extraout_XMM0_Da_00;
        uVar36 = extraout_XMM0_Db_00;
        param_12 = local_6c8;
        local_6a8 = local_6e8;
        if (0 < (int)local_668) goto LAB_0059a47b;
      }
      else {
LAB_0059a47b:
        piVar16 = piStack_6c0;
        uVar32 = CONCAT44(uVar36,fVar35);
        plVar15 = (long *)(local_690 + 2);
        plVar19 = local_638;
        lVar28 = 0;
        param_12 = local_6c8;
        do {
          if ((int)plVar15[-1] != 2) {
            local_6c8 = param_12;
            goto LAB_0059a54c;
          }
          piVar12 = param_12;
          plVar6 = pd_findbyclass(uVar32,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                  *plVar15,*(long *)PTR_garray_class_00715780);
          if (plVar6 == (long *)0x0) {
            local_6c8 = param_12;
            pd_error(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),param_2,param_3,param_4,
                     param_5,param_6,param_7,param_8,param_9,"[soundfiler] write: %s: no such table"
                     ,*(undefined8 *)*plVar15,piVar12,(char *)piVar18,param_14);
            goto LAB_0059a58e;
          }
          uVar5 = garray_getfloatwords
                            (CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),param_2,param_3,
                             param_4,param_5,param_6,param_7,param_8,(long)plVar6,&local_438,plVar19
                             ,piVar12,(char *)piVar18,param_14);
          uVar32 = CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02);
          uVar8 = extraout_RDX_01;
          if ((int)uVar5 == 0) {
            uVar32 = pd_error(CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02),param_2,param_3,
                              param_4,param_5,param_6,param_7,param_8,param_9,
                              "[soundfiler] write: %s: bad template for tabwrite",
                              *(undefined8 *)*plVar15,piVar12,(char *)piVar18,param_14);
            uVar8 = extraout_RDX_02;
          }
          if ((int *)((long)(int)local_438 - (long)piVar16) < param_12) {
            param_12 = (int *)((long)(int)local_438 - (long)piVar16);
          }
          lVar28 = lVar28 + 1;
          local_668 = param_13[5];
          plVar19 = plVar19 + 1;
          plVar15 = plVar15 + 2;
          local_6a8 = local_6e8;
        } while (lVar28 < (int)local_668);
      }
      local_6e8 = local_6a8;
      local_6c8 = param_12;
      if (param_12 == (int *)0x0) {
        pd_error(uVar32,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                 "[soundfiler] write: no samples at onset %ld",piStack_6c0,0,(char *)piVar18,
                 param_14);
        goto LAB_0059a58e;
      }
      fVar35 = 0.0;
      uVar36 = 0;
      if ((0 < (int)local_668) && (piStack_6c0 < (int *)((long)piStack_6c0 + (long)param_12))) {
        param_14 = (undefined8 *)(ulong)local_668;
        piVar18 = (int *)((long)piStack_6c0 + 1);
        fVar35 = 0.0;
        uVar36 = 0;
        puVar20 = (undefined8 *)0x0;
        do {
          lVar28 = local_638[(long)puVar20];
          if (((ulong)param_12 & 1) == 0) {
            piVar16 = piStack_6c0;
          }
          else {
            fVar34 = *(float *)(lVar28 + (long)piStack_6c0 * 8);
            uVar37 = 0;
            piVar16 = piVar18;
            if (fVar34 <= fVar35) {
              fVar34 = (float)((uint)fVar34 ^ _DAT_006524b0);
              param_2 = CONCAT44(_UNK_006524b4,fVar34);
              uVar37 = _UNK_006524b4;
              if (fVar34 <= fVar35) goto LAB_0059a68b;
            }
            param_2 = CONCAT44(uVar37,fVar34);
            fVar35 = fVar34;
            uVar36 = uVar37;
          }
LAB_0059a68b:
          if (param_12 != (int *)0x1) {
            do {
              fVar34 = *(float *)(lVar28 + (long)piVar16 * 8);
              uVar37 = 0;
              if ((fVar35 < fVar34) ||
                 (fVar34 = (float)((uint)fVar34 ^ _DAT_006524b0), uVar37 = _UNK_006524b4,
                 fVar35 < fVar34)) {
                fVar35 = fVar34;
                uVar36 = uVar37;
              }
              fVar34 = *(float *)(lVar28 + 8 + (long)piVar16 * 8);
              uVar37 = 0;
              if ((fVar35 < fVar34) ||
                 (fVar34 = (float)((uint)fVar34 ^ _DAT_006524b0), uVar37 = _UNK_006524b4,
                 fVar35 < fVar34)) {
                fVar35 = fVar34;
                uVar36 = uVar37;
              }
              param_2 = CONCAT44(uVar37,fVar34);
              piVar16 = (int *)((long)piVar16 + 2);
            } while ((int *)((long)piStack_6c0 + (long)param_12) != piVar16);
          }
          puVar20 = (undefined8 *)((long)puVar20 + 1);
          uVar32 = CONCAT44(_UNK_006524b4,_DAT_006524b0);
        } while (puVar20 != param_14);
      }
      if (iVar4 == 0) {
        fVar34 = fVar35;
        iVar4 = create_soundfile(uVar32,param_2,CONCAT44(uVar36,fVar35),param_4,param_5,param_6,
                                 param_7,param_8,param_10,(char *)*local_6a8,param_13,param_12,
                                 (char *)piVar18,param_14);
        if (iVar4 < 0) {
          pcVar3 = (char *)*local_6a8;
          piVar18 = __errno_location();
          object_sferror(CONCAT44(extraout_XMM0_Db_04,extraout_XMM0_Da_04),param_2,
                         CONCAT44(uVar36,fVar34),param_4,param_5,param_6,param_7,param_8,param_9,
                         "[soundfiler] write",pcVar3,*piVar18,(long)param_13,param_14);
          goto LAB_0059a58e;
        }
        if ((int)local_6b8 == 0) {
          if (((param_13[6] != 4) && (param_13[6] != 8)) && (DAT_005d9038 < fVar35)) {
            post((double)fVar35,param_2,CONCAT44(uVar36,fVar34),param_4,param_5,param_6,param_7,
                 param_8,"%s: reducing max amplitude %f to 1");
            local_6b8 = CONCAT44(local_6b8._4_4_,1);
            goto joined_r0x0059a907;
          }
          post((double)fVar35,param_2,CONCAT44(uVar36,fVar34),param_4,param_5,param_6,param_7,
               param_8,"%s: biggest amplitude = %f");
        }
        else {
joined_r0x0059a907:
          if (0.0 < fVar35) {
            local_6ec = DAT_0065dae4 / fVar35;
            goto LAB_0059a92c;
          }
        }
        local_6ec = DAT_005d9038;
LAB_0059a92c:
        iVar9 = param_13[0xb];
        piVar18 = (int *)0x0;
        local_688 = (undefined8 *)(long)(int)(0x400 / (long)iVar9);
        local_6f0 = DAT_0065dae8 * local_6ec;
        local_6f4 = DAT_0065daec * local_6ec;
        local_730 = piStack_6c0;
        while( true ) {
          uVar39 = 0;
          uVar37 = 0;
          uVar36 = 0;
          puVar20 = (undefined8 *)((long)param_12 - (long)piVar18);
          if (local_688 < (undefined8 *)((long)param_12 - (long)piVar18)) {
            puVar20 = local_688;
          }
          lVar28 = (long)iVar9;
          uVar8 = (long)puVar20 * lVar28;
          uVar1 = param_13[5];
          if (0 < (int)uVar1) {
            iVar9 = param_13[6];
            lVar27 = (long)iVar9;
            local_698 = (long)puVar20 + -1;
            local_6a0 = (ulong)puVar20 & 0xfffffffffffffffe;
            lVar29 = (long)&local_438 + 1;
            puVar30 = (undefined1 *)((long)&local_438 + 2);
            puVar24 = auStack_434 + 3;
            uVar26 = 0;
            pfVar25 = (float *)&local_438;
            do {
              switch(iVar9) {
              case 2:
                if (param_13[10] == 0) {
                  if (puVar20 != (undefined8 *)0x0) {
                    lVar2 = local_638[uVar26];
                    puVar23 = (undefined8 *)0x0;
                    lVar21 = lVar29;
                    do {
                      uVar11 = (uint)((double)(*(float *)((long)local_730 * 8 + lVar2 +
                                                         (long)puVar23 * 8) * local_6f4) +
                                     DAT_0065db00);
                      if ((int)uVar11 < 1) {
                        uVar11 = 1;
                      }
                      if (0xfffe < uVar11) {
                        uVar11 = 0xffff;
                      }
                      *(short *)(lVar21 + -1) = (short)uVar11 + -0x8000;
                      puVar23 = (undefined8 *)((long)puVar23 + 1);
                      lVar21 = lVar21 + lVar28;
                    } while (puVar20 != puVar23);
                  }
                }
                else if (puVar20 != (undefined8 *)0x0) {
                  lVar2 = local_638[uVar26];
                  puVar23 = (undefined8 *)0x0;
                  lVar21 = lVar29;
                  do {
                    uVar11 = (uint)((double)(*(float *)((long)local_730 * 8 + lVar2 +
                                                       (long)puVar23 * 8) * local_6f4) +
                                   DAT_0065db00);
                    if ((int)uVar11 < 1) {
                      uVar11 = 1;
                    }
                    if (0xfffe < uVar11) {
                      uVar11 = 0xffff;
                    }
                    *(ushort *)(lVar21 + -1) =
                         (short)uVar11 << 8 | (ushort)((short)uVar11 + 0x8000U) >> 8;
                    puVar23 = (undefined8 *)((long)puVar23 + 1);
                    lVar21 = lVar21 + lVar28;
                  } while (puVar20 != puVar23);
                }
                break;
              case 3:
                if (param_13[10] == 0) {
                  if (puVar20 != (undefined8 *)0x0) {
                    lVar2 = local_638[uVar26];
                    puVar23 = (undefined8 *)0x0;
                    puVar13 = puVar30;
                    do {
                      uVar11 = (uint)((double)(*(float *)((long)local_730 * 8 + lVar2 +
                                                         (long)puVar23 * 8) * local_6f0) +
                                     DAT_0065daf8);
                      if ((int)uVar11 < 1) {
                        uVar11 = 1;
                      }
                      if (0xfffffe < uVar11) {
                        uVar11 = 0xffffff;
                      }
                      iVar10 = uVar11 - 0x800000;
                      *puVar13 = (char)((uint)iVar10 >> 0x10);
                      puVar13[-1] = (char)((uint)iVar10 >> 8);
                      puVar13[-2] = (char)iVar10;
                      puVar23 = (undefined8 *)((long)puVar23 + 1);
                      puVar13 = puVar13 + lVar28;
                    } while (puVar20 != puVar23);
                  }
                }
                else if (puVar20 != (undefined8 *)0x0) {
                  lVar2 = local_638[uVar26];
                  param_14 = (undefined8 *)0x0;
                  puVar13 = puVar30;
                  do {
                    uVar11 = (uint)((double)(*(float *)((long)local_730 * 8 + lVar2 +
                                                       (long)param_14 * 8) * local_6f0) +
                                   DAT_0065daf8);
                    if ((int)uVar11 < 1) {
                      uVar11 = 1;
                    }
                    if (0xfffffe < uVar11) {
                      uVar11 = 0xffffff;
                    }
                    iVar10 = uVar11 - 0x800000;
                    puVar13[-2] = (char)((uint)iVar10 >> 0x10);
                    puVar13[-1] = (char)((uint)iVar10 >> 8);
                    *puVar13 = (char)iVar10;
                    param_14 = (undefined8 *)((long)param_14 + 1);
                    puVar13 = puVar13 + lVar28;
                  } while (puVar20 != param_14);
                }
                break;
              case 4:
                if (param_13[10] == 0) {
                  if (puVar20 != (undefined8 *)0x0) {
                    pfVar14 = (float *)((long)local_730 * 8 + local_638[uVar26]);
                    pfVar17 = pfVar25;
                    if (local_698 != 0) {
                      uVar22 = local_6a0;
                      do {
                        *pfVar17 = *pfVar14 * local_6ec;
                        *(float *)((long)pfVar17 + lVar28) = pfVar14[2] * local_6ec;
                        pfVar17 = (float *)((long)pfVar17 + lVar28 * 2);
                        pfVar14 = pfVar14 + 4;
                        uVar22 = uVar22 - 2;
                      } while (uVar22 != 0);
                    }
                    if (((ulong)puVar20 & 1) != 0) {
                      *pfVar17 = *pfVar14 * local_6ec;
                    }
                  }
                }
                else if (puVar20 != (undefined8 *)0x0) {
                  pfVar14 = (float *)((long)local_730 * 8 + local_638[uVar26]);
                  pfVar17 = pfVar25;
                  if (local_698 != 0) {
                    uVar22 = local_6a0;
                    do {
                      fVar35 = *pfVar14 * local_6ec;
                      *pfVar17 = (float)((uint)fVar35 >> 0x18 | ((uint)fVar35 & 0xff0000) >> 8 |
                                         ((uint)fVar35 & 0xff00) << 8 | (int)fVar35 << 0x18);
                      fVar35 = pfVar14[2] * local_6ec;
                      *(uint *)((long)pfVar17 + lVar28) =
                           (uint)fVar35 >> 0x18 | ((uint)fVar35 & 0xff0000) >> 8 |
                           ((uint)fVar35 & 0xff00) << 8 | (int)fVar35 << 0x18;
                      pfVar17 = (float *)((long)pfVar17 + lVar28 * 2);
                      pfVar14 = pfVar14 + 4;
                      uVar22 = uVar22 - 2;
                    } while (uVar22 != 0);
                  }
                  if (((ulong)puVar20 & 1) != 0) {
                    fVar35 = *pfVar14 * local_6ec;
                    *pfVar17 = (float)((uint)fVar35 >> 0x18 | ((uint)fVar35 & 0xff0000) >> 8 |
                                       ((uint)fVar35 & 0xff00) << 8 | (int)fVar35 << 0x18);
                  }
                }
                break;
              case 8:
                if (param_13[10] == 0) {
                  if (puVar20 != (undefined8 *)0x0) {
                    lVar2 = local_638[uVar26];
                    puVar23 = (undefined8 *)0x0;
                    puVar13 = puVar24;
                    do {
                      *(double *)(puVar13 + -7) =
                           (double)(*(float *)((long)local_730 * 8 + lVar2 + (long)puVar23 * 8) *
                                   local_6ec);
                      puVar23 = (undefined8 *)((long)puVar23 + 1);
                      puVar13 = puVar13 + lVar28;
                    } while (puVar20 != puVar23);
                  }
                }
                else if (puVar20 != (undefined8 *)0x0) {
                  lVar2 = local_638[uVar26];
                  puVar23 = (undefined8 *)0x0;
                  puVar13 = puVar24;
                  do {
                    dVar40 = (double)(*(float *)((long)local_730 * 8 + lVar2 + (long)puVar23 * 8) *
                                     local_6ec);
                    *(ulong *)(puVar13 + -7) =
                         (ulong)dVar40 >> 0x38 | ((ulong)dVar40 & 0xff000000000000) >> 0x28 |
                         ((ulong)dVar40 & 0xff0000000000) >> 0x18 |
                         ((ulong)dVar40 & 0xff00000000) >> 8 | ((ulong)dVar40 & 0xff000000) << 8 |
                         ((ulong)dVar40 & 0xff0000) << 0x18 | ((ulong)dVar40 & 0xff00) << 0x28 |
                         (long)dVar40 << 0x38;
                    puVar23 = (undefined8 *)((long)puVar23 + 1);
                    puVar13 = puVar13 + lVar28;
                  } while (puVar20 != puVar23);
                }
              }
              uVar26 = uVar26 + 1;
              pfVar25 = (float *)((long)pfVar25 + lVar27);
              puVar24 = puVar24 + lVar27;
              puVar30 = puVar30 + lVar27;
              lVar29 = lVar29 + lVar27;
            } while (uVar26 != uVar1);
          }
          fVar35 = local_6ec;
          fVar34 = local_6f0;
          fVar38 = local_6f4;
          dVar40 = DAT_0065db00;
          dVar41 = DAT_0065daf8;
          local_700 = piVar18;
          local_680 = uVar8;
          uVar26 = write(*param_13,&local_438,uVar8);
          puVar23 = local_6a8;
          if (((long)uVar26 < 0) || (uVar26 < uVar8)) break;
          piVar18 = (int *)((long)local_700 + (long)puVar20);
          local_730 = (int *)((long)local_730 + (long)puVar20);
          uVar36 = 0;
          uVar37 = 0;
          uVar39 = 0;
          if (param_12 <= piVar18) {
            uVar31 = extraout_XMM0_Da_05;
            uVar33 = extraout_XMM0_Db_05;
            fVar35 = local_6ec;
            fVar34 = local_6f0;
            fVar38 = local_6f4;
            dVar40 = DAT_0065db00;
            dVar41 = DAT_0065daf8;
            piStack_6c0 = local_730;
LAB_0059af53:
LAB_0059af57:
            soundfile_finishwrite
                      (CONCAT44(uVar33,uVar31),CONCAT44(uVar36,fVar35),CONCAT44(uVar37,fVar34),
                       CONCAT44(uVar39,fVar38),dVar40,dVar41,param_7,param_8,param_9,
                       (char *)*puVar23,(long)param_13,(ulong)param_12,(ulong)piVar18,param_14);
            sys_close(iVar4);
            *param_13 = -1;
            return piVar18;
          }
          iVar9 = param_13[0xb];
        }
        piStack_6c0 = local_730;
        pcVar3 = (char *)*local_6a8;
        piVar18 = __errno_location();
        object_sferror(CONCAT44(extraout_XMM0_Db_06,extraout_XMM0_Da_06),CONCAT44(uVar36,fVar35),
                       CONCAT44(uVar37,fVar34),CONCAT44(uVar39,fVar38),dVar40,dVar41,param_7,param_8
                       ,param_9,"[soundfiler] write",pcVar3,*piVar18,(long)param_13,param_14);
        uVar31 = extraout_XMM0_Da_07;
        uVar33 = extraout_XMM0_Db_07;
        if ((long)uVar26 < 1) {
          piVar18 = local_700;
          goto LAB_0059af57;
        }
        uVar1 = param_13[0xb];
        if ((uVar26 | (long)(int)uVar1) >> 0x20 == 0) {
          uVar26 = (uVar26 & 0xffffffff) / (ulong)uVar1;
        }
        else {
          uVar26 = (long)uVar26 / (long)(int)uVar1;
        }
        piVar18 = (int *)((long)local_700 + uVar26);
        goto LAB_0059af53;
      }
      local_660 = local_638;
      local_658 = 0;
      local_650 = 0;
      local_648 = 0;
      fVar34 = fVar35;
      local_678 = piStack_6c0;
      local_670 = param_12;
      strcpy((char *)&local_438,(char *)*local_6a8);
      uVar32 = ascii_hasextension((char *)&local_438);
      if ((int)uVar32 == 0) {
        sVar7 = strnlen((char *)&local_438,1000);
        param_12 = (int *)(sVar7 - 0x3e4);
        if ((int *)0xfffffffffffffc17 < param_12) {
          auStack_434[sVar7] = 0;
          *(undefined4 *)((long)local_638 + sVar7 + 0x200) = 0x7478742e;
        }
      }
      if ((int)local_6b8 == 0) {
LAB_0059a7dc:
        local_640 = DAT_005d9038;
      }
      else {
        param_2 = (ulong)(uint)fVar35;
        if (fVar35 <= 0.0) goto LAB_0059a7dc;
        local_640 = DAT_0065dae4 / fVar35;
        param_2 = (ulong)(uint)fVar35;
      }
      uVar8 = soundfiler_writeascii
                        ((ulong)(uint)local_640,param_2,(double)CONCAT44(uVar36,fVar34),param_4,
                         param_5,param_6,param_7,param_8,param_9,(char *)&local_438,
                         (int *)&local_678,param_12,(char *)piVar18,param_14);
      if ((int)uVar8 != 0) {
        param_13[8] = 0;
        param_13[9] = 0;
        param_13[6] = 4;
        param_13[10] = 0;
        return (int *)(long)(int)uVar8;
      }
      pd_error(CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_03),param_2,CONCAT44(uVar36,fVar34),
               param_4,param_5,param_6,param_7,param_8,param_9,
               "[soundfiler] write: writing ascii failed",extraout_RDX_03,param_12,(char *)piVar18,
               param_14);
      goto LAB_0059a58e;
    }
  }
LAB_0059a54c:
  uVar32 = pd_error(uVar32,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                    "[soundfiler] usage; write [flags] filename tablename...",uVar8,param_12,
                    (char *)piVar18,param_14);
  uVar32 = post(uVar32,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                "flags: -skip <n> -nframes <n> -bytes <n> %s ...");
  uVar32 = post(uVar32,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                "-ascii -big -little -normalize");
  post(uVar32,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
       "(defaults to a 16 bit wave file)");
LAB_0059a58e:
  param_13[0] = 0;
  param_13[1] = 0;
  param_13[2] = 0;
  param_13[3] = 0;
  param_13[8] = 0;
  param_13[9] = 0;
  param_13[10] = 0;
  param_13[0xb] = 0;
  param_13[4] = 0;
  param_13[5] = 0;
  param_13[6] = 0;
  param_13[7] = 0;
  *param_13 = -1;
  param_13[0xc] = -1;
  param_13[0xd] = 0x7fffffff;
  return (int *)0x0;
}


