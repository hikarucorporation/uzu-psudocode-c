// Function : valueChanged
// Namespace: juce:TextEditor:TextHolderComponent
// Entry    : 0024ab70
// Prototype: undefined valueChanged(undefined8 param_1_00, float param_2, long param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 * * * * * * * param_8)
// Body     : 0024ab70 - 0024ab7b


/* WARNING: Unknown calling convention: __cdecl */
/* juce::TextEditor::TextHolderComponent::valueChanged(juce::Value&) */

void __cdecl
juce::TextEditor::TextHolderComponent::valueChanged
          (undefined8 param_1_00,float param_2,long param_3,undefined8 param_4,undefined8 param_5,
          undefined8 param_6,undefined8 param_7,undefined8 *******param_8)

{
  textWasChangedByValue
            (param_1_00,param_2,*(TextEditor **)(param_3 + 0x120),param_4,param_5,param_6,param_7,
             param_8);
  return;
}


