// Function : ~unique_ptr
// Namespace: std:unique_ptr_juce__AudioProcessorEditor_std__default_delete_juce__AudioProcessorEditor__
// Entry    : 001b7400
// Prototype: undefined ~unique_ptr(unique_ptr<juce::AudioProcessorEditor,std::default_delete<juce::AudioProcessorEditor>> * this)
// Body     : 001b7400 - 001b741a


/* std::unique_ptr<juce::AudioProcessorEditor, std::default_delete<juce::AudioProcessorEditor>
   >::~unique_ptr() */

void __thiscall
std::unique_ptr<juce::AudioProcessorEditor,std::default_delete<juce::AudioProcessorEditor>>::
~unique_ptr(unique_ptr<juce::AudioProcessorEditor,std::default_delete<juce::AudioProcessorEditor>>
            *this)

{
  if (*(long **)this != (long *)0x0) {
    (**(code **)(**(long **)this + 8))();
  }
  *(undefined8 *)this = 0;
  return;
}


