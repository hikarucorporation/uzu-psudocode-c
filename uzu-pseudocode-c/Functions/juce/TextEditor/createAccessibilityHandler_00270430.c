// Function : createAccessibilityHandler
// Namespace: juce:TextEditor
// Entry    : 00270430
// Prototype: TextEditor * createAccessibilityHandler(TextEditor * this, long * param_1)
// Body     : 00270430 - 00270545


/* non-virtual thunk to juce::TextEditor::createAccessibilityHandler() */

TextEditor * __thiscall juce::TextEditor::createAccessibilityHandler(TextEditor *this,long *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 *local_40;
  undefined8 *local_38;
  undefined8 local_30;
  
  puVar1 = operator_new(0x80);
  uVar4 = 7;
  if ((char)param_1[0x38] == '\0') {
    plVar2 = param_1;
    do {
      if ((*(ushort *)(plVar2 + 0x1d) & 0x8000) != 0) goto LAB_0027048d;
      plVar2 = (long *)plVar2[6];
    } while (plVar2 != (long *)0x0);
    uVar4 = 8;
  }
LAB_0027048d:
  local_40 = &uStack_50;
  uStack_50 = 0;
  local_48 = 0;
  local_30 = 0;
  local_38 = local_40;
                    /* try { // try from 002704b5 to 002704be has its CatchHandler @ 00270546 */
  puVar3 = operator_new(0x10);
  *puVar3 = &PTR__AccessibilityTextInterface_00710dd0;
  puVar3[1] = param_1 + -1;
  *puVar1 = &PTR__AccessibilityHandler_00706fc8;
  puVar1[1] = param_1;
  puVar1[2] = *(undefined8 *)(*param_1 + -8);
  *(undefined4 *)(puVar1 + 3) = uVar4;
  puVar1[6] = 0;
  puVar1[7] = puVar1 + 5;
  puVar1[8] = puVar1 + 5;
  *(undefined4 *)(puVar1 + 5) = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = puVar3;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  *puVar1 = &PTR__AccessibilityHandler_00710d78;
  puVar1[0xf] = param_1 + -1;
  *(undefined8 **)this = puVar1;
  return this;
}


