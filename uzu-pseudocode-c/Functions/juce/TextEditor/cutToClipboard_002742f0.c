// Function : cutToClipboard
// Namespace: juce:TextEditor
// Entry    : 002742f0
// Prototype: undefined cutToClipboard(TextEditor * this)
// Body     : 002742f0 - 00274436


/* juce::TextEditor::cutToClipboard() */

void __thiscall juce::TextEditor::cutToClipboard(TextEditor *this)

{
  int iVar1;
  long lVar2;
  TextEditor TVar3;
  undefined1 auVar4 [16];
  TextEditor *pTVar5;
  uint uVar6;
  int *piVar7;
  timespec local_28;
  
  uVar6 = _ZN4juce11TimeHelpersL18lastMSCounterValueE_0;
  if (_ZN4juce11TimeHelpersL18lastMSCounterValueE_0 == 0) {
    clock_gettime(1,&local_28);
    auVar4 = SEXT816(local_28.tv_nsec / 1000 + local_28.tv_sec * 1000000) *
             SEXT816(0x20c49ba5e353f7cf);
    uVar6 = (int)(auVar4._8_8_ >> 7) - (auVar4._12_4_ >> 0x1f);
    if ((_ZN4juce11TimeHelpersL18lastMSCounterValueE_0 <= uVar6) ||
       (uVar6 < _ZN4juce11TimeHelpersL18lastMSCounterValueE_0 - 1000)) {
      LOCK();
      UNLOCK();
      _ZN4juce11TimeHelpersL18lastMSCounterValueE_0 = uVar6;
    }
  }
  *(uint *)(this + 0x280) = uVar6;
  this[0x260] = (TextEditor)0x1;
  LOCK();
  lVar2 = *(long *)(this + 0x248);
  *(undefined1 **)(this + 0x248) = &DAT_0061ac58;
  UNLOCK();
  piVar7 = (int *)(lVar2 + -0x10);
  if (piVar7 != &emptyString) {
    LOCK();
    iVar1 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar7);
      copy(this);
      TVar3 = this[0x1c8];
      goto joined_r0x002743d9;
    }
  }
  copy(this);
  TVar3 = this[0x1c8];
joined_r0x002743d9:
  if (TVar3 == (TextEditor)0x0) {
    pTVar5 = this + 8;
    do {
      if ((*(ushort *)(pTVar5 + 0xe8) & 0x8000) != 0) {
        return;
      }
      pTVar5 = *(TextEditor **)(pTVar5 + 0x30);
    } while (pTVar5 != (TextEditor *)0x0);
    moveCaret(this,*(uint *)(this + 0x274));
    local_28.tv_sec = (__time_t)&DAT_0061ac58;
                    /* try { // try from 0027440d to 00274415 has its CatchHandler @ 00274437 */
    (**(code **)(*(long *)this + 0x38))(this,&local_28);
    piVar7 = (int *)(local_28.tv_sec + -0x10);
    if (piVar7 != &emptyString) {
      LOCK();
      iVar1 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        operator_delete__(piVar7);
      }
    }
  }
  return;
}


