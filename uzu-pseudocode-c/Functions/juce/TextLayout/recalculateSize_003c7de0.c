// Function : recalculateSize
// Namespace: juce:TextLayout
// Entry    : 003c7de0
// Prototype: undefined recalculateSize(TextLayout * this)
// Body     : 003c7de0 - 003c810f


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::TextLayout::recalculateSize() */

void __thiscall juce::TextLayout::recalculateSize(TextLayout *this)

{
  long *plVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  bool bVar12;
  long lVar13;
  long *plVar14;
  bool bVar15;
  long *plVar16;
  float fVar17;
  float fVar20;
  float fVar21;
  undefined1 auVar18 [16];
  float fVar22;
  undefined1 auVar19 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar30;
  float fVar31;
  undefined1 auVar29 [16];
  float fVar32;
  float fVar36;
  float fVar37;
  undefined1 auVar33 [16];
  float fVar38;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  
  lVar13 = (long)*(int *)(this + 0xc);
  if (lVar13 == 0) {
    *(undefined4 *)(this + 0x10) = 0;
    fVar20 = 0.0;
    goto LAB_003c8104;
  }
  if (*(int *)(this + 0xc) < 1) {
    plVar14 = (long *)0x0;
    lVar9 = (long)_DAT_0000000c;
    if (lVar9 != 0) goto LAB_003c7e0f;
LAB_003c7ef8:
    fVar26 = 0.0;
    fVar31 = 0.0;
    fVar20 = 0.0;
  }
  else {
    plVar14 = (long *)**(long **)this;
    lVar9 = (long)*(int *)((long)plVar14 + 0xc);
    if (lVar9 == 0) goto LAB_003c7ef8;
LAB_003c7e0f:
    plVar8 = (long *)*plVar14;
    plVar16 = plVar8 + lVar9;
    bVar15 = true;
    fVar28 = 0.0;
    fVar20 = 0.0;
LAB_003c7e4d:
    do {
      lVar9 = (long)*(int *)(*plVar8 + 0x1c);
      fVar26 = 0.0;
      fVar27 = 0.0;
      if (lVar9 != 0) {
        lVar2 = *(long *)(*plVar8 + 0x10);
        lVar9 = lVar9 * 0x10;
        bVar12 = true;
        lVar11 = 0;
        fVar31 = 0.0;
        fVar17 = 0.0;
        do {
          while( true ) {
            fVar26 = *(float *)(lVar2 + 4 + lVar11);
            fVar27 = *(float *)(lVar2 + 0xc + lVar11) + fVar26;
            if (fVar27 <= fVar26) {
              fVar27 = fVar26;
            }
            if (!bVar12) break;
            bVar12 = false;
            lVar11 = lVar11 + 0x10;
            fVar31 = fVar26;
            fVar17 = fVar27;
            if (lVar9 == lVar11) goto LAB_003c7eba;
          }
          if (fVar31 <= fVar26) {
            fVar26 = fVar31;
          }
          if (fVar27 <= fVar17) {
            fVar27 = fVar17;
          }
          if (fVar27 <= fVar26) {
            fVar27 = fVar26;
          }
          lVar11 = lVar11 + 0x10;
          fVar31 = fVar26;
          fVar17 = fVar27;
        } while (lVar9 != lVar11);
      }
LAB_003c7eba:
      fVar31 = 0.0;
      if (!bVar15) {
        if (fVar28 <= fVar26) {
          fVar26 = fVar28;
        }
        fVar28 = fVar27;
        if (fVar27 <= fVar20) {
          fVar28 = fVar20;
        }
        fVar20 = fVar28;
        if (fVar28 <= fVar26) {
          fVar20 = fVar26;
        }
        plVar8 = plVar8 + 1;
        fVar31 = fVar27;
        fVar28 = fVar26;
        if (plVar8 == plVar16) break;
        goto LAB_003c7e4d;
      }
      bVar15 = false;
      plVar8 = plVar8 + 1;
      fVar20 = fVar27;
      fVar28 = fVar26;
    } while (plVar8 != plVar16);
  }
  fVar28 = (float)plVar14[3];
  fVar27 = (float)((ulong)plVar14[3] >> 0x20);
  auVar35._0_4_ = fVar20 + fVar28;
  auVar35._4_4_ = *(float *)((long)plVar14 + 0x24) + fVar27;
  auVar35._8_4_ = fVar20 + 0.0;
  auVar35._12_4_ = fVar20 + 0.0;
  fVar28 = fVar28 + fVar26;
  fVar26 = fVar31 + 0.0;
  fVar31 = fVar31 + 0.0;
  fVar27 = fVar27 - *(float *)(plVar14 + 4);
  plVar14 = *(long **)this;
  auVar18._4_4_ = fVar27;
  auVar18._0_4_ = fVar28;
  auVar18._8_4_ = fVar26;
  auVar18._12_4_ = fVar31;
  auVar18 = maxps(auVar35,auVar18);
  fVar17 = auVar18._0_4_ - fVar28;
  fVar20 = auVar18._4_4_ - fVar27;
  fVar21 = auVar18._8_4_ - fVar26;
  fVar22 = auVar18._12_4_ - fVar31;
  plVar16 = plVar14;
  do {
    plVar8 = (long *)*plVar16;
    if ((long)*(int *)((long)plVar8 + 0xc) == 0) {
      fVar23 = 0.0;
      fVar43 = 0.0;
      fVar24 = 0.0;
    }
    else {
      plVar10 = (long *)*plVar8;
      plVar1 = plVar10 + *(int *)((long)plVar8 + 0xc);
      bVar15 = true;
      fVar25 = 0.0;
      fVar24 = 0.0;
LAB_003c7fbd:
      do {
        lVar9 = (long)*(int *)(*plVar10 + 0x1c);
        fVar23 = 0.0;
        fVar40 = 0.0;
        if (lVar9 != 0) {
          lVar2 = *(long *)(*plVar10 + 0x10);
          lVar9 = lVar9 * 0x10;
          bVar12 = true;
          lVar11 = 0;
          fVar43 = 0.0;
          fVar30 = 0.0;
          do {
            while( true ) {
              fVar23 = *(float *)(lVar2 + 4 + lVar11);
              fVar40 = *(float *)(lVar2 + 0xc + lVar11) + fVar23;
              if (fVar40 <= fVar23) {
                fVar40 = fVar23;
              }
              if (bVar12) break;
              if (fVar43 <= fVar23) {
                fVar23 = fVar43;
              }
              if (fVar40 <= fVar30) {
                fVar40 = fVar30;
              }
              if (fVar40 <= fVar23) {
                fVar40 = fVar23;
              }
              lVar11 = lVar11 + 0x10;
              fVar43 = fVar23;
              fVar30 = fVar40;
              if (lVar9 == lVar11) goto LAB_003c802a;
            }
            bVar12 = false;
            lVar11 = lVar11 + 0x10;
            fVar43 = fVar23;
            fVar30 = fVar40;
          } while (lVar9 != lVar11);
        }
LAB_003c802a:
        fVar43 = 0.0;
        if (!bVar15) {
          if (fVar25 <= fVar23) {
            fVar23 = fVar25;
          }
          fVar43 = fVar40;
          if (fVar40 <= fVar24) {
            fVar43 = fVar24;
          }
          fVar24 = fVar43;
          if (fVar43 <= fVar23) {
            fVar24 = fVar23;
          }
          plVar10 = plVar10 + 1;
          fVar43 = fVar40;
          fVar25 = fVar23;
          if (plVar10 == plVar1) break;
          goto LAB_003c7fbd;
        }
        bVar15 = false;
        plVar10 = plVar10 + 1;
        fVar24 = fVar40;
        fVar25 = fVar23;
      } while (plVar10 != plVar1);
    }
    fVar41 = (float)plVar8[3];
    fVar39 = (float)((ulong)plVar8[3] >> 0x20);
    auVar33._0_4_ = fVar24 + fVar41;
    auVar33._4_4_ = *(float *)((long)plVar8 + 0x24) + fVar39;
    auVar33._8_4_ = fVar24 + 0.0;
    auVar33._12_4_ = fVar24 + 0.0;
    fVar41 = fVar41 + fVar23;
    fVar42 = fVar43 + 0.0;
    fVar43 = fVar43 + 0.0;
    fVar39 = fVar39 - *(float *)(plVar8 + 4);
    auVar4._4_4_ = fVar39;
    auVar4._0_4_ = fVar41;
    auVar4._8_4_ = fVar42;
    auVar4._12_4_ = fVar43;
    auVar18 = maxps(auVar33,auVar4);
    fVar32 = auVar18._0_4_ - fVar41;
    fVar36 = auVar18._4_4_ - fVar39;
    fVar37 = auVar18._8_4_ - fVar42;
    fVar38 = auVar18._12_4_ - fVar43;
    fVar23 = fVar28;
    fVar24 = fVar27;
    fVar25 = fVar26;
    fVar40 = fVar31;
    fVar30 = fVar17;
    fVar5 = fVar20;
    fVar6 = fVar21;
    fVar7 = fVar22;
    if ((((0.0 < fVar32) && (0.0 < fVar36)) &&
        (fVar23 = fVar41, fVar24 = fVar39, fVar25 = fVar42, fVar40 = fVar43, fVar30 = fVar32,
        fVar5 = fVar36, fVar6 = fVar37, fVar7 = fVar38, 0.0 < fVar17)) && (0.0 < fVar20)) {
      auVar29._4_4_ = fVar39;
      auVar29._0_4_ = fVar41;
      auVar29._8_4_ = fVar42;
      auVar29._12_4_ = fVar43;
      auVar3._4_4_ = fVar27;
      auVar3._0_4_ = fVar28;
      auVar3._8_4_ = fVar26;
      auVar3._12_4_ = fVar31;
      auVar18 = minps(auVar29,auVar3);
      auVar19._0_4_ = fVar17 + fVar28;
      auVar19._4_4_ = fVar20 + fVar27;
      auVar19._8_4_ = fVar21 + fVar26;
      auVar19._12_4_ = fVar22 + fVar31;
      auVar34._0_4_ = fVar32 + fVar41;
      auVar34._4_4_ = fVar36 + fVar39;
      auVar34._8_4_ = fVar37 + fVar42;
      auVar34._12_4_ = fVar38 + fVar43;
      auVar35 = maxps(auVar34,auVar19);
      fVar23 = auVar18._0_4_;
      fVar24 = auVar18._4_4_;
      fVar25 = auVar18._8_4_;
      fVar40 = auVar18._12_4_;
      fVar30 = auVar35._0_4_ - auVar18._0_4_;
      fVar5 = auVar35._4_4_ - auVar18._4_4_;
      fVar6 = auVar35._8_4_ - auVar18._8_4_;
      fVar7 = auVar35._12_4_ - auVar18._12_4_;
    }
    fVar22 = fVar7;
    fVar21 = fVar6;
    fVar20 = fVar5;
    fVar17 = fVar30;
    plVar16 = plVar16 + 1;
    fVar28 = fVar23;
    fVar27 = fVar24;
    fVar26 = fVar25;
    fVar31 = fVar40;
  } while (plVar16 != plVar14 + lVar13);
  lVar9 = 0;
  do {
    *(float *)(*(long *)((long)plVar14 + lVar9) + 0x18) =
         *(float *)(*(long *)((long)plVar14 + lVar9) + 0x18) - fVar23;
    lVar9 = lVar9 + 8;
  } while (lVar13 * 8 != lVar9);
  *(float *)(this + 0x10) = fVar17;
LAB_003c8104:
  *(float *)(this + 0x14) = fVar20;
  return;
}


