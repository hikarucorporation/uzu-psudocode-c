// Function : handleCommandMessage
// Namespace: juce:TextEditor
// Entry    : 0026f8f0
// Prototype: undefined handleCommandMessage(TextEditor * this, int param_1)
// Body     : 0026f8f0 - 002700c5


/* juce::TextEditor::handleCommandMessage(int) */

void __thiscall juce::TextEditor::handleCommandMessage(TextEditor *this,int param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = *(long **)(this + 0xe0);
  if (plVar2 == (long *)0x0) {
    plVar2 = operator_new(0x18);
    *(undefined4 *)(plVar2 + 1) = 0;
    *plVar2 = (long)&PTR__ReferenceCountedObject_00714b80;
    plVar2[2] = (long)(this + 8);
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    plVar1 = *(long **)(this + 0xe0);
    *(long **)(this + 0xe0) = plVar2;
    if (plVar1 != (long *)0x0) {
      LOCK();
      plVar2 = plVar1 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)(*plVar1 + 8))();
      }
      plVar2 = *(long **)(this + 0xe0);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)0x0;
        goto joined_r0x0026f9e7;
      }
    }
  }
  LOCK();
  *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  UNLOCK();
joined_r0x0026f9e7:
  if (param_1 + 0xefffcfffU < 4) {
                    /* WARNING: Could not recover jumptable at 0x0026f931. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_005de9b0 + *(int *)(&DAT_005de9b0 + (ulong)(param_1 + 0xefffcfff) * 4)))();
    return;
  }
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar2 + 8))(plVar2);
    }
  }
  return;
}


