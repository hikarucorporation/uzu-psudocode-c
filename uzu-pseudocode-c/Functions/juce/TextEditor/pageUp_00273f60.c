// Function : pageUp
// Namespace: juce:TextEditor
// Entry    : 00273f60
// Prototype: undefined pageUp(undefined8 param_1, float param_2, TextEditor * this, uint param_4, undefined8 param_5, undefined8 param_6, uint * param_7, ulong param_8)
// Body     : 00273f60 - 0027404d


/* juce::TextEditor::pageUp(bool) */

void __thiscall
juce::TextEditor::pageUp
          (undefined8 param_1,float param_2,TextEditor *this,uint param_4,undefined8 param_5,
          undefined8 param_6,uint *param_7,ulong param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  double dVar8;
  float fVar9;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  undefined1 auVar10 [16];
  
  if (this[0x1ca] == (TextEditor)0x0) {
    moveCaretToStartOfLine(param_1,param_2,this,param_4 & 0xff,param_5,param_6,param_7,param_8);
    return;
  }
  uVar6 = (**(code **)(*(long *)this + 0x40))(this);
  uVar7 = (ulong)uVar6;
  auVar10 = (**(code **)(*(long *)this + 0x48))(this);
  iVar1 = *(int *)(this + 0x19c);
  iVar2 = *(int *)(this + 0x278);
  iVar3 = *(int *)(this + 0x27c);
  iVar4 = *(int *)(this + 0x198);
  iVar5 = *(int *)(*(long *)(this + 0x188) + 0x208);
  fVar9 = getYOffset(this,uVar7,auVar10._8_8_,*(long *)(this + 0x188),param_7,param_8);
  dVar8 = (double)(fVar9 + (float)iVar4 + (float)iVar3) + DAT_005d9098;
  fVar9 = (float)((auVar10._4_4_ + *(int *)(*(long *)(this + 0x188) + 0x20c)) - SUB84(dVar8,0)) -
          (float)*(int *)(*(long *)(this + 0x188) + 0x214);
  uVar7 = indexAtPosition((float)((auVar10._0_4_ - (iVar1 + iVar2)) + iVar5),fVar9,this);
  moveCaretWithTransaction
            (CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),fVar9,this,(uint)uVar7,param_4 & 0xff,dVar8
             ,param_7,param_8);
  return;
}


