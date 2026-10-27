// Function : ~RemoveAction
// Namespace: juce:TextEditor:RemoveAction
// Entry    : 00248770
// Prototype: undefined ~RemoveAction(RemoveAction * this)
// Body     : 00248770 - 00248845


/* juce::TextEditor::RemoveAction::~RemoveAction() */

void __thiscall juce::TextEditor::RemoveAction::~RemoveAction(RemoveAction *this)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  int *piVar6;
  
  if (*(void **)(this + 0x68) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x68));
  }
  plVar4 = *(long **)(this + 0x50);
  plVar5 = *(long **)(this + 0x58);
  if (plVar4 != plVar5) {
    do {
      plVar3 = (long *)*plVar4;
      if (plVar3 != (long *)0x0) {
        LOCK();
        plVar1 = plVar3 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)(*plVar3 + 8))();
        }
      }
      plVar4 = plVar4 + 1;
    } while (plVar4 != plVar5);
    plVar4 = *(long **)(this + 0x50);
  }
  if (plVar4 != (long *)0x0) {
    operator_delete(plVar4);
  }
  plVar5 = *(long **)(this + 0x38);
  plVar4 = *(long **)(this + 0x40);
  if (plVar5 != plVar4) {
    do {
      piVar6 = (int *)(*plVar5 + -0x10);
      if (piVar6 != &emptyString) {
        LOCK();
        iVar2 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar2 == 0) {
          operator_delete__(piVar6);
        }
      }
      plVar5 = plVar5 + 1;
    } while (plVar5 != plVar4);
    plVar5 = *(long **)(this + 0x38);
  }
  if (plVar5 != (long *)0x0) {
    operator_delete(plVar5);
  }
  if (*(void **)(this + 0x20) == (void *)0x0) {
    return;
  }
  operator_delete(*(void **)(this + 0x20));
  return;
}


