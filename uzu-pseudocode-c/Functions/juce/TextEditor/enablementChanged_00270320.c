// Function : enablementChanged
// Namespace: juce:TextEditor
// Entry    : 00270320
// Prototype: undefined enablementChanged(TextEditor * this)
// Body     : 00270320 - 00270340


/* non-virtual thunk to juce::TextEditor::enablementChanged() */

void __thiscall juce::TextEditor::enablementChanged(TextEditor *this)

{
  recreateCaret(this + -8);
  Component::internalRepaintUnchecked((long)this,0,*(ulong *)(this + 0x40),'\x01');
  return;
}


