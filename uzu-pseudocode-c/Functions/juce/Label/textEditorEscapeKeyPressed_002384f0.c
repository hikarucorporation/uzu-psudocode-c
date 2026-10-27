// Function : textEditorEscapeKeyPressed
// Namespace: juce:Label
// Entry    : 002384f0
// Prototype: undefined textEditorEscapeKeyPressed(undefined8 param_1_00, float param_2, Label * param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 * * * * * * * param_8)
// Body     : 002384f0 - 00238586


/* WARNING: Unknown calling convention: __cdecl */
/* juce::Label::textEditorEscapeKeyPressed(juce::TextEditor&) */

void __cdecl
juce::Label::textEditorEscapeKeyPressed
          (undefined8 param_1_00,float param_2,Label *param_3,undefined8 param_4,undefined8 param_5,
          undefined8 param_6,undefined8 param_7,undefined8 *******param_8)

{
  int iVar1;
  TextEditor *this;
  int *piVar2;
  undefined8 uVar3;
  long local_30;
  long local_28;
  undefined1 local_20 [8];
  
  this = *(TextEditor **)(param_3 + 0x1c0);
  if (this != (TextEditor *)0x0) {
    (**(code **)(**(long **)(param_3 + 0x178) + 0x10))(&local_28);
                    /* try { // try from 00238524 to 0023852e has its CatchHandler @ 002385c1 */
    (**(code **)(local_28 + 0x28))(&local_30,local_20);
                    /* try { // try from 00238534 to 00238539 has its CatchHandler @ 002385b9 */
    uVar3 = (**(code **)(local_28 + 0x58))(local_20);
                    /* try { // try from 0023853a to 00238548 has its CatchHandler @ 00238587 */
    TextEditor::setText(uVar3,param_2,this,(String *)&local_30,0,param_6,param_7,param_8);
    piVar2 = (int *)(local_30 + -0x10);
    if (piVar2 != &emptyString) {
      LOCK();
      iVar1 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        operator_delete__(piVar2);
      }
    }
    hideEditor(param_3,'\x01');
  }
  return;
}


