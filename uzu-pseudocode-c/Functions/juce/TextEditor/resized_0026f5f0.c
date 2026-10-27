// Function : resized
// Namespace: juce:TextEditor
// Entry    : 0026f5f0
// Prototype: undefined resized(TextEditor * this)
// Body     : 0026f5f0 - 0026f723


/* juce::TextEditor::resized() */

void __thiscall juce::TextEditor::resized(TextEditor *this)

{
  Component *this_00;
  undefined8 uVar1;
  undefined8 uVar2;
  Viewport *this_01;
  SharedFontInternal *this_02;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  uint uVar6;
  TextEditor *pTVar7;
  uint uVar8;
  uint *puVar9;
  ulong in_R9;
  int iVar10;
  float fVar11;
  undefined1 auVar12 [16];
  
  this_00 = *(Component **)(this + 0x188);
  uVar1 = *(undefined8 *)(this + 0x198);
  uVar2 = *(undefined8 *)(this + 0x1a0);
  auVar12 = detail::ComponentHelpers::getParentOrMainMonitorBounds(*(long *)(this_00 + 0x30));
  iVar3 = (int)((ulong)uVar1 >> 0x20);
  uVar6 = auVar12._0_4_ + iVar3;
  pTVar7 = (TextEditor *)(ulong)uVar6;
  iVar10 = (int)uVar1;
  uVar4 = auVar12._8_4_ - ((int)((ulong)uVar2 >> 0x20) + iVar3);
  uVar5 = (ulong)uVar4;
  uVar8 = (auVar12._12_4_ - (int)uVar2) - iVar10;
  puVar9 = (uint *)(ulong)uVar8;
  Component::setBounds(this_00,uVar6,auVar12._4_4_ + iVar10,uVar4,uVar8);
  this_01 = *(Viewport **)(this + 0x188);
  this_02 = *(SharedFontInternal **)(this + 0x288);
  fVar11 = *(float *)(this_02 + 100);
  if (fVar11 <= 0.0) {
    pTVar7 = this + 0x288;
    fVar11 = *(float *)(this_02 + 0x68);
                    /* try { // try from 0026f680 to 0026f684 has its CatchHandler @ 0026f724 */
    uVar1 = Font::SharedFontInternal::getAscentDescent
                      (this_02,(long *)pTVar7,extraout_RDX,uVar5,puVar9,in_R9);
    fVar11 = fVar11 * ((float)((ulong)uVar1 >> 0x20) + (float)uVar1);
  }
  iVar3 = SUB84((double)fVar11 + DAT_005d9098,0);
  if ((*(int *)(this_01 + 0x21c) != 0x10) || (*(int *)(this_01 + 0x220) != iVar3)) {
    *(undefined4 *)(this_01 + 0x21c) = 0x10;
    *(int *)(this_01 + 0x220) = iVar3;
    Viewport::updateVisibleArea(this_01);
  }
  updateBaseShapedTextOptions(this);
  checkLayout(this,pTVar7,extraout_RDX_00,uVar5,puVar9,in_R9);
  if (this[0x1ca] == (TextEditor)0x0) {
    scrollToMakeSureCursorIsVisible(this);
    return;
  }
  updateCaretPosition(this);
  return;
}


