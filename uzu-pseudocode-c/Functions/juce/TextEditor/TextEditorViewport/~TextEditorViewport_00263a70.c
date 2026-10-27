// Function : ~TextEditorViewport
// Namespace: juce:TextEditor:TextEditorViewport
// Entry    : 00263a70
// Prototype: undefined ~TextEditorViewport(TextEditorViewport * this)
// Body     : 00263a70 - 00263a8b


/* non-virtual thunk to juce::TextEditor::TextEditorViewport::~TextEditorViewport() */

void __thiscall juce::TextEditor::TextEditorViewport::~TextEditorViewport(TextEditorViewport *this)

{
  Viewport::~Viewport((Viewport *)(this + -0xf0));
  operator_delete((Viewport *)(this + -0xf0));
  return;
}


