// Function : moveCaretTo
// Namespace: juce:TextEditor
// Entry    : 002732f0
// Prototype: undefined moveCaretTo(undefined8 param_1_00, float param_2, TextEditor * this, uint param_4, undefined8 param_5, undefined8 param_6, uint * param_7, ulong param_8)
// Body     : 002732f0 - 002734b3


/* juce::TextEditor::moveCaretTo(int, bool) */

void __thiscall
juce::TextEditor::moveCaretTo
          (undefined8 param_1_00,float param_2,TextEditor *this,uint param_4,undefined8 param_5,
          undefined8 param_6,uint *param_7,ulong param_8)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long extraout_RDX;
  long extraout_RDX_00;
  uint uVar7;
  ulong uVar8;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 uVar9;
  
  if ((int)param_5 == 0) {
    *(undefined4 *)(this + 0x2f0) = 0;
    repaintText(param_1_00,param_2,this,*(long *)(this + 0x270),param_5,param_6,param_7,param_8);
    moveCaret(this,param_4);
    uVar3 = (**(code **)(*(long *)this + 0x40))(this);
    if (*(long *)(this + 0x270) != CONCAT44(uVar3,uVar3)) {
      *(long *)(this + 0x270) = CONCAT44(uVar3,uVar3);
                    /* try { // try from 0027340f to 00273416 has its CatchHandler @ 002734c4 */
      Component::getAccessibilityHandler((Component *)(this + 8));
    }
    return;
  }
  moveCaret(this,param_4);
  uVar5 = *(ulong *)(this + 0x270);
  if (*(int *)(this + 0x2f0) == 1) {
LAB_00273363:
    iVar1 = (**(code **)(*(long *)this + 0x40))(this);
    if (*(int *)(this + 0x274) <= iVar1) {
      *(undefined4 *)(this + 0x2f0) = 2;
    }
    uVar2 = (**(code **)(*(long *)this + 0x40))(this);
    uVar7 = *(uint *)(this + 0x274);
    uVar4 = uVar7;
    if ((int)uVar7 < (int)uVar2) {
      uVar4 = uVar2;
    }
    if ((int)uVar2 < (int)uVar7) {
      uVar4 = uVar7;
    }
    if ((int)uVar2 < (int)uVar7) {
      uVar7 = uVar2;
    }
    lVar6 = (ulong)uVar4 << 0x20;
    uVar9 = extraout_XMM0_Qa;
    if (*(long *)(this + 0x270) != CONCAT44(uVar4,uVar7)) {
      *(long *)(this + 0x270) = CONCAT44(uVar4,uVar7);
                    /* try { // try from 002733b9 to 002733bd has its CatchHandler @ 002734bc */
      Component::getAccessibilityHandler((Component *)(this + 8));
      lVar6 = extraout_RDX;
      uVar9 = extraout_XMM0_Qa_00;
    }
  }
  else {
    if (*(int *)(this + 0x2f0) == 0) {
      iVar1 = (**(code **)(*(long *)this + 0x40))(this);
      uVar7 = -(iVar1 - *(int *)(this + 0x270));
      if ((int)uVar7 < 0) {
        uVar7 = iVar1 - *(int *)(this + 0x270);
      }
      iVar1 = (**(code **)(*(long *)this + 0x40))(this);
      uVar4 = -(iVar1 - *(int *)(this + 0x274));
      if ((int)uVar4 < 0) {
        uVar4 = iVar1 - *(int *)(this + 0x274);
      }
      if (uVar7 < uVar4) {
        *(undefined4 *)(this + 0x2f0) = 1;
        goto LAB_00273363;
      }
      *(undefined4 *)(this + 0x2f0) = 2;
    }
    iVar1 = (**(code **)(*(long *)this + 0x40))(this);
    if (iVar1 < *(int *)(this + 0x270)) {
      *(undefined4 *)(this + 0x2f0) = 1;
    }
    uVar2 = (**(code **)(*(long *)this + 0x40))(this);
    uVar7 = *(uint *)(this + 0x270);
    uVar4 = uVar7;
    if ((int)uVar7 < (int)uVar2) {
      uVar4 = uVar2;
    }
    if ((int)uVar2 < (int)uVar7) {
      uVar4 = uVar7;
    }
    if ((int)uVar2 < (int)uVar7) {
      uVar7 = uVar2;
    }
    lVar6 = (ulong)uVar4 << 0x20;
    uVar9 = extraout_XMM0_Qa_01;
    if (*(long *)(this + 0x270) != CONCAT44(uVar4,uVar7)) {
      *(long *)(this + 0x270) = CONCAT44(uVar4,uVar7);
                    /* try { // try from 00273478 to 0027347c has its CatchHandler @ 002734b4 */
      Component::getAccessibilityHandler((Component *)(this + 8));
      lVar6 = extraout_RDX_00;
      uVar9 = extraout_XMM0_Qa_02;
    }
  }
  uVar8 = (ulong)*(uint *)(this + 0x270);
  if ((int)uVar5 < (int)*(uint *)(this + 0x270)) {
    uVar8 = uVar5 & 0xffffffff;
  }
  uVar4 = (uint)(uVar5 >> 0x20);
  uVar7 = *(uint *)(this + 0x274);
  if ((int)*(uint *)(this + 0x274) < (int)uVar4) {
    uVar7 = uVar4;
  }
  uVar5 = (ulong)uVar7;
  if ((int)uVar7 <= (int)uVar8) {
    uVar5 = uVar8;
  }
  repaintText(uVar9,param_2,this,uVar8 | uVar5 << 0x20,lVar6,uVar5 << 0x20,param_7,param_8);
  return;
}


