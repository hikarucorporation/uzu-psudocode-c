// Function : ~TextEditorViewport
// Namespace: juce:TextEditor:TextEditorViewport
// Entry    : 002631f0
// Prototype: undefined ~TextEditorViewport(TextEditorViewport * this)
// Body     : 002631f0 - 00263201


/* juce::TextEditor::TextEditorViewport::~TextEditorViewport() */

void __thiscall juce::TextEditor::TextEditorViewport::~TextEditorViewport(TextEditorViewport *this)

{
  Viewport::~Viewport((Viewport *)this);
  operator_delete(this);
  return;
}


