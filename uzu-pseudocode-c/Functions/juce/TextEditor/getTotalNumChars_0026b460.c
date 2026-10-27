// Function : getTotalNumChars
// Namespace: juce:TextEditor
// Entry    : 0026b460
// Prototype: undefined4 getTotalNumChars(TextEditor * this)
// Body     : 0026b460 - 0026b477


/* juce::TextEditor::getTotalNumChars() const */

undefined4 __thiscall juce::TextEditor::getTotalNumChars(TextEditor *this)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(this + 0x330) + 0x70);
  if (*(long *)(*(long *)(this + 0x330) + 0x68) == lVar1) {
    return 0;
  }
  return *(undefined4 *)(lVar1 + -8);
}


