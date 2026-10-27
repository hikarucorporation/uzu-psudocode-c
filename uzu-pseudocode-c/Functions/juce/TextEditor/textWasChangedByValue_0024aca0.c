// Function : textWasChangedByValue
// Namespace: juce:TextEditor
// Entry    : 0024aca0
// Prototype: undefined textWasChangedByValue(undefined8 param_1, float param_2, TextEditor * this, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 * * * * * * * param_8)
// Body     : 0024aca0 - 0024ad2f


/* juce::TextEditor::textWasChangedByValue() */

void __thiscall
juce::TextEditor::textWasChangedByValue
          (undefined8 param_1,float param_2,TextEditor *this,undefined8 param_4,undefined8 param_5,
          undefined8 param_6,undefined8 param_7,undefined8 *******param_8)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  long local_30;
  long local_28;
  undefined1 local_20 [8];
  
  if (1 < *(int *)(*(long *)(this + 0x2b8) + 8)) {
    (**(code **)(**(long **)(this + 0x2b8) + 0x10))(&local_28);
                    /* try { // try from 0024acd7 to 0024ace1 has its CatchHandler @ 0024ad64 */
    uVar3 = (**(code **)(local_28 + 0x28))(&local_30,local_20);
                    /* try { // try from 0024ace2 to 0024acf3 has its CatchHandler @ 0024ad38 */
    setText(uVar3,param_2,this,(String *)&local_30,1,param_6,param_7,param_8);
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
                    /* try { // try from 0024ad20 to 0024ad25 has its CatchHandler @ 0024ad30 */
    (**(code **)(local_28 + 0x58))(local_20);
  }
  return;
}


