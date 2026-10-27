// Function : ~InsertAction
// Namespace: juce:TextEditor:InsertAction
// Entry    : 002471d0
// Prototype: undefined ~InsertAction(InsertAction * this)
// Body     : 002471d0 - 00247221


/* juce::TextEditor::InsertAction::~InsertAction() */

void __thiscall juce::TextEditor::InsertAction::~InsertAction(InsertAction *this)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  int *piVar4;
  
  plVar3 = *(long **)(this + 0x28);
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  piVar4 = (int *)(*(long *)(this + 0x10) + -0x10);
  if (piVar4 != &emptyString) {
    LOCK();
    iVar2 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      operator_delete__(piVar4);
      operator_delete(this);
      return;
    }
  }
  operator_delete(this);
  return;
}


