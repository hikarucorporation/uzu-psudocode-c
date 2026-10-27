// Function : lookAndFeelChanged
// Namespace: juce:TextEditor
// Entry    : 0026f760
// Prototype: undefined lookAndFeelChanged(TextEditor * this)
// Body     : 0026f760 - 0026f789


/* juce::TextEditor::lookAndFeelChanged() */

void __thiscall juce::TextEditor::lookAndFeelChanged(TextEditor *this)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x268);
  *(undefined8 *)(this + 0x268) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  recreateCaret(this);
  return;
}


