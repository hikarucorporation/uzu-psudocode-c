// Function : setResizable
// Namespace: juce:AudioProcessorEditor
// Entry    : 001be290
// Prototype: undefined setResizable(undefined8 param_1_00, undefined8 param_2_00, undefined8 param_3, AudioProcessorEditor * this, AudioProcessorEditor param_5, char param_6)
// Body     : 001be290 - 001be2ca


/* juce::AudioProcessorEditor::setResizable(bool, bool) */

void __thiscall
juce::AudioProcessorEditor::setResizable
          (undefined8 param_1_00,undefined8 param_2_00,undefined8 param_3,AudioProcessorEditor *this
          ,AudioProcessorEditor param_5,char param_6)

{
  long *plVar1;
  
  this[0x108] = param_5;
  plVar1 = *(long **)(this + 0xf8);
  if ((plVar1 == (long *)0x0) == (bool)param_6) {
    if (param_6 != '\0') {
      attachResizableCornerComponent(param_1_00,param_2_00,param_3,this);
      return;
    }
    *(undefined8 *)(this + 0xf8) = 0;
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x001be2c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 8))(plVar1);
      return;
    }
  }
  return;
}


