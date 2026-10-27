// Function : EdgeTable
// Namespace: juce:EdgeTable
// Entry    : 002ecae0
// Prototype: undefined EdgeTable(EdgeTable * this, undefined8 param_1, undefined8 param_2, undefined8 * param_3, float * param_4)
// Body     : 002ecae0 - 002ed3b3


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::EdgeTable::EdgeTable(juce::Rectangle<int>, juce::Path const&, juce::AffineTransform const&)
    */

void __thiscall
juce::EdgeTable::EdgeTable
          (EdgeTable *this,undefined8 param_1,undefined8 param_2,undefined8 *param_3,float *param_4)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  int iVar6;
  double dVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  void *pvVar13;
  undefined8 uVar14;
  int *piVar15;
  long lVar16;
  void *pvVar17;
  long lVar18;
  int iVar19;
  undefined4 *puVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  int iVar26;
  int iVar27;
  long lVar28;
  ulong uVar29;
  long lVar30;
  long lVar31;
  ulong uVar32;
  void *pvVar33;
  uint uVar34;
  ulong uVar35;
  long lVar36;
  ulong uVar37;
  ulong uVar38;
  long lVar39;
  long lVar40;
  ulong uVar41;
  ulong uVar42;
  long lVar43;
  long lVar44;
  ulong uVar45;
  ulong uVar46;
  int iVar47;
  long lVar48;
  ulong uVar49;
  float fVar50;
  void *local_180;
  float local_b0;
  float local_ac;
  undefined8 local_a8;
  undefined1 local_a0;
  undefined4 local_9c;
  undefined8 *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined1 local_64;
  void *local_60;
  void *local_58;
  undefined8 local_50;
  double local_48;
  undefined8 uStack_40;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = param_1;
  *(undefined8 *)(this + 0x18) = param_2;
  dVar7 = (double)*(int *)((long)param_3 + 0xc);
  if (dVar7 < 0.0) {
    dVar7 = sqrt(dVar7);
  }
  else {
    dVar7 = SQRT(dVar7);
  }
  iVar19 = 0x10;
  if (0x10 < (int)dVar7 * 4) {
    iVar19 = (int)dVar7 * 4;
  }
  *(int *)(this + 0x20) = iVar19;
  iVar10 = iVar19 * 2 + 1;
  *(int *)(this + 0x24) = iVar10;
  this[0x28] = (EdgeTable)0x1;
  iVar19 = *(int *)(this + 0x1c);
  if (*(int *)(this + 0x1c) < 0) {
    iVar19 = 0;
  }
  uVar35 = (ulong)(uint)((iVar19 + 2) * iVar10);
  pvVar13 = malloc(uVar35 * 4);
  pvVar17 = *(void **)this;
  *(void **)this = pvVar13;
  *(ulong *)(this + 8) = uVar35;
  free(pvVar17);
  uVar11 = *(uint *)(this + 0x1c);
  if (0 < (int)uVar11) {
    puVar20 = *(undefined4 **)this;
    uVar1 = uVar11 - 1;
    uVar34 = uVar11 & 7;
    if (uVar34 != 0) {
      uVar11 = uVar11 & 0xfffffff8;
      do {
        *puVar20 = 0;
        puVar20 = puVar20 + *(int *)(this + 0x24);
        uVar34 = uVar34 - 1;
      } while (uVar34 != 0);
    }
    if (6 < uVar1) {
      uVar11 = uVar11 - 1;
      do {
        *puVar20 = 0;
        lVar28 = (long)*(int *)(this + 0x24);
        puVar20[lVar28] = 0;
        lVar21 = (long)*(int *)(this + 0x24);
        puVar20[lVar28 + lVar21] = 0;
        lVar22 = (long)*(int *)(this + 0x24);
        puVar20[lVar28 + lVar21 + lVar22] = 0;
        lVar23 = (long)*(int *)(this + 0x24);
        puVar20[lVar28 + lVar21 + lVar22 + lVar23] = 0;
        lVar24 = (long)*(int *)(this + 0x24);
        puVar20[lVar28 + lVar21 + lVar22 + lVar23 + lVar24] = 0;
        lVar25 = (long)*(int *)(this + 0x24);
        puVar20[lVar28 + lVar21 + lVar22 + lVar23 + lVar24 + lVar25] = 0;
        iVar19 = *(int *)(this + 0x24);
        puVar20[lVar28 + lVar21 + lVar22 + lVar23 + lVar24 + lVar25 + iVar19] = 0;
        puVar20 = puVar20 + lVar28 + lVar21 + lVar22 + lVar23 + lVar24 + lVar25 + (long)iVar19 +
                                                                                  (long)*(int *)(
                                                  this + 0x24);
        uVar11 = uVar11 - 8;
      } while (uVar11 < 0xfffffffe);
    }
    uVar11 = *(uint *)(this + 0x1c);
  }
  iVar19 = *(int *)(this + 0x14);
  lVar22 = (long)*(int *)(this + 0x10) << 8;
  lVar21 = ((long)*(int *)(this + 0x18) + (long)*(int *)(this + 0x10)) * 0x100;
  local_a0 = 0;
  local_a8 = 0;
  local_9c = 0xffffffff;
  local_90 = *(undefined8 *)param_4;
  uStack_88 = *(undefined8 *)(param_4 + 2);
  local_80 = *(undefined8 *)(param_4 + 4);
  local_78 = *param_3;
  local_70 = 0x3eb851ec;
  local_68 = 0;
  local_64 = (param_4[5] == 0.0 && param_4[4] == DAT_005d9038) &&
             ((param_4[3] == 0.0 && param_4[2] == 0.0) &&
             (param_4[1] == 0.0 && *param_4 == DAT_005d9038));
  local_98 = param_3;
  local_60 = malloc(0x80);
  local_50 = 0x20;
  local_58 = local_60;
  do {
    do {
      do {
        uVar14 = PathFlatteningIterator::next((PathFlatteningIterator *)&local_b0);
        if ((char)uVar14 == '\0') {
          sanitiseLevels(this,*(char *)(param_3 + 4));
          free(local_60);
          return;
        }
        lVar23 = (long)(local_ac * DAT_005de53c +
                       (float)(~-(uint)(0.0 <= local_ac) & DAT_005d98c8 |
                              -(uint)(0.0 <= local_ac) & DAT_005d9044));
        lVar24 = (long)(local_a8._4_4_ * DAT_005de53c +
                       (float)(~-(uint)(0.0 <= local_a8._4_4_) & DAT_005d98c8 |
                              -(uint)(0.0 <= local_a8._4_4_) & DAT_005d9044));
      } while (lVar23 == lVar24);
      uVar29 = lVar23 + (long)iVar19 * -0x100;
      uVar41 = lVar24 + (long)iVar19 * -0x100;
      uVar42 = uVar41;
      uVar35 = uVar29;
      if (lVar24 < lVar23) {
        uVar42 = uVar29;
        uVar35 = uVar41;
      }
      if ((long)uVar35 < 0) {
        uVar35 = 0;
      }
      if ((long)(int)uVar11 << 8 < (long)uVar42) {
        uVar42 = (long)(int)uVar11 << 8;
      }
    } while ((long)uVar42 <= (long)uVar35);
    fVar50 = local_b0 * DAT_005de53c;
    dVar7 = (double)(((float)local_a8 - local_b0) / (local_a8._4_4_ - local_ac));
    uVar41 = 0x100 / (long)((int)(double)CONCAT44((uint)((ulong)dVar7 >> 0x20) & _UNK_005d91b4,
                                                  SUB84(dVar7,0) & _DAT_005d91b0) + 1);
    uVar49 = uVar41 & 0xffffffff;
    if ((int)uVar41 < 1) {
      uVar49 = 1;
    }
    local_180 = *(void **)this;
    uStack_40 = 0;
    local_48 = dVar7;
    do {
      uVar41 = 0x100 - (uVar35 & 0xff);
      if ((long)(uVar42 - uVar35) <= (long)uVar41) {
        uVar41 = uVar42 - uVar35;
      }
      if ((long)uVar49 <= (long)uVar41) {
        uVar41 = uVar49;
      }
      lVar28 = (long)((double)(long)((uVar35 - uVar29) + ((long)uVar41 >> 1)) * dVar7 +
                     (double)fVar50);
      lVar25 = lVar21;
      if (lVar28 <= lVar21) {
        lVar25 = lVar28;
      }
      iVar10 = (int)lVar22;
      if (lVar22 <= lVar28) {
        iVar10 = (int)lVar25;
      }
      uVar38 = uVar35 + 0xff;
      if (-1 < (long)uVar35) {
        uVar38 = uVar35;
      }
      iVar26 = -(int)uVar41;
      if (lVar24 < lVar23) {
        iVar26 = (int)uVar41;
      }
      lVar28 = (long)*(int *)(this + 0x24);
      iVar47 = (int)(uVar38 >> 8);
      lVar25 = iVar47 * lVar28;
      iVar6 = *(int *)((long)local_180 + lVar25 * 4);
      lVar44 = (long)iVar6;
      if (iVar6 < *(int *)(this + 0x20)) {
        piVar15 = (int *)(lVar25 * 4 + (long)local_180);
      }
      else {
        if (*(int *)(this + 0x20) == iVar6 * 2) {
        }
        else {
          *(int *)(this + 0x20) = iVar6 * 2;
          lVar25 = lVar44 * 4 + 1;
          lVar31 = (long)*(int *)(this + 0x1c);
          iVar12 = 0;
          if (0 < lVar31) {
            iVar12 = *(int *)(this + 0x1c);
          }
          iVar27 = (int)lVar25;
          lVar16 = (long)((iVar12 + 2) * iVar27);
          pvVar17 = malloc(lVar16 * 4);
          if (lVar31 != 0) {
            lVar4 = lVar25 * 4;
            lVar30 = (long)pvVar17 + 0x74;
            lVar36 = (long)local_180 + 0x74;
            lVar40 = (long)pvVar17 + 0x14;
            lVar43 = (long)local_180 + 0x14;
            lVar39 = 0;
            do {
              lVar48 = lVar39 * lVar28;
              iVar12 = *(int *)((long)local_180 + lVar48 * 4);
              uVar38 = (long)iVar12 * 8 + 4;
              if (0 < (long)uVar38) {
                *(int *)((long)pvVar17 + lVar39 * lVar25 * 4) = iVar12;
                if (4 < uVar38) {
                  pvVar13 = (void *)((long)local_180 + lVar48 * 4);
                  pvVar33 = (void *)((long)pvVar17 + lVar39 * lVar25 * 4);
                  uVar32 = uVar38 >> 2;
                  uVar46 = uVar32 - (uVar32 != 1);
                  if (7 < uVar46) {
                    uVar45 = (long)pvVar17 + lVar4 * lVar39 + 4;
                    uVar37 = (long)local_180 + lVar48 * 4 + 4;
                    if ((uVar37 + uVar46 * 4 <= uVar45) ||
                       ((uVar38 + (ulong)(uVar32 == 1) * 4 + uVar45) - 4 <= uVar37)) {
                      uVar45 = uVar46 & 0xfffffffffffffff8;
                      uVar38 = (uVar45 - 8 >> 3) + 1;
                      uVar37 = (ulong)((uint)uVar38 & 3);
                      if (uVar45 - 8 < 0x18) {
                        lVar48 = 0;
                      }
                      else {
                        uVar38 = uVar38 & 0xfffffffffffffffc;
                        lVar48 = 0;
                        do {
                          puVar3 = (undefined8 *)(lVar36 + -0x70 + lVar48 * 4);
                          uVar14 = puVar3[1];
                          puVar5 = (undefined8 *)(lVar36 + -0x60 + lVar48 * 4);
                          uVar8 = *puVar5;
                          uVar9 = puVar5[1];
                          puVar5 = (undefined8 *)(lVar30 + -0x70 + lVar48 * 4);
                          *puVar5 = *puVar3;
                          puVar5[1] = uVar14;
                          puVar3 = (undefined8 *)(lVar30 + -0x60 + lVar48 * 4);
                          *puVar3 = uVar8;
                          puVar3[1] = uVar9;
                          puVar3 = (undefined8 *)(lVar36 + -0x50 + lVar48 * 4);
                          uVar14 = puVar3[1];
                          puVar5 = (undefined8 *)(lVar36 + -0x40 + lVar48 * 4);
                          uVar8 = *puVar5;
                          uVar9 = puVar5[1];
                          puVar5 = (undefined8 *)(lVar30 + -0x50 + lVar48 * 4);
                          *puVar5 = *puVar3;
                          puVar5[1] = uVar14;
                          puVar3 = (undefined8 *)(lVar30 + -0x40 + lVar48 * 4);
                          *puVar3 = uVar8;
                          puVar3[1] = uVar9;
                          puVar3 = (undefined8 *)(lVar36 + -0x30 + lVar48 * 4);
                          uVar14 = puVar3[1];
                          puVar5 = (undefined8 *)(lVar36 + -0x20 + lVar48 * 4);
                          uVar8 = *puVar5;
                          uVar9 = puVar5[1];
                          puVar5 = (undefined8 *)(lVar30 + -0x30 + lVar48 * 4);
                          *puVar5 = *puVar3;
                          puVar5[1] = uVar14;
                          puVar3 = (undefined8 *)(lVar30 + -0x20 + lVar48 * 4);
                          *puVar3 = uVar8;
                          puVar3[1] = uVar9;
                          puVar5 = (undefined8 *)(lVar36 + -0x10 + lVar48 * 4);
                          uVar14 = puVar5[1];
                          puVar3 = (undefined8 *)(lVar36 + lVar48 * 4);
                          uVar8 = *puVar3;
                          uVar9 = puVar3[1];
                          puVar3 = (undefined8 *)(lVar30 + -0x10 + lVar48 * 4);
                          *puVar3 = *puVar5;
                          puVar3[1] = uVar14;
                          puVar3 = (undefined8 *)(lVar30 + lVar48 * 4);
                          *puVar3 = uVar8;
                          puVar3[1] = uVar9;
                          lVar48 = lVar48 + 0x20;
                          uVar38 = uVar38 - 4;
                        } while (uVar38 != 0);
                      }
                      if (uVar37 != 0) {
                        lVar2 = lVar40 + lVar48 * 4;
                        lVar48 = lVar43 + lVar48 * 4;
                        lVar18 = 0;
                        do {
                          puVar5 = (undefined8 *)(lVar48 + -0x10 + lVar18);
                          uVar14 = puVar5[1];
                          puVar3 = (undefined8 *)(lVar48 + lVar18);
                          uVar8 = *puVar3;
                          uVar9 = puVar3[1];
                          puVar3 = (undefined8 *)(lVar2 + -0x10 + lVar18);
                          *puVar3 = *puVar5;
                          puVar3[1] = uVar14;
                          puVar3 = (undefined8 *)(lVar2 + lVar18);
                          *puVar3 = uVar8;
                          puVar3[1] = uVar9;
                          lVar18 = lVar18 + 0x20;
                        } while (uVar37 * 0x20 != lVar18);
                      }
                      if (uVar46 == uVar45) goto LAB_002ed0e0;
                      pvVar13 = (void *)((long)pvVar13 + uVar45 * 4);
                      pvVar33 = (void *)((long)pvVar33 + uVar45 * 4);
                      uVar32 = uVar32 - uVar45;
                    }
                  }
                  lVar48 = 4;
                  do {
                    uVar32 = uVar32 - 1;
                    *(undefined4 *)((long)pvVar33 + lVar48) =
                         *(undefined4 *)((long)pvVar13 + lVar48);
                    lVar48 = lVar48 + 4;
                  } while (1 < uVar32);
                }
              }
LAB_002ed0e0:
              lVar39 = lVar39 + 1;
              lVar30 = lVar30 + lVar4;
              lVar36 = lVar36 + lVar28 * 4;
              lVar40 = lVar40 + lVar4;
              lVar43 = lVar43 + lVar28 * 4;
            } while (lVar39 != lVar31);
          }
          *(void **)this = pvVar17;
          *(long *)(this + 8) = lVar16;
          free(local_180);
          *(int *)(this + 0x24) = iVar27;
          local_180 = *(void **)this;
          lVar25 = (long)(iVar47 * iVar27);
          dVar7 = local_48;
        }
        piVar15 = (int *)((long)local_180 + lVar25 * 4);
      }
      *piVar15 = iVar6 + 1;
      piVar15[lVar44 * 2 + 1] = iVar10;
      piVar15[lVar44 * 2 + 2] = iVar26;
      uVar35 = uVar35 + uVar41;
    } while ((long)uVar35 < (long)uVar42);
  } while( true );
}


