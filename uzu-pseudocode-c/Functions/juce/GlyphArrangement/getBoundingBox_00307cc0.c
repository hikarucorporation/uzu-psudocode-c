// Function : getBoundingBox
// Namespace: juce:GlyphArrangement
// Entry    : 00307cc0
// Prototype: undefined getBoundingBox(GlyphArrangement * this, int param_1, undefined8 param_2, ulong param_3, uint * param_4, ulong param_5)
// Body     : 00307cc0 - 00307ef4


/* juce::GlyphArrangement::getBoundingBox(int, int, bool) const */

void __thiscall
juce::GlyphArrangement::getBoundingBox
          (GlyphArrangement *this,int param_1,undefined8 param_2,ulong param_3,uint *param_4,
          ulong param_5)

{
  long *plVar1;
  float fVar2;
  long lVar3;
  SharedFontInternal *this_00;
  char cVar4;
  undefined1 auVar5 [16];
  int iVar7;
  int iVar6;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 uVar8;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 uVar9;
  long lVar10;
  uint uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
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
  float fVar28;
  float fVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float local_58;
  float fStack_54;
  
  iVar6 = (int)param_2;
  cVar4 = (char)param_3;
  if (iVar6 < 0) {
    iVar7 = *(int *)(this + 0xc);
  }
  else {
    param_3 = (ulong)(uint)(param_1 + iVar6);
    iVar7 = *(int *)(this + 0xc);
    if (param_1 + iVar6 <= iVar7) goto joined_r0x00307ed7;
  }
  iVar6 = iVar7 - param_1;
joined_r0x00307ed7:
  if (0 < iVar6) {
    lVar10 = (long)param_1 << 5;
    uVar11 = iVar6 + 1;
    fVar19 = 0.0;
    fVar21 = 0.0;
    fVar22 = 0.0;
    fVar23 = 0.0;
    fVar24 = 0.0;
    fVar25 = 0.0;
    fVar26 = 0.0;
    fVar27 = 0.0;
    do {
      lVar3 = *(long *)this;
      fVar17 = fVar26;
      fVar18 = fVar27;
      if ((cVar4 == '\0') && (*(char *)(lVar3 + 0x1c + lVar10) != '\0')) {
        auVar15._4_4_ = fVar21;
        auVar15._0_4_ = fVar19;
        auVar15._8_4_ = fVar22;
        auVar15._12_4_ = fVar23;
        fVar16 = fVar24;
        fVar29 = fVar25;
      }
      else {
        plVar1 = (long *)(lVar10 + lVar3);
        fVar2 = *(float *)(lVar3 + 0x10 + lVar10);
        fVar20 = *(float *)(lVar3 + 0x14 + lVar10);
        uVar12 = Font::SharedFontInternal::getAscentDescent
                           (*(SharedFontInternal **)(lVar3 + lVar10),plVar1,param_2,param_3,param_4,
                            param_5);
        this_00 = *(SharedFontInternal **)(lVar3 + lVar10);
        fVar28 = *(float *)(this_00 + 100);
        if (fVar28 <= 0.0) {
          fVar28 = *(float *)(this_00 + 0x68);
                    /* try { // try from 00307dbb to 00307dc2 has its CatchHandler @ 00307efd */
          uVar13 = Font::SharedFontInternal::getAscentDescent
                             (this_00,plVar1,CONCAT44(extraout_var,extraout_EDX),param_3,param_4,
                              param_5);
          fVar28 = fVar28 * ((float)((ulong)uVar13 >> 0x20) + (float)uVar13);
          this_00 = (SharedFontInternal *)*plVar1;
          fVar16 = *(float *)(lVar3 + 0x18 + lVar10);
          fVar29 = *(float *)(this_00 + 100);
          uVar8 = extraout_EDX_00;
          uVar9 = extraout_var_00;
        }
        else {
          fVar16 = *(float *)(lVar3 + 0x18 + lVar10);
          fVar29 = fVar28;
          uVar8 = extraout_EDX;
          uVar9 = extraout_var;
        }
        if (fVar29 <= 0.0) {
          fVar29 = *(float *)(this_00 + 0x68);
                    /* try { // try from 00307e09 to 00307e10 has its CatchHandler @ 00307ef5 */
          uVar13 = Font::SharedFontInternal::getAscentDescent
                             (this_00,plVar1,CONCAT44(uVar9,uVar8),param_3,param_4,param_5);
          fVar29 = fVar29 * ((float)((ulong)uVar13 >> 0x20) + (float)uVar13);
          uVar8 = extraout_EDX_01;
          uVar9 = extraout_var_01;
        }
        param_2 = CONCAT44(uVar9,uVar8);
        if ((fVar16 <= 0.0) || (fVar29 <= 0.0)) {
          auVar15._4_4_ = fVar21;
          auVar15._0_4_ = fVar19;
          auVar15._8_4_ = fVar22;
          auVar15._12_4_ = fVar23;
          fVar16 = fVar24;
          fVar29 = fVar25;
        }
        else {
          local_58 = (float)uVar12;
          fStack_54 = (float)((ulong)uVar12 >> 0x20);
          fVar20 = fVar20 + (DAT_005d9054 / (fStack_54 + local_58)) * local_58 * fVar28;
          auVar15._4_4_ = fVar20;
          auVar15._0_4_ = fVar2;
          auVar15._8_8_ = 0;
          fVar17 = 0.0;
          fVar18 = 0.0;
          param_2 = CONCAT44(uVar9,uVar8);
          if ((0.0 < fVar24) && (param_2 = CONCAT44(uVar9,uVar8), 0.0 < fVar25)) {
            auVar14._4_4_ = fVar20;
            auVar14._0_4_ = fVar2;
            auVar14._8_8_ = 0;
            auVar5._4_4_ = fVar21;
            auVar5._0_4_ = fVar19;
            auVar5._8_4_ = fVar22;
            auVar5._12_4_ = fVar23;
            auVar15 = minps(auVar14,auVar5);
            auVar30._0_4_ = fVar16 + fVar2;
            auVar30._4_4_ = fVar29 + fVar20;
            auVar30._8_8_ = 0;
            auVar31._4_4_ = fVar25 + fVar21;
            auVar31._0_4_ = fVar24 + fVar19;
            auVar31._8_4_ = fVar26 + fVar22;
            auVar31._12_4_ = fVar27 + fVar23;
            auVar31 = maxps(auVar30,auVar31);
            fVar16 = auVar31._0_4_ - auVar15._0_4_;
            fVar29 = auVar31._4_4_ - auVar15._4_4_;
            fVar17 = auVar31._8_4_ - auVar15._8_4_;
            fVar18 = auVar31._12_4_ - auVar15._12_4_;
            param_2 = CONCAT44(uVar9,uVar8);
          }
        }
      }
      lVar10 = lVar10 + 0x20;
      uVar11 = uVar11 - 1;
      fVar19 = auVar15._0_4_;
      fVar21 = auVar15._4_4_;
      fVar22 = auVar15._8_4_;
      fVar23 = auVar15._12_4_;
      fVar24 = fVar16;
      fVar25 = fVar29;
      fVar26 = fVar17;
      fVar27 = fVar18;
    } while (1 < uVar11);
  }
  return;
}


