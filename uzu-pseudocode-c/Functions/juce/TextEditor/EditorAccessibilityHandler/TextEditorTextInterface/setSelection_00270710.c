// Function : setSelection
// Namespace: juce:TextEditor:EditorAccessibilityHandler:TextEditorTextInterface
// Entry    : 00270710
// Prototype: undefined8 setSelection(TextEditorTextInterface * this, undefined8 param_1)
// Body     : 00270710 - 00270723


/* juce::TextEditor::EditorAccessibilityHandler::TextEditorTextInterface::setSelection(juce::Range<int>)
    */

undefined8 __thiscall
juce::TextEditor::EditorAccessibilityHandler::TextEditorTextInterface::setSelection
          (TextEditorTextInterface *this,undefined8 param_1)

{
  undefined8 local_8;
  
  local_8 = param_1;
  (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),&local_8);
  return local_8;
}


