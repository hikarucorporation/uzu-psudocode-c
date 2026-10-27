// Function : ~EditorAccessibilityHandler
// Namespace: juce:TextEditor:EditorAccessibilityHandler
// Entry    : 002705a0
// Prototype: undefined ~EditorAccessibilityHandler(EditorAccessibilityHandler * this)
// Body     : 002705a0 - 002705b1


/* juce::TextEditor::EditorAccessibilityHandler::~EditorAccessibilityHandler() */

void __thiscall
juce::TextEditor::EditorAccessibilityHandler::~EditorAccessibilityHandler
          (EditorAccessibilityHandler *this)

{
  AccessibilityHandler::~AccessibilityHandler((AccessibilityHandler *)this);
  operator_delete(this);
  return;
}


