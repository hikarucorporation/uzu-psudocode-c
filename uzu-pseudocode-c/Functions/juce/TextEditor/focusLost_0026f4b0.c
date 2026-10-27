// Function : focusLost
// Namespace: juce:TextEditor
// Entry    : 0026f4b0
// Prototype: undefined focusLost(TextEditor * param_1)
// Body     : 0026f4b0 - 0026f5eb


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::TextEditor::focusLost(juce::Component::FocusChangeType) */

void __cdecl juce::TextEditor::focusLost(TextEditor *param_1)

{
  int iVar1;
  long lVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  int *piVar5;
  timespec local_20;
  
  uVar4 = _ZN4juce11TimeHelpersL18lastMSCounterValueE_0;
  if (_ZN4juce11TimeHelpersL18lastMSCounterValueE_0 == 0) {
    clock_gettime(1,&local_20);
    auVar3 = SEXT816(local_20.tv_nsec / 1000 + local_20.tv_sec * 1000000) *
             SEXT816(0x20c49ba5e353f7cf);
    uVar4 = (int)(auVar3._8_8_ >> 7) - (auVar3._12_4_ >> 0x1f);
    if ((_ZN4juce11TimeHelpersL18lastMSCounterValueE_0 <= uVar4) ||
       (uVar4 < _ZN4juce11TimeHelpersL18lastMSCounterValueE_0 - 1000)) {
      LOCK();
      UNLOCK();
      _ZN4juce11TimeHelpersL18lastMSCounterValueE_0 = uVar4;
    }
  }
  *(uint *)(param_1 + 0x280) = uVar4;
  param_1[0x260] = (TextEditor)0x1;
  LOCK();
  lVar2 = *(long *)(param_1 + 0x248);
  *(undefined1 **)(param_1 + 0x248) = &DAT_0061ac58;
  UNLOCK();
  piVar5 = (int *)(lVar2 + -0x10);
  if (piVar5 != &emptyString) {
    LOCK();
    iVar1 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar5);
    }
  }
  param_1[0x1d0] = (TextEditor)0x0;
  Timer::stopTimer((Timer *)(*(long *)(param_1 + 400) + 0xf0));
  *(undefined4 *)(param_1 + 0x32c) = 0;
  if (*(int *)(param_1 + 0x328) != 0) {
    free(*(void **)(param_1 + 800));
    *(undefined8 *)(param_1 + 800) = 0;
  }
  *(undefined4 *)(param_1 + 0x328) = 0;
  updateCaretPosition(param_1);
  Component::postCommandMessage((Component *)(param_1 + 8),0x10003004);
  Component::internalRepaintUnchecked((long)(param_1 + 8),0,*(ulong *)(param_1 + 0x48),'\x01');
  return;
}


