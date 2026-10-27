// Function : textEditorTextChanged
// Namespace: juce:Label
// Entry    : 002387d0
// Prototype: undefined textEditorTextChanged(Label * this, undefined8 param_1)
// Body     : 002387d0 - 002388b5


/* non-virtual thunk to juce::Label::textEditorTextChanged(juce::TextEditor&) */

void __thiscall juce::Label::textEditorTextChanged(Label *this,undefined8 param_1)

{
  Label *pLVar1;
  long lVar2;
  char cVar3;
  ulong uVar4;
  Label *pLVar5;
  Label *pLVar6;
  
  if (*(long *)(this + 0xc0) != 0) {
    pLVar6 = this + -0x100;
    for (pLVar1 = Component::currentlyFocusedComponent; pLVar1 != pLVar6;
        pLVar1 = *(Label **)(pLVar1 + 0x30)) {
      if (pLVar1 == (Label *)0x0) {
        if ((ModalComponentManager::singletonHolder == 0) ||
           ((int)*(uint *)(ModalComponentManager::singletonHolder + 0x24) < 1)) goto LAB_00238857;
        uVar4 = (ulong)*(uint *)(ModalComponentManager::singletonHolder + 0x24) + 1;
        goto LAB_00238840;
      }
    }
  }
  return;
  while (uVar4 = uVar4 - 1, 1 < uVar4) {
LAB_00238840:
    lVar2 = *(long *)(*(long *)(ModalComponentManager::singletonHolder + 0x18) +
                     (ulong)((int)uVar4 - 2) * 8);
    if (*(char *)(lVar2 + 0x5c) != '\0') {
      pLVar1 = *(Label **)(lVar2 + 0x40);
      if ((pLVar1 != (Label *)0x0) && (pLVar1 != pLVar6)) {
        pLVar5 = pLVar6;
        goto LAB_00238890;
      }
      break;
    }
  }
  goto LAB_00238857;
  while (pLVar5 = *(Label **)(pLVar5 + 0x30), pLVar5 != pLVar1) {
LAB_00238890:
    if (pLVar5 == (Label *)0x0) {
      cVar3 = (**(code **)(*(long *)pLVar1 + 0x170))(pLVar1,pLVar6);
      if (cVar3 == '\0') {
        return;
      }
      break;
    }
  }
LAB_00238857:
                    /* WARNING: Could not recover jumptable at 0x00238876. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)pLVar6 + 0x1e0 + (ulong)(byte)this[0x112] * 8))(pLVar6,param_1);
  return;
}


