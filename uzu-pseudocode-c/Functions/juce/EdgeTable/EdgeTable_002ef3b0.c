// Function : EdgeTable
// Namespace: juce:EdgeTable
// Entry    : 002ef3b0
// Prototype: undefined EdgeTable(EdgeTable * this, undefined8 * param_1)
// Body     : 002ef3b0 - 002efac7


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::EdgeTable::EdgeTable(juce::RectangleList<float> const&) */

void __thiscall juce::EdgeTable::EdgeTable(EdgeTable *this,undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined4 *puVar7;
  int *piVar8;
  long lVar9;
  long lVar10;
  void *pvVar11;
  long lVar12;
  int iVar13;
  float *pfVar14;
  long lVar15;
  int iVar16;
  uint uVar17;
  long lVar18;
  ulong uVar19;
  float *pfVar20;
  void *pvVar21;
  long lVar22;
  long lVar23;
  int iVar24;
  long lVar25;
  ulong uVar26;
  void *pvVar27;
  long lVar28;
  long lVar29;
  int iVar30;
  long lVar31;
  ulong uVar32;
  void *__ptr;
  ulong uVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  long lVar37;
  float fVar38;
  undefined8 uVar39;
  uint uVar42;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined8 uVar43;
  undefined4 uVar46;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined4 uVar47;
  float fVar48;
  float fVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  float __x;
  float __x_00;
  
  fVar48 = 0.0;
  fVar49 = 0.0;
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  uVar17 = *(uint *)((long)param_1 + 0xc);
  __x = 0.0;
  __x_00 = 0.0;
  if ((ulong)uVar17 != 0) {
    puVar4 = (undefined8 *)*param_1;
    uVar43 = *puVar4;
    __x = (float)uVar43;
    __x_00 = (float)((ulong)uVar43 >> 0x20);
    uVar46 = 0;
    uVar47 = 0;
    fVar48 = (float)puVar4[1];
    fVar49 = (float)((ulong)puVar4[1] >> 0x20);
    if (uVar17 != 1) {
      fVar48 = fVar48 + __x;
      fVar49 = fVar49 + __x_00;
      uVar50 = 0;
      uVar51 = 0;
      if ((int)uVar17 < 2) {
        uVar39 = CONCAT44(fVar49,fVar48);
      }
      else {
        uVar6 = (ulong)uVar17 + 1;
        do {
          uVar32 = (ulong)((int)uVar6 - 2);
          uVar19 = puVar4[uVar32 * 2];
          auVar44._8_8_ = 0;
          auVar44._0_8_ = uVar19;
          auVar40._0_4_ = (float)puVar4[uVar32 * 2 + 1] + (float)uVar19;
          auVar40._4_4_ = (float)((ulong)puVar4[uVar32 * 2 + 1] >> 0x20) + (float)(uVar19 >> 0x20);
          auVar40._8_8_ = 0;
          auVar45._4_4_ = __x_00;
          auVar45._0_4_ = __x;
          auVar45._8_4_ = uVar46;
          auVar45._12_4_ = uVar47;
          auVar45 = minps(auVar44,auVar45);
          uVar43 = auVar45._0_8_;
          auVar41._4_4_ = fVar49;
          auVar41._0_4_ = fVar48;
          auVar41._8_4_ = uVar50;
          auVar41._12_4_ = uVar51;
          auVar41 = maxps(auVar40,auVar41);
          uVar39 = auVar41._0_8_;
          uVar6 = uVar6 - 1;
          fVar48 = auVar41._0_4_;
          fVar49 = auVar41._4_4_;
          uVar50 = auVar41._8_4_;
          uVar51 = auVar41._12_4_;
          __x = auVar45._0_4_;
          __x_00 = auVar45._4_4_;
          uVar46 = auVar45._8_4_;
          uVar47 = auVar45._12_4_;
        } while (2 < uVar6);
      }
      __x = (float)uVar43;
      fVar48 = (float)uVar39 - __x;
      __x_00 = (float)((ulong)uVar43 >> 0x20);
      fVar49 = (float)((ulong)uVar39 >> 0x20) - __x_00;
    }
  }
  iVar34 = -0x80000000;
  iVar35 = -0x80000000;
  if (DAT_00653430 < __x) {
    fVar38 = floorf(__x);
    iVar35 = (int)fVar38;
  }
  if (DAT_00653430 < __x_00) {
    fVar38 = floorf(__x_00);
    iVar34 = (int)fVar38;
  }
  iVar16 = 0x7fffffff;
  iVar30 = 0x7fffffff;
  if (fVar48 + __x < DAT_00653434) {
    fVar48 = ceilf(fVar48 + __x);
    iVar30 = (int)fVar48;
  }
  if (fVar49 + __x_00 < DAT_00653434) {
    fVar48 = ceilf(fVar49 + __x_00);
    iVar16 = (int)fVar48;
  }
  iVar16 = iVar16 - iVar34;
  *(ulong *)(this + 0x10) = CONCAT44(iVar34,iVar35);
  *(ulong *)(this + 0x18) = CONCAT44(iVar16,iVar30 - iVar35);
  iVar35 = *(int *)((long)param_1 + 0xc);
  *(int *)(this + 0x20) = iVar35 * 2;
  lVar9 = (long)iVar35 * 4 + 1;
  iVar36 = (int)lVar9;
  *(int *)(this + 0x24) = iVar36;
  this[0x28] = (EdgeTable)0x1;
  iVar30 = 2;
  if (-1 < iVar16) {
    iVar30 = iVar16 + 3;
  }
  *(int *)(this + 0x1c) = iVar16 + 1;
  lVar31 = (long)(iVar30 * iVar36);
  puVar7 = malloc(lVar31 * 4);
  *(undefined4 **)this = puVar7;
  *(long *)(this + 8) = lVar31;
  if (-1 < iVar16) {
    uVar17 = iVar16 + 2;
    do {
      *puVar7 = 0;
      uVar17 = uVar17 - 1;
      puVar7 = puVar7 + lVar9;
    } while (1 < uVar17);
  }
  if (iVar35 == 0) {
LAB_002efaaa:
    sanitiseLevels(this,'\x01');
    return;
  }
  pfVar14 = (float *)*param_1;
  pfVar20 = pfVar14 + (long)iVar35 * 4;
  fVar48 = _DAT_005dd2d0;
  fVar49 = _UNK_005dd2d4;
  uVar46 = _DAT_005d9a90;
  uVar47 = _UNK_005d9a94;
  uVar50 = _UNK_005d9a98;
  uVar51 = _UNK_005d9a9c;
  do {
    iVar16 = SUB84((double)((pfVar14[2] + *pfVar14) * fVar48) + (double)CONCAT44(uVar47,uVar46),0);
    iVar35 = SUB84((double)(*pfVar14 * fVar49) + (double)CONCAT44(uVar51,uVar50),0);
    if (iVar35 < iVar16) {
      uVar17 = iVar34 * -0x100 +
               SUB84((double)(pfVar14[1] * fVar48) + (double)CONCAT44(uVar47,uVar46),0);
      uVar42 = iVar34 * -0x100 +
               SUB84((double)((pfVar14[3] + pfVar14[1]) * fVar49) + (double)CONCAT44(uVar51,uVar50),
                     0);
      if (uVar42 - uVar17 != 0 && (int)uVar17 <= (int)uVar42) {
        iVar34 = (int)(((uint)((int)uVar17 >> 0x1f) >> 0x18) + uVar17) >> 8;
        iVar30 = (int)(((uint)((int)uVar42 >> 0x1f) >> 0x18) + uVar42) >> 8;
        if (iVar34 == iVar30) {
          addEdgePointPair(this,iVar35,iVar16,iVar34,uVar42 - uVar17);
          uVar46 = _DAT_005d9a90;
          uVar47 = _UNK_005d9a94;
          uVar50 = _UNK_005d9a98;
          uVar51 = _UNK_005d9a9c;
          fVar48 = _DAT_005dd2d0;
          fVar49 = _UNK_005dd2d4;
        }
        else {
          addEdgePointPair(this,iVar35,iVar16,iVar34,~uVar17 & 0xff);
          iVar34 = iVar34 + 1;
          if (iVar34 < iVar30) {
            __ptr = *(void **)this;
            do {
              lVar22 = (long)*(int *)(this + 0x24);
              lVar9 = iVar34 * lVar22;
              iVar36 = *(int *)((long)__ptr + lVar9 * 4);
              lVar31 = (long)iVar36;
              iVar24 = (int)(lVar31 + 1);
              if ((*(int *)(this + 0x20) <= iVar24) &&
                 (iVar24 = iVar24 * 2, *(int *)(this + 0x20) != iVar24)) {
                *(int *)(this + 0x20) = iVar24;
                lVar9 = (lVar31 + 1) * 4 + 1;
                lVar18 = (long)*(int *)(this + 0x1c);
                iVar24 = 0;
                if (0 < lVar18) {
                  iVar24 = *(int *)(this + 0x1c);
                }
                iVar13 = (int)lVar9;
                lVar10 = (long)((iVar24 + 2) * iVar13);
                pvVar11 = malloc(lVar10 * 4);
                if (lVar18 != 0) {
                  lVar2 = lVar9 * 4;
                  lVar15 = (long)pvVar11 + 0x74;
                  lVar23 = (long)__ptr + 0x74;
                  lVar28 = (long)pvVar11 + 0x14;
                  lVar29 = (long)__ptr + 0x14;
                  lVar37 = 0;
                  do {
                    lVar25 = lVar37 * lVar22;
                    iVar24 = *(int *)((long)__ptr + lVar25 * 4);
                    uVar6 = (long)iVar24 * 8 + 4;
                    if (0 < (long)uVar6) {
                      *(int *)((long)pvVar11 + lVar37 * lVar9 * 4) = iVar24;
                      if (4 < uVar6) {
                        pvVar27 = (void *)(lVar25 * 4 + (long)__ptr);
                        pvVar21 = (void *)((long)pvVar11 + lVar37 * lVar9 * 4);
                        uVar19 = uVar6 >> 2;
                        uVar32 = uVar19 - (uVar19 != 1);
                        if (7 < uVar32) {
                          uVar33 = (long)pvVar11 + lVar2 * lVar37 + 4;
                          uVar26 = (long)__ptr + lVar25 * 4 + 4;
                          if ((uVar26 + uVar32 * 4 <= uVar33) ||
                             ((uVar6 + (ulong)(uVar19 == 1) * 4 + uVar33) - 4 <= uVar26)) {
                            uVar6 = uVar32 & 0xfffffffffffffff8;
                            uVar26 = (uVar6 - 8 >> 3) + 1;
                            uVar33 = (ulong)((uint)uVar26 & 3);
                            if (uVar6 - 8 < 0x18) {
                              lVar25 = 0;
                            }
                            else {
                              uVar26 = uVar26 & 0xfffffffffffffffc;
                              lVar25 = 0;
                              do {
                                puVar4 = (undefined8 *)(lVar23 + -0x70 + lVar25 * 4);
                                uVar43 = puVar4[1];
                                puVar3 = (undefined8 *)(lVar23 + -0x60 + lVar25 * 4);
                                uVar39 = *puVar3;
                                uVar5 = puVar3[1];
                                puVar3 = (undefined8 *)(lVar15 + -0x70 + lVar25 * 4);
                                *puVar3 = *puVar4;
                                puVar3[1] = uVar43;
                                puVar4 = (undefined8 *)(lVar15 + -0x60 + lVar25 * 4);
                                *puVar4 = uVar39;
                                puVar4[1] = uVar5;
                                puVar4 = (undefined8 *)(lVar23 + -0x50 + lVar25 * 4);
                                uVar43 = puVar4[1];
                                puVar3 = (undefined8 *)(lVar23 + -0x40 + lVar25 * 4);
                                uVar39 = *puVar3;
                                uVar5 = puVar3[1];
                                puVar3 = (undefined8 *)(lVar15 + -0x50 + lVar25 * 4);
                                *puVar3 = *puVar4;
                                puVar3[1] = uVar43;
                                puVar4 = (undefined8 *)(lVar15 + -0x40 + lVar25 * 4);
                                *puVar4 = uVar39;
                                puVar4[1] = uVar5;
                                puVar4 = (undefined8 *)(lVar23 + -0x30 + lVar25 * 4);
                                uVar43 = puVar4[1];
                                puVar3 = (undefined8 *)(lVar23 + -0x20 + lVar25 * 4);
                                uVar39 = *puVar3;
                                uVar5 = puVar3[1];
                                puVar3 = (undefined8 *)(lVar15 + -0x30 + lVar25 * 4);
                                *puVar3 = *puVar4;
                                puVar3[1] = uVar43;
                                puVar4 = (undefined8 *)(lVar15 + -0x20 + lVar25 * 4);
                                *puVar4 = uVar39;
                                puVar4[1] = uVar5;
                                puVar3 = (undefined8 *)(lVar23 + -0x10 + lVar25 * 4);
                                uVar5 = puVar3[1];
                                puVar4 = (undefined8 *)(lVar23 + lVar25 * 4);
                                uVar43 = *puVar4;
                                uVar39 = puVar4[1];
                                puVar4 = (undefined8 *)(lVar15 + -0x10 + lVar25 * 4);
                                *puVar4 = *puVar3;
                                puVar4[1] = uVar5;
                                puVar4 = (undefined8 *)(lVar15 + lVar25 * 4);
                                *puVar4 = uVar43;
                                puVar4[1] = uVar39;
                                lVar25 = lVar25 + 0x20;
                                uVar26 = uVar26 - 4;
                              } while (uVar26 != 0);
                            }
                            if (uVar33 != 0) {
                              lVar1 = lVar28 + lVar25 * 4;
                              lVar25 = lVar29 + lVar25 * 4;
                              lVar12 = 0;
                              do {
                                puVar3 = (undefined8 *)(lVar25 + -0x10 + lVar12);
                                uVar5 = puVar3[1];
                                puVar4 = (undefined8 *)(lVar25 + lVar12);
                                uVar43 = *puVar4;
                                uVar39 = puVar4[1];
                                puVar4 = (undefined8 *)(lVar1 + -0x10 + lVar12);
                                *puVar4 = *puVar3;
                                puVar4[1] = uVar5;
                                puVar4 = (undefined8 *)(lVar1 + lVar12);
                                *puVar4 = uVar43;
                                puVar4[1] = uVar39;
                                lVar12 = lVar12 + 0x20;
                              } while (uVar33 * 0x20 != lVar12);
                            }
                            if (uVar32 == uVar6) goto LAB_002ef840;
                            pvVar27 = (void *)((long)pvVar27 + uVar6 * 4);
                            pvVar21 = (void *)((long)pvVar21 + uVar6 * 4);
                            uVar19 = uVar19 - uVar6;
                          }
                        }
                        lVar25 = 4;
                        do {
                          uVar19 = uVar19 - 1;
                          *(undefined4 *)((long)pvVar21 + lVar25) =
                               *(undefined4 *)((long)pvVar27 + lVar25);
                          lVar25 = lVar25 + 4;
                        } while (1 < uVar19);
                      }
                    }
LAB_002ef840:
                    lVar37 = lVar37 + 1;
                    lVar15 = lVar15 + lVar2;
                    lVar23 = lVar23 + lVar22 * 4;
                    lVar28 = lVar28 + lVar2;
                    lVar29 = lVar29 + lVar22 * 4;
                  } while (lVar37 != lVar18);
                }
                *(void **)this = pvVar11;
                *(long *)(this + 8) = lVar10;
                free(__ptr);
                *(int *)(this + 0x24) = iVar13;
                __ptr = *(void **)this;
                lVar9 = (long)(iVar13 * iVar34);
              }
              piVar8 = (int *)(lVar9 * 4 + (long)__ptr);
              *piVar8 = iVar36 + 2;
              piVar8[lVar31 * 2 + 1] = iVar35;
              piVar8[lVar31 * 2 + 2] = 0xff;
              piVar8[lVar31 * 2 + 3] = iVar16;
              piVar8[lVar31 * 2 + 4] = -0xff;
              iVar34 = iVar34 + 1;
            } while (iVar34 != iVar30);
            iVar34 = iVar30;
          }
          addEdgePointPair(this,iVar35,iVar16,iVar34,uVar42 & 0xff);
          uVar46 = _DAT_005d9a90;
          uVar47 = _UNK_005d9a94;
          uVar50 = _UNK_005d9a98;
          uVar51 = _UNK_005d9a9c;
          fVar48 = _DAT_005dd2d0;
          fVar49 = _UNK_005dd2d4;
        }
      }
    }
    if (pfVar14 + 4 == pfVar20) goto LAB_002efaaa;
    pfVar14 = pfVar14 + 4;
    iVar34 = *(int *)(this + 0x14);
  } while( true );
}


