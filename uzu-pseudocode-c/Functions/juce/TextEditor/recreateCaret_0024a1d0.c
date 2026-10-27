// Function : recreateCaret
// Namespace: juce:TextEditor
// Entry    : 0024a1d0
// Prototype: undefined recreateCaret(TextEditor * this)
// Body     : 0024a1d0 - 0024a2fb


/* juce::TextEditor::recreateCaret() */

void __thiscall juce::TextEditor::recreateCaret(TextEditor *this)

{
  TextEditor *pTVar1;
  long *plVar2;
  TextEditor *pTVar3;
  Desktop *this_00;
  LookAndFeel_V4 *pLVar4;
  Component *pCVar5;
  
  if ((this[0x1c9] == (TextEditor)0x0) || (this[0x1c8] != (TextEditor)0x0)) {
LAB_0024a24d:
    plVar2 = *(long **)(this + 0x268);
    *(undefined8 *)(this + 0x268) = 0;
    if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0024a26c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 8))();
      return;
    }
  }
  else {
    pTVar1 = this + 8;
    pTVar3 = pTVar1;
    do {
      if ((*(ushort *)(pTVar3 + 0xe8) & 0x8000) != 0) goto LAB_0024a24d;
      pTVar3 = *(TextEditor **)(pTVar3 + 0x30);
    } while (pTVar3 != (TextEditor *)0x0);
    if (*(long *)(this + 0x268) == 0) {
      pTVar3 = pTVar1;
      do {
        if ((*(long *)(pTVar3 + 0x68) != 0) &&
           (pLVar4 = *(LookAndFeel_V4 **)(*(long *)(pTVar3 + 0x68) + 0x10),
           pLVar4 != (LookAndFeel_V4 *)0x0)) goto LAB_0024a2a8;
        pTVar3 = *(TextEditor **)(pTVar3 + 0x30);
      } while (pTVar3 != (TextEditor *)0x0);
      if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 0024a281 to 0024a28a has its CatchHandler @ 0024a30f */
        this_00 = operator_new(0x1d0);
                    /* try { // try from 0024a28e to 0024a295 has its CatchHandler @ 0024a2fc */
        Desktop::Desktop(this_00);
        Desktop::instance = this_00;
      }
      pLVar4 = Desktop::getDefaultLookAndFeel(Desktop::instance);
LAB_0024a2a8:
      pCVar5 = (Component *)(**(code **)(*(long *)(pLVar4 + 0x18) + 0x20))(pLVar4 + 0x18,pTVar1);
      plVar2 = *(long **)(this + 0x268);
      *(Component **)(this + 0x268) = pCVar5;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
        pCVar5 = *(Component **)(this + 0x268);
      }
      if (pCVar5 != (Component *)0x0) {
        Component::addChildComponent(*(Component **)(this + 400),pCVar5,0xffffffff);
      }
      updateCaretPosition(this);
      return;
    }
  }
  return;
}


