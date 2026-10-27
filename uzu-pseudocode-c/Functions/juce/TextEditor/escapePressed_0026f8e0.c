// Function : escapePressed
// Namespace: juce:TextEditor
// Entry    : 0026f8e0
// Prototype: undefined escapePressed(TextEditor * this)
// Body     : 0026f8e0 - 0026f8ed


/* juce::TextEditor::escapePressed() */

void __thiscall juce::TextEditor::escapePressed(TextEditor *this)

{
  Component::postCommandMessage((Component *)(this + 8),0x10003003);
  return;
}


