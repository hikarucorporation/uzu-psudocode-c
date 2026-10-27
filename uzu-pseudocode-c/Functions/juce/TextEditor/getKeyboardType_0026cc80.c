// Function : getKeyboardType
// Namespace: juce:TextEditor
// Entry    : 0026cc80
// Prototype: undefined4 getKeyboardType(TextEditor * this)
// Body     : 0026cc80 - 0026cc94


/* juce::TextEditor::getKeyboardType() */

undefined4 __thiscall juce::TextEditor::getKeyboardType(TextEditor *this)

{
  undefined4 uVar1;
  
  uVar1 = 6;
  if (*(int *)(this + 0x2a4) == 0) {
    uVar1 = *(undefined4 *)(this + 0x2e8);
  }
  return uVar1;
}


