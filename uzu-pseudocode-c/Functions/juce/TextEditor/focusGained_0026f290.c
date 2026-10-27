// Function : focusGained
// Namespace: juce:TextEditor
// Entry    : 0026f290
// Prototype: undefined focusGained(undefined8 param_1, float param_2, TextEditor * this, int param_4, undefined8 param_5, undefined8 param_6, uint * param_7, ulong param_8)
// Body     : 0026f290 - 0026f499


/* juce::TextEditor::focusGained(juce::Component::FocusChangeType) */

void __thiscall
juce::TextEditor::focusGained
          (undefined8 param_1,float param_2,TextEditor *this,int param_4,undefined8 param_5,
          undefined8 param_6,uint *param_7,ulong param_8)

{
  int iVar1;
  long lVar2;
  TextEditor TVar3;
  TextEditor *pTVar4;
  undefined1 auVar5 [16];
  char cVar6;
  ulong uVar7;
  TextEditor *pTVar8;
  uint uVar9;
  ulong extraout_RDX;
  int *piVar10;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  timespec local_20;
  
  uVar7 = (ulong)_ZN4juce11TimeHelpersL18lastMSCounterValueE_0;
  if (_ZN4juce11TimeHelpersL18lastMSCounterValueE_0 == 0) {
    clock_gettime(1,&local_20);
    param_6 = 0x20c49ba5e353f7cf;
    auVar5 = SEXT816(local_20.tv_nsec / 1000 + local_20.tv_sec * 1000000) *
             SEXT816(0x20c49ba5e353f7cf);
    uVar9 = (int)(auVar5._8_8_ >> 7) - (auVar5._12_4_ >> 0x1f);
    uVar7 = (ulong)uVar9;
    param_1 = extraout_XMM0_Qa;
    if ((_ZN4juce11TimeHelpersL18lastMSCounterValueE_0 <= uVar9) ||
       (uVar9 < _ZN4juce11TimeHelpersL18lastMSCounterValueE_0 - 1000)) {
      LOCK();
      UNLOCK();
      _ZN4juce11TimeHelpersL18lastMSCounterValueE_0 = uVar9;
    }
  }
  *(int *)(this + 0x280) = (int)uVar7;
  this[0x260] = (TextEditor)0x1;
  LOCK();
  lVar2 = *(long *)(this + 0x248);
  *(undefined1 **)(this + 0x248) = &DAT_0061ac58;
  UNLOCK();
  piVar10 = (int *)(lVar2 + -0x10);
  if (piVar10 == &emptyString) {
LAB_0026f34d:
    TVar3 = this[0x1ce];
  }
  else {
    LOCK();
    iVar1 = *piVar10;
    *piVar10 = *piVar10 + -1;
    UNLOCK();
    if (iVar1 != 0) goto LAB_0026f34d;
    operator_delete__(piVar10);
    TVar3 = this[0x1ce];
    uVar7 = extraout_RDX;
    param_1 = extraout_XMM0_Qa_01;
  }
  if (TVar3 != (TextEditor)0x0) {
    *(undefined4 *)(this + 0x2f0) = 0;
    repaintText(param_1,param_2,this,*(long *)(this + 0x270),uVar7,param_6,param_7,param_8);
    moveCaret(this,0);
    uVar9 = (**(code **)(*(long *)this + 0x40))(this);
    uVar7 = (ulong)uVar9;
    if (*(long *)(this + 0x270) != CONCAT44(uVar9,uVar9)) {
      *(long *)(this + 0x270) = CONCAT44(uVar9,uVar9);
                    /* try { // try from 0026f3a2 to 0026f3a6 has its CatchHandler @ 0026f49a */
      Component::getAccessibilityHandler((Component *)(this + 8));
    }
    uVar9 = (**(code **)(*(long *)this + 0x50))(this);
    moveCaretTo(extraout_XMM0_Qa_00,param_2,this,uVar9,1,uVar7,param_7,param_8);
  }
  if ((this[0x1d0] != (TextEditor)0x0) ||
     (pTVar8 = this + 8, Component::currentlyFocusedComponent != pTVar8)) goto LAB_0026f464;
  if ((ModalComponentManager::singletonHolder != 0) &&
     (0 < (int)*(uint *)(ModalComponentManager::singletonHolder + 0x24))) {
    uVar7 = (ulong)*(uint *)(ModalComponentManager::singletonHolder + 0x24) + 1;
    do {
      lVar2 = *(long *)(*(long *)(ModalComponentManager::singletonHolder + 0x18) +
                       (ulong)((int)uVar7 - 2) * 8);
      if (*(char *)(lVar2 + 0x5c) != '\0') {
        pTVar4 = *(TextEditor **)(lVar2 + 0x40);
        if ((pTVar4 != (TextEditor *)0x0) && (pTVar4 != pTVar8)) goto LAB_0026f440;
        break;
      }
      uVar7 = uVar7 - 1;
    } while (1 < uVar7);
  }
  goto LAB_0026f45d;
  while (pTVar8 = *(TextEditor **)(pTVar8 + 0x30), pTVar8 != pTVar4) {
LAB_0026f440:
    if (pTVar8 == (TextEditor *)0x0) {
      cVar6 = (**(code **)(*(long *)pTVar4 + 0x170))();
      if (cVar6 == '\0') goto LAB_0026f464;
      break;
    }
  }
LAB_0026f45d:
  this[0x1d0] = (TextEditor)0x1;
LAB_0026f464:
  if ((param_4 == 0) && (this[0x1ce] != (TextEditor)0x0)) {
    this[0x1d0] = (TextEditor)0x0;
  }
  Component::internalRepaintUnchecked((long)(this + 8),0,*(ulong *)(this + 0x48),'\x01');
  updateCaretPosition(this);
  return;
}


