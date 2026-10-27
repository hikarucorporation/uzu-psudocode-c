// Function : applyGaussianBlurEffectInArea
// Namespace: juce:ImagePixelData
// Entry    : 0032e390
// Prototype: undefined applyGaussianBlurEffectInArea(float param_1, long * param_2, ulong param_3, undefined8 param_4)
// Body     : 0032e390 - 0032ef82


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::ImagePixelData::applyGaussianBlurEffectInArea(juce::Rectangle<int>, float) */

void __cdecl
juce::ImagePixelData::applyGaussianBlurEffectInArea
          (float param_1,long *param_2,ulong param_3,undefined8 param_4)

{
  long *plVar1;
  float fVar2;
  bool bVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  char cVar10;
  char cVar9;
  char cVar8;
  char cVar7;
  double dVar11;
  undefined1 auVar12 [13];
  undefined1 auVar13 [13];
  uint7 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [13];
  uint5 uVar19;
  double dVar20;
  int iVar21;
  int iVar22;
  ulong uVar23;
  ulong uVar24;
  undefined1 uVar25;
  ulong uVar26;
  ulong uVar27;
  ushort *puVar28;
  uint uVar29;
  float *pfVar30;
  long *plVar31;
  long *plVar32;
  ulong uVar33;
  int iVar34;
  long lVar35;
  int iVar36;
  ulong uVar37;
  uint uVar38;
  void *pvVar39;
  int iVar40;
  ulong uVar41;
  uint uVar42;
  float *pfVar43;
  long *plVar44;
  float fVar45;
  double dVar46;
  double dVar47;
  int iVar48;
  undefined1 auVar49 [16];
  short sVar50;
  undefined4 uVar51;
  undefined6 uVar52;
  float fVar54;
  int iVar55;
  float fVar56;
  undefined1 auVar53 [16];
  float fVar57;
  int iVar59;
  undefined1 auVar58 [16];
  uint local_110;
  void *local_108;
  long local_98 [2];
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  long *local_70;
  long *local_68 [2];
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  long *local_40;
  long *local_38;
  
  dVar11 = (double)(param_1 + param_1) + DAT_005d9098;
  iVar48 = SUB84(dVar11,0);
  uVar29 = iVar48 * iVar48;
  uVar24 = (ulong)uVar29;
  if (uVar29 == 0) {
    local_108 = (void *)0x0;
  }
  else {
    local_108 = malloc(uVar24 * 4);
    uVar42 = 1;
    if ((int)uVar29 < 1) {
      uVar42 = uVar29;
    }
    memset((void *)((long)local_108 + ((ulong)(uVar29 - 1) - (ulong)(uVar29 - uVar42)) * 4),0,
           (ulong)(uVar29 - uVar42) * 4 + 4);
  }
  if (0 < iVar48) {
    dVar47 = DAT_00651e70 / (double)(param_1 * param_1 + param_1 * param_1);
    uVar23 = (ulong)iVar48;
    pfVar43 = (float *)((long)local_108 + uVar23 * uVar23 * 4 + -4);
    uVar26 = uVar23;
    do {
      iVar40 = (int)(uVar26 - 1) - (iVar48 >> 1);
      pfVar30 = pfVar43;
      uVar33 = uVar23;
      iVar21 = ~(iVar48 >> 1) + iVar48;
      do {
        dVar46 = exp((double)(iVar21 * iVar21 + iVar40 * iVar40) * dVar47);
        *pfVar30 = (float)dVar46;
        pfVar30 = pfVar30 + -1;
        iVar21 = iVar21 + -1;
        uVar27 = uVar33 & 0xfffffffe;
        uVar33 = uVar33 - 1;
      } while (uVar27 != 0);
      pfVar43 = pfVar43 + -uVar23;
      bVar3 = 1 < (long)uVar26;
      uVar26 = uVar26 - 1;
    } while (bVar3);
  }
  if ((int)uVar29 < 1) {
    dVar47 = 0.0;
  }
  else {
    uVar23 = uVar24 & 3;
    dVar47 = 0.0;
    uVar26 = uVar24;
    if ((uVar29 & 3) != 0) {
      uVar26 = uVar24 - 1;
      do {
        dVar47 = dVar47 + (double)*(float *)((long)local_108 + (uVar26 & 0xffffffff) * 4);
        uVar26 = uVar26 - 1;
        uVar23 = uVar23 - 1;
      } while (uVar23 != 0);
      uVar26 = (ulong)(uVar29 & 0xfffffffc);
    }
    if (2 < uVar24 - 1) {
      do {
        iVar21 = (int)uVar26;
        uVar23 = uVar26 - 3;
        uVar26 = uVar26 - 4;
        dVar47 = (double)*(float *)((long)local_108 + (uVar26 & 0xffffffff) * 4) +
                 (double)*(float *)((long)local_108 + (uVar23 & 0xffffffff) * 4) +
                 (double)*(float *)((long)local_108 + (ulong)(iVar21 - 2) * 4) +
                 (double)*(float *)((long)local_108 + (ulong)(iVar21 - 1) * 4) + dVar47;
      } while (1 < uVar23);
    }
  }
  if (uVar29 != 0) {
    fVar45 = (float)(_DAT_005d9000 / dVar47);
    uVar42 = 1;
    if ((int)uVar29 < 1) {
      uVar42 = uVar29;
    }
    if (6 < uVar29 - uVar42) {
      uVar33 = (ulong)(uVar29 - uVar42) + 1;
      uVar23 = uVar33 & 0xfffffffffffffff8;
      uVar24 = uVar24 - 1;
      uVar26 = uVar23;
      do {
        uVar27 = uVar24 & 0xffffffff;
        pfVar43 = (float *)((long)local_108 + uVar27 * 4 + -0x1c);
        fVar54 = *pfVar43;
        fVar56 = pfVar43[1];
        fVar57 = pfVar43[2];
        fVar2 = pfVar43[3];
        pfVar43 = (float *)((long)local_108 + uVar27 * 4 + -0xc);
        fVar15 = pfVar43[1];
        fVar16 = pfVar43[2];
        fVar17 = pfVar43[3];
        pfVar30 = (float *)((long)local_108 + uVar27 * 4 + -0xc);
        *pfVar30 = *pfVar43 * fVar45;
        pfVar30[1] = fVar15 * fVar45;
        pfVar30[2] = fVar16 * fVar45;
        pfVar30[3] = fVar17 * fVar45;
        auVar49._0_4_ = fVar54 * fVar45;
        auVar49._4_4_ = fVar56 * fVar45;
        auVar49._8_4_ = fVar57 * fVar45;
        auVar49._12_4_ = fVar2 * fVar45;
        *(undefined1 (*) [16])((long)local_108 + uVar27 * 4 + -0x1c) = auVar49;
        uVar24 = uVar24 - 8;
        uVar26 = uVar26 - 8;
      } while (uVar26 != 0);
      if (uVar33 == uVar23) goto LAB_0032e6c8;
      uVar29 = uVar29 - (int)uVar23;
    }
    iVar21 = uVar29 + 1;
    pfVar43 = (float *)((long)local_108 + (ulong)(uVar29 - 1) * 4);
    do {
      *pfVar43 = *pfVar43 * fVar45;
      iVar21 = iVar21 + -1;
      pfVar43 = pfVar43 + -1;
    } while (1 < iVar21);
  }
LAB_0032e6c8:
  LOCK();
  *(int *)(param_2 + 1) = (int)param_2[1] + 1;
  UNLOCK();
  LOCK();
  *(int *)(param_2 + 1) = (int)param_2[1] + 1;
  UNLOCK();
                    /* try { // try from 0032e6da to 0032e6e7 has its CatchHandler @ 0032f01b */
  (**(code **)(*param_2 + 0x18))(local_68,param_2);
  plVar1 = local_68[0];
  plVar31 = param_2;
  plVar44 = param_2;
  if (local_68[0] == param_2) {
    if (local_68[0] == (long *)0x0) {
LAB_0032e7d2:
      plVar31 = (long *)0x0;
      lVar35 = 0;
    }
    else {
      iVar21 = (**(code **)(*param_2 + 0x40))(param_2);
      if (1 < iVar21) {
                    /* try { // try from 0032e754 to 0032e761 has its CatchHandler @ 0032efff */
        (**(code **)(*param_2 + 0x18))(local_68,param_2);
        plVar31 = local_68[0];
        LOCK();
        plVar44 = param_2 + 1;
        *(int *)plVar44 = (int)*plVar44 + -1;
        UNLOCK();
        local_68[0] = param_2;
        if ((int)*plVar44 == 0) {
          (**(code **)(*param_2 + 8))();
        }
        if (plVar31 == (long *)0x0) {
          plVar44 = (long *)0x0;
          goto LAB_0032e7d2;
        }
      }
LAB_0032e7c4:
      lVar35 = plVar31[2];
      plVar44 = plVar31;
    }
    uVar24 = 0;
    if (-1 < (int)param_3) {
      uVar24 = param_3 & 0xffffffff;
    }
    uVar26 = 0;
    if (-1 < (long)param_3) {
      uVar26 = param_3 >> 0x20;
    }
    iVar21 = (int)param_3 + (int)param_4;
    if ((int)lVar35 < iVar21) {
      iVar21 = (int)lVar35;
    }
    iVar40 = (int)uVar24;
    iVar36 = iVar21 - iVar40;
    if (-1 < iVar36) {
      uVar29 = (int)((ulong)param_4 >> 0x20) + (int)(param_3 >> 0x20);
      uVar42 = (uint)((ulong)lVar35 >> 0x20);
      if ((int)uVar42 < (int)uVar29) {
        uVar29 = uVar42;
      }
      iVar34 = (int)uVar26;
      iVar22 = uVar29 - iVar34;
      if (((-1 < iVar22) && (0 < iVar36)) && (iVar22 != 0)) {
        local_40 = (long *)0x0;
                    /* try { // try from 0032e85e to 0032e870 has its CatchHandler @ 0032efd0 */
        local_4c = iVar36;
        local_48 = iVar22;
        (**(code **)(*plVar31 + 0x38))(plVar31,local_68,uVar24,uVar26,1);
        plVar31 = local_68[0];
        if (plVar1 == (long *)0x0) {
          local_7c = 0;
          local_78 = 0;
        }
        else {
          local_7c = (int)plVar1[2];
          local_78 = *(int *)((long)plVar1 + 0x14);
        }
        local_70 = (long *)0x0;
                    /* try { // try from 0032e8b5 to 0032e8c6 has its CatchHandler @ 0032ef83 */
        (**(code **)(*plVar1 + 0x38))(plVar1,local_98,0,0,0);
        auVar49 = _DAT_005dd240;
        dVar20 = _UNK_005d9a98;
        dVar46 = _DAT_005d9a90;
        dVar47 = DAT_005d9098;
        if (local_50 == 1) {
          uVar33 = (ulong)dVar11 >> 1 & 0x7fffffff;
          uVar23 = (ulong)dVar11 & 0xffffffff;
          iVar36 = (int)uVar33;
          uVar42 = iVar34 - iVar36;
          do {
            lVar35 = uVar24 - uVar33;
            uVar27 = uVar24;
            plVar32 = plVar31;
            iVar22 = iVar40 - iVar36;
            do {
              if (iVar48 < 1) {
                fVar45 = 0.0;
              }
              else {
                fVar45 = 0.0;
                uVar37 = 0;
                pvVar39 = local_108;
                uVar38 = uVar42;
                do {
                  iVar34 = ((int)uVar26 + (int)uVar37) - iVar36;
                  if (local_78 <= iVar34) break;
                  if (-1 < iVar34) {
                    uVar41 = 0;
                    do {
                      iVar34 = iVar22 + (int)uVar41;
                      if (local_7c <= iVar34) break;
                      if (-1 < iVar34) {
                        fVar45 = fVar45 + (float)*(byte *)((ulong)uVar38 * (long)local_84 +
                                                           local_80 * lVar35 + local_98[0] + uVar41)
                                          * *(float *)((long)pvVar39 + uVar41 * 4);
                      }
                      uVar41 = uVar41 + 1;
                    } while (uVar23 != uVar41);
                  }
                  uVar37 = uVar37 + 1;
                  pvVar39 = (void *)((long)pvVar39 + uVar23 * 4);
                  uVar38 = uVar38 + 1;
                } while (uVar37 != uVar23);
              }
              uVar25 = SUB81((double)fVar45 + dVar47,0);
              if (0xfe < SUB84((double)fVar45 + dVar47,0)) {
                uVar25 = 0xff;
              }
              *(undefined1 *)plVar32 = uVar25;
              plVar32 = (long *)((long)plVar32 + 1);
              uVar27 = uVar27 + 1;
              iVar22 = iVar22 + 1;
              lVar35 = lVar35 + 1;
            } while ((long)uVar27 < (long)iVar21);
            plVar31 = (long *)((long)plVar31 + (long)local_54);
            uVar26 = uVar26 + 1;
            uVar42 = uVar42 + 1;
          } while (uVar26 < uVar29);
        }
        else if (local_50 == 3) {
          uVar33 = (ulong)dVar11 >> 1 & 0x7fffffff;
          uVar23 = (ulong)dVar11 & 0xffffffff;
          iVar36 = (int)uVar33;
          local_110 = iVar34 - iVar36;
          do {
            uVar27 = uVar24;
            lVar35 = uVar24 - uVar33;
            plVar32 = plVar31;
            iVar22 = iVar40 - iVar36;
            do {
              if (iVar48 < 1) {
                fVar45 = 0.0;
                fVar54 = 0.0;
                fVar56 = 0.0;
              }
              else {
                fVar45 = 0.0;
                fVar54 = 0.0;
                fVar56 = 0.0;
                uVar37 = 0;
                pvVar39 = local_108;
                uVar42 = local_110;
                do {
                  iVar34 = ((int)uVar26 - iVar36) + (int)uVar37;
                  if (local_78 <= iVar34) break;
                  if (-1 < iVar34) {
                    puVar28 = (ushort *)
                              ((ulong)uVar42 * (long)local_84 + local_98[0] + local_80 * lVar35 + 1)
                    ;
                    uVar41 = 0;
                    do {
                      iVar34 = iVar22 + (int)uVar41;
                      if (local_7c <= iVar34) break;
                      if (-1 < iVar34) {
                        fVar57 = *(float *)((long)pvVar39 + uVar41 * 4);
                        fVar56 = fVar56 + (float)*(byte *)((long)puVar28 + -1) * fVar57;
                        fVar45 = fVar45 + fVar57 * (float)(*puVar28 & 0xff);
                        fVar54 = fVar54 + fVar57 * (float)(byte)(*puVar28 >> 8);
                      }
                      uVar41 = uVar41 + 1;
                      puVar28 = (ushort *)((long)puVar28 + 3);
                    } while (uVar23 != uVar41);
                  }
                  uVar37 = uVar37 + 1;
                  pvVar39 = (void *)((long)pvVar39 + uVar23 * 4);
                  uVar42 = uVar42 + 1;
                } while (uVar37 != uVar23);
              }
              uVar25 = SUB81((double)fVar56 + dVar47,0);
              if (0xfe < SUB84((double)fVar56 + dVar47,0)) {
                uVar25 = 0xff;
              }
              *(undefined1 *)plVar32 = uVar25;
              uVar25 = SUB81((double)fVar45 + dVar47,0);
              if (0xfe < SUB84((double)fVar45 + dVar47,0)) {
                uVar25 = 0xff;
              }
              *(undefined1 *)((long)plVar32 + 1) = uVar25;
              uVar25 = SUB81((double)fVar54 + dVar47,0);
              if (0xfe < SUB84((double)fVar54 + dVar47,0)) {
                uVar25 = 0xff;
              }
              *(undefined1 *)((long)plVar32 + 2) = uVar25;
              plVar32 = (long *)((long)plVar32 + 3);
              uVar27 = uVar27 + 1;
              iVar22 = iVar22 + 1;
              lVar35 = lVar35 + 1;
            } while ((long)uVar27 < (long)iVar21);
            plVar31 = (long *)((long)plVar31 + (long)local_54);
            uVar42 = (int)uVar26 + 1;
            uVar26 = (ulong)uVar42;
            local_110 = local_110 + 1;
          } while ((int)uVar42 < (int)uVar29);
        }
        else if (local_50 == 4) {
          uVar23 = (ulong)dVar11 >> 1 & 0x7fffffff;
          uVar33 = (ulong)dVar11 & 0xffffffff;
          iVar36 = (int)uVar23;
          local_110 = iVar34 - iVar36;
          do {
            uVar27 = uVar24;
            plVar32 = plVar31;
            lVar35 = uVar24 - uVar23;
            iVar22 = iVar40 - iVar36;
            do {
              if (iVar48 < 1) {
                fVar45 = 0.0;
                fVar54 = 0.0;
                fVar56 = 0.0;
                fVar57 = 0.0;
              }
              else {
                fVar45 = 0.0;
                fVar54 = 0.0;
                fVar56 = 0.0;
                fVar57 = 0.0;
                uVar37 = 0;
                pvVar39 = local_108;
                uVar42 = local_110;
                do {
                  iVar34 = ((int)uVar26 - iVar36) + (int)uVar37;
                  if (local_78 <= iVar34) break;
                  if (-1 < iVar34) {
                    uVar41 = 0;
                    do {
                      iVar34 = (int)uVar41 + iVar22;
                      if (local_7c <= iVar34) break;
                      if (-1 < iVar34) {
                        uVar51 = *(undefined4 *)
                                  ((ulong)uVar42 * (long)local_84 + local_80 * lVar35 + local_98[0]
                                  + uVar41 * 4);
                        uVar14 = (uint7)(ushort)uVar51 & 0xffffffffff00ff;
                        auVar12._7_5_ = 0;
                        auVar12._0_7_ = uVar14;
                        auVar12[0xc] = (char)((uint)uVar51 >> 0x18);
                        uVar19 = CONCAT32(auVar12._10_3_,(ushort)(byte)((uint)uVar51 >> 0x10));
                        auVar18._5_8_ = 0;
                        auVar18._0_5_ = uVar19;
                        iVar34 = (int)uVar14;
                        auVar13[4] = (char)((uint)uVar51 >> 8);
                        auVar13._0_4_ = iVar34;
                        auVar13[5] = 0;
                        auVar13._6_7_ = SUB137(auVar18 << 0x40,6);
                        fVar2 = *(float *)((long)pvVar39 + uVar41 * 4);
                        fVar45 = fVar45 + fVar2 * (float)iVar34;
                        fVar54 = fVar54 + fVar2 * (float)auVar13._4_4_;
                        fVar56 = fVar56 + fVar2 * (float)(int)uVar19;
                        fVar57 = fVar57 + fVar2 * (float)(uint3)(auVar12._10_3_ >> 0x10);
                      }
                      uVar41 = uVar41 + 1;
                    } while (uVar33 != uVar41);
                  }
                  uVar37 = uVar37 + 1;
                  pvVar39 = (void *)((long)pvVar39 + uVar33 * 4);
                  uVar42 = uVar42 + 1;
                } while (uVar37 != uVar33);
              }
              iVar34 = SUB84((double)fVar56 + dVar46,0);
              iVar55 = SUB84((double)fVar57 + dVar20,0);
              auVar58._0_4_ = SUB84((double)fVar45 + dVar46,0);
              iVar59 = SUB84((double)fVar54 + dVar20,0);
              auVar58._4_4_ = iVar59;
              auVar58._8_4_ = iVar34;
              auVar58._12_4_ = iVar55;
              auVar53._0_4_ = -(uint)(auVar58._0_4_ < auVar49._0_4_);
              auVar53._4_4_ = -(uint)(iVar59 < auVar49._4_4_);
              auVar53._8_4_ = -(uint)(iVar34 < auVar49._8_4_);
              auVar53._12_4_ = -(uint)(iVar55 < auVar49._12_4_);
              auVar53 = (~auVar53 & auVar49 | auVar58 & auVar53) & auVar49;
              sVar4 = auVar53._0_2_;
              cVar7 = (0 < sVar4) * (sVar4 < 0x100) * auVar53[0] - (0xff < sVar4);
              sVar4 = auVar53._2_2_;
              sVar50 = CONCAT11((0 < sVar4) * (sVar4 < 0x100) * auVar53[2] - (0xff < sVar4),cVar7);
              sVar4 = auVar53._4_2_;
              cVar8 = (0 < sVar4) * (sVar4 < 0x100) * auVar53[4] - (0xff < sVar4);
              sVar4 = auVar53._6_2_;
              uVar51 = CONCAT13((0 < sVar4) * (sVar4 < 0x100) * auVar53[6] - (0xff < sVar4),
                                CONCAT12(cVar8,sVar50));
              sVar4 = auVar53._8_2_;
              cVar9 = (0 < sVar4) * (sVar4 < 0x100) * auVar53[8] - (0xff < sVar4);
              sVar4 = auVar53._10_2_;
              uVar52 = CONCAT15((0 < sVar4) * (sVar4 < 0x100) * auVar53[10] - (0xff < sVar4),
                                CONCAT14(cVar9,uVar51));
              sVar4 = auVar53._12_2_;
              cVar10 = (0 < sVar4) * (sVar4 < 0x100) * auVar53[0xc] - (0xff < sVar4);
              sVar6 = auVar53._14_2_;
              sVar4 = (short)((uint)uVar51 >> 0x10);
              sVar5 = (short)((uint6)uVar52 >> 0x20);
              sVar6 = (short)(CONCAT17((0 < sVar6) * (sVar6 < 0x100) * auVar53[0xe] - (0xff < sVar6)
                                       ,CONCAT16(cVar10,uVar52)) >> 0x30);
              *(uint *)plVar32 =
                   CONCAT13((0 < sVar6) * (sVar6 < 0x100) * cVar10 - (0xff < sVar6),
                            CONCAT12((0 < sVar5) * (sVar5 < 0x100) * cVar9 - (0xff < sVar5),
                                     CONCAT11((0 < sVar4) * (sVar4 < 0x100) * cVar8 - (0xff < sVar4)
                                              ,(0 < sVar50) * (sVar50 < 0x100) * cVar7 -
                                               (0xff < sVar50))));
              plVar32 = (long *)((long)plVar32 + 4);
              uVar27 = uVar27 + 1;
              iVar22 = iVar22 + 1;
              lVar35 = lVar35 + 1;
            } while ((long)uVar27 < (long)iVar21);
            plVar31 = (long *)((long)plVar31 + (long)local_54);
            uVar42 = (int)uVar26 + 1;
            uVar26 = (ulong)uVar42;
            local_110 = local_110 + 1;
          } while ((int)uVar42 < (int)uVar29);
        }
        local_38 = plVar44;
        if (local_70 != (long *)0x0) {
          (**(code **)(*local_70 + 8))();
        }
        plVar44 = local_38;
        if (local_40 != (long *)0x0) {
          (**(code **)(*local_40 + 8))();
        }
      }
    }
LAB_0032ef2a:
    if (plVar1 == (long *)0x0) goto LAB_0032ef40;
  }
  else {
    if (local_68[0] == (long *)0x0) {
      if (((int)param_2[2] == 0) && (iVar21 = 0, *(int *)((long)param_2 + 0x14) == 0))
      goto LAB_0032e7b6;
      goto LAB_0032ef2a;
    }
    if (((int)local_68[0][2] == (int)param_2[2]) &&
       (*(int *)((long)local_68[0] + 0x14) == *(int *)((long)param_2 + 0x14))) {
      iVar21 = *(int *)((long)local_68[0] + 0xc);
LAB_0032e7b6:
      if (iVar21 == *(int *)((long)param_2 + 0xc)) goto LAB_0032e7c4;
      goto LAB_0032ef2a;
    }
  }
  LOCK();
  plVar31 = plVar1 + 1;
  *(int *)plVar31 = (int)*plVar31 + -1;
  UNLOCK();
  if ((int)*plVar31 == 0) {
    (**(code **)(*plVar1 + 8))(plVar1);
  }
LAB_0032ef40:
  LOCK();
  plVar1 = param_2 + 1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)*plVar1 == 0) {
    (**(code **)(*param_2 + 8))(param_2);
  }
  if (plVar44 != (long *)0x0) {
    LOCK();
    plVar1 = plVar44 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar44 + 8))(plVar44);
    }
  }
  free(local_108);
  return;
}


