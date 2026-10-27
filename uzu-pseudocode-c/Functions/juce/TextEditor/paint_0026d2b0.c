// Function : paint
// Namespace: juce:TextEditor
// Entry    : 0026d2b0
// Prototype: undefined paint(TextEditor * this, undefined8 param_1)
// Body     : 0026d2b0 - 0026d33e


/* juce::TextEditor::paint(juce::Graphics&) */

void __thiscall juce::TextEditor::paint(TextEditor *this,undefined8 param_1)

{
  TextEditor *pTVar1;
  Desktop *this_00;
  LookAndFeel_V4 *pLVar2;
  
  pTVar1 = this + 8;
  do {
    if ((*(long *)(pTVar1 + 0x68) != 0) &&
       (pLVar2 = *(LookAndFeel_V4 **)(*(long *)(pTVar1 + 0x68) + 0x10),
       pLVar2 != (LookAndFeel_V4 *)0x0)) goto LAB_0026d320;
    pTVar1 = *(TextEditor **)(pTVar1 + 0x30);
  } while (pTVar1 != (TextEditor *)0x0);
  if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 0026d2f9 to 0026d302 has its CatchHandler @ 0026d352 */
    this_00 = operator_new(0x1d0);
                    /* try { // try from 0026d306 to 0026d30d has its CatchHandler @ 0026d33f */
    Desktop::Desktop(this_00);
    Desktop::instance = this_00;
  }
  pLVar2 = Desktop::getDefaultLookAndFeel(Desktop::instance);
LAB_0026d320:
                    /* WARNING: Could not recover jumptable at 0x0026d33d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(pLVar2 + 0x18) + 0x10))
            (pLVar2 + 0x18,param_1,*(undefined4 *)(this + 0x48),*(undefined4 *)(this + 0x4c),this);
  return;
}


