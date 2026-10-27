// Function : isReadOnly
// Namespace: juce:TextEditor:EditorAccessibilityHandler:TextEditorTextInterface
// Entry    : 00270610
// Prototype: ushort isReadOnly(TextEditorTextInterface * this)
// Body     : 00270610 - 00270659


/* juce::TextEditor::EditorAccessibilityHandler::TextEditorTextInterface::isReadOnly() const */

ushort __thiscall
juce::TextEditor::EditorAccessibilityHandler::TextEditorTextInterface::isReadOnly
          (TextEditorTextInterface *this)

{
  uint3 *puVar1;
  undefined8 in_RAX;
  long lVar2;
  
  if (*(char *)(*(long *)(this + 8) + 0x1c8) != '\0') {
    return (ushort)CONCAT71((int7)((ulong)in_RAX >> 8),1);
  }
  lVar2 = *(long *)(this + 8) + 8;
  do {
    puVar1 = (uint3 *)(lVar2 + 0xe8);
    if ((*puVar1 & 0x8000) != 0) break;
    lVar2 = *(long *)(lVar2 + 0x30);
  } while (lVar2 != 0);
  return *(ushort *)puVar1 >> 0xf;
}


