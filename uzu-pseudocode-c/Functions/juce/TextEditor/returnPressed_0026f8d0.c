// Function : returnPressed
// Namespace: juce:TextEditor
// Entry    : 0026f8d0
// Prototype: undefined returnPressed(TextEditor * this)
// Body     : 0026f8d0 - 0026f8dd


/* juce::TextEditor::returnPressed() */

void __thiscall juce::TextEditor::returnPressed(TextEditor *this)

{
  Component::postCommandMessage((Component *)(this + 8),0x10003002);
  return;
}


