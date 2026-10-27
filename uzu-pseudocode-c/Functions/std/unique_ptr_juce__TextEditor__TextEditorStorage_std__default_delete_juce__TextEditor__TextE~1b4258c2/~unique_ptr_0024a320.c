// Function : ~unique_ptr
// Namespace: std:unique_ptr_juce__TextEditor__TextEditorStorage_std__default_delete_juce__TextEditor__TextE~1b4258c2
// Entry    : 0024a320
// Prototype: undefined ~unique_ptr(unique_ptr<juce::TextEditor::TextEditorStorage,std::default_delete<juce::TextEditor::TextEditorStorage>> * this)
// Body     : 0024a320 - 0024a34d


/* std::unique_ptr<juce::TextEditor::TextEditorStorage,
   std::default_delete<juce::TextEditor::TextEditorStorage> >::~unique_ptr() */

void __thiscall
std::
unique_ptr<juce::TextEditor::TextEditorStorage,std::default_delete<juce::TextEditor::TextEditorStorage>>
::~unique_ptr(unique_ptr<juce::TextEditor::TextEditorStorage,std::default_delete<juce::TextEditor::TextEditorStorage>>
              *this)

{
  TextEditorStorage *this_00;
  
  this_00 = *(TextEditorStorage **)this;
  if (this_00 != (TextEditorStorage *)0x0) {
    juce::TextEditor::TextEditorStorage::~TextEditorStorage(this_00);
    operator_delete(this_00);
  }
  *(undefined8 *)this = 0;
  return;
}


