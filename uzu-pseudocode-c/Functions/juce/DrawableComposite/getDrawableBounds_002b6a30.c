// Function : getDrawableBounds
// Namespace: juce:DrawableComposite
// Entry    : 002b6a30
// Prototype: undefined getDrawableBounds(DrawableComposite * this)
// Body     : 002b6a30 - 002b6c08


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::DrawableComposite::getDrawableBounds() const */

void __thiscall juce::DrawableComposite::getDrawableBounds(DrawableComposite *this)

{
  int iVar1;
  long lVar2;
  long lVar3;
  float *pfVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  long *plVar9;
  long lVar10;
  float fVar11;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float extraout_XMM1_Da;
  float fVar14;
  float extraout_XMM1_Db;
  float fVar17;
  float extraout_XMM1_Dc;
  float extraout_XMM1_Dd;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar18;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined1 auVar38 [16];
  float fVar44;
  float fVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  
  iVar1 = *(int *)(this + 100);
  if ((long)iVar1 != 0) {
    lVar2 = *(long *)(this + 0x58);
    lVar10 = 0;
    fVar25 = 0.0;
    fVar27 = 0.0;
    fVar29 = 0.0;
    fVar31 = 0.0;
    fVar18 = 0.0;
    fVar22 = 0.0;
    fVar23 = 0.0;
    fVar24 = 0.0;
    do {
      fVar37 = fVar18;
      fVar40 = fVar22;
      fVar42 = fVar23;
      fVar44 = fVar24;
      if (*(long *)(lVar2 + lVar10) == 0) {
        auVar20._4_4_ = fVar27;
        auVar20._0_4_ = fVar25;
        auVar20._8_4_ = fVar29;
        auVar20._12_4_ = fVar31;
      }
      else {
        plVar9 = (long *)__dynamic_cast(*(long *)(lVar2 + lVar10),&Component::typeinfo,
                                        &Drawable::typeinfo,0);
        if (plVar9 == (long *)0x0) {
          auVar20._4_4_ = fVar27;
          auVar20._0_4_ = fVar25;
          auVar20._8_4_ = fVar29;
          auVar20._12_4_ = fVar31;
        }
        else {
          lVar3 = plVar9[10];
          auVar20._0_8_ = (**(code **)(*plVar9 + 0x1a8))(plVar9);
          auVar20._8_8_ = extraout_XMM0_Qb;
          fVar37 = extraout_XMM1_Da;
          fVar40 = extraout_XMM1_Db;
          fVar42 = extraout_XMM1_Dc;
          fVar44 = extraout_XMM1_Dd;
          if (lVar3 != 0) {
            pfVar4 = (float *)plVar9[10];
            if (pfVar4 == (float *)0x0) {
              fVar40 = 0.0;
              fVar37 = 0.0;
              fVar42 = 0.0;
              fVar44 = (float)DAT_005d9960;
              fVar39 = DAT_005d9960._4_4_;
              fVar41 = _UNK_005d9968;
              fVar43 = _UNK_005d996c;
              fVar45 = DAT_005d9038;
            }
            else {
              fVar37 = pfVar4[5];
              fVar40 = pfVar4[2];
              fVar42 = pfVar4[3];
              fVar44 = pfVar4[1];
              fVar39 = pfVar4[4];
              fVar41 = 0.0;
              fVar43 = 0.0;
              fVar45 = *pfVar4;
            }
            fVar11 = (float)auVar20._0_8_;
            fVar14 = extraout_XMM1_Da + fVar11;
            fVar32 = (float)((ulong)auVar20._0_8_ >> 0x20);
            fVar17 = extraout_XMM1_Db + fVar32;
            fVar33 = fVar11 * fVar45 + fVar32 * fVar44 + fVar40;
            fVar34 = fVar11 * fVar42 + fVar32 * fVar39 + fVar37;
            fVar35 = fVar11 * 0.0 + fVar32 * fVar41 + 0.0;
            fVar36 = fVar11 * 0.0 + fVar32 * fVar43 + 0.0;
            fVar26 = fVar32 * fVar44 + fVar14 * fVar45 + fVar40;
            fVar28 = fVar32 * fVar39 + fVar14 * fVar42 + fVar37;
            fVar30 = fVar32 * fVar41 + fVar14 * 0.0 + 0.0;
            fVar32 = fVar32 * fVar43 + fVar14 * 0.0 + 0.0;
            auVar12._0_4_ = fVar11 * fVar45 + fVar17 * fVar44 + fVar40;
            auVar12._4_4_ = fVar11 * fVar42 + fVar17 * fVar39 + fVar37;
            auVar12._8_4_ = fVar11 * 0.0 + fVar17 * fVar41 + 0.0;
            auVar12._12_4_ = fVar11 * 0.0 + fVar17 * fVar43 + 0.0;
            auVar15._0_8_ =
                 CONCAT44(fVar17 * fVar39 + fVar14 * fVar42 + fVar37,
                          fVar17 * fVar44 + fVar14 * fVar45 + fVar40);
            auVar15._8_4_ = fVar17 * fVar41 + fVar14 * 0.0 + 0.0;
            auVar15._12_4_ = fVar17 * fVar43 + fVar14 * 0.0 + 0.0;
            auVar19._8_4_ = auVar15._8_4_;
            auVar19._0_8_ = auVar15._0_8_;
            auVar19._12_4_ = auVar15._12_4_;
            auVar20 = minps(auVar19,auVar12);
            auVar46._8_4_ = auVar15._8_4_;
            auVar46._0_8_ = auVar15._0_8_;
            auVar46._12_4_ = auVar15._12_4_;
            auVar47 = maxps(auVar46,auVar12);
            auVar49._8_4_ = auVar15._8_4_;
            auVar49._0_8_ = auVar15._0_8_;
            auVar49._12_4_ = auVar15._12_4_;
            auVar50._4_4_ = fVar28;
            auVar50._0_4_ = fVar26;
            auVar50._8_4_ = fVar30;
            auVar50._12_4_ = fVar32;
            auVar50 = minps(auVar49,auVar50);
            auVar21._0_4_ = auVar20._0_4_ & -(uint)(auVar12._0_4_ < fVar26);
            auVar21._4_4_ = auVar20._4_4_ & -(uint)(auVar12._4_4_ < fVar28);
            auVar21._8_4_ = auVar20._8_4_ & -(uint)(auVar12._8_4_ < fVar30);
            auVar21._12_4_ = auVar20._12_4_ & -(uint)(auVar12._12_4_ < fVar32);
            auVar13._0_4_ = ~-(uint)(auVar12._0_4_ < fVar26) & auVar50._0_4_;
            auVar13._4_4_ = ~-(uint)(auVar12._4_4_ < fVar28) & auVar50._4_4_;
            auVar13._8_4_ = ~-(uint)(auVar12._8_4_ < fVar30) & auVar50._8_4_;
            auVar13._12_4_ = ~-(uint)(auVar12._12_4_ < fVar32) & auVar50._12_4_;
            auVar6._4_4_ = fVar34;
            auVar6._0_4_ = fVar33;
            auVar6._8_4_ = fVar35;
            auVar6._12_4_ = fVar36;
            auVar20 = minps(auVar13 | auVar21,auVar6);
            auVar5._4_4_ = fVar28;
            auVar5._0_4_ = fVar26;
            auVar5._8_4_ = fVar30;
            auVar5._12_4_ = fVar32;
            auVar50 = maxps(auVar15,auVar5);
            auVar48._0_4_ = auVar47._0_4_ & -(uint)(fVar26 < auVar12._0_4_);
            auVar48._4_4_ = auVar47._4_4_ & -(uint)(fVar28 < auVar12._4_4_);
            auVar48._8_4_ = auVar47._8_4_ & -(uint)(fVar30 < auVar12._8_4_);
            auVar48._12_4_ = auVar47._12_4_ & -(uint)(fVar32 < auVar12._12_4_);
            auVar38._0_4_ = ~-(uint)(fVar26 < auVar12._0_4_) & auVar50._0_4_;
            auVar38._4_4_ = ~-(uint)(fVar28 < auVar12._4_4_) & auVar50._4_4_;
            auVar38._8_4_ = ~-(uint)(fVar30 < auVar12._8_4_) & auVar50._8_4_;
            auVar38._12_4_ = ~-(uint)(fVar32 < auVar12._12_4_) & auVar50._12_4_;
            auVar47._4_4_ = fVar34;
            auVar47._0_4_ = fVar33;
            auVar47._8_4_ = fVar35;
            auVar47._12_4_ = fVar36;
            auVar50 = maxps(auVar38 | auVar48,auVar47);
            fVar37 = auVar50._0_4_ - auVar20._0_4_;
            fVar40 = auVar50._4_4_ - auVar20._4_4_;
            fVar42 = auVar50._8_4_ - auVar20._8_4_;
            fVar44 = auVar50._12_4_ - auVar20._12_4_;
          }
          if ((fVar37 <= 0.0) || (fVar40 <= 0.0)) {
            auVar20._4_4_ = fVar27;
            auVar20._0_4_ = fVar25;
            auVar20._8_4_ = fVar29;
            auVar20._12_4_ = fVar31;
            fVar37 = fVar18;
            fVar40 = fVar22;
            fVar42 = fVar23;
            fVar44 = fVar24;
          }
          else if ((0.0 < fVar18) && (0.0 < fVar22)) {
            auVar16._0_4_ = fVar37 + auVar20._0_4_;
            auVar16._4_4_ = fVar40 + auVar20._4_4_;
            auVar16._8_4_ = fVar42 + auVar20._8_4_;
            auVar16._12_4_ = fVar44 + auVar20._12_4_;
            auVar8._4_4_ = fVar27;
            auVar8._0_4_ = fVar25;
            auVar8._8_4_ = fVar29;
            auVar8._12_4_ = fVar31;
            auVar20 = minps(auVar20,auVar8);
            auVar7._4_4_ = fVar22 + fVar27;
            auVar7._0_4_ = fVar18 + fVar25;
            auVar7._8_4_ = fVar23 + fVar29;
            auVar7._12_4_ = fVar24 + fVar31;
            auVar50 = maxps(auVar16,auVar7);
            fVar37 = auVar50._0_4_ - auVar20._0_4_;
            fVar40 = auVar50._4_4_ - auVar20._4_4_;
            fVar42 = auVar50._8_4_ - auVar20._8_4_;
            fVar44 = auVar50._12_4_ - auVar20._12_4_;
          }
        }
      }
      lVar10 = lVar10 + 8;
      fVar25 = auVar20._0_4_;
      fVar27 = auVar20._4_4_;
      fVar29 = auVar20._8_4_;
      fVar31 = auVar20._12_4_;
      fVar18 = fVar37;
      fVar22 = fVar40;
      fVar23 = fVar42;
      fVar24 = fVar44;
    } while ((long)iVar1 * 8 != lVar10);
  }
  return;
}


