// Function : mouseDrag
// Namespace: juce:TextEditor
// Entry    : 0026e0f0
// Prototype: undefined mouseDrag(TextEditor * this, ulong param_1, undefined8 param_2, undefined8 param_3, uint * param_4, ulong param_5)
// Body     : 0026e0f0 - 0026e295


/* juce::TextEditor::mouseDrag(juce::MouseEvent const&) */

void __thiscall
juce::TextEditor::mouseDrag
          (TextEditor *this,ulong param_1,undefined8 param_2,undefined8 param_3,uint *param_4,
          ulong param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  uint uVar11;
  int *piVar12;
  undefined4 uVar13;
  float fVar14;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  long local_30;
  
  if (((this[0x1d0] == (TextEditor)0x0) && (this[0x1ce] != (TextEditor)0x0)) ||
     ((this[0x1cd] != (TextEditor)0x0 && ((*(byte *)(param_1 + 0x10) & 0x20) != 0)))) {
    return;
  }
  iVar1 = *(int *)(this + 0x348);
  *(undefined4 *)(this + 0x348) = 0;
  uVar9 = param_1;
  if (iVar1 != 0) {
    uVar8 = (**(code **)(**(long **)(this + 0x338) + 0x50))();
    uVar11 = *(uint *)(this + 0x340);
    uVar13 = 0;
    if ((int)uVar11 < 0) {
      uVar11 = 0;
    }
    if (uVar8 < uVar11) {
      uVar11 = uVar8;
    }
    param_2 = extraout_RDX;
    if (uVar11 != 0) {
      ParagraphsModel::getText
                ((undefined8 *)&local_30,*(long *)(*(long *)(this + 0x338) + 0x330) + 0x60);
      uVar9 = (ulong)(uVar11 - 1);
      uVar8 = juce::String::operator[]((String *)&local_30,uVar11 - 1);
      piVar12 = (int *)(local_30 + -0x10);
      param_2 = extraout_RDX_00;
      if (piVar12 != &emptyString) {
        LOCK();
        iVar1 = *piVar12;
        *piVar12 = *piVar12 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          operator_delete__(piVar12);
          param_2 = extraout_RDX_01;
        }
      }
      if (uVar8 != 10) {
        uVar8 = (**(code **)(**(long **)(this + 0x338) + 0x50))();
        uVar13 = 1;
        param_2 = extraout_RDX_02;
        if (uVar11 != uVar8) {
          uVar13 = *(undefined4 *)(this + 0x348);
        }
      }
    }
    *(undefined4 *)(this + 0x344) = uVar13;
  }
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(this + 0x27c);
  iVar3 = *(int *)(param_1 + 0xc);
  iVar4 = *(int *)(this + 0x198);
  iVar5 = *(int *)(this + 0x278);
  iVar6 = *(int *)(this + 0x19c);
  iVar7 = *(int *)(*(long *)(this + 0x188) + 0x208);
  fVar14 = getYOffset(this,uVar9,param_2,*(long *)(this + 0x188),param_4,param_5);
  lVar10 = *(long *)(this + 0x188);
  fVar14 = (float)((iVar3 + *(int *)(lVar10 + 0x20c)) -
                  SUB84((double)(fVar14 + (float)iVar4 + (float)iVar2) + DAT_005d9098,0));
  uVar9 = indexAtPosition((float)((iVar1 - (iVar5 + iVar6)) + iVar7),fVar14,this);
  moveCaretTo(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),fVar14,this,(uint)uVar9,1,lVar10,param_4,
              param_5);
  return;
}


