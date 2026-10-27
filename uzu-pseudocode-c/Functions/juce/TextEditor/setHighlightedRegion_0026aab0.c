// Function : setHighlightedRegion
// Namespace: juce:TextEditor
// Entry    : 0026aab0
// Prototype: undefined setHighlightedRegion(undefined8 param_1_00, float param_2, TextEditor * this, uint * param_4, undefined8 param_5, undefined8 param_6, uint * param_7, ulong param_8)
// Body     : 0026aab0 - 0026ab83


/* juce::TextEditor::setHighlightedRegion(juce::Range<int> const&) */

void __thiscall
juce::TextEditor::setHighlightedRegion
          (undefined8 param_1_00,float param_2,TextEditor *this,uint *param_4,undefined8 param_5,
          undefined8 param_6,uint *param_7,ulong param_8)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  uint extraout_var;
  uint *puVar4;
  ulong uVar5;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  bool bVar6;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar7;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  
  uVar3 = (**(code **)(*(long *)this + 0x18))();
  uVar2 = param_4[1];
  if ((*param_4 == (uint)uVar3) && (uVar2 == (uint)((ulong)uVar3 >> 0x20))) {
    return;
  }
  uVar1 = (**(code **)(*(long *)this + 0x18))(this);
  bVar6 = true;
  uVar3 = extraout_RDX;
  puVar4 = param_4 + 1;
  uVar7 = extraout_XMM0_Qa;
  if (uVar2 != uVar1) {
    uVar2 = param_4[1];
    uVar7 = (**(code **)(*(long *)this + 0x18))(this);
    bVar6 = uVar2 == extraout_var;
    uVar3 = extraout_RDX_00;
    if (!bVar6) {
      puVar4 = param_4;
    }
  }
  uVar2 = *puVar4;
  *(undefined4 *)(this + 0x2f0) = 0;
  repaintText(uVar7,param_2,this,*(long *)(this + 0x270),uVar3,param_6,param_7,param_8);
  moveCaret(this,uVar2);
  uVar2 = (**(code **)(*(long *)this + 0x40))(this);
  uVar5 = (ulong)uVar2;
  uVar3 = extraout_XMM0_Qa_00;
  if (*(long *)(this + 0x270) != CONCAT44(uVar2,uVar2)) {
    *(long *)(this + 0x270) = CONCAT44(uVar2,uVar2);
                    /* try { // try from 0026ab5d to 0026ab61 has its CatchHandler @ 0026ab84 */
    Component::getAccessibilityHandler((Component *)(this + 8));
    uVar3 = extraout_XMM0_Qa_01;
  }
  puVar4 = param_4 + 1;
  if (bVar6) {
    puVar4 = param_4;
  }
  moveCaretTo(uVar3,param_2,this,*puVar4,1,uVar5,param_7,param_8);
  return;
}


