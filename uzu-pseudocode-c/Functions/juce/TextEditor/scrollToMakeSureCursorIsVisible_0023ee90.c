// Function : scrollToMakeSureCursorIsVisible
// Namespace: juce:TextEditor
// Entry    : 0023ee90
// Prototype: undefined scrollToMakeSureCursorIsVisible(TextEditor * this)
// Body     : 0023ee90 - 0023f0e7


/* juce::TextEditor::scrollToMakeSureCursorIsVisible() */

void __thiscall juce::TextEditor::scrollToMakeSureCursorIsVisible(TextEditor *this)

{
  int iVar1;
  ulong uVar2;
  Viewport *this_00;
  long lVar3;
  Component *this_01;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint *in_R8;
  ulong in_R9;
  int iVar12;
  ulong uVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  
  updateCaretPosition(this);
  if (this[0x1d1] == (TextEditor)0x0) {
    return;
  }
  uVar2 = *(ulong *)(*(long *)(this + 0x188) + 0x208);
  uVar4 = (**(code **)(*(long *)this + 0x40))(this);
  uVar13 = (ulong)uVar4;
  auVar16 = (**(code **)(*(long *)this + 0x48))(this);
  iVar12 = *(int *)(this + 0x27c);
  iVar1 = *(int *)(this + 0x198);
  uVar4 = (uint)uVar2;
  iVar11 = (auVar16._0_4_ - (*(int *)(this + 0x19c) + uVar4)) +
           *(int *)(*(long *)(this + 0x188) + 0x208);
  fVar14 = getYOffset(this,uVar13,auVar16._8_8_,(ulong)(*(int *)(this + 0x19c) + uVar4),in_R8,in_R9)
  ;
  fVar15 = (float)*(int *)(this + 0x48);
  this_00 = *(Viewport **)(this + 0x188);
  iVar5 = SUB84((double)(DAT_005d904c * fVar15) + DAT_005d9098,0);
  iVar9 = 1;
  if (0 < iVar5) {
    iVar9 = iVar5;
  }
  if (iVar11 < iVar9) {
    uVar4 = (iVar11 + uVar4) - SUB84((double)(fVar15 * DAT_005d9070) + DAT_005d9098,0);
    iVar9 = *(int *)(this_00 + 0x150);
  }
  else {
    iVar9 = *(int *)(this_00 + 0x150);
    iVar6 = iVar9 + (uint)(byte)this[0x1cb] * 8 + -10;
    iVar5 = 0;
    if (-1 < iVar6) {
      iVar5 = iVar6;
    }
    if (iVar5 < iVar11) {
      iVar5 = 10;
      if (this[0x1ca] != (TextEditor)0x0) {
        iVar5 = SUB84((double)(fVar15 * DAT_005d9070) + DAT_005d9098,0);
      }
      uVar4 = ((iVar11 + uVar4) - iVar9) + iVar5;
    }
  }
  uVar7 = (*(int *)(*(long *)(this + 400) + 0x40) - iVar9) + 8;
  if ((int)uVar7 < 0) {
    uVar7 = 0;
  }
  if ((int)uVar4 <= (int)uVar7) {
    uVar7 = uVar4;
  }
  if ((int)uVar4 < 0) {
    uVar7 = 0;
  }
  if (this[0x1ca] == (TextEditor)0x0) {
    uVar13 = (ulong)(uint)-((*(int *)(this + 0x4c) -
                            (*(int *)(*(long *)(this + 400) + 0x44) + *(int *)(this + 0x27c))) / 2);
  }
  else {
    uVar13 = uVar2 >> 0x20;
    uVar10 = (*(int *)(this_00 + 0x20c) -
             SUB84((double)(fVar14 + (float)iVar12 + (float)iVar1) + DAT_005d9098,0)) +
             auVar16._4_4_ + iVar12;
    iVar12 = (int)(uVar2 >> 0x20);
    uVar4 = uVar10 - iVar12;
    if ((int)uVar4 < 0) {
      uVar13 = 0;
      if (-1 < (int)uVar10) {
        uVar13 = (ulong)uVar10;
      }
      lVar3 = *(long *)(this_00 + 0x200);
      goto joined_r0x0023f0d7;
    }
    uVar10 = *(int *)(this_00 + 0x154) - auVar16._12_4_;
    if ((int)uVar10 < 0) {
      uVar10 = 0;
    }
    if (uVar10 < uVar4) {
      uVar13 = (ulong)(((iVar12 + auVar16._12_4_ + uVar4) - *(int *)(this_00 + 0x154)) + 2);
      lVar3 = *(long *)(this_00 + 0x200);
      goto joined_r0x0023f0d7;
    }
  }
  lVar3 = *(long *)(this_00 + 0x200);
joined_r0x0023f0d7:
  if ((lVar3 == 0) || (this_01 = *(Component **)(lVar3 + 0x10), this_01 == (Component *)0x0)) {
    return;
  }
  uVar8 = Viewport::viewportPosToCompPos(this_00,(ulong)uVar7 | uVar13 << 0x20);
  Component::setBounds
            (this_01,(int)uVar8,(int)((ulong)uVar8 >> 0x20),*(int *)(this_01 + 0x40),
             *(int *)(this_01 + 0x44));
  return;
}


