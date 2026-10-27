// Function : ~TextEditor
// Namespace: juce:TextEditor
// Entry    : 0026aa40
// Prototype: undefined ~TextEditor(TextEditor * this)
// Body     : 0026aa40 - 0026aa51


/* juce::TextEditor::~TextEditor() */

void __thiscall juce::TextEditor::~TextEditor(TextEditor *this)

{
  ~TextEditor(this);
  operator_delete(this);
  return;
}


