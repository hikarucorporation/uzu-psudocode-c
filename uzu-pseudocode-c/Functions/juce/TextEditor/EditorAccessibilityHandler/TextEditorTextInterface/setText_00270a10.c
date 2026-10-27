// Function : setText
// Namespace: juce:TextEditor:EditorAccessibilityHandler:TextEditorTextInterface
// Entry    : 00270a10
// Prototype: undefined setText(undefined8 param_1_00, float param_2, TextEditorTextInterface * this, String * param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 * * * * * * * param_8)
// Body     : 00270a10 - 00270a1d


/* juce::TextEditor::EditorAccessibilityHandler::TextEditorTextInterface::setText(juce::String
   const&) */

void __thiscall
juce::TextEditor::EditorAccessibilityHandler::TextEditorTextInterface::setText
          (undefined8 param_1_00,float param_2,TextEditorTextInterface *this,String *param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 *******param_8)

{
  TextEditor::setText(param_1_00,param_2,*(TextEditor **)(this + 8),param_4,1,param_6,param_7,
                      param_8);
  return;
}


