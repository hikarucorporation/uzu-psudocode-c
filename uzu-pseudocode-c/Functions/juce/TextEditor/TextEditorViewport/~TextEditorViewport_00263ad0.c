// Function : ~TextEditorViewport
// Namespace: juce:TextEditor:TextEditorViewport
// Entry    : 00263ad0
// Prototype: undefined ~TextEditorViewport(TextEditorViewport * this)
// Body     : 00263ad0 - 00263aeb


/* non-virtual thunk to juce::TextEditor::TextEditorViewport::~TextEditorViewport() */

void __thiscall juce::TextEditor::TextEditorViewport::~TextEditorViewport(TextEditorViewport *this)

{
  Viewport::~Viewport((Viewport *)(this + -0xf8));
  operator_delete((Viewport *)(this + -0xf8));
  return;
}


