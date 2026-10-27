// Function : timerCallbackInt
// Namespace: juce:TextEditor
// Entry    : 0024ad90
// Prototype: undefined timerCallbackInt(TextEditor * this)
// Body     : 0024ad90 - 0024af78


/* juce::TextEditor::timerCallbackInt() */

void __thiscall juce::TextEditor::timerCallbackInt(TextEditor *this)

{
  int iVar1;
  long lVar2;
  TextEditor *pTVar3;
  undefined1 auVar4 [16];
  char cVar5;
  ulong uVar6;
  TextEditor *pTVar7;
  uint uVar8;
  int *piVar9;
  timespec local_18;
  
  if ((this[0x1d0] != (TextEditor)0x0) ||
     (pTVar7 = this + 8, Component::currentlyFocusedComponent != pTVar7)) goto LAB_0024adf2;
  if ((ModalComponentManager::singletonHolder != 0) &&
     (0 < (int)*(uint *)(ModalComponentManager::singletonHolder + 0x24))) {
    uVar6 = (ulong)*(uint *)(ModalComponentManager::singletonHolder + 0x24) + 1;
    do {
      lVar2 = *(long *)(*(long *)(ModalComponentManager::singletonHolder + 0x18) +
                       (ulong)((int)uVar6 - 2) * 8);
      if (*(char *)(lVar2 + 0x5c) != '\0') {
        pTVar3 = *(TextEditor **)(lVar2 + 0x40);
        if ((pTVar3 != (TextEditor *)0x0) && (pTVar3 != pTVar7)) goto LAB_0024af50;
        break;
      }
      uVar6 = uVar6 - 1;
    } while (1 < uVar6);
  }
  goto LAB_0024adeb;
  while (pTVar7 = *(TextEditor **)(pTVar7 + 0x30), pTVar7 != pTVar3) {
LAB_0024af50:
    if (pTVar7 == (TextEditor *)0x0) {
      cVar5 = (**(code **)(*(long *)pTVar3 + 0x170))();
      if (cVar5 == '\0') goto LAB_0024adf2;
      break;
    }
  }
LAB_0024adeb:
  this[0x1d0] = (TextEditor)0x1;
LAB_0024adf2:
  uVar8 = _ZN4juce11TimeHelpersL18lastMSCounterValueE_0;
  if (_ZN4juce11TimeHelpersL18lastMSCounterValueE_0 == 0) {
    clock_gettime(1,&local_18);
    auVar4 = SEXT816(local_18.tv_nsec / 1000 + local_18.tv_sec * 1000000) *
             SEXT816(0x20c49ba5e353f7cf);
    uVar8 = (int)(auVar4._8_8_ >> 7) - (auVar4._12_4_ >> 0x1f);
    if ((_ZN4juce11TimeHelpersL18lastMSCounterValueE_0 <= uVar8) ||
       (uVar8 < _ZN4juce11TimeHelpersL18lastMSCounterValueE_0 - 1000)) {
      LOCK();
      UNLOCK();
      _ZN4juce11TimeHelpersL18lastMSCounterValueE_0 = uVar8;
    }
  }
  if (*(int *)(this + 0x280) + 200U < uVar8) {
    uVar8 = _ZN4juce11TimeHelpersL18lastMSCounterValueE_0;
    if (_ZN4juce11TimeHelpersL18lastMSCounterValueE_0 == 0) {
      clock_gettime(1,&local_18);
      auVar4 = SEXT816(local_18.tv_nsec / 1000 + local_18.tv_sec * 1000000) *
               SEXT816(0x20c49ba5e353f7cf);
      uVar8 = (int)(auVar4._8_8_ >> 7) - (auVar4._12_4_ >> 0x1f);
      if ((_ZN4juce11TimeHelpersL18lastMSCounterValueE_0 <= uVar8) ||
         (uVar8 < _ZN4juce11TimeHelpersL18lastMSCounterValueE_0 - 1000)) {
        LOCK();
        UNLOCK();
        _ZN4juce11TimeHelpersL18lastMSCounterValueE_0 = uVar8;
      }
    }
    *(uint *)(this + 0x280) = uVar8;
    this[0x260] = (TextEditor)0x1;
    LOCK();
    lVar2 = *(long *)(this + 0x248);
    *(undefined1 **)(this + 0x248) = &DAT_0061ac58;
    UNLOCK();
    piVar9 = (int *)(lVar2 + -0x10);
    if (piVar9 != &emptyString) {
      LOCK();
      iVar1 = *piVar9;
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        operator_delete__(piVar9);
        return;
      }
    }
  }
  return;
}


