// Function : checkLayout
// Namespace: juce:TextEditor
// Entry    : 0023ec90
// Prototype: undefined checkLayout(TextEditor * this, undefined8 param_1, undefined8 param_2, long param_3, uint * param_4, ulong param_5)
// Body     : 0023ec90 - 0023ee86


/* juce::TextEditor::checkLayout() */

void __thiscall
juce::TextEditor::checkLayout
          (TextEditor *this,undefined8 param_1,undefined8 param_2,long param_3,uint *param_4,
          ulong param_5)

{
  Viewport VVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  Component *this_00;
  Viewport *this_01;
  Viewport VVar6;
  int iVar7;
  ParagraphStorage *pPVar8;
  long lVar9;
  Viewport VVar10;
  undefined8 extraout_RDX;
  long lVar11;
  long lVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  iVar14 = *(int *)(this + 0x27c);
  fVar16 = getYOffset(this,param_1,param_2,param_3,param_4,param_5);
  fVar17 = getTextStorageHeight(this,param_1,extraout_RDX,param_3,param_4,param_5);
  fVar16 = ceilf(fVar17 + fVar16);
  iVar14 = (int)fVar16 + iVar14;
  lVar2 = *(long *)(this + 0x330);
  lVar3 = *(long *)(lVar2 + 0x68);
  lVar4 = *(long *)(lVar2 + 0x70);
  if (lVar4 == lVar3) {
    fVar16 = 0.0;
  }
  else {
    lVar2 = *(long *)(lVar2 + 0x80);
    lVar12 = lVar3;
    fVar17 = 0.0;
    do {
      pPVar8 = ParagraphStorage::getShapedText
                         (*(ParagraphStorage **)(lVar2 + (lVar12 - lVar3 >> 1)));
      lVar5 = *(long *)pPVar8;
      fVar16 = 0.0;
      lVar9 = *(long *)(lVar5 + 0x158) - *(long *)(lVar5 + 0x150);
      if (lVar9 != 0) {
        lVar11 = 0;
        fVar18 = 0.0;
        do {
          fVar16 = *(float *)(*(long *)(lVar5 + 0x168) + 0x18 + (lVar11 >> 4) * 0x28);
          if (fVar16 <= fVar18) {
            fVar16 = fVar18;
          }
          lVar11 = lVar11 + 0x10;
          fVar18 = fVar16;
        } while ((lVar9 >> 4) * 0x10 != lVar11);
      }
      if (fVar16 <= fVar17) {
        fVar16 = fVar17;
      }
      lVar12 = lVar12 + 0x10;
      fVar17 = fVar16;
    } while (lVar12 != lVar4);
  }
  this_00 = *(Component **)(this + 400);
  iVar13 = *(int *)(*(long *)(this + 0x188) + 0x44);
  iVar15 = *(int *)(*(long *)(this + 0x188) + 0x150);
  fVar16 = ceilf(fVar16);
  iVar7 = (int)fVar16 + *(int *)(this + 0x278) + 2;
  if (iVar15 < iVar7) {
    iVar15 = iVar7;
  }
  if (iVar13 <= iVar14) {
    iVar13 = iVar14;
  }
  Component::setBounds(this_00,*(int *)(this_00 + 0x38),*(int *)(this_00 + 0x3c),iVar15,iVar13);
  this_01 = *(Viewport **)(this + 0x188);
  VVar6 = (Viewport)0x0;
  if ((this[0x1cf] == (TextEditor)0x0) || (this[0x1ca] == (TextEditor)0x0)) {
    VVar10 = (Viewport)0x0;
    *(undefined2 *)(this_01 + 0x22c) = 0;
    if (this_01[0x229] != (Viewport)0x0) goto LAB_0023ee68;
  }
  else {
    VVar6 = (Viewport)(*(int *)(this_01 + 0x154) < iVar14);
    if (this[0x1cb] == (TextEditor)0x0) {
      VVar10 = (Viewport)(*(int *)(this_01 + 0x150) < iVar15);
      *(undefined2 *)(this_01 + 0x22c) = 0;
      VVar1 = this_01[0x229];
    }
    else {
      VVar10 = (Viewport)0x0;
      *(undefined2 *)(this_01 + 0x22c) = 0;
      VVar1 = this_01[0x229];
    }
    if (VVar1 != VVar6) goto LAB_0023ee68;
  }
  if (this_01[0x228] == VVar10) {
    return;
  }
LAB_0023ee68:
  this_01[0x229] = VVar6;
  this_01[0x228] = VVar10;
  Viewport::updateVisibleArea(this_01);
  return;
}


