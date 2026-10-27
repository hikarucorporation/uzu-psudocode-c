// Function : textEditorReturnKeyPressed
// Namespace: juce:Label
// Entry    : 002383c0
// Prototype: undefined textEditorReturnKeyPressed(Label * param_1, long param_2)
// Body     : 002383c0 - 002384c7


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::Label::textEditorReturnKeyPressed(juce::TextEditor&) */

void __cdecl juce::Label::textEditorReturnKeyPressed(Label *param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  
  if (*(long *)(param_1 + 0x1c0) == 0) {
    return;
  }
  plVar3 = *(long **)(param_1 + 0xd8);
  if (plVar3 == (long *)0x0) {
    plVar3 = operator_new(0x18);
    *(undefined4 *)(plVar3 + 1) = 0;
    *plVar3 = (long)&PTR__ReferenceCountedObject_00714b80;
    plVar3[2] = (long)param_1;
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    plVar1 = *(long **)(param_1 + 0xd8);
    *(long **)(param_1 + 0xd8) = plVar3;
    if (plVar1 != (long *)0x0) {
      LOCK();
      plVar3 = plVar1 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)(*plVar1 + 8))();
      }
      plVar3 = *(long **)(param_1 + 0xd8);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)0x0;
        goto LAB_002383ed;
      }
    }
  }
  LOCK();
  *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
  UNLOCK();
LAB_002383ed:
                    /* try { // try from 002383f4 to 0023840a has its CatchHandler @ 002384cd */
  uVar2 = updateFromTextEditorContents((long *)param_1,*(long *)(param_2 + 0x330));
  hideEditor(param_1,'\x01');
  if ((char)uVar2 == '\0') {
    if (plVar3 == (long *)0x0) {
      return;
    }
  }
  else {
    if (plVar3 == (long *)0x0) {
      return;
    }
                    /* try { // try from 0023841f to 00238436 has its CatchHandler @ 002384c8 */
    if ((plVar3[2] != 0) && ((**(code **)(*(long *)param_1 + 0x1a0))(param_1), plVar3[2] != 0)) {
      callChangeListeners(param_1);
    }
  }
  LOCK();
  plVar1 = plVar3 + 1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)*plVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00238456. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 8))(plVar3);
    return;
  }
  return;
}


