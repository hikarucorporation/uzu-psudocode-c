// Function : isDisplayingProtectedText
// Namespace: juce:TextEditor:EditorAccessibilityHandler:TextEditorTextInterface
// Entry    : 00270600
// Prototype: undefined8 isDisplayingProtectedText(TextEditorTextInterface * this)
// Body     : 00270600 - 0027060e


/* juce::TextEditor::EditorAccessibilityHandler::TextEditorTextInterface::isDisplayingProtectedText()
   const */

undefined8 __thiscall
juce::TextEditor::EditorAccessibilityHandler::TextEditorTextInterface::isDisplayingProtectedText
          (TextEditorTextInterface *this)

{
  return CONCAT71((int7)((ulong)*(long *)(this + 8) >> 8),*(int *)(*(long *)(this + 8) + 0x2a4) != 0
                 );
}


