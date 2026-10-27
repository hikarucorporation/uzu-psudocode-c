// Function : moveCaretWithTransaction
// Namespace: juce:TextEditor
// Entry    : 00273610
// Prototype: undefined moveCaretWithTransaction(undefined8 param_1_00, float param_2, TextEditor * this, uint param_4, uint param_5, undefined8 param_6, uint * param_7, ulong param_8)
// Body     : 00273610 - 0027378c


/* juce::TextEditor::moveCaretWithTransaction(int, bool) */

void __thiscall
juce::TextEditor::moveCaretWithTransaction
          (undefined8 param_1_00,float param_2,TextEditor *this,uint param_4,uint param_5,
          undefined8 param_6,uint *param_7,ulong param_8)

{
  int iVar1;
  undefined1 auVar2 [16];
  Desktop *this_00;
  uint uVar3;
  TextEditor *pTVar4;
  long lVar5;
  int *piVar6;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  timespec local_28;
  
  uVar3 = _ZN4juce11TimeHelpersL18lastMSCounterValueE_0;
  if (_ZN4juce11TimeHelpersL18lastMSCounterValueE_0 == 0) {
    clock_gettime(1,&local_28);
    param_6 = 0x20c49ba5e353f7cf;
    auVar2 = SEXT816(local_28.tv_nsec / 1000 + local_28.tv_sec * 1000000) *
             SEXT816(0x20c49ba5e353f7cf);
    uVar3 = (int)(auVar2._8_8_ >> 7) - (auVar2._12_4_ >> 0x1f);
    param_1_00 = extraout_XMM0_Qa;
    if ((_ZN4juce11TimeHelpersL18lastMSCounterValueE_0 <= uVar3) ||
       (uVar3 < _ZN4juce11TimeHelpersL18lastMSCounterValueE_0 - 1000)) {
      LOCK();
      UNLOCK();
      _ZN4juce11TimeHelpersL18lastMSCounterValueE_0 = uVar3;
    }
  }
  *(uint *)(this + 0x280) = uVar3;
  this[0x260] = (TextEditor)0x1;
  LOCK();
  lVar5 = *(long *)(this + 0x248);
  *(undefined1 **)(this + 0x248) = &DAT_0061ac58;
  UNLOCK();
  piVar6 = (int *)(lVar5 + -0x10);
  if (piVar6 != &emptyString) {
    LOCK();
    iVar1 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar6);
      param_1_00 = extraout_XMM0_Qa_00;
    }
  }
  moveCaretTo(param_1_00,param_2,this,param_4,(ulong)(param_5 & 0xff),param_6,param_7,param_8);
  pTVar4 = this + 8;
  while ((*(ushort *)(pTVar4 + 0xe8) & 1) == 0) {
    pTVar4 = *(TextEditor **)(pTVar4 + 0x30);
    if (pTVar4 == (TextEditor *)0x0) {
      return;
    }
  }
  if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 00273720 to 00273729 has its CatchHandler @ 002737a0 */
    this_00 = operator_new(0x1d0);
                    /* try { // try from 0027372d to 00273734 has its CatchHandler @ 0027378d */
    Desktop::Desktop(this_00);
    iVar1 = *(int *)(this_00 + 0xdc);
    Desktop::instance = this_00;
  }
  else {
    iVar1 = *(int *)(Desktop::instance + 0xdc);
  }
  if ((long)iVar1 == 0) {
    return;
  }
  lVar5 = 0;
  do {
    if ((TextEditor *)(*(long **)(*(long *)(Desktop::instance + 0xd0) + lVar5))[1] == pTVar4) {
                    /* WARNING: Could not recover jumptable at 0x00273787. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(*(long *)(Desktop::instance + 0xd0) + lVar5) + 0xf8))();
      return;
    }
    lVar5 = lVar5 + 8;
  } while ((long)iVar1 * 8 != lVar5);
  return;
}


