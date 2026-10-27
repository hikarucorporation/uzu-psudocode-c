// Function : textEditorTextChanged
// Namespace: juce:Label
// Entry    : 002382e0
// Prototype: undefined textEditorTextChanged(Label * this, undefined8 param_1)
// Body     : 002382e0 - 002383b5


/* juce::Label::textEditorTextChanged(juce::TextEditor&) */

void __thiscall juce::Label::textEditorTextChanged(Label *this,undefined8 param_1)

{
  long lVar1;
  Label *pLVar2;
  char cVar3;
  ulong uVar4;
  Label *pLVar5;
  
  pLVar2 = Component::currentlyFocusedComponent;
  if (*(long *)(this + 0x1c0) != 0) {
    for (; pLVar2 != this; pLVar2 = *(Label **)(pLVar2 + 0x30)) {
      if (pLVar2 == (Label *)0x0) {
        if ((ModalComponentManager::singletonHolder == 0) ||
           ((int)*(uint *)(ModalComponentManager::singletonHolder + 0x24) < 1)) goto LAB_00238357;
        uVar4 = (ulong)*(uint *)(ModalComponentManager::singletonHolder + 0x24) + 1;
        goto LAB_00238340;
      }
    }
  }
  return;
  while (uVar4 = uVar4 - 1, 1 < uVar4) {
LAB_00238340:
    lVar1 = *(long *)(*(long *)(ModalComponentManager::singletonHolder + 0x18) +
                     (ulong)((int)uVar4 - 2) * 8);
    if (*(char *)(lVar1 + 0x5c) != '\0') {
      pLVar2 = *(Label **)(lVar1 + 0x40);
      if ((pLVar2 != (Label *)0x0) && (pLVar2 != this)) {
        pLVar5 = this;
        goto LAB_00238390;
      }
      break;
    }
  }
  goto LAB_00238357;
  while (pLVar5 = *(Label **)(pLVar5 + 0x30), pLVar5 != pLVar2) {
LAB_00238390:
    if (pLVar5 == (Label *)0x0) {
      cVar3 = (**(code **)(*(long *)pLVar2 + 0x170))(pLVar2,this);
      if (cVar3 == '\0') {
        return;
      }
      break;
    }
  }
LAB_00238357:
                    /* WARNING: Could not recover jumptable at 0x00238376. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x1e0 + (ulong)(byte)this[0x212] * 8))(this,param_1);
  return;
}


