// Function : moveCaretDown
// Namespace: juce:TextEditor
// Entry    : 00273d70
// Prototype: undefined moveCaretDown(undefined8 param_1, float param_2, TextEditor * this, uint param_4, undefined8 param_5, undefined8 param_6, uint * param_7, ulong param_8)
// Body     : 00273d70 - 00273f58


/* juce::TextEditor::moveCaretDown(bool) */

void __thiscall
juce::TextEditor::moveCaretDown
          (undefined8 param_1,float param_2,TextEditor *this,uint param_4,undefined8 param_5,
          undefined8 param_6,uint *param_7,ulong param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  undefined7 extraout_var;
  long lVar11;
  ulong uVar12;
  undefined8 extraout_RDX;
  int *piVar13;
  float fVar14;
  float fVar15;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  undefined4 uVar17;
  undefined1 auVar18 [16];
  long local_50;
  undefined1 local_48 [16];
  
  if (this[0x1ca] == (TextEditor)0x0) {
    moveCaretToEndOfLine(param_1,param_2,this,param_4 & 0xff,param_5,param_6,param_7,param_8);
    return;
  }
  uVar7 = (**(code **)(*(long *)this + 0x40))(this);
  uVar10 = (ulong)uVar7;
  auVar18 = (**(code **)(*(long *)this + 0x48))(this);
  iVar1 = *(int *)(this + 0x19c);
  iVar2 = *(int *)(this + 0x278);
  iVar3 = *(int *)(this + 0x27c);
  lVar11 = *(long *)(this + 0x188);
  iVar4 = *(int *)(this + 0x198);
  iVar5 = *(int *)(lVar11 + 0x208);
  fVar14 = getYOffset(this,uVar10,auVar18._8_8_,lVar11,param_7,param_8);
  fVar15 = (float)((auVar18._0_4_ - (iVar1 + iVar2)) + iVar5);
  fVar14 = (float)auVar18._12_4_ +
           (float)((auVar18._4_4_ + *(int *)(*(long *)(this + 0x188) + 0x20c)) -
                  SUB84((double)(fVar14 + (float)iVar4 + (float)iVar3) + DAT_005d9098,0)) +
           DAT_005d9038;
  local_48 = ZEXT416((uint)fVar14);
  uVar10 = indexAtPosition(fVar15,fVar14,this);
  bVar6 = getEdgeTypeCloserToPosition
                    (CONCAT44(local_48._0_4_,fVar15),this,(uint)uVar10,extraout_RDX,lVar11,param_7,
                     param_8);
  uVar7 = *(uint *)(this + 0x348);
  uVar12 = (ulong)uVar7;
  uVar8 = (uint)CONCAT71(extraout_var,bVar6);
  *(uint *)(this + 0x348) = uVar8;
  uVar16 = extraout_XMM0_Da;
  uVar17 = extraout_XMM0_Db;
  if (uVar7 != uVar8) {
    uVar9 = (**(code **)(**(long **)(this + 0x338) + 0x50))();
    uVar7 = 0;
    uVar8 = *(uint *)(this + 0x340);
    if ((int)*(uint *)(this + 0x340) < 0) {
      uVar8 = uVar7;
    }
    if (uVar9 < uVar8) {
      uVar8 = uVar9;
    }
    uVar16 = extraout_XMM0_Da_00;
    uVar17 = extraout_XMM0_Db_00;
    if (uVar8 != 0) {
      ParagraphsModel::getText
                ((undefined8 *)&local_50,*(long *)(*(long *)(this + 0x338) + 0x330) + 0x60);
      uVar9 = juce::String::operator[]((String *)&local_50,uVar8 - 1);
      piVar13 = (int *)(local_50 + -0x10);
      uVar16 = extraout_XMM0_Da_01;
      uVar17 = extraout_XMM0_Db_01;
      if (piVar13 != &emptyString) {
        LOCK();
        iVar1 = *piVar13;
        *piVar13 = *piVar13 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          operator_delete__(piVar13);
          uVar16 = extraout_XMM0_Da_02;
          uVar17 = extraout_XMM0_Db_02;
        }
      }
      if (uVar9 != 10) {
        uVar9 = (**(code **)(**(long **)(this + 0x338) + 0x50))();
        uVar7 = 1;
        uVar16 = extraout_XMM0_Da_03;
        uVar17 = extraout_XMM0_Db_03;
        if (uVar8 != uVar9) {
          uVar7 = *(uint *)(this + 0x348);
        }
      }
    }
    *(uint *)(this + 0x344) = uVar7;
  }
  moveCaretWithTransaction
            (CONCAT44(uVar17,uVar16),fVar14,this,(uint)uVar10,param_4 & 0xff,uVar12,param_7,param_8)
  ;
  return;
}


