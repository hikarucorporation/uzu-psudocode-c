// Function : textEditorEscapeKeyPressed
// Namespace: juce:Label
// Entry    : 002388d0
// Prototype: undefined textEditorEscapeKeyPressed(undefined8 param_1, float param_2, Label * this, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 * * * * * * * param_8)
// Body     : 002388d0 - 0023896d


/* non-virtual thunk to juce::Label::textEditorEscapeKeyPressed(juce::TextEditor&) */

void __thiscall
juce::Label::textEditorEscapeKeyPressed
          (undefined8 param_1,float param_2,Label *this,undefined8 param_4,undefined8 param_5,
          undefined8 param_6,undefined8 param_7,undefined8 *******param_8)

{
  int iVar1;
  TextEditor *this_00;
  int *piVar2;
  undefined8 uVar3;
  long local_30;
  long local_28;
  undefined1 local_20 [8];
  
  this_00 = *(TextEditor **)(this + 0xc0);
  if (this_00 != (TextEditor *)0x0) {
    (**(code **)(**(long **)(this + 0x78) + 0x10))(&local_28);
                    /* try { // try from 0023890b to 00238915 has its CatchHandler @ 002389a8 */
    (**(code **)(local_28 + 0x28))(&local_30,local_20);
                    /* try { // try from 0023891b to 00238920 has its CatchHandler @ 002389a0 */
    uVar3 = (**(code **)(local_28 + 0x58))(local_20);
                    /* try { // try from 00238921 to 0023892f has its CatchHandler @ 0023896e */
    TextEditor::setText(uVar3,param_2,this_00,(String *)&local_30,0,param_6,param_7,param_8);
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
    hideEditor(this + -0x100,'\x01');
  }
  return;
}


