// Function : getTextBounds
// Namespace: juce:TextEditor:EditorAccessibilityHandler:TextEditorTextInterface
// Entry    : 00270a20
// Prototype: TextEditorTextInterface * getTextBounds(TextEditorTextInterface * this, long param_1)
// Body     : 00270a20 - 00270e30


/* juce::TextEditor::EditorAccessibilityHandler::TextEditorTextInterface::getTextBounds(juce::Range<int>)
   const */

TextEditorTextInterface * __thiscall
juce::TextEditor::EditorAccessibilityHandler::TextEditorTextInterface::getTextBounds
          (TextEditorTextInterface *this,long param_1)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  undefined1 (*pauVar4) [16];
  int iVar5;
  int iVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 (*local_118) [16];
  int local_10c;
  undefined1 local_108 [8];
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  undefined8 uStack_f0;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  undefined1 local_d8 [16];
  undefined1 local_c8 [8];
  float fStack_c0;
  float fStack_bc;
  undefined1 (*local_b0) [16];
  long local_a8;
  undefined1 (*local_a0) [16];
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  long local_50;
  undefined1 *local_48;
  undefined1 local_40 [16];
  
  local_a8 = param_1;
  (**(code **)(**(long **)(param_1 + 8) + 0x60))(&local_118);
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  if ((long)local_10c != 0) {
    local_b0 = local_118 + local_10c;
    pauVar4 = local_118;
    do {
      lVar7 = *(long *)(local_a8 + 8) + 8;
      auVar15 = *pauVar4;
      local_a0 = pauVar4;
      do {
        local_48 = local_40;
        local_50 = lVar7;
        local_40 = auVar15;
                    /* try { // try from 00270b28 to 00270b2f has its CatchHandler @ 00270e31 */
        auVar15 = detail::ComponentHelpers::
                  convertToParentSpace<juce::Rectangle<int>>(juce::Component_const&,juce::Rectangle<int>)
                  ::{lambda()#1}::operator()((_lambda___1_ *)&local_50);
        pfVar1 = *(float **)(lVar7 + 0x50);
        if (pfVar1 != (float *)0x0) {
          local_e8 = (float)auVar15._0_4_;
          fVar14 = (float)(auVar15._0_4_ + auVar15._8_4_);
          local_f8 = (float)auVar15._4_4_;
          fStack_f4 = (float)(auVar15._12_4_ + auVar15._4_4_);
          uStack_f0._0_4_ = 0.0;
          uStack_f0._4_4_ = 0.0;
          fVar8 = pfVar1[1];
          fStack_64 = fVar8 * fStack_f4;
          fVar9 = *pfVar1 * local_e8;
          fStack_7c = pfVar1[2];
          fVar13 = fVar9 + fVar8 * local_f8 + fStack_7c;
          fVar10 = pfVar1[3];
          local_108._0_4_ = pfVar1[4];
          local_c8._0_4_ = pfVar1[5];
          local_68 = fStack_64 + fVar9 + fStack_7c;
          fVar9 = *pfVar1 * fVar14;
          local_88 = fStack_7c + fVar9 + fVar8 * local_f8;
          fStack_94 = fStack_7c + fVar9 + fStack_64;
          fStack_80 = fStack_7c + fVar9 + fVar8 * 0.0;
          fStack_7c = fStack_7c + fVar9 + fVar8 * 0.0;
          fVar8 = local_68;
          if (local_88 <= local_68) {
            fVar8 = local_88;
          }
          local_98 = fStack_94;
          if (fVar8 <= fStack_94) {
            local_98 = fVar8;
          }
          if (fVar13 <= local_98) {
            local_98 = fVar13;
          }
          iVar3 = -0x80000000;
          iVar5 = -0x80000000;
          fStack_90 = fStack_94;
          fStack_8c = fStack_94;
          fStack_84 = fStack_94;
          local_78 = fStack_94;
          fStack_74 = fStack_94;
          fStack_70 = fStack_94;
          fStack_6c = fStack_94;
          fStack_60 = fStack_64;
          fStack_5c = fStack_64;
          if (DAT_00653430 < local_98) {
            _local_c8 = ZEXT416((uint)local_c8._0_4_);
            local_d8 = ZEXT416((uint)fVar14);
            uStack_f0 = 0;
            _local_108 = ZEXT416((uint)local_108._0_4_);
            fVar8 = floorf(local_98);
            iVar5 = (int)fVar8;
            fVar14 = (float)local_d8._0_4_;
          }
          fStack_e4 = (float)local_108._0_4_ * fStack_f4;
          local_e8 = local_e8 * fVar10;
          fVar9 = local_e8 + (float)local_108._0_4_ * local_f8 + (float)local_c8._0_4_;
          local_e8 = fStack_e4 + local_e8 + (float)local_c8._0_4_;
          fVar14 = fVar14 * fVar10;
          fVar8 = (float)local_c8._0_4_ + fVar14 + (float)local_108._0_4_ * local_f8;
          local_c8._4_4_ = (float)local_c8._0_4_ + fVar14 + fStack_e4;
          fStack_c0 = (float)local_c8._0_4_ + fVar14 + (float)local_108._0_4_ * (float)uStack_f0;
          fStack_bc = (float)local_c8._0_4_ + fVar14 + (float)local_108._0_4_ * uStack_f0._4_4_;
          fVar10 = local_e8;
          if (fVar8 <= local_e8) {
            fVar10 = fVar8;
          }
          local_108._0_4_ = local_c8._4_4_;
          if (fVar10 <= (float)local_c8._4_4_) {
            local_108._0_4_ = fVar10;
          }
          if (fVar9 <= (float)local_108._0_4_) {
            local_108._0_4_ = fVar9;
          }
          local_c8._0_4_ = fVar8;
          local_d8._0_4_ = fVar9;
          _local_f8 = CONCAT44(local_c8._4_4_,local_c8._4_4_);
          uStack_f0 = CONCAT44(local_c8._4_4_,local_c8._4_4_);
          local_108._4_4_ = local_c8._4_4_;
          fStack_100 = (float)local_c8._4_4_;
          fStack_fc = (float)local_c8._4_4_;
          fVar10 = (float)local_c8._4_4_;
          fVar14 = (float)local_108._0_4_;
          fStack_e0 = fStack_e4;
          fStack_dc = fStack_e4;
          if (DAT_00653430 < (float)local_108._0_4_) {
            fVar8 = floorf((float)local_108._0_4_);
            iVar3 = (int)fVar8;
            fVar10 = local_f8;
            fVar8 = (float)local_c8._0_4_;
            fVar9 = (float)local_d8._0_4_;
            fVar14 = (float)local_108._0_4_;
          }
          fVar11 = local_68;
          if (local_68 <= local_88) {
            fVar11 = local_88;
          }
          fVar12 = local_78;
          if (local_78 <= fVar11) {
            fVar12 = fVar11;
          }
          if (fVar12 <= fVar13) {
            fVar12 = fVar13;
          }
          fVar13 = (fVar12 - local_98) + local_98;
          iVar6 = 0x7fffffff;
          iVar2 = 0x7fffffff;
          if (fVar13 < DAT_00653434) {
            fVar8 = ceilf(fVar13);
            iVar2 = (int)fVar8;
            fVar10 = local_f8;
            fVar8 = (float)local_c8._0_4_;
            fVar9 = (float)local_d8._0_4_;
            fVar14 = (float)local_108._0_4_;
          }
          fVar13 = local_e8;
          if (local_e8 <= fVar8) {
            fVar13 = fVar8;
          }
          if (fVar10 <= fVar13) {
            fVar10 = fVar13;
          }
          if (fVar10 <= fVar9) {
            fVar10 = fVar9;
          }
          fVar14 = (fVar10 - fVar14) + fVar14;
          if (fVar14 < DAT_00653434) {
            fVar8 = ceilf(fVar14);
            iVar6 = (int)fVar8;
          }
          auVar15._4_4_ = iVar3;
          auVar15._0_4_ = iVar5;
          auVar15._12_4_ = iVar6 - iVar3;
          auVar15._8_4_ = iVar2 - iVar5;
        }
        lVar7 = *(long *)(lVar7 + 0x30);
      } while (lVar7 != 0);
      RectangleList<int>::add((long *)this,auVar15._0_8_,auVar15._8_8_);
      pauVar4 = local_a0 + 1;
    } while (pauVar4 != local_b0);
  }
  local_10c = 0;
  free(local_118);
  return this;
}


