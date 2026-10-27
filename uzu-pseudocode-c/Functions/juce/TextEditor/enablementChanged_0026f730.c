// Function : enablementChanged
// Namespace: juce:TextEditor
// Entry    : 0026f730
// Prototype: undefined enablementChanged(TextEditor * this)
// Body     : 0026f730 - 0026f750


/* juce::TextEditor::enablementChanged() */

void __thiscall juce::TextEditor::enablementChanged(TextEditor *this)

{
  recreateCaret(this);
  Component::internalRepaintUnchecked((long)(this + 8),0,*(ulong *)(this + 0x48),'\x01');
  return;
}


