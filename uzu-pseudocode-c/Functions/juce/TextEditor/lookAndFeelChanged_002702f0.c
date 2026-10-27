// Function : lookAndFeelChanged
// Namespace: juce:TextEditor
// Entry    : 002702f0
// Prototype: undefined lookAndFeelChanged(TextEditor * this)
// Body     : 002702f0 - 0027031d


/* non-virtual thunk to juce::TextEditor::lookAndFeelChanged() */

void __thiscall juce::TextEditor::lookAndFeelChanged(TextEditor *this)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x260);
  *(undefined8 *)(this + 0x260) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  recreateCaret(this + -8);
  return;
}


