// Function : reversescalarover_perf8
// Namespace: 
// Entry    : 00588580
// Prototype: long reversescalarover_perf8(long param_1)
// Body     : 00588580 - 005889c7


long reversescalarover_perf8(long param_1)

{
  uint *puVar1;
  float *pfVar2;
  float fVar3;
  ulong uVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  long lVar31;
  int iVar32;
  uint uVar33;
  ulong uVar34;
  undefined1 auVar35 [16];
  undefined1 auVar37 [16];
  undefined1 auVar36 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar40;
  float fVar41;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  undefined1 in_XMM3 [16];
  undefined1 auVar55 [16];
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  float fVar85;
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  float fStack_5c;
  
  iVar32 = (int)*(undefined8 *)(param_1 + 0x20);
  if (iVar32 != 0) {
    fVar3 = **(float **)(param_1 + 0x10);
    uVar4 = *(ulong *)(param_1 + 8);
    uVar5 = *(ulong *)(param_1 + 0x18);
    uVar33 = iVar32 - 8U >> 3;
    if ((uVar33 < 3) ||
       ((uVar28 = (ulong)(iVar32 - 8U & 0xfffffff8), uVar5 < uVar4 + uVar28 * 4 + 0x20 &&
        (uVar4 < uVar5 + uVar28 * 4 + 0x20)))) {
      uVar28 = uVar4;
      uVar30 = uVar5;
    }
    else {
      uVar34 = (ulong)uVar33 + 1;
      uVar33 = (uint)uVar34 & 0xfffffffc;
      lVar31 = (ulong)uVar33 * 0x20;
      uVar28 = uVar4 + lVar31;
      uVar30 = uVar5 + lVar31;
      iVar32 = iVar32 + uVar33 * -8;
      uVar29 = 0;
      do {
        auVar84 = *(undefined1 (*) [16])(uVar4 + 0x50 + uVar29);
        fVar56 = auVar84._0_4_;
        fVar59 = auVar84._4_4_;
        fVar62 = auVar84._8_4_;
        pfVar2 = (float *)(uVar4 + 0x70 + uVar29);
        fVar8 = *pfVar2;
        fVar9 = pfVar2[1];
        fVar10 = pfVar2[2];
        fVar11 = pfVar2[3];
        pfVar2 = (float *)(uVar4 + uVar29);
        fVar12 = *pfVar2;
        fVar13 = pfVar2[1];
        fVar14 = pfVar2[2];
        fVar15 = pfVar2[3];
        pfVar2 = (float *)(uVar4 + 0x10 + uVar29);
        fVar16 = *pfVar2;
        fVar17 = pfVar2[1];
        fVar18 = pfVar2[2];
        fVar19 = pfVar2[3];
        pfVar2 = (float *)(uVar4 + 0x20 + uVar29);
        fVar20 = *pfVar2;
        fVar21 = pfVar2[1];
        fVar22 = pfVar2[2];
        fVar23 = pfVar2[3];
        auVar80 = *(undefined1 (*) [16])(uVar4 + 0x40 + uVar29);
        fVar57 = auVar80._0_4_;
        fVar60 = auVar80._4_4_;
        fVar63 = auVar80._8_4_;
        auVar55 = *(undefined1 (*) [16])(uVar4 + 0x60 + uVar29);
        fVar58 = auVar55._0_4_;
        fVar61 = auVar55._4_4_;
        fVar6 = auVar55._8_4_;
        fVar7 = auVar55._12_4_;
        auVar82._8_8_ = auVar80._0_8_;
        auVar82._0_8_ = auVar55._0_8_;
        auVar35._4_4_ = fVar20;
        auVar35._0_4_ = fVar12;
        auVar35._8_4_ = fVar57;
        auVar35._12_4_ = fVar58;
        auVar35 = rcpps(auVar82,auVar35);
        fVar64 = fVar3 * auVar35._0_4_;
        fVar65 = fVar3 * auVar35._4_4_;
        fVar66 = fVar3 * auVar35._8_4_;
        fVar67 = fVar3 * auVar35._12_4_;
        auVar37._8_4_ = fVar60;
        auVar37._0_8_ = auVar80._0_8_;
        auVar37._12_4_ = fVar61;
        auVar36._8_8_ = auVar37._8_8_;
        auVar36._4_4_ = fVar58;
        auVar36._0_4_ = fVar57;
        auVar38._4_4_ = fVar21;
        auVar38._0_4_ = fVar13;
        auVar38._8_4_ = fVar60;
        auVar38._12_4_ = fVar61;
        auVar38 = rcpps(auVar36,auVar38);
        fVar68 = fVar3 * auVar38._0_4_;
        fVar69 = fVar3 * auVar38._4_4_;
        fVar70 = fVar3 * auVar38._8_4_;
        fVar71 = fVar3 * auVar38._12_4_;
        auVar42._0_4_ = fVar13 * fVar68;
        auVar42._4_4_ = fVar21 * fVar69;
        auVar42._8_4_ = fVar60 * fVar70;
        auVar42._12_4_ = fVar61 * fVar71;
        auVar43._4_4_ = fVar22;
        auVar43._0_4_ = fVar14;
        auVar43._8_4_ = fVar63;
        auVar43._12_4_ = fVar6;
        auVar43 = rcpps(auVar42,auVar43);
        fVar72 = fVar3 * auVar43._0_4_;
        fVar74 = fVar3 * auVar43._4_4_;
        fVar76 = fVar3 * auVar43._8_4_;
        fVar78 = fVar3 * auVar43._12_4_;
        pfVar2 = (float *)(uVar4 + 0x30 + uVar29);
        fVar24 = *pfVar2;
        fVar25 = pfVar2[1];
        fVar26 = pfVar2[2];
        fVar27 = pfVar2[3];
        fVar85 = auVar80._12_4_;
        auVar44._4_4_ = fVar23;
        auVar44._0_4_ = fVar15;
        auVar44._8_4_ = fVar85;
        auVar44._12_4_ = fVar7;
        auVar44 = rcpps(auVar43,auVar44);
        fVar51 = fVar3 * auVar44._0_4_;
        fVar52 = fVar3 * auVar44._4_4_;
        fVar53 = fVar3 * auVar44._8_4_;
        fVar54 = fVar3 * auVar44._12_4_;
        auVar80._4_4_ = fVar24;
        auVar80._0_4_ = fVar16;
        auVar80._8_4_ = fVar56;
        auVar80._12_4_ = fVar8;
        auVar80 = rcpps(auVar55,auVar80);
        fVar73 = fVar3 * auVar80._0_4_;
        fVar75 = fVar3 * auVar80._4_4_;
        fVar77 = fVar3 * auVar80._8_4_;
        fVar79 = fVar3 * auVar80._12_4_;
        auVar55._4_4_ = fVar25;
        auVar55._0_4_ = fVar17;
        auVar55._8_4_ = fVar59;
        auVar55._12_4_ = fVar9;
        auVar55 = rcpps(auVar84,auVar55);
        fVar40 = fVar3 * auVar55._0_4_;
        fVar45 = fVar3 * auVar55._4_4_;
        fVar47 = fVar3 * auVar55._8_4_;
        fVar49 = fVar3 * auVar55._12_4_;
        auVar81._0_4_ = fVar17 * fVar40;
        auVar81._4_4_ = fVar25 * fVar45;
        auVar81._8_4_ = fVar59 * fVar47;
        auVar81._12_4_ = fVar9 * fVar49;
        auVar39._4_4_ = fVar26;
        auVar39._0_4_ = fVar18;
        auVar39._8_4_ = fVar62;
        auVar39._12_4_ = fVar10;
        auVar82 = rcpps(auVar81,auVar39);
        auVar83._0_4_ = fVar3 * auVar82._0_4_;
        auVar83._4_4_ = fVar3 * auVar82._4_4_;
        auVar83._8_4_ = fVar3 * auVar82._8_4_;
        auVar83._12_4_ = fVar3 * auVar82._12_4_;
        fStack_5c = auVar84._12_4_;
        auVar84._4_4_ = fVar27;
        auVar84._0_4_ = fVar19;
        auVar84._8_4_ = fStack_5c;
        auVar84._12_4_ = fVar11;
        auVar84 = rcpps(auVar83,auVar84);
        fVar41 = fVar3 * auVar84._0_4_;
        fVar46 = fVar3 * auVar84._4_4_;
        fVar48 = fVar3 * auVar84._8_4_;
        fVar50 = fVar3 * auVar84._12_4_;
        in_XMM3._4_4_ =
             -(uint)(fVar60 != 0.0) & (uint)((fVar3 - auVar42._8_4_) * auVar38._8_4_ + fVar70);
        in_XMM3._0_4_ =
             -(uint)(fVar57 != 0.0) & (uint)((fVar3 - fVar57 * fVar66) * auVar35._8_4_ + fVar66);
        in_XMM3._8_4_ =
             -(uint)(fVar63 != 0.0) & (uint)((fVar3 - fVar63 * fVar76) * auVar43._8_4_ + fVar76);
        in_XMM3._12_4_ =
             -(uint)(fVar85 != 0.0) & (uint)((fVar3 - fVar85 * fVar53) * auVar44._8_4_ + fVar53);
        puVar1 = (uint *)(uVar5 + 0x60 + uVar29);
        *puVar1 = -(uint)(fVar58 != 0.0) &
                  (uint)((fVar3 - fVar58 * fVar67) * auVar35._12_4_ + fVar67);
        puVar1[1] = -(uint)(fVar61 != 0.0) &
                    (uint)((fVar3 - auVar42._12_4_) * auVar38._12_4_ + fVar71);
        puVar1[2] = -(uint)(fVar6 != 0.0) &
                    (uint)((fVar3 - fVar6 * fVar78) * auVar43._12_4_ + fVar78);
        puVar1[3] = -(uint)(fVar7 != 0.0) &
                    (uint)((fVar3 - fVar7 * fVar54) * auVar44._12_4_ + fVar54);
        puVar1 = (uint *)(uVar5 + 0x70 + uVar29);
        *puVar1 = -(uint)(fVar8 != 0.0) & (uint)((fVar3 - fVar8 * fVar79) * auVar80._12_4_ + fVar79)
        ;
        puVar1[1] = -(uint)(fVar9 != 0.0) &
                    (uint)((fVar3 - auVar81._12_4_) * auVar55._12_4_ + fVar49);
        puVar1[2] = -(uint)(fVar10 != 0.0) &
                    (uint)((fVar3 - fVar10 * auVar83._12_4_) * auVar82._12_4_ + auVar83._12_4_);
        puVar1[3] = -(uint)(fVar11 != 0.0) &
                    (uint)((fVar3 - fVar11 * fVar50) * auVar84._12_4_ + fVar50);
        *(undefined1 (*) [16])(uVar5 + 0x40 + uVar29) = in_XMM3;
        puVar1 = (uint *)(uVar5 + 0x50 + uVar29);
        *puVar1 = -(uint)(fVar56 != 0.0) &
                  (uint)((fVar3 - fVar56 * fVar77) * auVar80._8_4_ + fVar77);
        puVar1[1] = -(uint)(fVar59 != 0.0) &
                    (uint)((fVar3 - auVar81._8_4_) * auVar55._8_4_ + fVar47);
        puVar1[2] = -(uint)(fVar62 != 0.0) &
                    (uint)((fVar3 - fVar62 * auVar83._8_4_) * auVar82._8_4_ + auVar83._8_4_);
        puVar1[3] = -(uint)(fStack_5c != 0.0) &
                    (uint)((fVar3 - fStack_5c * fVar48) * auVar84._8_4_ + fVar48);
        puVar1 = (uint *)(uVar5 + 0x20 + uVar29);
        *puVar1 = -(uint)(fVar20 != 0.0) &
                  (uint)((fVar3 - fVar20 * fVar65) * auVar35._4_4_ + fVar65);
        puVar1[1] = -(uint)(fVar21 != 0.0) &
                    (uint)((fVar3 - auVar42._4_4_) * auVar38._4_4_ + fVar69);
        puVar1[2] = -(uint)(fVar22 != 0.0) &
                    (uint)((fVar3 - fVar22 * fVar74) * auVar43._4_4_ + fVar74);
        puVar1[3] = -(uint)(fVar23 != 0.0) &
                    (uint)((fVar3 - fVar23 * fVar52) * auVar44._4_4_ + fVar52);
        puVar1 = (uint *)(uVar5 + 0x30 + uVar29);
        *puVar1 = -(uint)(fVar24 != 0.0) &
                  (uint)((fVar3 - fVar24 * fVar75) * auVar80._4_4_ + fVar75);
        puVar1[1] = -(uint)(fVar25 != 0.0) &
                    (uint)((fVar3 - auVar81._4_4_) * auVar55._4_4_ + fVar45);
        puVar1[2] = -(uint)(fVar26 != 0.0) &
                    (uint)((fVar3 - fVar26 * auVar83._4_4_) * auVar82._4_4_ + auVar83._4_4_);
        puVar1[3] = -(uint)(fVar27 != 0.0) &
                    (uint)((fVar3 - fVar27 * fVar46) * auVar84._4_4_ + fVar46);
        puVar1 = (uint *)(uVar5 + uVar29);
        *puVar1 = -(uint)(fVar12 != 0.0) &
                  (uint)((fVar3 - fVar12 * fVar64) * auVar35._0_4_ + fVar64);
        puVar1[1] = -(uint)(fVar13 != 0.0) &
                    (uint)((fVar3 - auVar42._0_4_) * auVar38._0_4_ + fVar68);
        puVar1[2] = -(uint)(fVar14 != 0.0) &
                    (uint)((fVar3 - fVar14 * fVar72) * auVar43._0_4_ + fVar72);
        puVar1[3] = -(uint)(fVar15 != 0.0) &
                    (uint)((fVar3 - fVar15 * fVar51) * auVar44._0_4_ + fVar51);
        puVar1 = (uint *)(uVar5 + 0x10 + uVar29);
        *puVar1 = -(uint)(fVar16 != 0.0) &
                  (uint)((fVar3 - fVar16 * fVar73) * auVar80._0_4_ + fVar73);
        puVar1[1] = -(uint)(fVar17 != 0.0) &
                    (uint)((fVar3 - auVar81._0_4_) * auVar55._0_4_ + fVar40);
        puVar1[2] = -(uint)(fVar18 != 0.0) &
                    (uint)((fVar3 - fVar18 * auVar83._0_4_) * auVar82._0_4_ + auVar83._0_4_);
        puVar1[3] = -(uint)(fVar19 != 0.0) &
                    (uint)((fVar3 - fVar19 * fVar41) * auVar84._0_4_ + fVar41);
        uVar29 = uVar29 + 0x80;
      } while ((uVar34 * 0x20 & 0xffffffffffffff80) != uVar29);
      if (uVar34 == uVar33) goto LAB_00588660;
    }
    lVar31 = 0;
    do {
      auVar84 = *(undefined1 (*) [16])(uVar28 + lVar31 * 4);
      auVar80 = *(undefined1 (*) [16])(uVar28 + 0x10 + lVar31 * 4);
      auVar55 = rcpps(in_XMM3,auVar84);
      fVar56 = fVar3 * auVar55._0_4_;
      fVar58 = fVar3 * auVar55._4_4_;
      fVar60 = fVar3 * auVar55._8_4_;
      fVar62 = fVar3 * auVar55._12_4_;
      in_XMM3 = rcpps(auVar55,auVar80);
      fVar57 = fVar3 * in_XMM3._0_4_;
      fVar59 = fVar3 * in_XMM3._4_4_;
      fVar61 = fVar3 * in_XMM3._8_4_;
      fVar63 = fVar3 * in_XMM3._12_4_;
      puVar1 = (uint *)(uVar30 + lVar31 * 4);
      *puVar1 = -(uint)(auVar84._0_4_ != 0.0) &
                (uint)((fVar3 - auVar84._0_4_ * fVar56) * auVar55._0_4_ + fVar56);
      puVar1[1] = -(uint)(auVar84._4_4_ != 0.0) &
                  (uint)((fVar3 - auVar84._4_4_ * fVar58) * auVar55._4_4_ + fVar58);
      puVar1[2] = -(uint)(auVar84._8_4_ != 0.0) &
                  (uint)((fVar3 - auVar84._8_4_ * fVar60) * auVar55._8_4_ + fVar60);
      puVar1[3] = -(uint)(auVar84._12_4_ != 0.0) &
                  (uint)((fVar3 - auVar84._12_4_ * fVar62) * auVar55._12_4_ + fVar62);
      puVar1 = (uint *)(uVar30 + 0x10 + lVar31 * 4);
      *puVar1 = -(uint)(auVar80._0_4_ != 0.0) &
                (uint)((fVar3 - auVar80._0_4_ * fVar57) * in_XMM3._0_4_ + fVar57);
      puVar1[1] = -(uint)(auVar80._4_4_ != 0.0) &
                  (uint)((fVar3 - auVar80._4_4_ * fVar59) * in_XMM3._4_4_ + fVar59);
      puVar1[2] = -(uint)(auVar80._8_4_ != 0.0) &
                  (uint)((fVar3 - auVar80._8_4_ * fVar61) * in_XMM3._8_4_ + fVar61);
      puVar1[3] = -(uint)(auVar80._12_4_ != 0.0) &
                  (uint)((fVar3 - auVar80._12_4_ * fVar63) * in_XMM3._12_4_ + fVar63);
      lVar31 = lVar31 + 8;
    } while (iVar32 != (int)lVar31);
  }
LAB_00588660:
  return param_1 + 0x28;
}


