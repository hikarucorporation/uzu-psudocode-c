// Function : moveCaretUp
// Namespace: juce:TextEditor
// Entry    : 00273b80
// Prototype: undefined moveCaretUp(undefined8 param_1, float param_2, TextEditor * this, uint param_4, undefined8 param_5, long param_6, uint * param_7, ulong param_8)
// Body     : 00273b80 - 00273d69


/* juce::TextEditor::moveCaretUp(bool) */

void __thiscall
juce::TextEditor::moveCaretUp
          (undefined8 param_1,float param_2,TextEditor *this,uint param_4,undefined8 param_5,
          long param_6,uint *param_7,ulong param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  undefined7 extraout_var;
  ulong uVar10;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  int *piVar11;
  undefined4 uVar12;
  float fVar13;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 uVar14;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  undefined4 uVar15;
  undefined1 auVar16 [16];
  long local_50;
  undefined1 local_48 [16];
  
  if (this[0x1ca] != (TextEditor)0x0) {
    uVar7 = (**(code **)(*(long *)this + 0x40))(this);
    uVar9 = (ulong)uVar7;
    auVar16 = (**(code **)(*(long *)this + 0x48))(this);
    iVar1 = *(int *)(this + 0x19c);
    iVar2 = *(int *)(this + 0x278);
    iVar3 = *(int *)(this + 0x27c);
    iVar4 = *(int *)(this + 0x198);
    iVar5 = *(int *)(*(long *)(this + 0x188) + 0x208);
    fVar13 = getYOffset(this,uVar9,auVar16._8_8_,*(long *)(this + 0x188),param_7,param_8);
    param_6 = *(long *)(this + 0x188);
    param_2 = (float)((auVar16._4_4_ + *(int *)(param_6 + 0x20c)) -
                     SUB84((double)(fVar13 + (float)iVar4 + (float)iVar3) + DAT_005d9098,0)) +
              DAT_005d9054;
    param_1 = 0;
    param_5 = extraout_RDX;
    if (0.0 <= param_2) {
      fVar13 = (float)((auVar16._0_4_ - (iVar1 + iVar2)) + iVar5);
      local_48 = ZEXT416((uint)param_2);
      uVar9 = indexAtPosition(fVar13,param_2,this);
      bVar6 = getEdgeTypeCloserToPosition
                        (CONCAT44(local_48._0_4_,fVar13),this,(uint)uVar9,extraout_RDX_00,param_6,
                         param_7,param_8);
      uVar7 = *(uint *)(this + 0x348);
      uVar10 = (ulong)uVar7;
      uVar8 = (uint)CONCAT71(extraout_var,bVar6);
      *(uint *)(this + 0x348) = uVar8;
      uVar14 = extraout_XMM0_Da;
      uVar15 = extraout_XMM0_Db;
      if (uVar7 != uVar8) {
        uVar8 = (**(code **)(**(long **)(this + 0x338) + 0x50))();
        uVar7 = *(uint *)(this + 0x340);
        uVar12 = 0;
        if ((int)uVar7 < 0) {
          uVar7 = 0;
        }
        if (uVar8 < uVar7) {
          uVar7 = uVar8;
        }
        uVar14 = extraout_XMM0_Da_00;
        uVar15 = extraout_XMM0_Db_00;
        if (uVar7 != 0) {
          ParagraphsModel::getText
                    ((undefined8 *)&local_50,*(long *)(*(long *)(this + 0x338) + 0x330) + 0x60);
          uVar8 = juce::String::operator[]((String *)&local_50,uVar7 - 1);
          piVar11 = (int *)(local_50 + -0x10);
          uVar14 = extraout_XMM0_Da_01;
          uVar15 = extraout_XMM0_Db_01;
          if (piVar11 != &emptyString) {
            LOCK();
            iVar1 = *piVar11;
            *piVar11 = *piVar11 + -1;
            UNLOCK();
            if (iVar1 == 0) {
              operator_delete__(piVar11);
              uVar14 = extraout_XMM0_Da_02;
              uVar15 = extraout_XMM0_Db_02;
            }
          }
          if (uVar8 != 10) {
            uVar8 = (**(code **)(**(long **)(this + 0x338) + 0x50))();
            uVar12 = 1;
            uVar14 = extraout_XMM0_Da_03;
            uVar15 = extraout_XMM0_Db_03;
            if (uVar7 != uVar8) {
              uVar12 = *(undefined4 *)(this + 0x348);
            }
          }
        }
        *(undefined4 *)(this + 0x344) = uVar12;
      }
      moveCaretWithTransaction
                (CONCAT44(uVar15,uVar14),param_2,this,(uint)uVar9,param_4 & 0xff,uVar10,param_7,
                 param_8);
      return;
    }
  }
  moveCaretToStartOfLine(param_1,param_2,this,param_4 & 0xff,param_5,param_6,param_7,param_8);
  return;
}


