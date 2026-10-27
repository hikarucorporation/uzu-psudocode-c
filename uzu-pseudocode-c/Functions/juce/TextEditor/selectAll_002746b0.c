// Function : selectAll
// Namespace: juce:TextEditor
// Entry    : 002746b0
// Prototype: undefined selectAll(undefined8 param_1, float param_2, TextEditor * this, undefined8 param_4, undefined8 param_5, undefined8 param_6, uint * param_7, ulong param_8)
// Body     : 002746b0 - 002747dc


/* juce::TextEditor::selectAll() */

void __thiscall
juce::TextEditor::selectAll
          (undefined8 param_1,float param_2,TextEditor *this,undefined8 param_4,undefined8 param_5,
          undefined8 param_6,uint *param_7,ulong param_8)

{
  int iVar1;
  long lVar2;
  undefined1 auVar3 [16];
  ulong uVar4;
  uint uVar5;
  undefined8 extraout_RDX;
  int *piVar6;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 uVar7;
  timespec local_20;
  
  uVar5 = _ZN4juce11TimeHelpersL18lastMSCounterValueE_0;
  if (_ZN4juce11TimeHelpersL18lastMSCounterValueE_0 == 0) {
    clock_gettime(1,&local_20);
    param_6 = 0x20c49ba5e353f7cf;
    auVar3 = SEXT816(local_20.tv_nsec / 1000 + local_20.tv_sec * 1000000) *
             SEXT816(0x20c49ba5e353f7cf);
    uVar5 = (int)(auVar3._8_8_ >> 7) - (auVar3._12_4_ >> 0x1f);
    if ((_ZN4juce11TimeHelpersL18lastMSCounterValueE_0 <= uVar5) ||
       (uVar5 < _ZN4juce11TimeHelpersL18lastMSCounterValueE_0 - 1000)) {
      LOCK();
      UNLOCK();
      _ZN4juce11TimeHelpersL18lastMSCounterValueE_0 = uVar5;
    }
  }
  *(uint *)(this + 0x280) = uVar5;
  this[0x260] = (TextEditor)0x1;
  LOCK();
  lVar2 = *(long *)(this + 0x248);
  *(undefined1 **)(this + 0x248) = &DAT_0061ac58;
  UNLOCK();
  piVar6 = (int *)(lVar2 + -0x10);
  if (piVar6 != &emptyString) {
    LOCK();
    iVar1 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar6);
    }
  }
  uVar5 = (**(code **)(*(long *)this + 0x50))(this);
  *(undefined4 *)(this + 0x2f0) = 0;
  repaintText(extraout_XMM0_Qa,param_2,this,*(long *)(this + 0x270),extraout_RDX,param_6,param_7,
              param_8);
  moveCaret(this,uVar5);
  uVar5 = (**(code **)(*(long *)this + 0x40))(this);
  uVar4 = (ulong)uVar5;
  uVar7 = extraout_XMM0_Qa_00;
  if (*(long *)(this + 0x270) != CONCAT44(uVar5,uVar5)) {
    *(long *)(this + 0x270) = CONCAT44(uVar5,uVar5);
                    /* try { // try from 002747c3 to 002747c7 has its CatchHandler @ 002747dd */
    Component::getAccessibilityHandler((Component *)(this + 8));
    uVar7 = extraout_XMM0_Qa_01;
  }
  moveCaretTo(uVar7,param_2,this,0,1,uVar4,param_7,param_8);
  return;
}


