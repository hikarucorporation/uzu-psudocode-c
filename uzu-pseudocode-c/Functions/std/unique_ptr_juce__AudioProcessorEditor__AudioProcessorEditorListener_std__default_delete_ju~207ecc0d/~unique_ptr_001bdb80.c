// Function : ~unique_ptr
// Namespace: std:unique_ptr_juce__AudioProcessorEditor__AudioProcessorEditorListener_std__default_delete_ju~207ecc0d
// Entry    : 001bdb80
// Prototype: undefined ~unique_ptr(unique_ptr<juce::AudioProcessorEditor::AudioProcessorEditorListener,std::default_delete<juce::AudioProcessorEditor::AudioProcessorEditorListener>> * this)
// Body     : 001bdb80 - 001bdb9a


/* std::unique_ptr<juce::AudioProcessorEditor::AudioProcessorEditorListener,
   std::default_delete<juce::AudioProcessorEditor::AudioProcessorEditorListener> >::~unique_ptr() */

void __thiscall
std::
unique_ptr<juce::AudioProcessorEditor::AudioProcessorEditorListener,std::default_delete<juce::AudioProcessorEditor::AudioProcessorEditorListener>>
::~unique_ptr(unique_ptr<juce::AudioProcessorEditor::AudioProcessorEditorListener,std::default_delete<juce::AudioProcessorEditor::AudioProcessorEditorListener>>
              *this)

{
  if (*(long **)this != (long *)0x0) {
    (**(code **)(**(long **)this + 8))();
  }
  *(undefined8 *)this = 0;
  return;
}


