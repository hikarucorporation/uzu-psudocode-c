// Function : moveCaretToEndOfLine
// Namespace: juce:TextEditor
// Entry    : 00273a70
// Prototype: undefined moveCaretToEndOfLine(undefined8 param_1, float param_2, TextEditor * this, uint param_4, undefined8 param_5, undefined8 param_6, uint * param_7, ulong param_8)
// Body     : 00273a70 - 00273b76


/* juce::TextEditor::moveCaretToEndOfLine(bool) */

void __thiscall
juce::TextEditor::moveCaretToEndOfLine
          (undefined8 param_1,float param_2,TextEditor *this,uint param_4,undefined8 param_5,
          undefined8 param_6,uint *param_7,ulong param_8)

{
  int iVar1;
  uint uVar2;
  long in_RAX;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  long local_38;
  
  local_38 = in_RAX;
  auVar7 = getLineRangeForIndex
                     (*(TextEditor **)(this + 0x330),
                      *(int *)(this + 0x340) + -1 + (uint)(*(int *)(this + 0x344) == 0));
  iVar1 = *(int *)(this + 0x348);
  *(undefined4 *)(this + 0x348) = 1;
  uVar6 = extraout_XMM0_Qa;
  if (iVar1 != 1) {
    uVar2 = (**(code **)(**(long **)(this + 0x338) + 0x50))();
    uVar3 = *(uint *)(this + 0x340);
    uVar5 = 0;
    if ((int)uVar3 < 0) {
      uVar3 = 0;
    }
    if (uVar2 < uVar3) {
      uVar3 = uVar2;
    }
    uVar6 = extraout_XMM0_Qa_00;
    if (uVar3 != 0) {
      ParagraphsModel::getText(&local_38,*(long *)(*(long *)(this + 0x338) + 0x330) + 0x60);
      uVar2 = juce::String::operator[]((String *)&local_38,uVar3 - 1);
      piVar4 = (int *)(local_38 + -0x10);
      uVar6 = extraout_XMM0_Qa_01;
      if (piVar4 != &emptyString) {
        LOCK();
        iVar1 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          operator_delete__(piVar4);
          uVar6 = extraout_XMM0_Qa_02;
        }
      }
      if (uVar2 != 10) {
        uVar2 = (**(code **)(**(long **)(this + 0x338) + 0x50))();
        uVar5 = 1;
        uVar6 = extraout_XMM0_Qa_03;
        if (uVar3 != uVar2) {
          uVar5 = *(undefined4 *)(this + 0x348);
        }
      }
    }
    *(undefined4 *)(this + 0x344) = uVar5;
  }
  moveCaretWithTransaction(uVar6,param_2,this,auVar7._8_4_,param_4 & 0xff,param_6,param_7,param_8);
  return;
}


