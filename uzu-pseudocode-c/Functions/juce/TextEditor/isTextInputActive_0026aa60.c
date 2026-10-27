// Function : isTextInputActive
// Namespace: juce:TextEditor
// Entry    : 0026aa60
// Prototype: bool isTextInputActive(TextEditor * this)
// Body     : 0026aa60 - 0026aa9e


/* juce::TextEditor::isTextInputActive() const */

bool __thiscall juce::TextEditor::isTextInputActive(TextEditor *this)

{
  TextEditor *pTVar1;
  
  if (this[0x1c8] == (TextEditor)0x0) {
    pTVar1 = this + 8;
    while ((*(ushort *)(pTVar1 + 0xe8) & 0x8000) == 0) {
      pTVar1 = *(TextEditor **)(pTVar1 + 0x30);
      if (pTVar1 == (TextEditor *)0x0) {
        if (this[0x1d7] == (TextEditor)0x0) {
          return true;
        }
        return this[0x1c0] != (TextEditor)0x0;
      }
    }
  }
  return false;
}


