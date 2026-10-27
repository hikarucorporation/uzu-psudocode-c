// Function : deleteForwards
// Namespace: juce:TextEditor
// Entry    : 002745a0
// Prototype: undefined deleteForwards(TextEditor * param_1)
// Body     : 002745a0 - 00274669


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::TextEditor::deleteForwards(bool) */

void __cdecl juce::TextEditor::deleteForwards(TextEditor *param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  TextEditor *pTVar4;
  int *piVar5;
  undefined1 *local_18;
  
  iVar1 = *(int *)(param_1 + 0x270);
  if (((iVar1 == *(int *)(param_1 + 0x274)) &&
      (iVar2 = (**(code **)(*(long *)param_1 + 0x50))(param_1), iVar1 < iVar2)) &&
     (lVar3 = CONCAT44(*(int *)(param_1 + 0x270) + 1,*(int *)(param_1 + 0x270)),
     *(long *)(param_1 + 0x270) != lVar3)) {
    *(long *)(param_1 + 0x270) = lVar3;
                    /* try { // try from 002745e5 to 002745e9 has its CatchHandler @ 0027466a */
    Component::getAccessibilityHandler((Component *)(param_1 + 8));
  }
  if (param_1[0x1c8] == (TextEditor)0x0) {
    pTVar4 = param_1 + 8;
    do {
      if ((*(ushort *)(pTVar4 + 0xe8) & 0x8000) != 0) {
        return;
      }
      pTVar4 = *(TextEditor **)(pTVar4 + 0x30);
    } while (pTVar4 != (TextEditor *)0x0);
    moveCaret(param_1,*(uint *)(param_1 + 0x274));
    local_18 = &DAT_0061ac58;
                    /* try { // try from 00274634 to 0027463c has its CatchHandler @ 00274672 */
    (**(code **)(*(long *)param_1 + 0x38))(param_1,&local_18);
    piVar5 = (int *)(local_18 + -0x10);
    if (piVar5 != &emptyString) {
      LOCK();
      iVar1 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        operator_delete__(piVar5);
        return;
      }
    }
  }
  return;
}


