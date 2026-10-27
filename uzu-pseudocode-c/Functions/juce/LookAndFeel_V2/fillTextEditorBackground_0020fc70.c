// Function : fillTextEditorBackground
// Namespace: juce:LookAndFeel_V2
// Entry    : 0020fc70
// Prototype: undefined fillTextEditorBackground(undefined8 param_1_00, Graphics * param_2, undefined8 param_3, undefined8 param_4_00, long param_5)
// Body     : 0020fc70 - 0020fc8e


/* juce::LookAndFeel_V2::fillTextEditorBackground(juce::Graphics&, int, int, juce::TextEditor&) */

void __thiscall
juce::LookAndFeel_V2::fillTextEditorBackground
          (undefined8 param_1_00,Graphics *param_2,undefined8 param_3,undefined8 param_4_00,
          long param_5)

{
  ulong uVar1;
  
  uVar1 = Component::findColour((Component *)(param_5 + 8),0x1000200,'\0');
  Graphics::fillAll(param_2,(uint)uVar1);
  return;
}


