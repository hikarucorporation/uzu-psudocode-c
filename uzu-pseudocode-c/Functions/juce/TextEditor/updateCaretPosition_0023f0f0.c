// Function : updateCaretPosition
// Namespace: juce:TextEditor
// Entry    : 0023f0f0
// Prototype: undefined updateCaretPosition(TextEditor * this)
// Body     : 0023f0f0 - 0023f21c


/* juce::TextEditor::updateCaretPosition() */

void __thiscall juce::TextEditor::updateCaretPosition(TextEditor *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long *plVar8;
  double dVar9;
  uint uVar10;
  long lVar11;
  undefined8 extraout_RDX;
  ulong uVar12;
  uint *in_R8;
  ulong in_R9;
  float fVar13;
  undefined1 auVar14 [16];
  undefined8 local_40;
  undefined8 local_38;
  
  plVar8 = *(long **)(this + 0x268);
  if (((plVar8 != (long *)0x0) && (0 < *(int *)(this + 0x48))) && (0 < *(int *)(this + 0x4c))) {
    uVar10 = (**(code **)(*(long *)this + 0x40))(this);
    lVar11 = *(long *)this;
    uVar12 = (ulong)uVar10;
    auVar14 = (**(code **)(lVar11 + 0x48))(this);
    iVar1 = *(int *)(this + 0x278);
    iVar2 = *(int *)(this + 0x27c);
    fVar13 = getYOffset(this,uVar12,auVar14._8_8_,lVar11,in_R8,in_R9);
    dVar9 = (double)fVar13 + DAT_005d9098;
    iVar3 = *(int *)(this + 0x27c);
    iVar4 = *(int *)(this + 0x198);
    iVar5 = *(int *)(this + 0x278);
    iVar6 = *(int *)(this + 0x19c);
    iVar7 = *(int *)(*(long *)(this + 0x188) + 0x208);
    fVar13 = getYOffset(this,uVar12,extraout_RDX,*(long *)(this + 0x188),in_R8,in_R9);
    local_40 = CONCAT44((SUB84(dVar9,0) + auVar14._4_4_ + iVar2 +
                        *(int *)(*(long *)(this + 0x188) + 0x20c)) -
                        SUB84((double)(fVar13 + (float)iVar4 + (float)iVar3) + DAT_005d9098,0),
                        ((iVar1 + auVar14._0_4_) - (iVar5 + iVar6)) + iVar7);
    local_38 = auVar14._8_8_;
    (**(code **)(*plVar8 + 0x198))(plVar8,&local_40);
    Component::getAccessibilityHandler((Component *)(this + 8));
  }
  return;
}


